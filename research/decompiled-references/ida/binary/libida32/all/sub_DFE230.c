__int64 __fastcall sub_DFE230(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  _QWORD *v3; // rdi
  __int64 (__fastcall *v4)(__int64); // rax
  _QWORD *v5; // rdi
  unsigned __int8 (*v6)(void); // rdx
  _QWORD *v7; // rdi
  _QWORD **v8; // rdi
  char v9; // al
  __int64 result; // rax
  __m128 *v11; // r12
  _QWORD *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r13
  unsigned __int8 **v20; // rax
  unsigned __int8 **v21; // rbp
  unsigned __int8 *v22; // rax
  __int64 v23; // rdx
  unsigned __int8 *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int8 *v27; // r13
  __int64 v28; // rax
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rax
  unsigned __int8 *v34; // rdx
  int v35; // eax
  __int64 v36; // rax
  unsigned __int64 v37; // rdi
  unsigned __int8 *v38; // rsi
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  unsigned __int8 **v44; // r12
  __int64 v45; // rbp
  void *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // r8
  __int64 v50; // rsi
  unsigned int v51; // r14d
  __int64 v52; // rbx
  unsigned __int8 **v53; // r12
  __int64 v54; // rbp
  void *v55; // rdi
  unsigned __int64 v56; // [rsp+0h] [rbp-78h]
  int v57; // [rsp+Ch] [rbp-6Ch]
  unsigned int v58; // [rsp+10h] [rbp-68h]
  unsigned __int8 *v59; // [rsp+10h] [rbp-68h]
  __int64 v60; // [rsp+18h] [rbp-60h]
  unsigned __int64 v61; // [rsp+18h] [rbp-60h]
  __m128 *v62; // [rsp+20h] [rbp-58h]
  __int64 v63; // [rsp+20h] [rbp-58h]
  __m128 *v64; // [rsp+28h] [rbp-50h]
  __m128 v65[4]; // [rsp+30h] [rbp-48h] BYREF

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(_QWORD **)(a1 + 24);
  v57 = v2;
  v4 = *(__int64 (__fastcall **)(__int64))(*v3 + 24LL);
  if ( v4 != sub_CCC510 )
    goto LABEL_28;
  v5 = (_QWORD *)v3[3];
  v6 = *(unsigned __int8 (**)(void))(*v5 + 24LL);
  if ( (char *)v6 != (char *)v4 )
    goto LABEL_9;
  v7 = (_QWORD *)v5[3];
  v4 = *(__int64 (__fastcall **)(__int64))(*v7 + 24LL);
  if ( (char *)v4 != (char *)v6 )
  {
LABEL_28:
    v9 = ((__int64 (*)(void))v4)();
LABEL_6:
    if ( v9 )
      goto LABEL_7;
    goto LABEL_10;
  }
  v8 = (_QWORD **)v7[3];
  v6 = (unsigned __int8 (*)(void))(*v8)[3];
  if ( (char *)v6 == (char *)v4 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v8[3] + 24LL))(v8[3]);
    goto LABEL_6;
  }
LABEL_9:
  if ( v6() )
    goto LABEL_7;
