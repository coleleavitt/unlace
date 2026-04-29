unsigned __int64 __fastcall sub_1AF020(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, double a5, double a6)
{
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  const char *v14; // rdx
  void *v15; // rdi
  const char *v17; // rdx
  __int64 v18; // rcx
  int v19; // r9d
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  const char *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  __int64 v28; // rbp
  unsigned __int64 v29; // r12
  __int64 v30; // rsi
  const char *v31; // rdx
  const char *v32; // r15
  char v33; // al
  const char *v34; // rcx
  const char *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp+10h] [rbp-1C8h]
  unsigned __int64 v39; // [rsp+18h] [rbp-1C0h]
  __int64 v40; // [rsp+28h] [rbp-1B0h]
  __int64 v41; // [rsp+28h] [rbp-1B0h]
  __int64 n; // [rsp+38h] [rbp-1A0h]
  const char *v43; // [rsp+40h] [rbp-198h] BYREF
  __int128 v44; // [rsp+48h] [rbp-190h]
  const char *v45; // [rsp+60h] [rbp-178h] BYREF
  __int128 v46; // [rsp+68h] [rbp-170h]
  __int64 v47[2]; // [rsp+80h] [rbp-158h] BYREF
  _QWORD v48[4]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v49[2]; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-110h]
  __int64 v52[2]; // [rsp+E0h] [rbp-F8h] BYREF
  void *src; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v54; // [rsp+F8h] [rbp-E0h]
  __int64 v55[2]; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+128h] [rbp-B0h]
  __int64 v58[2]; // [rsp+140h] [rbp-98h] BYREF
  void *v59; // [rsp+150h] [rbp-88h] BYREF
  __int128 v60; // [rsp+158h] [rbp-80h]
  __int64 v61[2]; // [rsp+170h] [rbp-68h] BYREF
  _QWORD v62[3]; // [rsp+180h] [rbp-58h] BYREF
  unsigned __int64 v63; // [rsp+198h] [rbp-40h]

  v8 = *(_QWORD *)(a3 + 8);
  v63 = __readfsqword(0x28u);
  *(_QWORD *)(a3 + 8) = a1;
  v38 = v8;
  sub_11FAC0((__int64)v47, *(_QWORD *)(a1 + 520), a4, 1u);
  sub_11FAC0((__int64)v49, *(_QWORD *)(a1 + 520), a4, 0);
  v43 = nullptr;
  v45 = nullptr;
  v44 = 0;
  v46 = 0;
  sub_1AEF00(v49, (__int64 *)&v43, a3, 0.0, a6);
  if ( sub_11E070((__int64)v47, (__int64)v49) )
  {
    sub_5FBC0(v47, v49, v10, v11, v12, v13);
    sub_3123A0(v48, &v50);
    sub_1AEF00(v47, (__int64 *)&v45, a3, 0.0, a6);
    v32 = s1;
    if ( (_QWORD)v46 )
      v32 = v45;
    v33 = sub_5FE00(v49);
    v34 = ",";
    if ( v33 )
    {
      v34 = (const char *)&unk_3F5793;
      if ( v51 )
        v34 = ",";
    }
    v35 = s1;
    if ( (_QWORD)v44 )
      v35 = v43;
    sub_F5F10(a2, (__int64)"u=%s%s(%s)", v35, v34, v32);
  }
  else
  {
    v14 = s1;
    if ( (_QWORD)v44 )
      v14 = v43;
    sub_F5F10(a2, (__int64)"u=%-10s", v14);
  }
  sub_122E60((__int64)v52, *(_QWORD *)(a1 + 520), a4, 1u);
  if ( !(unsigned __int8)sub_5FE00(v52) || v54 )
  {
    sub_122E60((__int64)v55, *(_QWORD *)(a1 + 520), a4, 0);
    *(_QWORD *)&v44 = 0;
    sub_1AEF00(v55, (__int64 *)&v43, a3, 0.0, a6);
    v17 = s1;
    if ( (_QWORD)v44 )
      v17 = v43;
    sub_F5F10(a2, (__int64)" d=%s", v17);
    if ( sub_11E070((__int64)v52, (__int64)v55) )
    {
      if ( !(unsigned __int8)sub_5FE00(v55) || v57 )
      {
        v20 = a2[1];
        v21 = 2;
        if ( v20 )
          v21 = v20-- + 1;
        v22 = *a2;
        if ( a2[2] < v21 )
        {
          v41 = v20;
          v39 = v21;
          v36 = qvector_reserve(a2, v22, v21, 1);
          *a2 = v36;
          v20 = v41;
          v22 = v36;
          v21 = v39;
        }
        a2[1] = v21;
        *(_BYTE *)(v22 + v20) = 44;
        *(_BYTE *)(*a2 + v20 + 1) = 0;
        sub_5FBC0(v52, v55, v21, v18, v20, v19);
        sub_3123A0(&src, &v56);
      }
      *(_QWORD *)&v46 = 0;
      sub_1AEF00(v52, (__int64 *)&v45, a3, 0.0, a6);
      v23 = s1;
      if ( (_QWORD)v46 )
        v23 = v45;
      sub_F5F10(a2, (__int64)"(%s)", v23);
      sub_5F580(v58, (__int64)v52);
      v59 = nullptr;
      v60 = 0;
      if ( v54 )
      {
        v40 = v54;
        n = 16 * v54;
        v59 = (void *)qalloc_or_throw(16 * v54);
        *((_QWORD *)&v60 + 1) = v40;
        memcpy(v59, src, n);
        *(_QWORD *)&v60 = v40;
      }
      sub_122E60((__int64)v61, *(_QWORD *)(a1 + 520), a4, 0x81u);
      sub_5FBC0(v58, v61, v24, v25, v26, v27);
      sub_3123A0(&v59, v62);
      if ( v62[0] )
      {
        v62[1] = 0;
        qfree(v62[0]);
      }
      qfree(v61[0]);
      if ( !(unsigned __int8)sub_5FE00(v58) || (_QWORD)v60 )
      {
        v28 = a2[1];
        v29 = 2;
        if ( v28 )
          v29 = v28-- + 1;
        v30 = *a2;
        if ( a2[2] < v29 )
        {
          v37 = qvector_reserve(a2, v30, v29, 1);
          *a2 = v37;
          v30 = v37;
        }
        a2[1] = v29;
        *(_BYTE *)(v30 + v28) = 44;
        *(_BYTE *)(*a2 + v28 + 1) = 0;
        *(_QWORD *)&v46 = 0;
        sub_1AEF00(v58, (__int64 *)&v45, a3, 0.0, a6);
        v31 = s1;
        if ( (_QWORD)v46 )
          v31 = v45;
        sub_F5F10(a2, (__int64)"pass=%s", v31);
      }
      if ( v59 )
      {
        *(_QWORD *)&v60 = 0;
        qfree(v59);
      }
      qfree(v58[0]);
    }
    if ( v56 )
    {
      v57 = 0;
      qfree(v56);
    }
    qfree(v55[0]);
  }
  v15 = src;
  *(_QWORD *)(a3 + 8) = v38;
  if ( v15 )
  {
    v54 = 0;
    qfree(v15);
  }
  qfree(v52[0]);
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
  if ( v50 )
  {
    v51 = 0;
    qfree(v50);
  }
  qfree(v49[0]);
  if ( v48[0] )
  {
    v48[1] = 0;
    qfree(v48[0]);
  }
  qfree(v47[0]);
  return v63 - __readfsqword(0x28u);
}
