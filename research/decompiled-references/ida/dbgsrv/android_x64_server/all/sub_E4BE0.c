/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E4BE0
// Address: 0x00000000000E4BE0

//----- (00000000000E4BE0) ----------------------------------------------------
__int64 __fastcall sub_E4BE0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  char v6; // al
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  _BYTE *v9; // rax
  size_t v10; // rsi
  _BYTE *v11; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a2);
    v5 = *(_QWORD *)(a1 + 16);
    v6 = *(_BYTE *)(v5 + 9);
    if ( v6 )
    {
      if ( v6 != 2 || !(**(unsigned __int8 (__fastcall ***)(__int64, __int64))v5)(v5, a2) )
      {
        v7 = *(_QWORD *)(a2 + 8);
        v8 = *(_QWORD *)(a2 + 16);
        if ( v7 + 1 >= v8 )
        {
          v10 = 2 * v8;
          if ( v10 < v7 + 1 )
            v10 = v7 + 1;
          *(_QWORD *)(a2 + 16) = v10;
          v9 = realloc(*(void **)a2, v10);
          *(_QWORD *)a2 = v9;
          v7 = *(_QWORD *)(a2 + 8);
        }
        else
        {
          v9 = *(_BYTE **)a2;
        }
        v9[v7] = 32;
        ++*(_QWORD *)(a2 + 8);
      }
    }
  }
  v11 = *(_BYTE **)(a1 + 24);
  result = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 24LL))(v11, a2);
  if ( v11[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 32LL))(v11, a2);
  return result;
}
