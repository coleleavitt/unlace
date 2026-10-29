/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E72B0
// Address: 0x00000000000E72B0

//----- (00000000000E72B0) ----------------------------------------------------
__int64 __fastcall sub_E72B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  char v9; // al
  char v10; // al
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  _BYTE *v13; // rax
  size_t v14; // rsi

  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v5 + 8) != 10 )
    goto LABEL_9;
  v6 = *(_QWORD *)(v5 + 16);
  if ( *(_BYTE *)(v6 + 8) != 7 )
    goto LABEL_9;
  v7 = *(_QWORD *)(v6 + 16);
  if ( *(_QWORD *)(v6 + 24) - v7 != 11 )
    goto LABEL_9;
  if ( v7 != *(_QWORD *)(v6 + 24) )
  {
    v8 = 0;
    while ( 1 )
    {
      result = *(unsigned __int8 *)(v7 + v8);
      if ( (_BYTE)result != aObjcObject[v8] )
        break;
      if ( ++v8 == 11 )
        return result;
    }
LABEL_9:
    v9 = *(_BYTE *)(v5 + 10);
    if ( v9 )
    {
      if ( v9 == 2 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, a2) )
          goto LABEL_16;
        v5 = *(_QWORD *)(a1 + 16);
      }
      v10 = *(_BYTE *)(v5 + 11);
      if ( v10 && (v10 != 2 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, a2)) )
        return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16), a2);
    }
LABEL_16:
    v11 = *(_QWORD *)(a2 + 8);
    v12 = *(_QWORD *)(a2 + 16);
    if ( v11 + 1 >= v12 )
    {
      v14 = 2 * v12;
      if ( v14 < v11 + 1 )
        v14 = v11 + 1;
      *(_QWORD *)(a2 + 16) = v14;
      v13 = realloc(*(void **)a2, v14);
      *(_QWORD *)a2 = v13;
      v11 = *(_QWORD *)(a2 + 8);
    }
    else
    {
      v13 = *(_BYTE **)a2;
    }
    v13[v11] = 41;
    ++*(_QWORD *)(a2 + 8);
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16), a2);
  }
  return result;
}
