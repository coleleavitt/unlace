unsigned __int16 __fastcall sub_1AF6950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int16 result; // ax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int16 v9; // [rsp-18h] [rbp-18h]

  result = *(_WORD *)a2 & 0x1FF;
  if ( result > 0x75u )
  {
    if ( result > 0x77u )
      goto LABEL_3;
    return sub_1AF6A00();
  }
  if ( result == 4 )
    return sub_1AF6A00();
LABEL_3:
  if ( result == 71 )
  {
    v7 = *(_QWORD *)(a2 + 16);
    if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 40 <= 6 )
    {
      sub_B8CC60(v7, *(_QWORD *)(a1 + 64), a3, a4, a5, a6);
      v8 = *(unsigned int *)(a1 + 8);
      if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        sub_2237220(a1, a1 + 16, v8 + 1, 8);
        v8 = *(unsigned int *)(a1 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v8) = v7;
      ++*(_DWORD *)(a1 + 8);
    }
    return v9;
  }
  else if ( result > 0x47u )
  {
    if ( result <= 0x81u || result > 0x100u )
      return sub_1AF6A00();
  }
  else if ( !result || result > 2u )
  {
    return sub_1AF6A00();
  }
  return result;
}
