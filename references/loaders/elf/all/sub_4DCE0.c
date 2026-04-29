unsigned __int64 __fastcall sub_4DCE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        int a5,
        __int64 a6,
        double a7,
        double a8,
        char a9)
{
  int v12; // r15d
  unsigned __int64 v13; // rax
  int v14; // edx
  unsigned __int64 v15; // r11
  __int64 v16; // rdi
  __int64 v17; // r8
  double v18; // xmm1_8
  __m128i v19; // xmm0
  int v20; // r12d
  char i; // al
  __int64 v22; // rdi
  int v24; // r12d
  char j; // al
  unsigned __int64 v26; // rax
  struct _Unwind_Exception *v27; // rbx
  __int64 v28; // [rsp+10h] [rbp-F0h]
  char *v30; // [rsp+28h] [rbp-D8h]
  __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 *v32; // [rsp+38h] [rbp-C8h] BYREF
  char *s1; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v34; // [rsp+48h] [rbp-B8h]
  __int64 (__fastcall **v35)(); // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h]
  __m128i v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int128 v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  __int128 v43; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v45; // [rsp+C8h] [rbp-38h]

  v30 = a4;
  v45 = __readfsqword(0x28u);
  v34 = 0;
  s1 = nullptr;
  if ( !a4 )
  {
    if ( a3
      && *(__int64 *)(a2 + 256) > 0
      && *(_QWORD *)(a2 + 272)
      && (sub_461E0(*(_QWORD *)(a2 + 240), (__int64 *)&s1, (__int64 *)(a2 + 256), *(_DWORD *)a3), (_QWORD)v34) )
    {
      v30 = s1;
      if ( !strcmp(s1, ".gnu.conflict") )
      {
LABEL_26:
        if ( v30 )
        {
          *(_QWORD *)&v34 = 0;
          qfree(v30);
        }
        return v45 - __readfsqword(0x28u);
      }
    }
    else
    {
      v30 = (char *)&::s1;
    }
  }
  v12 = *(_DWORD *)(a3 + 44);
  if ( v12 )
  {
    if ( !*(_BYTE *)(a2 + 248) )
    {
      v27 = (struct _Unwind_Exception *)sub_30AC0();
      if ( s1 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(s1);
      }
      _Unwind_Resume(v27);
    }
    if ( (unsigned __int64)(unsigned int)v12 >= *(_QWORD *)(a2 + 120) )
      goto LABEL_24;
    v13 = *(_QWORD *)(a2 + 112) + ((unsigned __int64)(unsigned int)v12 << 6);
    v14 = *(_DWORD *)(v13 + 4);
    if ( v14 == 1 )
    {
      if ( *(_WORD *)(a2 + 520) != 1 && (*(_BYTE *)(v13 + 8) & 2) == 0
        || *(_QWORD *)(*(_QWORD *)(a2 + 1352) + 32LL * v12 + 16) == -1 )
      {
        goto LABEL_24;
      }
    }
    else if ( ((*(_BYTE *)(v13 + 8) & 2) == 0 || *(_QWORD *)(*(_QWORD *)(a2 + 1352) + 32LL * v12 + 16) == -1)
           && v14 != 11
           && v14 != 5 )
    {
LABEL_24:
      sub_EAA0((__int64)"Skipping relocation section %s because it refers to unloaded section #%d\n", v30, v12);
LABEL_25:
      v30 = s1;
      goto LABEL_26;
    }
  }
  v15 = *(_QWORD *)(a3 + 56);
  v16 = *(_QWORD *)(a2 + 472);
  v17 = *(_QWORD *)(a3 + 24);
  if ( !v15 )
    v15 = 1;
  v28 = v15;
  v31 = *(_QWORD *)(a3 + 32) / v15;
  sub_45A20(v16, (unsigned __int64 *)&v31, v15, "Relocation section size", v17, -1);
  if ( !v31 )
    goto LABEL_25;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) == 12 && *(_BYTE *)(a2 + 508) != 2 )
  {
    sub_4DB70(a1, a2, a3, (__int64)v30, a5, a6, 0.0, a8, a9, v12, v31, v28);
    goto LABEL_25;
  }
  v18 = *(double *)&v31;
  v19 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a3 + 24)), (__m128i)(unsigned __int64)v31);
  if ( *(_DWORD *)(a3 + 4) == 4 || a9 )
  {
    v37 = v19;
    v20 = 0;
    v35 = (__int64 (__fastcall **)())&off_871A8;
    v36 = a2;
    LOBYTE(v43) = a9;
    v38 = v28;
    v39 = 0;
    v41 = 0;
    v42 = 0;
    v40 = 0;
    for ( i = sub_3DCA0((__int64)&v35, &v32); i; i = sub_3DCA0((__int64)&v35, &v32) )
      sub_4C590(a1, a2, v32, 1u, v20++, a5, 0.0, v18, v12, (__int64)v30, a6);
    v22 = v39;
    v35 = &off_870F0;
    if ( v39 )
    {
LABEL_18:
      *(_QWORD *)&v40 = 0;
      qfree(v22);
    }
  }
  else
  {
    v37 = v19;
    v24 = 0;
    v35 = (__int64 (__fastcall **)())&off_870C8;
    v36 = a2;
    v38 = v28;
    v39 = 0;
    v41 = 0;
    v42 = 0;
    v44 = 0;
    v40 = 0;
    v43 = 0;
    for ( j = sub_3D5F0((__int64)&v35, &v32); j; j = sub_3D5F0((__int64)&v35, &v32) )
    {
      *(_QWORD *)&v43 = *v32;
      v26 = v32[1];
      v44 = 0;
      *((_QWORD *)&v43 + 1) = v26;
      sub_4C590(a1, a2, (unsigned __int64 *)&v43, 0, v24++, a5, 0.0, v18, v12, (__int64)v30, a6);
    }
    v22 = v39;
    v35 = &off_870A0;
    if ( v39 )
      goto LABEL_18;
  }
  if ( s1 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(s1);
  }
  return v45 - __readfsqword(0x28u);
}
