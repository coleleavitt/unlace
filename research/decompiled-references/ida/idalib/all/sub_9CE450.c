void __fastcall sub_9CE450(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r12
  void (*v14)(); // rbx
  __m128i v15; // kr00_16
  _BYTE *v16; // rdi
  _QWORD *v17; // rdi
  __int64 v18; // r13
  unsigned __int16 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  void (*v22)(); // rbx
  __int64 v23; // r14
  void (*v24)(); // rbx
  __int64 v25; // rax
  __int64 v26; // r10
  void (*v27)(); // rbx
  _QWORD *v28; // rdi
  __int64 v29; // r15
  void (*v30)(); // rbx
  bool v31; // [rsp+8h] [rbp-D0h]
  __int64 v32; // [rsp+8h] [rbp-D0h]
  __int64 *v33; // [rsp+10h] [rbp-C8h]
  __int64 v34; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v35; // [rsp+18h] [rbp-C0h]
  __int64 v36; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+28h] [rbp-B0h]
  __int64 v38; // [rsp+30h] [rbp-A8h]
  __m128i v39; // [rsp+40h] [rbp-98h] BYREF
  __int64 v40; // [rsp+50h] [rbp-88h]
  __m128i v41; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v42[16]; // [rsp+70h] [rbp-68h] BYREF
  __m128i v43; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v44[9]; // [rsp+90h] [rbp-48h] BYREF

  v31 = a5 == 0;
  sub_9E0770(&v36, a1 + 104, a6, a3, a4);
  v11 = v36 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v36 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( *(_BYTE *)v11 == 1 )
    {
      sub_9C8660(*(_QWORD *)(a1 + 320), a4);
      return;
    }
    v33 = (__int64 *)(a1 + 544);
    if ( ((v36 >> 1) & 1) != 0 )
    {
      v12 = v38;
      if ( ((v36 >> 1) & 2) != 0 )
        v11 |= 4u;
      v43.m128i_i64[1] = v37;
      v32 = v37;
      v43.m128i_i64[0] = v11;
      v35 = v11;
      v44[0] = v38;
      if ( sub_9C9F90(a2, (__int64 *)(a1 + 544), v43.m128i_i64) )
      {
        v13 = *(_QWORD *)(a1 + 320);
        v14 = *(void (**)())(*(_QWORD *)v13 + 96LL);
        v39.m128i_i64[0] = v35;
        v39.m128i_i64[1] = v32;
        v40 = v12;
        sub_9CC3A0(&v43, v39.m128i_i64);
        v15 = v43;
        sub_B86A00(&v41, a3 + 40);
        v16 = (_BYTE *)v41.m128i_i64[0];
        if ( v14 != nullsub_379 )
        {
          ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64, __int64))v14)(
            v13,
            v37,
            v38,
            v41.m128i_i64[0],
            v41.m128i_i64[1],
            a8,
            v15.m128i_i64[0],
            v15.m128i_i64[1]);
          v16 = (_BYTE *)v41.m128i_i64[0];
        }
        if ( v16 != v42 )
          operator delete(v16);
        goto LABEL_11;
      }
      if ( sub_9C8070(a1, &v36) && !sub_9C9F90(a2, v33, &v36) )
      {
        v23 = *(_QWORD *)(a1 + 320);
        v24 = *(void (**)())(*(_QWORD *)v23 + 88LL);
        sub_9CC3A0(&v43, &v36);
        v17 = (_QWORD *)v43.m128i_i64[0];
        if ( v24 != nullsub_378 )
        {
          ((void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD))v24)(
            v23,
            a3,
            v43.m128i_i64[0],
            v43.m128i_i64[1],
            a8);
LABEL_11:
          v17 = (_QWORD *)v43.m128i_i64[0];
        }
LABEL_12:
        if ( v17 == v44 )
          return;
        goto LABEL_13;
      }
    }
    else
    {
      v18 = *(_QWORD *)a2 + 2LL * *(_QWORD *)(a2 + 8);
      v19 = sub_9CA3B0(*(unsigned __int16 **)a2, v18, (__int64 *)(a1 + 544), &v36);
      if ( (unsigned __int16 *)v18 == v19 || (v20 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 8LL * *v19)) == 0 )
      {
        v25 = sub_9C8BF0(a2, v33, &v36);
        if ( !v25 )
        {
          v29 = *(_QWORD *)(a1 + 320);
          v30 = *(void (**)())(*(_QWORD *)v29 + 72LL);
          sub_9CC3A0(&v43, &v36);
          v17 = (_QWORD *)v43.m128i_i64[0];
          if ( v30 != nullsub_376 )
          {
            ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64, __int64, _QWORD, _QWORD))v30)(
              v29,
              v37,
              v38,
              a3,
              2,
              a5,
              v43.m128i_i64[0],
              v43.m128i_i64[1],
              a8,
              0);
            v17 = (_QWORD *)v43.m128i_i64[0];
          }
          goto LABEL_12;
        }
        sub_9CC3A0(&v41, (__int64 *)(v25 + 8));
        v26 = *(_QWORD *)(a1 + 320);
        v39 = v41;
        v34 = v26;
        v27 = *(void (**)())(*(_QWORD *)v26 + 72LL);
        sub_9CC3A0(&v43, &v36);
        v28 = (_QWORD *)v43.m128i_i64[0];
        if ( v27 != nullsub_376 )
        {
          ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64, __int64, _QWORD, __m128i *))v27)(
            v34,
            v37,
            v38,
            a3,
            2,
            a5,
            v43.m128i_i64[0],
            v43.m128i_i64[1],
            a8,
            &v39);
          v28 = (_QWORD *)v43.m128i_i64[0];
        }
        if ( v28 != v44 )
          operator delete(v28);
        v17 = (_QWORD *)v41.m128i_i64[0];
        if ( (_BYTE *)v41.m128i_i64[0] != v42 )
LABEL_13:
          operator delete(v17);
      }
      else if ( *(_BYTE *)(v20 + 33) != 1 && !v31 )
      {
        v21 = *(_QWORD *)(a1 + 320);
        v22 = *(void (**)())(*(_QWORD *)v21 + 72LL);
        sub_9CC3A0(&v43, &v36);
        v17 = (_QWORD *)v43.m128i_i64[0];
        if ( v22 != nullsub_376 )
        {
          ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD))v22)(
            v21,
            v37,
            v38,
            a3,
            2,
            1,
            v43.m128i_i64[0],
            v43.m128i_i64[1],
            a8,
            0);
          v17 = (_QWORD *)v43.m128i_i64[0];
        }
        goto LABEL_12;
      }
    }
  }
}
