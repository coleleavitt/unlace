void __fastcall sub_A94EF0(
        __int64 a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64),
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __m128i *v6; // rcx
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rdi
  __m128i si128; // xmm0
  __m128i *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __m128 *v14; // rdx
  unsigned __int64 *v15; // rbp
  __int64 *v16; // rdi
  __int32 v17; // eax
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rbx
  _QWORD *v24; // r14
  _QWORD *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // r8
  __int64 v30; // r9
  __int64 v31; // r13
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // r15
  __int64 *v36; // rdi
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rsi
  _QWORD *v41; // rdi
  __int64 v42; // rdx
  char v43; // di
  unsigned int v44; // ecx
  __int64 *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rax
  unsigned __int64 *v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 *v53; // rsi
  _QWORD *v54; // rdx
  __int64 v55; // rax
  int v56; // r10d
  __int64 *v57; // rax
  unsigned int v58; // esi
  __int64 v59; // [rsp+0h] [rbp-B8h] BYREF
  __m128 *v60; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v61; // [rsp+10h] [rbp-A8h]
  _QWORD *v62; // [rsp+18h] [rbp-A0h]
  void (__fastcall *v63)(__int64, __int64); // [rsp+20h] [rbp-98h]
  __int64 v64; // [rsp+28h] [rbp-90h]
  __int64 v65; // [rsp+38h] [rbp-80h] BYREF
  __int64 *v66; // [rsp+40h] [rbp-78h] BYREF
  __int64 v67; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v68; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v69; // [rsp+60h] [rbp-58h]

  v64 = a4;
  v6 = (__m128i *)(&v59 + 14);
  v63 = a3;
  v7 = &v68;
  v67 = 1;
  v8 = ((unsigned __int64)((char *)v6 - (char *)&v68) >> 3) + 1;
  if ( &v68 == (_QWORD **)v6 )
    goto LABEL_5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
  v10 = (__m128i *)&v68;
  v6 = (__m128i *)&(&v68)[2 * (v8 >> 1)];
  do
    *v10++ = si128;
  while ( v6 != v10 );
  v7 = &(&v68)[v8 & 0xFFFFFFFFFFFFFFFELL];
  if ( v8 != (v8 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_5:
    *v7 = -4096;
  v11 = *(_QWORD *)(a2 + 112);
  v12 = *(_QWORD *)(v11 + 104);
  v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v12 & 1) == 0 )
  {
    v49 = (unsigned __int64 *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v12 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v50 = v12 & 2;
      v15 = v49;
      if ( !(_DWORD)v50 )
        goto LABEL_13;
      v13 = sub_6C1EC0(v49, *(_QWORD *)(a2 + 112), v50, (__int64)v6, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
      v12 = v13 | 1;
      *(_QWORD *)(v11 + 104) = v13 | 1;
    }
  }
  v14 = (__m128 *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
  v15 = (unsigned __int64 *)v14;
  if ( v13 )
  {
    if ( (v13 & 4) != 0 )
    {
      v15 = nullptr;
      if ( v14 )
      {
        v16 = (__int64 *)v14->m128_u64[0];
        v17 = *(_DWORD *)(v14->m128_u64[0] + 12);
        if ( v14->m128_i32[2] != v17 )
        {
          v14->m128_i32[2] = v17;
          v18 = *v16;
          v60 = v14;
          (*(void (__fastcall **)(__int64 *, __int64))(v18 + 152))(v16, v11);
          v14 = v60;
        }
        v15 = (unsigned __int64 *)v14[1].m128_u64[0];
      }
    }
  }
LABEL_13:
  v19 = (_QWORD *)(v15[2] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v15[2] & 4) != 0 )
    v19 = (_QWORD *)*v19;
  v20 = sub_B6AD60(v19);
  v21 = sub_B70930(v20, v15[5]);
  if ( v21 )
  {
    v22 = v21;
    v60 = (__m128 *)&v66;
    v62 = &v68;
    while ( 1 )
    {
      v23 = v22;
      v24 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
      v25 = v24;
      v26 = (v23 >> 2) & 1;
      if ( (_DWORD)v26 )
      {
        v25 = nullptr;
        if ( v24 )
          v25 = (_QWORD *)*v24;
      }
      v27 = sub_B681F0(v25);
      v31 = *(_QWORD *)(v27 + 112);
      v32 = *(_QWORD *)(v31 + 104);
      if ( (v32 & 1) != 0 )
        break;
      v41 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v32 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        goto LABEL_30;
      v42 = *(_QWORD *)(v31 + 104) & 2LL;
      v35 = (__int64)v41;
      if ( (_DWORD)v42 )
      {
        v33 = sub_6C1EC0(v41, *(_QWORD *)(v27 + 112), v42, v28, (__int64)v29, v30) & 0xFFFFFFFFFFFFFFFELL;
        v32 = v33 | 1;
        *(_QWORD *)(v31 + 104) = v33 | 1;
        goto LABEL_22;
      }
LABEL_28:
      if ( !v35 )
        goto LABEL_30;
      v39 = *(_QWORD *)&byte_8[v15[6] & 0xFFFFFFFFFFFFFFF0LL];
      v40 = *(_QWORD *)&byte_8[*(_QWORD *)(v35 + 48) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v40 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v40 | (unsigned __int8)*(_QWORD *)(v35 + 48)) & 7) != (v39 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v39 | (unsigned __int8)v15[6]) & 7) )
        goto LABEL_30;
      v65 = v35;
      v43 = v67 & 1;
      if ( (v67 & 1) == 0 )
      {
        v48 = v69;
        if ( !v69 )
        {
          v66 = nullptr;
          v51 = ((unsigned int)v67 >> 1) + 1;
          goto LABEL_50;
        }
        v30 = v69 - 1;
        v29 = v68;
        v44 = v30 & (((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4));
        v45 = &v68[v44];
        v46 = *v45;
        if ( v35 == *v45 )
          goto LABEL_45;
        goto LABEL_60;
      }
      v44 = ((unsigned __int8)((unsigned int)v35 >> 4) ^ (unsigned __int8)((unsigned int)v35 >> 9)) & 3;
      v45 = &v62[((unsigned __int8)((unsigned int)v35 >> 4) ^ (unsigned __int8)((unsigned int)v35 >> 9)) & 3];
      v46 = *v45;
      if ( v35 != *v45 )
      {
        v29 = v62;
        v30 = 3;
LABEL_60:
        v56 = 1;
        v57 = nullptr;
        if ( v46 == -4096 )
        {
LABEL_61:
          v66 = v45;
          v51 = ((unsigned int)v67 >> 1) + 1;
          if ( v43 )
          {
            v52 = 12;
            LODWORD(v48) = 4;
LABEL_51:
            if ( 4 * (int)v51 >= (unsigned int)v52 )
            {
              v58 = 2 * v48;
            }
            else
            {
              v52 = v35;
              if ( (int)v48 - HIDWORD(v67) - (int)v51 > (unsigned int)v48 >> 3 )
              {
LABEL_53:
                v53 = v66;
                LODWORD(v67) = v67 & 1 | (2 * v51);
                if ( *v66 != -4096 )
                  --HIDWORD(v67);
                *v66 = v52;
                if ( (v67 & 1) != 0 )
                {
                  v55 = 4;
                  v54 = &v68;
                }
                else
                {
                  v54 = v68;
                  v55 = v69;
                }
                sub_A67EE0(v60, v53, &v54[v55], (__int64)&v67, 1);
                v63(v64, v35);
                goto LABEL_30;
              }
              v58 = v48;
            }
            sub_A94990((__int64)&v67, v58, v51, v52, (__int64)v29, v30);
            sub_A626C0((__int64)&v67, &v65, v60);
            v52 = v65;
            LODWORD(v51) = ((unsigned int)v67 >> 1) + 1;
            goto LABEL_53;
          }
          LODWORD(v48) = v69;
LABEL_50:
          v52 = (unsigned int)(3 * v48);
          goto LABEL_51;
        }
        while ( 1 )
        {
          if ( v46 == -8192 && !v57 )
            v57 = v45;
          v44 = v30 & (v56 + v44);
          v45 = &v29[v44];
          v46 = *v45;
          if ( v35 == *v45 )
            break;
          if ( v46 == -4096 )
          {
            if ( v57 )
              v45 = v57;
            goto LABEL_61;
          }
          ++v56;
        }
        if ( v43 )
        {
          v47 = 4;
          v29 = &v68;
          goto LABEL_42;
        }
        v29 = v68;
        v48 = v69;
LABEL_45:
        v47 = v48;
        goto LABEL_42;
      }
      v29 = v62;
      v47 = 4;
LABEL_42:
      sub_A67EE0(v60, v45, &v29[v47], (__int64)&v67, 1);
LABEL_30:
      if ( (_DWORD)v26 )
      {
        if ( v24 )
        {
          v22 = v24[1];
          if ( v22 )
            continue;
        }
      }
      goto LABEL_33;
    }
    v33 = v32 & 0xFFFFFFFFFFFFFFFELL;
LABEL_22:
    v34 = v32 & 0xFFFFFFFFFFFFFFF8LL;
    v35 = v34;
    if ( v33 && (v33 & 4) != 0 )
    {
      if ( !v34 )
        goto LABEL_30;
      v36 = *(__int64 **)v34;
      v37 = *(_DWORD *)(*(_QWORD *)v34 + 12LL);
      if ( *(_DWORD *)(v34 + 8) != v37 )
      {
        *(_DWORD *)(v34 + 8) = v37;
        v38 = *v36;
        v61 = v34;
        (*(void (__fastcall **)(__int64 *, __int64))(v38 + 152))(v36, v31);
        v34 = v61;
      }
      v35 = *(_QWORD *)(v34 + 16);
    }
    goto LABEL_28;
  }
LABEL_33:
  if ( (v67 & 1) == 0 )
    operator delete();
}

