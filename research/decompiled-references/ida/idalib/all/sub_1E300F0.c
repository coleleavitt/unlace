unsigned __int64 __fastcall sub_1E300F0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __m128i si128; // xmm0
  __int64 v7; // rax
  _DWORD *v8; // rdi
  __int64 (*v9)(void); // rax
  int v10; // edx
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  char *v16; // rbp
  __int64 *v17; // r15
  unsigned __int64 v18; // rbp
  char *v20; // r8
  __int64 v21; // rax
  __int64 v22; // r9
  unsigned __int64 *v23; // rbp
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 *v26; // r13
  __int64 v27; // rcx
  unsigned __int64 v28; // r15
  __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r10
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rsi
  int v46; // ecx
  char v47; // dl
  __m128i *v48; // rdi
  char *v49; // rbp
  char *v50; // r15
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // [rsp+18h] [rbp-190h]
  __int64 v58; // [rsp+20h] [rbp-188h]
  char v59; // [rsp+28h] [rbp-180h]
  __int64 v60; // [rsp+30h] [rbp-178h]
  int v61; // [rsp+38h] [rbp-170h]
  int v62; // [rsp+3Ch] [rbp-16Ch]
  __int64 v63; // [rsp+40h] [rbp-168h]
  __int64 v64; // [rsp+48h] [rbp-160h]
  unsigned __int64 v65; // [rsp+58h] [rbp-150h]
  unsigned __int64 v66; // [rsp+60h] [rbp-148h]
  __int64 v67; // [rsp+68h] [rbp-140h]
  _OWORD v68[2]; // [rsp+70h] [rbp-138h] BYREF
  __int64 v69; // [rsp+98h] [rbp-110h]
  void *src; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-F0h]
  _BYTE v72[32]; // [rsp+C0h] [rbp-E8h] BYREF
  void *v73[2]; // [rsp+E0h] [rbp-C8h] BYREF
  _BYTE v74[32]; // [rsp+F0h] [rbp-B8h] BYREF
  void *ptr; // [rsp+110h] [rbp-98h] BYREF
  __m128i v76; // [rsp+118h] [rbp-90h]
  _BYTE v77[24]; // [rsp+128h] [rbp-80h] BYREF
  void *v78; // [rsp+140h] [rbp-68h] BYREF
  __int64 v79; // [rsp+148h] [rbp-60h]
  _BYTE v80[88]; // [rsp+150h] [rbp-58h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v77[16] = 0;
  src = v72;
  v71 = 0x400000000LL;
  v73[1] = (void *)0x400000000LL;
  ptr = v77;
  v7 = *a1;
  v73[0] = v74;
  v57 = v7;
  v76 = si128;
  sub_18C79B0(v7, 0, 0, 4);
  v8 = *(_DWORD **)(a2 + 24);
  v9 = *(__int64 (**)(void))(*(_QWORD *)v8 + 16LL);
  if ( (char *)v9 == (char *)sub_B70840 )
    v10 = v8[6];
  else
    v10 = v9();
  v11 = sub_B978D0(*(_QWORD **)(*a1 + 248), *(_QWORD *)(*a1 + 544), v10);
  v12 = *a1;
  v63 = (__int64)v11;
  v13 = (__int64)(v11 + 5);
  if ( !v11 )
    v13 = 0;
  v58 = *(_QWORD *)(v12 + 544);
  v14 = *(_QWORD *)(v12 + 512);
  *(_QWORD *)(v12 + 544) = v13;
  v60 = v14;
  v15 = *(_QWORD *)(v12 + 9944);
  *(_QWORD *)(v12 + 512) = 0;
  v69 = v15;
  v61 = *(_DWORD *)(v12 + 80);
  v62 = *(_DWORD *)(v12 + 2632);
  *(_DWORD *)(v12 + 80) = *(_DWORD *)(v12 + 40);
  *(_DWORD *)(v12 + 2632) = *(_DWORD *)(v12 + 3688);
  v59 = sub_1E2FA80(
          a1,
          (__int64 *)(a2 + 48),
          *(_DWORD *)(a2 + 16),
          0,
          0,
          (__int64)v73,
          (__m128)si128,
          a4,
          (__int64)&src,
          (__int64)&ptr);
  v16 = (char *)src + 8 * (unsigned int)v71;
  v17 = (__int64 *)src;
  if ( v16 != src )
  {
    do
    {
      if ( *v17 )
        sub_B8C080(*v17, v13);
      ++v17;
    }
    while ( v16 != (char *)v17 );
  }
  v18 = 1;
  if ( v59 )
    goto LABEL_10;
  v20 = v80;
  v79 = 0x400000000LL;
  v21 = *(unsigned int *)(a2 + 16);
  v78 = v80;
  v22 = a2 + 8 * v21 + 48;
  v23 = (unsigned __int64 *)(v22 + 8LL * *(unsigned int *)(a2 + 20));
  if ( (unsigned __int64 *)v22 != v23 )
  {
    v24 = (unsigned __int64)v68;
    v64 = v13;
    v25 = 0;
    v26 = (unsigned __int64 *)v22;
    while ( 1 )
    {
      v28 = *v26;
      v29 = *(unsigned int *)*v26;
      if ( (_DWORD)v29 )
      {
        v35 = (unsigned int)(v29 - 1);
        if ( (unsigned int)v35 <= 1 )
        {
          v36 = 2;
          v37 = *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFFCLL;
          v38 = v37;
          if ( *(_DWORD *)(v28 + 40) != 1 )
          {
            v37 = sub_1E11560(
                    a1,
                    (unsigned __int16 *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFFCLL),
                    (__m128)si128,
                    a4,
                    v35,
                    v24,
                    2);
            if ( v37 == 1 )
              goto LABEL_53;
            if ( v37 )
            {
              v41 = *(_QWORD *)(*(_QWORD *)((v37 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v41 + 16) == 13
                && (v42 = *(unsigned __int16 *)(v41 + 18),
                    LOWORD(v42) = ((unsigned __int16)v42 >> 3) & 0x1FF,
                    (unsigned __int16)v42 > 0x1F1u) )
              {
                v43 = sub_1907C70(*a1, (_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFELL), si128, a4, v42, v39, v40, v22);
                if ( v43 == 1 )
                  goto LABEL_53;
                v37 = v43 & 0xFFFFFFFFFFFFFFFCLL;
                v36 = 0;
                v38 = v37;
              }
              else
              {
                v37 &= 0xFFFFFFFFFFFFFFFCLL;
                v38 = v37;
                v36 = v37 & 2;
              }
            }
            else
            {
              v38 = 0;
              v36 = 0;
            }
          }
          v44 = *(_QWORD *)(v28 + 24);
          si128 = 0;
          v68[0] = 0;
          v45 = v44 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v44 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            if ( (v44 & 4) != 0 )
            {
              BYTE8(v68[0]) = 1;
              *(_QWORD *)&v68[0] = v45 | 4;
            }
            else
            {
              v67 = v36;
              v66 = v38;
              v65 = v37;
              sub_A55640((unsigned __int64 *)v68, v45);
              BYTE8(v68[0]) = 1;
              v36 = v67;
              v38 = v66;
              v37 = v65;
            }
          }
          else
          {
            *(_QWORD *)&v68[0] = 0;
            BYTE8(v68[0]) = 1;
          }
          v46 = *(_DWORD *)(v28 + 16);
          v47 = *(_DWORD *)v28 == 1;
          v48 = (__m128i *)*a1;
          if ( v36 || !v37 )
            v28 = sub_19A4FC0((__int64)v48, v38, v47, v46, *(__int64 *)&v68[0], v22);
          else
            v28 = sub_19A54F0(v48, v38, v47, v46, *(__int64 *)&v68[0]);
          goto LABEL_23;
        }
        if ( !*(_BYTE *)(v28 + 24) )
        {
          v52 = sub_1E11560(a1, *(unsigned __int16 **)(v28 + 8), (__m128)si128, a4, v35, v24, (__int64)v20);
          if ( v52 == 1 )
          {
LABEL_53:
            v18 = 1;
            goto LABEL_54;
          }
          v28 = sub_19A52A0(*a1, (unsigned int *)(v52 & 0xFFFFFFFFFFFFFFFELL), v53, v54, v55, v56);
          goto LABEL_23;
        }
        if ( *(_DWORD *)(*a1 + 12632) )
        {
          v28 = sub_19A5060(
                  *a1,
                  *(_QWORD *)(v28 + 32),
                  *(_QWORD *)(v28 + 40),
                  *(__int64 **)(v28 + 16),
                  (__int64)v20,
                  v22);
          goto LABEL_23;
        }
      }
      else
      {
        if ( *(_DWORD *)(v28 + 16) != 1 )
        {
          v30 = sub_1E1F330(a1, *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF8LL, (__m128)si128, a4);
          if ( !v30 )
            goto LABEL_53;
          v28 = sub_19A4EC0(*a1, (unsigned __int64)v30, v31, v32, v33, v34);
          goto LABEL_23;
        }
        v27 = *(unsigned int *)(*a1 + 12632);
        if ( (_DWORD)v27 )
        {
          v28 = sub_19A4F40(*a1, *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF8LL, v29, v27, (__int64)v20, v22);
LABEL_23:
          if ( !v28 )
            goto LABEL_53;
          v25 = (unsigned int)v79;
        }
      }
      v24 = HIDWORD(v79);
      if ( v25 + 1 > (unsigned __int64)HIDWORD(v79) )
      {
        sub_2237220(&v78, v80, v25 + 1, 8);
        *((_QWORD *)v78 + (unsigned int)v79) = v28;
      }
      else
      {
        *((_QWORD *)v78 + v25) = v28;
      }
      ++v26;
      v25 = (unsigned int)(v79 + 1);
      LODWORD(v79) = v79 + 1;
      if ( v23 == v26 )
      {
        v49 = (char *)v78;
        v20 = (char *)v78 + 8 * v25;
        if ( v78 != v20 )
        {
          v50 = (char *)v78 + 8 * v25;
          do
          {
            if ( (unsigned int)(**(_DWORD **)v49 - 1) <= 1 )
            {
              v51 = *(_QWORD *)(*(_QWORD *)v49 + 24LL);
              if ( (v51 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (v51 & 4) == 0 )
                sub_B8C080(*(_QWORD *)((v51 & 0xFFFFFFFFFFFFFFF8LL) + 24), v64);
            }
            v49 += 8;
          }
          while ( v50 != v49 );
          v20 = (char *)v78;
          v25 = (unsigned int)v79;
        }
        goto LABEL_66;
      }
    }
  }
  v25 = 0;
LABEL_66:
  v18 = sub_C0F470(
          *(_QWORD **)(*a1 + 248),
          *(_DWORD *)(a2 + 4),
          v63,
          *(_DWORD *)(a2 + 32),
          (__int64 *)src,
          (unsigned int)v71,
          *(_DWORD *)(a2 + 36),
          v20,
          v25,
          *(_DWORD *)(a2 + 40));
LABEL_54:
  if ( v78 != v80 )
    free(v78);
LABEL_10:
  if ( v58 )
  {
    *(_QWORD *)(v12 + 544) = v58;
    *(_QWORD *)(v12 + 512) = v60;
    *(_QWORD *)(v12 + 9944) = v69;
    *(_DWORD *)(v12 + 80) = v61;
    *(_DWORD *)(v12 + 2632) = v62;
  }
  sub_190D5E0(v57, (__m128)si128);
  if ( ptr != v77 )
    free(ptr);
  if ( v73[0] != v74 )
    free(v73[0]);
  if ( src != v72 )
    free(src);
  return v18;
}
