__int64 __fastcall sub_141BDA0(__int64 a1, void *a2, size_t a3, char a4, unsigned __int8 a5, __int64 *a6)
{
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 *v12; // r13
  int v13; // eax
  __int64 *v14; // r14
  size_t v15; // rdx
  void *v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  char v21; // r8
  __int64 v22; // rax
  size_t v23; // rax
  __int64 v24; // rax
  void *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  void *v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rax
  char v32; // dl
  __int64 v34; // rax
  char v35; // dl
  _QWORD *v36; // rax
  __int64 v37; // rax
  char v38; // dl
  char v39; // r9
  __int64 v40; // rax
  char v41; // r8
  __int64 v42; // rax
  __int64 v43; // [rsp-10h] [rbp-2F8h]
  int v45; // [rsp+8h] [rbp-2E0h]
  char v46; // [rsp+8h] [rbp-2E0h]
  char v47; // [rsp+10h] [rbp-2D8h]
  char v48; // [rsp+3Fh] [rbp-2A9h]
  _QWORD *v49; // [rsp+48h] [rbp-2A0h] BYREF
  __int64 *v50; // [rsp+50h] [rbp-298h] BYREF
  char v51; // [rsp+58h] [rbp-290h]
  _QWORD *v52; // [rsp+60h] [rbp-288h] BYREF
  __int64 v53; // [rsp+68h] [rbp-280h]
  __int16 v54; // [rsp+80h] [rbp-268h]
  void *ptr; // [rsp+90h] [rbp-258h] BYREF
  __m128i si128; // [rsp+98h] [rbp-250h]
  _WORD v57[288]; // [rsp+A8h] [rbp-240h] BYREF

  v9 = *(_QWORD *)(a1 + 80);
  v57[4] = 261;
  ptr = a2;
  si128.m128i_i64[0] = a3;
  if ( !(unsigned __int8)sub_228B020(&ptr, 0) )
  {
    ptr = v57;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8EA0);
    if ( a4 )
    {
LABEL_3:
      v10 = *(_QWORD *)(a1 + 40);
      v11 = *(__int64 **)(v10 + 288);
      v12 = *(__int64 **)(v10 + 296);
      if ( v11 != v12 )
      {
        v13 = a5;
        v14 = v11;
        v45 = v13;
        do
        {
          si128.m128i_i64[0] = 0;
          v19 = *v14;
          v20 = v14[1];
          v54 = 261;
          v52 = (_QWORD *)v19;
          v53 = v20;
          sub_228FF50(&v52, &ptr, 0);
          v17 = si128.m128i_i64[0];
          if ( si128.m128i_i64[0] )
          {
            if ( (unsigned __int8)sub_228ACA0((unsigned int)*((char *)ptr + si128.m128i_i64[0] - 1), 0) )
            {
              v17 = si128.m128i_i64[0];
              v15 = a3 + si128.m128i_i64[0];
              if ( a3 + si128.m128i_i64[0] <= si128.m128i_i64[1] )
                goto LABEL_6;
              goto LABEL_15;
            }
            v21 = *(_BYTE *)sub_228ACC0(0);
            v22 = si128.m128i_i64[0];
            if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
            {
              v48 = v21;
              sub_2236E10(&ptr, v57, si128.m128i_i64[0] + 1, 1);
              v22 = si128.m128i_i64[0];
              v21 = v48;
            }
            *((_BYTE *)ptr + v22) = v21;
            v17 = ++si128.m128i_i64[0];
          }
          v15 = a3 + v17;
          if ( a3 + v17 <= si128.m128i_i64[1] )
            goto LABEL_6;
LABEL_15:
          sub_2236E10(&ptr, v57, v15, 1);
          v17 = si128.m128i_i64[0];
LABEL_6:
          v16 = ptr;
          if ( a3 )
          {
            memcpy((char *)ptr + v17, a2, a3);
            v16 = ptr;
            v17 = si128.m128i_i64[0];
          }
          si128.m128i_i64[0] = a3 + v17;
          sub_FD9C70((__int64)&v52, v9, v16, a3 + v17, v45, 1, 0);
          if ( (v53 & 1) == 0 )
            goto LABEL_39;
          v18 = v52;
          v52 = nullptr;
          v49 = v18;
          sub_A05760(&v50, &v49);
          if ( v49 )
            (*(void (__fastcall **)(_QWORD *))(*v49 + 8LL))(v49);
          v14 += 4;
          sub_A04D90((__int64 *)&v52);
        }
        while ( v12 != v14 );
      }
      v30 = 0;
      goto LABEL_42;
    }
    if ( a6 && a6[1] )
    {
      v27 = *a6;
      v53 = a6[1];
      v52 = (_QWORD *)v27;
      v54 = 261;
      sub_228FF50(&v52, &ptr, 0);
      sub_228A5F0(&ptr, 0);
      v28 = si128.m128i_i64[0];
      if ( si128.m128i_i64[0] )
      {
        if ( (unsigned __int8)sub_228ACA0((unsigned int)*((char *)ptr + si128.m128i_i64[0] - 1), 0) )
        {
          v28 = si128.m128i_i64[0];
        }
        else
        {
          v39 = *(_BYTE *)sub_228ACC0(0);
          v40 = si128.m128i_i64[0];
          if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
          {
            v46 = v39;
            sub_2236E10(&ptr, v57, si128.m128i_i64[0] + 1, 1);
            v40 = si128.m128i_i64[0];
            v39 = v46;
          }
          *((_BYTE *)ptr + v40) = v39;
          v28 = ++si128.m128i_i64[0];
        }
      }
      if ( a3 + v28 > si128.m128i_i64[1] )
      {
        sub_2236E10(&ptr, v57, a3 + v28, 1);
        v28 = si128.m128i_i64[0];
      }
      v29 = ptr;
      if ( a3 )
      {
        memcpy((char *)ptr + v28, a2, a3);
        v29 = ptr;
        v28 = si128.m128i_i64[0];
      }
      si128.m128i_i64[0] = a3 + v28;
      sub_FD9C70((__int64)&v52, v9, v29, a3 + v28, a5, 1, 0);
      if ( (v53 & 1) == 0 )
      {
LABEL_39:
        v30 = 0;
        v31 = sub_A05DE0(&v52);
        if ( v32 )
          v30 = v31;
        sub_A04D90((__int64 *)&v52);
        goto LABEL_42;
      }
      v36 = v52;
      v52 = nullptr;
      v49 = v36;
      sub_A05760(&v50, &v49);
      if ( v49 )
        (*(void (__fastcall **)(_QWORD *))(*v49 + 8LL))(v49);
      sub_A04D90((__int64 *)&v52);
    }
    si128.m128i_i64[0] = 0;
    v23 = j__strlen(".");
    sub_FD9440((__int64)&v50, v9, ".", v23, 1);
    if ( (v51 & 1) != 0 || !*v50 )
    {
LABEL_32:
      sub_A04D70((__int64 *)&v50);
      goto LABEL_3;
    }
    v53 = *v50;
    v52 = v50 + 4;
    v54 = 261;
    sub_228FF50(&v52, &ptr, 0);
    v24 = si128.m128i_i64[0];
    if ( si128.m128i_i64[0] )
    {
      if ( (unsigned __int8)sub_228ACA0((unsigned int)*((char *)ptr + si128.m128i_i64[0] - 1), 0) )
      {
        v24 = si128.m128i_i64[0];
      }
      else
      {
        v41 = *(_BYTE *)sub_228ACC0(0);
        v42 = si128.m128i_i64[0];
        if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
        {
          v47 = v41;
          sub_2236E10(&ptr, v57, si128.m128i_i64[0] + 1, 1);
          v42 = si128.m128i_i64[0];
          v41 = v47;
        }
        *((_BYTE *)ptr + v42) = v41;
        v24 = ++si128.m128i_i64[0];
      }
    }
    if ( a3 + v24 > si128.m128i_i64[1] )
    {
      sub_2236E10(&ptr, v57, a3 + v24, 1);
      v24 = si128.m128i_i64[0];
    }
    v25 = ptr;
    if ( a3 )
    {
      memcpy((char *)ptr + v24, a2, a3);
      v25 = ptr;
      v24 = si128.m128i_i64[0];
    }
    si128.m128i_i64[0] = a3 + v24;
    sub_FD9C70((__int64)&v52, v9, v25, a3 + v24, a5, 1, 0);
    if ( (v53 & 1) != 0 )
    {
      v26 = v52;
      v52 = nullptr;
      v49 = v26;
      sub_A0E8E0(&v49);
      if ( v49 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*v49 + 8LL))(v49, v43);
      sub_A04D90((__int64 *)&v52);
      goto LABEL_32;
    }
    v30 = 0;
    v37 = sub_A05DE0(&v52);
    if ( v38 )
      v30 = v37;
    sub_A04D90((__int64 *)&v52);
    sub_A04D70((__int64 *)&v50);
LABEL_42:
    if ( ptr != v57 )
      free(ptr);
    return v30;
  }
  sub_FD9C70((__int64)&ptr, v9, a2, a3, a5, 1, 0);
  v34 = sub_A05DE0(&ptr);
  v30 = 0;
  if ( v35 )
    v30 = v34;
  sub_A04D90((__int64 *)&ptr);
  return v30;
}
