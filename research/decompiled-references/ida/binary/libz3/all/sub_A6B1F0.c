__int64 __fastcall sub_A6B1F0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  unsigned int v3; // eax
  unsigned int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned int v7; // r10d
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rdx
  char v17; // cl
  __int64 v18; // rdx
  __int64 v19; // r14
  int v20; // eax
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __int64 v23; // rax
  char *v24; // rsi
  __m128i v25; // xmm2
  void *v26; // rbp
  char *v27; // rax
  __int64 v28; // rdx
  __m128i v29; // xmm0
  char v30; // si
  void *v31; // rbp
  void *v32; // rbp
  __int64 v33; // rax
  void *v34; // r12
  __int64 v35; // rbp
  __int64 v36; // rbp
  __int64 v37; // rax
  unsigned int v38; // ebp
  __int64 v39; // r13
  __int64 v40; // r12
  void *v41; // r14
  char *v42; // r15
  char v43; // di
  __int64 v44; // rdx
  char v45; // di
  __m128i v46; // xmm0
  __int64 v47; // [rsp+0h] [rbp-3A8h]
  int v48; // [rsp+18h] [rbp-390h]
  __int64 v49; // [rsp+20h] [rbp-388h]
  char *v50; // [rsp+28h] [rbp-380h]
  __int64 v51; // [rsp+30h] [rbp-378h]
  __int64 v52; // [rsp+50h] [rbp-358h] BYREF
  int v53[2]; // [rsp+58h] [rbp-350h]
  char v54[8]; // [rsp+60h] [rbp-348h]
  int v55[2]; // [rsp+68h] [rbp-340h]
  int v56; // [rsp+70h] [rbp-338h] BYREF
  char v57; // [rsp+74h] [rbp-334h]
  __int64 v58; // [rsp+78h] [rbp-330h]
  int v59; // [rsp+80h] [rbp-328h] BYREF
  char v60; // [rsp+84h] [rbp-324h]
  __int64 v61; // [rsp+88h] [rbp-320h]
  __int32 v62; // [rsp+90h] [rbp-318h] BYREF
  char v63; // [rsp+94h] [rbp-314h]
  __int64 v64; // [rsp+98h] [rbp-310h]
  int v65; // [rsp+A0h] [rbp-308h] BYREF
  char v66; // [rsp+A4h] [rbp-304h]
  __m128i v67; // [rsp+A8h] [rbp-300h] BYREF
  __int64 v68; // [rsp+B8h] [rbp-2F0h]
  int v69; // [rsp+C0h] [rbp-2E8h] BYREF
  char v70; // [rsp+C4h] [rbp-2E4h]
  __m128i v71; // [rsp+C8h] [rbp-2E0h] BYREF
  void *ptr; // [rsp+E0h] [rbp-2C8h] BYREF
  int v73[2]; // [rsp+E8h] [rbp-2C0h]
  char v74[4]; // [rsp+F0h] [rbp-2B8h] BYREF
  char v75; // [rsp+F4h] [rbp-2B4h]
  int v76[2]; // [rsp+F8h] [rbp-2B0h]

  v2 = a1;
  v3 = sub_9E58B0(a1, a2);
  if ( !(_BYTE)v3 )
    return 1;
  v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 716LL);
  if ( !(_BYTE)v4 )
  {
    v5 = *a2;
    if ( *a2 )
    {
      v6 = v5 + 40LL * *(unsigned int *)(v5 - 4);
      if ( v5 != v6 )
      {
        v7 = 0;
        do
        {
          v9 = *(unsigned int *)(v5 + 32);
          if ( (_DWORD)v9 != -1 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(v2 + 592) + 4 * v9 + 3) & 0x40) != 0 )
            {
              v8 = v7;
              v4 = v3;
              if ( (_BYTE)v7 )
                return v8;
            }
            else
            {
              v8 = v4;
              v7 = v3;
              if ( (_BYTE)v4 )
                return v8;
            }
          }
          v5 += 40;
        }
        while ( v6 != v5 );
      }
    }
  }
  v52 = 0;
  *(_QWORD *)v53 = 0;
  *(_QWORD *)v54 = 1;
  *(_QWORD *)v55 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v52, &qword_1C7F280);
  v11 = *a2;
  if ( *a2 )
  {
    v12 = v11 + 40LL * *(unsigned int *)(v11 - 4);
    if ( v11 != v12 )
    {
      v13 = *a2;
      while ( 1 )
      {
        v14 = *(unsigned int *)(v13 + 32);
        if ( (_DWORD)v14 != -1 && (*(_BYTE *)(*(_QWORD *)(v2 + 592) + 4 * v14 + 3) & 0x40) == 0 )
          break;
        v13 += 40;
        if ( v12 == v13 )
          goto LABEL_18;
      }
      ptr = v74;
      *(_QWORD *)v73 = 0x1000000000LL;
LABEL_21:
      v47 = v11 + 40LL * *(unsigned int *)(v11 - 4);
      if ( v47 != v11 )
      {
        v19 = v11;
        while ( 1 )
        {
          v33 = *(unsigned int *)(v19 + 32);
          if ( (_DWORD)v33 != -1 )
            break;
LABEL_28:
          v19 += 40;
          if ( v47 == v19 )
            goto LABEL_19;
        }
        v34 = qword_1C7F2C0;
        v35 = **(_QWORD **)(*(_QWORD *)(v2 + 32) + 8 * v33);
        v57 &= 0xFCu;
        v60 &= 0xFCu;
        v56 = 0;
        v58 = 0;
        v59 = 1;
        v61 = 0;
        if ( (*(_BYTE *)(v19 + 4) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v56, v19);
          if ( (*(_BYTE *)(v19 + 20) & 1) != 0 )
            goto LABEL_32;
        }
        else
        {
          v56 = *(_DWORD *)v19;
          if ( (*(_BYTE *)(v19 + 20) & 1) != 0 )
          {
LABEL_32:
            sub_182C690(v34, &v59, v19 + 16);
            goto LABEL_25;
          }
        }
        v20 = *(_DWORD *)(v19 + 16);
        v60 &= ~1u;
        v59 = v20;
LABEL_25:
        sub_3EBE30((__int64)&v62, (__int64)&v56, (__int64)&v52);
        v21 = _mm_loadl_epi64(&v67);
        v22 = (unsigned int)v73[0];
        v67.m128i_i64[0] = 0;
        v67.m128i_i32[2] = v62;
        v71 = _mm_unpacklo_epi64(v21, (__m128i)(unsigned __int64)v35);
        v67.m128i_i8[12] = v63 & 3 | v67.m128i_i8[12] & 0xFC;
        v23 = v64;
        v64 = 0;
        v68 = v23;
        v69 = v65;
        v70 = v66 & 3 | v70 & 0xFC;
        if ( v73[0] >= (unsigned int)v73[1] )
        {
          v36 = (unsigned int)(2 * v73[1]);
          v37 = sub_186B270(40 * v36);
          v22 = (unsigned int)v73[0];
          v24 = (char *)v37;
          if ( v73[0] )
          {
            v49 = v19;
            v50 = (char *)v37;
            v51 = v2;
            v48 = v36;
            v38 = 0;
            v39 = 0;
            v40 = v37;
            do
            {
              v41 = qword_1C7F2C0;
              ++v38;
              v40 += 40;
              v42 = (char *)ptr + v39;
              v39 += 40;
              v43 = v42[4];
              *(_DWORD *)(v40 - 40) = *(_DWORD *)v42;
              *(_BYTE *)(v40 - 36) = v43 & 3 | *(_BYTE *)(v40 - 36) & 0xFC;
              v44 = *((_QWORD *)v42 + 1);
              *((_QWORD *)v42 + 1) = 0;
              *(_QWORD *)(v40 - 32) = v44;
              LODWORD(v44) = *((_DWORD *)v42 + 4);
              v45 = v42[20];
              v46 = _mm_loadu_si128((const __m128i *)(v42 + 24));
              *((_QWORD *)v42 + 3) = 0;
              *(_DWORD *)(v40 - 24) = v44;
              LOBYTE(v44) = *(_BYTE *)(v40 - 20);
              *(__m128i *)(v40 - 16) = v46;
              *(_BYTE *)(v40 - 20) = v45 & 3 | v44 & 0xFC;
              sub_182CBA0(v41, v42);
              sub_182CBA0(v41, v42 + 16);
              v22 = (unsigned int)v73[0];
            }
            while ( v38 < v73[0] );
            LODWORD(v36) = v48;
            v19 = v49;
            v24 = v50;
            v2 = v51;
          }
          if ( ptr && ptr != v74 )
          {
            sub_186B220(ptr);
            v22 = (unsigned int)v73[0];
          }
          v73[1] = v36;
          v35 = v71.m128i_i64[1];
          ptr = v24;
        }
        else
        {
          v24 = (char *)ptr;
        }
        v25 = (__m128i)(unsigned __int64)v35;
        v26 = qword_1C7F2C0;
        v27 = &v24[40 * v22];
        *(_DWORD *)v27 = v67.m128i_i32[2];
        v27[4] = v67.m128i_i8[12] & 3 | v27[4] & 0xFC;
        v28 = v68;
        v68 = 0;
        *((_QWORD *)v27 + 1) = v28;
        v29 = _mm_loadl_epi64(&v71);
        v71.m128i_i64[0] = 0;
        *((_DWORD *)v27 + 4) = v69;
        v30 = v70;
        LOBYTE(v28) = v27[20] & 0xFC;
        *(__m128i *)(v27 + 24) = _mm_unpacklo_epi64(v29, v25);
        v27[20] = v30 & 3 | v28;
        ++v73[0];
        sub_182CBA0(v26, &v67.m128i_u64[1]);
        sub_182CBA0(v26, &v69);
        v31 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v62);
        sub_182CBA0(v31, &v65);
        v32 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v56);
        sub_182CBA0(v32, &v59);
        goto LABEL_28;
      }
      goto LABEL_19;
    }
  }
