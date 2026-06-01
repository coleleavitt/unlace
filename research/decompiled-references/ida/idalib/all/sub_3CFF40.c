__int64 __fastcall sub_3CFF40(_QWORD *a1, void *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // r13
  int *v9; // rax
  int *v10; // r15
  int v11; // r14d
  unsigned __int64 v12; // rdx

  v3 = a3 & 0xFFFFFFFFFFFFFE00LL;
  if ( (a3 & 0xFFFFFFFFFFFFFE00LL) != 0 && a2 != (void *)-1LL )
  {
    v8 = sub_3BE900(a1, (unsigned __int64)a2, 0);
    if ( (v8 & v3) != 0 )
    {
      v9 = (int *)sub_3CF160((__int64)a1, (unsigned __int64)a2, v4, v5, v6, v7);
      v10 = v9;
      if ( !v9 )
      {
        if ( !under_debugger )
          interr(57);
        goto LABEL_22;
      }
      sub_3BB8A0((__int64)a2, (unsigned int)*v9, ~(_DWORD)v3 & (unsigned int)*v9);
      v11 = *v10 & ~(_DWORD)v3;
      *v10 = v11;
      if ( (v11 & 0x1FF) == 0x100 )
      {
        if ( !a1[146] || !rangeset_t_find_range(a1 + 145, a2) )
          goto LABEL_13;
        v11 &= ~0x100u;
      }
      if ( !v11 )
      {
LABEL_7:
        sub_3BE3F0(a1);
LABEL_8:
        v12 = (v8 & ~v3) >> 32;
        if ( v12 != HIDWORD(v8) )
          sub_3CFBE0(a1, a2, v12);
        if ( (sub_3BE900(a1, (unsigned __int64)a2, 0) & v3) == 0 )
        {
          ++a1[155];
          return 1;
        }
        if ( !under_debugger )
          interr(59);
LABEL_22:
        BUG();
      }
LABEL_13:
      if ( (v11 & 0xFFFFF) != 0x200 )
        goto LABEL_8;
      goto LABEL_7;
    }
  }
  return 0;
}
