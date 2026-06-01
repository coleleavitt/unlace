__int64 __fastcall sub_3CA660(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r13
  int *v5; // rax
  int *v6; // r15
  int v7; // r14d
  unsigned __int64 v8; // rdx

  v3 = a3 & 0xFFFFFFFFFFFFFE00LL;
  if ( (a3 & 0xFFFFFFFFFFFFFE00LL) != 0 && a2 != -1 )
  {
    v4 = sub_3B9AA0((__int64)a1, a2, 0);
    if ( (v4 & v3) != 0 )
    {
      v5 = (int *)sub_3C9940((__int64)a1, a2);
      v6 = v5;
      if ( !v5 )
      {
        if ( !under_debugger )
          interr(57);
        goto LABEL_22;
      }
      sub_3B7100(a2, (unsigned int)*v5, ~(_DWORD)v3 & (unsigned int)*v5);
      v7 = *v6 & ~(_DWORD)v3;
      *v6 = v7;
      if ( (v7 & 0x1FF) == 0x100 )
      {
        if ( !a1[145] || !rangeset_t_find_range(a1 + 144, a2) )
          goto LABEL_13;
        v7 &= ~0x100u;
      }
      if ( !v7 )
      {
LABEL_7:
        sub_3B95C0((__int64)a1);
LABEL_8:
        v8 = (v4 & ~v3) >> 32;
        if ( v8 != HIDWORD(v4) )
          sub_3CA2E0(a1, a2, v8);
        if ( (sub_3B9AA0((__int64)a1, a2, 0) & v3) == 0 )
        {
          ++a1[152];
          return 1;
        }
        if ( !under_debugger )
          interr(59);
LABEL_22:
        BUG();
      }
LABEL_13:
      if ( (v7 & 0xFFFFF) != 0x200 )
        goto LABEL_8;
      goto LABEL_7;
    }
  }
  return 0;
}

