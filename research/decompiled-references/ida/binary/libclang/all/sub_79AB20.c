unsigned __int64 __fastcall sub_79AB20(unsigned __int64 a1)
{
  int v2; // edx
  char v3; // al
  unsigned __int64 v4; // rbp
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax

  while ( 1 )
  {
    while ( 1 )
    {
      v2 = *(_BYTE *)(a1 + 8) & 0x7F;
      v3 = *(_BYTE *)(a1 + 8) & 0x7F;
      if ( v2 != 33 )
        break;
      v4 = a1 - 72;
      if ( (unsigned int)sub_780B80(a1 - 72) != 42 )
        return v4;
      v6 = *(_QWORD *)(sub_79A2E0(a1) + 16);
      v7 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v6 & 4) != 0 )
        v7 = (_QWORD *)*v7;
      if ( !v7 )
        BUG();
      v8 = v7[8];
      if ( !v8 || (*(_BYTE *)(v8 + 10) & 0x20) == 0 )
        return v4;
LABEL_13:
      v9 = *(_QWORD *)(sub_79A2E0((__int64)v7) + 16);
      a1 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v9 & 4) != 0 )
        a1 = *(_QWORD *)a1;
    }
    if ( (unsigned int)(v2 - 32) <= 5 )
      return a1 - 72;
    if ( v3 == 16 )
      return a1 - 48;
    if ( v3 == 8 || v3 == 7 )
    {
      v7 = (_QWORD *)a1;
      goto LABEL_13;
    }
    if ( v3 != 3 )
      return 0;
    a1 = sub_79A330(a1);
  }
}