LABEL_18:
  sub_99F650(&v67.m128i_i32[2], a2);
  BYTE4(ptr) &= 0xFCu;
  v75 &= 0xFCu;
  LODWORD(ptr) = 0;
  *(_QWORD *)v73 = 0;
  *(_DWORD *)v74 = 1;
  *(_QWORD *)v76 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&ptr, &v67.m128i_i32[2]);
  v15 = (int)ptr;
  LODWORD(ptr) = v52;
  LODWORD(v52) = v15;
  v16 = *(_QWORD *)v73;
  *(_QWORD *)v73 = *(_QWORD *)v53;
  *(_QWORD *)v53 = v16;
  v17 = BYTE4(ptr) & 1;
  LOBYTE(v16) = BYTE4(v52) & 0xFC | BYTE4(ptr) & 2;
  BYTE4(ptr) = BYTE4(v52) & 1 | BYTE4(ptr) & 0xFC | BYTE4(v52) & 2;
  BYTE4(v52) = v17 | v16;
  LODWORD(v16) = *(_DWORD *)v74;
  *(_DWORD *)v74 = *(_DWORD *)v54;
  *(_DWORD *)v54 = v16;
  v18 = *(_QWORD *)v76;
  *(_QWORD *)v76 = *(_QWORD *)v55;
  *(_QWORD *)v55 = v18;
  LOBYTE(v18) = v75 & 1 | v54[4] & 0xFC | v75 & 2;
  v75 = v54[4] & 1 | v75 & 0xFC | v54[4] & 2;
  v54[4] = v18;
  sub_25A130((char *)&ptr);
  sub_25A130(&v67.m128i_i8[8]);
  v11 = *a2;
  ptr = v74;
  *(_QWORD *)v73 = 0x1000000000LL;
  if ( v11 )
    goto LABEL_21;
LABEL_19:
  v8 = sub_A6AE40(v2, (__int64 *)&ptr);
  sub_A3C490((char **)&ptr);
  sub_25A130((char *)&v52);
  return v8;
}

