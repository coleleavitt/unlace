__int64 __fastcall sub_773990(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rcx
  char v6; // r9

  result = a1;
  v4 = 0x8E38E38E38E38E39LL * (a2 - a1);
  while ( v4 > 0 )
  {
    v5 = result + 9 * (v4 >> 1);
    v6 = *(_BYTE *)(v5 + 8);
    if ( v6 == *(_BYTE *)(a3 + 8) )
    {
      if ( *(_QWORD *)v5 >= *(_QWORD *)a3 )
        goto LABEL_8;
    }
    else if ( !v6 )
    {
LABEL_8:
      v4 >>= 1;
      continue;
    }
    result = v5 + 9;
    v4 = v4 - 1 - (v4 >> 1);
  }
  return result;
}
