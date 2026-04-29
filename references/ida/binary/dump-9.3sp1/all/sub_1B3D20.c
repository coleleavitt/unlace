unsigned __int64 __fastcall sub_1B3D20(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  int v12; // r8d
  int v13; // r9d
  int v14; // r8d
  int v15; // r9d
  void *v16; // rdi
  __int64 v18; // rcx
  int v19; // r9d
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  __int64 v29; // rbp
  unsigned __int64 v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+10h] [rbp-1C8h]
  unsigned __int64 v35; // [rsp+18h] [rbp-1C0h]
  __int64 v36; // [rsp+28h] [rbp-1B0h]
  __int64 v37; // [rsp+28h] [rbp-1B0h]
  __int64 n; // [rsp+38h] [rbp-1A0h]
  __int64 v39; // [rsp+40h] [rbp-198h] BYREF
  __int128 v40; // [rsp+48h] [rbp-190h]
  __int64 v41; // [rsp+60h] [rbp-178h] BYREF
  __int128 v42; // [rsp+68h] [rbp-170h]
  __int64 v43[2]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v44[4]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v45[2]; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v46[4]; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v47[2]; // [rsp+E0h] [rbp-F8h] BYREF
  void *src; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v49; // [rsp+F8h] [rbp-E0h]
  __int64 v50[2]; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+128h] [rbp-B0h]
  __int64 v53[2]; // [rsp+140h] [rbp-98h] BYREF
  void *v54; // [rsp+150h] [rbp-88h] BYREF
  __int128 v55; // [rsp+158h] [rbp-80h]
  __int64 v56[2]; // [rsp+170h] [rbp-68h] BYREF
  __int64 v57[3]; // [rsp+180h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+198h] [rbp-40h]

  v6 = *(_QWORD *)(a3 + 8);
  v58 = __readfsqword(0x28u);
  *(_QWORD *)(a3 + 8) = a1;
  v34 = v6;
  sub_124680((__int64)v43, *(_QWORD *)(a1 + 520), a4, 1u);
  sub_124680((__int64)v45, *(_QWORD *)(a1 + 520), a4, 0);
  v39 = 0;
  v41 = 0;
  v40 = 0;
  v42 = 0;
  sub_1B3C00(v45, &v39, a3);
  if ( sub_122C30((__int64)v43, (__int64)v45) )
  {
    sub_64640(v43, v45, v8, v9, v10, v11);
    sub_317C60(v44, v46);
    sub_1B3C00(v43, &v41, a3);
    sub_64880(v45);
  }
  sub_FAAD0(a2);
  sub_127A20((__int64)v47, *(_QWORD *)(a1 + 520), a4, 1, v12, v13);
  if ( !(unsigned __int8)sub_64880(v47) || v49 )
  {
    sub_127A20((__int64)v50, *(_QWORD *)(a1 + 520), a4, 0, v14, v15);
    *(_QWORD *)&v40 = 0;
    sub_1B3C00(v50, &v39, a3);
    sub_FAAD0(a2);
    if ( sub_122C30((__int64)v47, (__int64)v50) )
    {
      if ( !(unsigned __int8)sub_64880(v50) || v52 )
      {
        v20 = a2[1];
        v21 = 2;
        if ( v20 )
          v21 = v20-- + 1;
        v22 = *a2;
        if ( a2[2] < v21 )
        {
          v37 = v20;
          v35 = v21;
          v32 = qvector_reserve((__int64)a2, v22, v21, 1);
          *a2 = v32;
          v20 = v37;
          v22 = v32;
          v21 = v35;
        }
        a2[1] = v21;
        *(_BYTE *)(v22 + v20) = 44;
        *(_BYTE *)(*a2 + v20 + 1) = 0;
        sub_64640(v47, v50, v21, v18, v20, v19);
        sub_317C60(&src, &v51);
      }
      *(_QWORD *)&v42 = 0;
      sub_1B3C00(v47, &v41, a3);
      sub_FAAD0(a2);
      sub_64000(v53, (__int64)v47);
      v54 = nullptr;
      v55 = 0;
      if ( v49 )
      {
        v36 = v49;
        n = 16 * v49;
        v54 = (void *)qalloc_or_throw(16 * v49, (__int64)v47, 16 * v49, v49);
        *((_QWORD *)&v55 + 1) = v36;
        memcpy(v54, src, n);
        *(_QWORD *)&v55 = v36;
      }
      sub_127A20((__int64)v56, *(_QWORD *)(a1 + 520), a4, 129, v23, v24);
      sub_64640(v53, v56, v25, v26, v27, v28);
      sub_317C60(&v54, v57);
      if ( v57[0] )
      {
        v57[1] = 0;
        qfree(v57[0]);
      }
      qfree(v56[0]);
      if ( !(unsigned __int8)sub_64880(v53) || (_QWORD)v55 )
      {
        v29 = a2[1];
        v30 = 2;
        if ( v29 )
          v30 = v29-- + 1;
        v31 = *a2;
        if ( a2[2] < v30 )
        {
          v33 = qvector_reserve((__int64)a2, v31, v30, 1);
          *a2 = v33;
          v31 = v33;
        }
        a2[1] = v30;
        *(_BYTE *)(v31 + v29) = 44;
        *(_BYTE *)(*a2 + v29 + 1) = 0;
        *(_QWORD *)&v42 = 0;
        sub_1B3C00(v53, &v41, a3);
        sub_FAAD0(a2);
      }
      if ( v54 )
      {
        *(_QWORD *)&v55 = 0;
        qfree((__int64)v54);
      }
      qfree(v53[0]);
    }
    if ( v51 )
    {
      v52 = 0;
      qfree(v51);
    }
    qfree(v50[0]);
  }
  v16 = src;
  *(_QWORD *)(a3 + 8) = v34;
  if ( v16 )
  {
    v49 = 0;
    qfree((__int64)v16);
  }
  qfree(v47[0]);
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  if ( v46[0] )
  {
    v46[1] = 0;
    qfree(v46[0]);
  }
  qfree(v45[0]);
  if ( v44[0] )
  {
    v44[1] = 0;
    qfree(v44[0]);
  }
  qfree(v43[0]);
  return v58 - __readfsqword(0x28u);
}