LABEL_10:
  v11 = v65;
  v12 = (_QWORD *)(*(_QWORD *)(v1 + 48) + 80LL * *(unsigned int *)(v1 + 64));
  sub_D784E0(v65, v12, v12, v1 + 48, 1);
  v56 = v65[0].m128_u64[0];
  if ( *(_DWORD *)(v1 + 56) )
  {
    v13 = *(_QWORD *)(v1 + 48);
    sub_D784E0(v65, (_QWORD *)v13, (_QWORD *)(v13 + 80LL * *(unsigned int *)(v1 + 64)), v1 + 48, 0);
  }
  else
  {
    v13 = *(_QWORD *)(v1 + 48) + 80LL * *(unsigned int *)(v1 + 64);
    sub_D784E0(v65, (_QWORD *)v13, (_QWORD *)v13, v1 + 48, 1);
  }
  v18 = v65[0].m128_u64[1];
  v17 = v65[0].m128_u64[0];
  if ( v65[0].m128_u64[0] == v56 )
  {
LABEL_7:
    result = 1;
    if ( v57 )
      return (unsigned int)~*(unsigned __int8 *)(sub_E0E500(v1) + 1) >> 7;
    return result;
  }
  do
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)v17;
      v13 = (unsigned int)sub_BDCD00(*(_QWORD *)v17, v13, v14, v15, v16);
      v20 = (unsigned __int8 **)sub_E0FDF0(v1, v13, 2441, 0);
      v21 = v20;
      if ( !v20 )
        goto LABEL_18;
      v22 = *v20;
      v23 = *(unsigned int *)(v17 + 16);
      if ( !v22 )
      {
        v38 = v21[1];
        v39 = *((_DWORD *)v38 + 3744);
        if ( v39 )
        {
          v47 = (unsigned int)(v39 - 1);
          *((_DWORD *)v38 + 3744) = v47;
          v22 = *(unsigned __int8 **)&v38[8 * v47 + 14848];
          v48 = *((unsigned int *)v22 + 134);
          *v22 = 0;
          v49 = *((_QWORD *)v22 + 66);
          *((_DWORD *)v22 + 106) = 0;
          v50 = v49 + (v48 << 6);
          if ( v49 != v50 )
          {
            v61 = v17;
            v51 = v23;
            v63 = v1;
            v52 = v50;
            v64 = v11;
            v53 = v21;
            v54 = v49;
            do
            {
              while ( 1 )
              {
                v52 -= 64;
                v55 = *(void **)(v52 + 24);
                if ( v55 == (void *)(v52 + 40) )
                  break;
                v59 = v22;
                operator delete(v55);
                v22 = v59;
                if ( v54 == v52 )
                  goto LABEL_51;
              }
            }
            while ( v54 != v52 );
LABEL_51:
            v21 = v53;
            v23 = v51;
            v1 = v63;
            v17 = v61;
            v11 = v64;
          }
          *((_DWORD *)v22 + 134) = 0;
        }
        else
        {
          v58 = *(_DWORD *)(v17 + 16);
          v22 = (unsigned __int8 *)operator new(0x3A0u);
          *v22 = 0;
          *((_QWORD *)v22 + 12) = v22 + 112;
          *((_QWORD *)v22 + 16) = v22 + 144;
          *((_QWORD *)v22 + 20) = v22 + 176;
          *((_QWORD *)v22 + 24) = v22 + 208;
          *((_QWORD *)v22 + 28) = v22 + 240;
          *((_QWORD *)v22 + 32) = v22 + 272;
          *((_QWORD *)v22 + 36) = v22 + 304;
          *((_QWORD *)v22 + 40) = v22 + 336;
          *((_QWORD *)v22 + 44) = v22 + 368;
          *((_QWORD *)v22 + 48) = v22 + 400;
          *((_QWORD *)v22 + 52) = v22 + 432;
          *((_QWORD *)v22 + 13) = 0;
          v22[112] = 0;
          *((_QWORD *)v22 + 17) = 0;
          v22[144] = 0;
          *((_QWORD *)v22 + 21) = 0;
          v22[176] = 0;
          *((_QWORD *)v22 + 25) = 0;
          v22[208] = 0;
          *((_QWORD *)v22 + 29) = 0;
          v22[240] = 0;
          *((_QWORD *)v22 + 33) = 0;
          v22[272] = 0;
          *((_QWORD *)v22 + 37) = 0;
          v22[304] = 0;
          *((_QWORD *)v22 + 41) = 0;
          v22[336] = 0;
          *((_QWORD *)v22 + 45) = 0;
          v22[368] = 0;
          *((_QWORD *)v22 + 49) = 0;
          v22[400] = 0;
          *((_QWORD *)v22 + 53) = 0x800000000LL;
          v23 = v58;
          *((_QWORD *)v22 + 66) = v22 + 544;
          *((_QWORD *)v22 + 67) = 0x600000000LL;
        }
        *v21 = v22;
      }
      v22[*v22 + 1] = 3;
      v24 = *v21;
      v25 = **v21;
      *v24 = v25 + 1;
      *(_QWORD *)&v24[8 * v25 + 16] = v23 - 1;
      v26 = sub_EC8B80(v19);
      v27 = *v21;
      v13 = v26;
      if ( !*v21 )
      {
        v34 = v21[1];
        v35 = *((_DWORD *)v34 + 3744);
        if ( v35 )
        {
          v40 = (unsigned int)(v35 - 1);
          *((_DWORD *)v34 + 3744) = v40;
          v27 = *(unsigned __int8 **)&v34[8 * v40 + 14848];
          v41 = *((unsigned int *)v27 + 134);
          *v27 = 0;
          v16 = *((_QWORD *)v27 + 66);
          *((_DWORD *)v27 + 106) = 0;
          v42 = v16 + (v41 << 6);
          if ( v16 == v42 )
          {
            v30 = 1;
            v28 = 0;
          }
          else
          {
            v60 = v1;
            v43 = v42;
            v62 = v11;
            v44 = v21;
            v45 = v16;
            do
            {
              while ( 1 )
              {
                v43 -= 64;
                v46 = *(void **)(v43 + 24);
                if ( v46 == (void *)(v43 + 40) )
                  break;
                operator delete(v46);
                if ( v45 == v43 )
                  goto LABEL_43;
              }
            }
            while ( v45 != v43 );
LABEL_43:
            v28 = *((unsigned int *)v27 + 106);
            v21 = v44;
            v1 = v60;
            v11 = v62;
            v30 = v28 + 1;
          }
          *((_DWORD *)v27 + 134) = 0;
          v37 = *((unsigned int *)v27 + 107);
        }
        else
        {
          v36 = operator new(0x3A0u);
          v37 = 8;
          v30 = 1;
          v27 = (unsigned __int8 *)v36;
          *(_BYTE *)v36 = 0;
          *(_QWORD *)(v36 + 96) = v36 + 112;
          *(_QWORD *)(v36 + 128) = v36 + 144;
          *(_QWORD *)(v36 + 160) = v36 + 176;
          *(_QWORD *)(v36 + 192) = v36 + 208;
          *(_QWORD *)(v36 + 224) = v36 + 240;
          *(_QWORD *)(v36 + 256) = v36 + 272;
          *(_QWORD *)(v36 + 288) = v36 + 304;
          *(_QWORD *)(v36 + 320) = v36 + 336;
          *(_QWORD *)(v36 + 352) = v36 + 368;
          *(_QWORD *)(v36 + 384) = v36 + 400;
          *(_QWORD *)(v36 + 416) = v36 + 432;
          *(_QWORD *)(v36 + 104) = 0;
          *(_BYTE *)(v36 + 112) = 0;
          *(_QWORD *)(v36 + 136) = 0;
          *(_BYTE *)(v36 + 144) = 0;
          *(_QWORD *)(v36 + 168) = 0;
          *(_BYTE *)(v36 + 176) = 0;
          *(_QWORD *)(v36 + 200) = 0;
          *(_BYTE *)(v36 + 208) = 0;
          *(_QWORD *)(v36 + 232) = 0;
          *(_BYTE *)(v36 + 240) = 0;
          *(_QWORD *)(v36 + 264) = 0;
          *(_BYTE *)(v36 + 272) = 0;
          *(_QWORD *)(v36 + 296) = 0;
          *(_BYTE *)(v36 + 304) = 0;
          *(_QWORD *)(v36 + 328) = 0;
          *(_BYTE *)(v36 + 336) = 0;
          *(_QWORD *)(v36 + 360) = 0;
          *(_BYTE *)(v36 + 368) = 0;
          *(_QWORD *)(v36 + 392) = 0;
          *(_BYTE *)(v36 + 400) = 0;
          *(_QWORD *)(v36 + 424) = 0x800000000LL;
          *(_QWORD *)(v36 + 528) = v36 + 544;
          *(_QWORD *)(v36 + 536) = 0x600000000LL;
          v28 = 0;
        }
        *v21 = v27;
        v65[0].m128_u64[0] = v13;
        v65[0].m128_i8[8] = 1;
        if ( v37 >= v30 )
          goto LABEL_17;
LABEL_35:
        v13 = (__int64)(v27 + 432);
        sub_22134E0(v27 + 416, v27 + 432, v30, 12);
        v28 = *((unsigned int *)v27 + 106);
        goto LABEL_17;
      }
      v28 = *((unsigned int *)v27 + 106);
      v29 = *((unsigned int *)v27 + 107);
      v65[0].m128_u64[0] = v13;
      v65[0].m128_i8[8] = 1;
      v30 = v28 + 1;
      if ( v29 < v28 + 1 )
        goto LABEL_35;
LABEL_17:
      v31 = *((_QWORD *)v27 + 52) + 12 * v28;
      *(_QWORD *)v31 = v11->m128_u64[0];
      *(_DWORD *)(v31 + 8) = v11->m128_i32[2];
      ++*((_DWORD *)v27 + 106);
LABEL_18:
      v14 = v17 + 80;
      if ( v17 + 80 != v18 )
        break;
LABEL_30:
      v17 = v18;
      if ( v56 == v18 )
        goto LABEL_26;
    }
    v32 = *(_QWORD *)(v17 + 80);
    if ( v32 == -4096 || v32 == -8192 )
    {
      v33 = (__int64 *)(v17 + 160);
      while ( 1 )
      {
        v17 = (unsigned __int64)v33;
        if ( v33 == (__int64 *)v18 )
          goto LABEL_30;
        v14 = *v33;
        v33 += 10;
        if ( v14 != -8192 && v14 != -4096 )
          goto LABEL_25;
      }
    }
    v17 += 80LL;
LABEL_25:
    ;
  }
  while ( v56 != v17 );
LABEL_26:
  result = 1;
  if ( v57 )
    return (unsigned int)~*(unsigned __int8 *)(sub_E0E500(v1) + 1) >> 7;
  return result;
}

