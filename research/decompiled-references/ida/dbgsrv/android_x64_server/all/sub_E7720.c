/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E7720
// Address: 0x00000000000E7720

//----- (00000000000E7720) ----------------------------------------------------
__int64 __fastcall sub_E7720(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rdi
  char v5; // al
  char v6; // al
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  _BYTE *v9; // rax
  size_t v10; // rsi

  v4 = *(_BYTE **)(a1 + 16);
  v5 = v4[10];
  if ( v5 )
  {
    if ( v5 != 2 )
    {
LABEL_5:
      v6 = v4[11];
      if ( v6 && (v6 != 2 || !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v4 + 16LL))(v4, a2)) )
        return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16), a2);
      goto LABEL_8;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v4 + 8LL))(v4, a2) )
    {
      v4 = *(_BYTE **)(a1 + 16);
      goto LABEL_5;
    }
  }
LABEL_8:
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
  v9[v7] = 41;
  ++*(_QWORD *)(a2 + 8);
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16), a2);
}
