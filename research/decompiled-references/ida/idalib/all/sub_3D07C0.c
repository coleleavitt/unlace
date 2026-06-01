__int64 __fastcall sub_3D07C0(_QWORD *a1, void *a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rax
  _DWORD *v9; // r13
  unsigned __int64 v10; // rbp
  int v11; // r14d

  if ( a2 == (void *)-1LL )
    return 0;
  v3 = a3 & 0xFFFFFFFFFFFFFE00LL;
  if ( (a3 & 0xFFFFFFFFFFFFFE00LL) != sub_3BE900(a1, (unsigned __int64)a2, 0) )
  {
    v8 = (_DWORD *)sub_3CF160((__int64)a1, (unsigned __int64)a2, v4, v5, v6, v7);
    v9 = v8;
    if ( v8 )
    {
      v10 = *v8 & 0x1FF | v3;
      v11 = v10;
      sub_3BB8A0((__int64)a2, (unsigned int)*v8, (unsigned int)v10);
      *v9 = v10;
      if ( (v10 & 0x1FF) == 0x100 )
      {
        if ( !a1[146] || !rangeset_t_find_range(a1 + 145, a2) )
          goto LABEL_11;
        v11 = v10 & 0xFFFFFEFF;
      }
      if ( !v11 )
      {
LABEL_6:
        sub_3BE3F0(a1);
LABEL_7:
        sub_3CFBE0(a1, a2, HIDWORD(v10));
        ++a1[155];
        return 1;
      }
LABEL_11:
      if ( (v11 & 0xFFFFF) != 0x200 )
        goto LABEL_7;
      goto LABEL_6;
    }
  }
  return 0;
}
