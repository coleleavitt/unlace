__int64 __fastcall rs_chooser_t__::vfunc_12(
        __int64 a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 i; // rbx
  const char *v14; // rax
  const char *v15; // rax
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // rdx
  __int64 v20; // rax
  const char *v21; // r15
  const char *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  size_t v28; // rax
  char v29; // [rsp+0h] [rbp-108h]
  size_t v30; // [rsp+0h] [rbp-108h]
  size_t n; // [rsp+8h] [rbp-100h]
  const char *v32; // [rsp+10h] [rbp-F8h] BYREF
  unsigned __int64 v33; // [rsp+18h] [rbp-F0h]
  void *v34; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v35; // [rsp+38h] [rbp-D0h]
  const char *v36; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+58h] [rbp-B0h]
  __int64 v38; // [rsp+70h] [rbp-98h] BYREF
  int v39; // [rsp+78h] [rbp-90h]
  const char *v40; // [rsp+80h] [rbp-88h]
  const char *v41; // [rsp+88h] [rbp-80h]
  __int128 v42; // [rsp+90h] [rbp-78h]
  __int64 v43; // [rsp+A0h] [rbp-68h]
  __int128 v44; // [rsp+A8h] [rbp-60h]
  __int64 v45; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v46; // [rsp+C8h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v10 = a2;
  sub_31A1D0((__int64 *)&v32);
  if ( v33 > 1 || (a2 = (const char *)&v32, (unsigned __int8)qgetenv("EDITOR", &v32)) )
  {
    for ( i = 0; i < *((_QWORD *)v10 + 1); ++i )
    {
      v19 = 3LL * *(_QWORD *)(*(_QWORD *)v10 + 8 * i);
      v20 = *(_QWORD *)(a1 + 184) + 24LL * *(_QWORD *)(*(_QWORD *)v10 + 8 * i);
      if ( *(_QWORD *)(v20 + 8) )
      {
        v21 = *(const char **)v20;
        v34 = nullptr;
        v35 = 0;
        if ( strchr(v21, 32) )
        {
          sub_169A50((__int64 *)&v34, (__int64)"\"%s\"", v21);
        }
        else if ( v21 )
        {
          v28 = strlen(v21);
          if ( v28 )
          {
            n = v28;
            v30 = v28 + 1;
            v34 = (void *)qvector_reserve(&v34, 0, v28 + 1, 1);
            *(_QWORD *)&v35 = v30;
            v29 = n;
            memmove(v34, v21, n);
            *((_BYTE *)v34 + n) = 0;
          }
        }
      }
      else
      {
        v34 = nullptr;
        v35 = 0;
      }
      v14 = &s1;
      v38 = 80;
      v39 = 0;
      v43 = -1;
      v45 = 0;
      v42 = -1;
      v44 = 0;
      if ( v33 )
        v14 = v32;
      v40 = v14;
      v15 = &s1;
      if ( (_QWORD)v35 )
        v15 = (const char *)v34;
      a2 = (const char *)&v36;
      v41 = v15;
      v36 = nullptr;
      v37 = 0;
      if ( !sub_479A00(&v38, &v36, v19, v11, v12) )
      {
        v22 = &s1;
        if ( (_QWORD)v37 )
          v22 = v36;
        a2 = &s1;
        if ( v33 )
          a2 = v32;
        sub_169630(
          (int)"Error launching the editor '%s'.\n%s",
          (__int64)a2,
          (__int64)v22,
          v11,
          v12,
          v16,
          (__m128)0LL,
          (__m128)-1LL,
          a5,
          a6,
          v17,
          v18,
          a9,
          a10,
          v29);
      }
      if ( v36 )
      {
        *(_QWORD *)&v37 = 0;
        qfree(v36, a2);
      }
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(v34, a2);
      }
    }
  }
  else
  {
    sub_169630((int)"No editor configured", (__int64)&v32, v23, v11, v12, v24, a3, a4, a5, a6, v25, v26, a9, a10, v29);
  }
  if ( v32 )
  {
    v33 = 0;
    qfree(v32, a2);
  }
  return 0;
}
