__int64 __fastcall sub_3CAE70(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _DWORD *v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rbp
  int v7; // r14d

  if ( a2 == -1 )
    return 0;
  v3 = a3 & 0xFFFFFFFFFFFFFE00LL;
  if ( (a3 & 0xFFFFFFFFFFFFFE00LL) != sub_3B9AA0((__int64)a1, a2, 0) )
  {
    v4 = (_DWORD *)sub_3C9940((__int64)a1, a2);
    v5 = v4;
    if ( v4 )
    {
      v6 = *v4 & 0x1FF | v3;
      v7 = v6;
      sub_3B7100(a2, (unsigned int)*v4, (unsigned int)v6);
      *v5 = v6;
      if ( (v6 & 0x1FF) == 0x100 )
      {
        if ( !a1[145] || !rangeset_t_find_range(a1 + 144, a2) )
          goto LABEL_11;
        v7 = v6 & 0xFFFFFEFF;
      }
      if ( !v7 )
      {
LABEL_6:
        sub_3B95C0((__int64)a1);
LABEL_7:
        sub_3CA2E0(a1, a2, HIDWORD(v6));
        ++a1[152];
        return 1;
      }
LABEL_11:
      if ( (v7 & 0xFFFFF) != 0x200 )
        goto LABEL_7;
      goto LABEL_6;
    }
  }
  return 0;
}

