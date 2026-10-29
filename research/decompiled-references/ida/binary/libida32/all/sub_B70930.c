unsigned __int64 __fastcall sub_B70930(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 i; // rbx
  __int64 v7; // rbx
  __int64 *v8; // rax

  for ( i = a1; (*(_BYTE *)(i + 8) & 0x7D) == 4; i = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(sub_B68470(i) + 16);
      if ( (v7 & 4) != 0 )
        break;
      i = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(i + 8) & 0x7D) != 4 )
        goto LABEL_4;
    }
  }
LABEL_4:
  v8 = (__int64 *)sub_B6D830(i, a2, a3, a4, a5, a6);
  return sub_B705C0(v8, a2, i);
}

