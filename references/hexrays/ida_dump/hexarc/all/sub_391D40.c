__int64 __fastcall sub_391D40(__int64 a1, __int64 a2)
{
  int v3; // edx
  _BYTE *v4; // rax
  const char *v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned int v10; // r12d
  __int64 v11; // r8
  const char *v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned __int64 v17; // r15
  const char *v18; // r9
  int v19; // eax
  __int64 v20; // [rsp-10h] [rbp-B0h]
  __int64 v21; // [rsp-8h] [rbp-A8h]
  _BYTE v23[9]; // [rsp+1Fh] [rbp-81h] BYREF
  __int64 v24; // [rsp+28h] [rbp-78h] BYREF
  const void *v25; // [rsp+30h] [rbp-70h] BYREF
  __int128 v26; // [rsp+38h] [rbp-68h]
  const char *v27; // [rsp+50h] [rbp-50h] BYREF
  __int128 v28; // [rsp+58h] [rbp-48h]
  unsigned __int64 v29; // [rsp+68h] [rbp-38h]

  v3 = *(_DWORD *)(a2 + 24);
  v29 = __readfsqword(0x28u);
  v23[8] = 0;
  v25 = nullptr;
  *(_QWORD *)v23 = HIBYTE(v3) & 1;
  v4 = v23;
  v26 = 0;
  if ( (v3 & 0x100) == 0 )
    v4 = nullptr;
  v5 = s1;
  if ( *(_QWORD *)(a2 + 40) )
    v5 = *(const char **)(a2 + 32);
  v6 = sub_381120(&v23[1], (__int64)&v25, *(_QWORD *)(a1 + 128), (__int64)v5, (_QWORD *)(a2 + 80), 0, v4);
  v9 = v20;
  v10 = v6;
  v11 = v21;
  if ( (_BYTE)v6 )
  {
    v12 = *(const char **)&v23[1];
    if ( !v23[1] || (v9 = 0, v17 = *(int *)(a2 + 88), v17 >= get_tinfo_size(0, *(_QWORD *)&v23[1], 0)) )
    {
LABEL_7:
      v13 = *(unsigned int *)(a2 + 24);
      v14 = *(_DWORD *)(a2 + 24) & 0xFEFFFFFF;
      if ( v23[0] )
        v14 = v13 | 0x1000000;
      *(_DWORD *)(a2 + 24) = v14;
      if ( (unsigned __int8)sub_37D040(v9, (__int64)v12, v13, v7, v11, v8) )
        sub_390D60(a1, a2, &v25, 0, v15);
      sub_391520(a1, a2, (__int64 *)&v23[1], 0, 0.0);
      goto LABEL_12;
    }
    if ( *(_DWORD *)(a2 + 88) > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 1504LL) + 80LL) )
    {
      v12 = "AUTOHIDE REGISTRY\n"
            "HIDECANCEL\n"
            "The new variable size is bigger than the old one.\n"
            "It may overlap with other variables (and destroy them).\n"
            "Are you sure to set the new type?";
      v9 = 0;
      if ( (int)sub_335910(
                  0,
                  (__int64)"AUTOHIDE REGISTRY\n"
                           "HIDECANCEL\n"
                           "The new variable size is bigger than the old one.\n"
                           "It may overlap with other variables (and destroy them).\n"
                           "Are you sure to set the new type?") <= 0 )
        goto LABEL_12;
      goto LABEL_7;
    }
    v27 = nullptr;
    v28 = 0;
    print_tinfo(&v27, 0, 0, 0, 0, &v23[1], 0, 0);
    v18 = s1;
    if ( (_QWORD)v28 )
      v18 = v27;
    v12 = "Set the ~t~ype";
    v19 = sub_3359F0(
            (__int64)"Convert to ~p~ointer",
            (__int64)"Set the ~t~ype",
            (__int64)"~C~ancel",
            0xFFFFFFFF,
            (__int64)"The new variable size is bigger than the old one.\n"
                     "It may overlap with other variables (and destroy them).\n"
                     "Did you mean to use '%s *'?\n",
            v18);
    if ( v19 != -1 )
    {
      if ( v19 == 1 )
      {
        sub_325010(&v24, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL), (__int64 *)&v23[1]);
        v12 = (const char *)&v24;
        copy_tinfo_t(&v23[1], &v24);
        clear_tinfo_t(&v24);
      }
      v9 = (__int64)v27;
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree(v27);
      }
      goto LABEL_7;
    }
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27);
    }
  }
LABEL_12:
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  clear_tinfo_t(&v23[1]);
  return v10;
}
