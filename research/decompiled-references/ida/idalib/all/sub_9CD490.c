void __fastcall sub_9CD490(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r12
  void (*v15)(); // rbx
  __m128i v16; // kr00_16
  _BYTE *v17; // rdi
  _QWORD *v18; // rdi
  __int64 v19; // r13
  unsigned __int16 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  void (*v23)(); // rbx
  __int64 v24; // r14
  void (*v25)(); // rbx
  __int64 v26; // rax
  __int64 v27; // r10
  void (*v28)(); // rbx
  _QWORD *v29; // rdi
  __int64 v30; // r15
  void (*v31)(); // rbx
  bool v32; // [rsp+8h] [rbp-D0h]
  __int64 v33; // [rsp+8h] [rbp-D0h]
  __int64 *v34; // [rsp+10h] [rbp-C8h]
  __int64 v35; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v36; // [rsp+18h] [rbp-C0h]
  __int64 v37; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+28h] [rbp-B0h]
  __int64 v39; // [rsp+30h] [rbp-A8h]
  __m128i v40; // [rsp+40h] [rbp-98h] BYREF
  __int64 v41; // [rsp+50h] [rbp-88h]
  __m128i v42; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v43[16]; // [rsp+70h] [rbp-68h] BYREF
  __m128i v44; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v45[9]; // [rsp+90h] [rbp-48h] BYREF

  v32 = a5 == 0;
  sub_9E0770(&v37, a1 + 104, a6, a3, a4);
  v12 = v37 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v37 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( *(_BYTE *)v12 == 1 )
    {
      sub_9C8660(*(_QWORD *)(a1 + 320), a4);
      return;
    }
    v34 = (__int64 *)(a1 + 544);
    if ( ((v37 >> 1) & 1) != 0 )
    {
      v13 = v39;
      if ( ((v37 >> 1) & 2) != 0 )
        v12 |= 4u;
      v44.m128i_i64[1] = v38;
      v33 = v38;
      v44.m128i_i64[0] = v12;
      v36 = v12;
      v45[0] = v39;
      if ( sub_9C9F90(a2, (__int64 *)(a1 + 544), v44.m128i_i64) )
      {
        v14 = *(_QWORD *)(a1 + 320);
        v15 = *(void (**)())(*(_QWORD *)v14 + 96LL);
        v40.m128i_i64[0] = v36;
        v40.m128i_i64[1] = v33;
        v41 = v13;
        sub_9CC3A0(&v44, v40.m128i_i64);
        v16 = v44;
        sub_B86A00(&v42, a3 + 40);
        v17 = (_BYTE *)v42.m128i_i64[0];
        if ( v15 != nullsub_379 )
        {
          ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64, __int64))v15)(
            v14,
            v38,
            v39,
            v42.m128i_i64[0],
            v42.m128i_i64[1],
            a9,
            v16.m128i_i64[0],
            v16.m128i_i64[1]);
          v17 = (_BYTE *)v42.m128i_i64[0];
        }
        if ( v17 != v43 )
          operator delete(v17);
        goto LABEL_11;
      }
      if ( sub_9C8070(a1, &v37) && !sub_9C9F90(a2, v34, &v37) )
      {
        v24 = *(_QWORD *)(a1 + 320);
        v25 = *(void (**)())(*(_QWORD *)v24 + 88LL);
        sub_9CC3A0(&v44, &v37);
        v18 = (_QWORD *)v44.m128i_i64[0];
        if ( v25 != nullsub_378 )
        {
          ((void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD))v25)(
            v24,
            a3,
            v44.m128i_i64[0],
            v44.m128i_i64[1],
            a9);
LABEL_11:
          v18 = (_QWORD *)v44.m128i_i64[0];
        }
LABEL_12:
        if ( v18 == v45 )
          return;
        goto LABEL_13;
      }
    }
    else
    {
      v19 = *(_QWORD *)a2 + 2LL * *(_QWORD *)(a2 + 8);
      v20 = sub_9CA3B0(*(unsigned __int16 **)a2, v19, (__int64 *)(a1 + 544), &v37);
      if ( (unsigned __int16 *)v19 == v20 || (v21 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 8LL * *v20)) == 0 )
      {
        v26 = sub_9C8BF0(a2, v34, &v37);
        if ( !v26 )
        {
          v30 = *(_QWORD *)(a1 + 320);
          v31 = *(void (**)())(*(_QWORD *)v30 + 72LL);
          sub_9CC3A0(&v44, &v37);
          v18 = (_QWORD *)v44.m128i_i64[0];
          if ( v31 != nullsub_376 )
          {
            ((void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD))v31)(
              v30,
              v38,
              v39,
              a3,
              a7,
              a5,
              v44.m128i_i64[0],
              v44.m128i_i64[1],
              a9,
              0);
            v18 = (_QWORD *)v44.m128i_i64[0];
          }
          goto LABEL_12;
        }
        sub_9CC3A0(&v42, (__int64 *)(v26 + 8));
        v27 = *(_QWORD *)(a1 + 320);
        v40 = v42;
        v35 = v27;
        v28 = *(void (**)())(*(_QWORD *)v27 + 72LL);
        sub_9CC3A0(&v44, &v37);
        v29 = (_QWORD *)v44.m128i_i64[0];
        if ( v28 != nullsub_376 )
        {
          ((void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64, __int64, _QWORD, __m128i *))v28)(
            v35,
            v38,
            v39,
            a3,
            a7,
            a5,
            v44.m128i_i64[0],
            v44.m128i_i64[1],
            a9,
            &v40);
          v29 = (_QWORD *)v44.m128i_i64[0];
        }
        if ( v29 != v45 )
          operator delete(v29);
        v18 = (_QWORD *)v42.m128i_i64[0];
        if ( (_BYTE *)v42.m128i_i64[0] != v43 )
LABEL_13:
          operator delete(v18);
      }
      else if ( *(_BYTE *)(v21 + 33) != 1 && !v32 )
      {
        v22 = *(_QWORD *)(a1 + 320);
        v23 = *(void (**)())(*(_QWORD *)v22 + 72LL);
        sub_9CC3A0(&v44, &v37);
        v18 = (_QWORD *)v44.m128i_i64[0];
        if ( v23 != nullsub_376 )
        {
          ((void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD, __int64, __int64, __int64, _QWORD, _QWORD))v23)(
            v22,
            v38,
            v39,
            a3,
            a7,
            1,
            v44.m128i_i64[0],
            v44.m128i_i64[1],
            a9,
            0);
          v18 = (_QWORD *)v44.m128i_i64[0];
        }
        goto LABEL_12;
      }
    }
  }
}
