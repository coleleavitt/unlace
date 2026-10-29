__int64 __fastcall sub_1C63430(
        __m128 *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v8; // r13
  unsigned int v10; // ebp
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rsi
  unsigned __int64 v21; // r14
  unsigned int v22; // eax
  unsigned __int8 *v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // r12
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // rdx
  __int64 v51; // r12
  void *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  void *v57; // rdi
  __int64 v58; // [rsp+0h] [rbp-F8h]
  __int64 v59; // [rsp+0h] [rbp-F8h]
  __int64 v60; // [rsp+8h] [rbp-F0h]
  __int64 v61; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v62; // [rsp+20h] [rbp-D8h] BYREF
  int v63; // [rsp+28h] [rbp-D0h]
  _QWORD v64[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v66; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v67; // [rsp+58h] [rbp-A0h]
  char v68; // [rsp+A8h] [rbp-50h]
  unsigned int v69; // [rsp+B0h] [rbp-48h]
  char v70; // [rsp+B4h] [rbp-44h]

  if ( !a2 )
    return 1;
  v8 = HIDWORD(a4);
  v10 = a4;
  v11 = sub_1907C70((__int64)a1, a2, (__m128i)a7, a8, a3, a4, a5, a6);
  if ( v11 != 1 )
  {
    v17 = sub_1C02150(a1, (__int64 *)(v11 & 0xFFFFFFFFFFFFFFFELL), v12, v13, v14, v15, a7, a8);
    if ( v17 != 1 )
    {
      v20 = a1[15].m128_i64[1];
      v21 = v17 & 0xFFFFFFFFFFFFFFFELL;
      if ( !(unsigned __int8)sub_C01160(v17 & 0xFFFFFFFFFFFFFFFELL, v20, 1, v18, v19) )
        return v21;
      v22 = sub_EEB7E0(v21, v20, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)v64, &a1->m128_i64[1], v22, 0x1980u, 0);
      if ( v68 )
      {
        sub_AE9DF0(&v66, a3, 5u);
      }
      else
      {
        if ( !v70 )
        {
LABEL_11:
          sub_15F7200(v64);
          return v21;
        }
        v30 = sub_168B9E0(v64);
        v33 = v65;
        if ( v65 )
          v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65 + 32LL))(v65);
        v62 = v33;
        v34 = sub_1587BC0(v30, (__int64 *)&v62, v28, v29, v31, v32);
        sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * v69 + 8), a3, 5u);
      }
      if ( v68 )
      {
        v23 = v66;
        if ( v66 )
        {
          v24 = *((unsigned int *)v66 + 106);
          v25 = *((unsigned int *)v66 + 107);
          v26 = v24 + 1;
        }
        else
        {
          v43 = v67;
          v44 = *(_DWORD *)(v67 + 14976);
          if ( v44 )
          {
            v48 = (unsigned int)(v44 - 1);
            *(_DWORD *)(v67 + 14976) = v48;
            v23 = *(unsigned __int8 **)(v43 + 8 * v48 + 14848);
            v49 = *((unsigned int *)v23 + 134);
            *v23 = 0;
            v50 = *((_QWORD *)v23 + 66);
            *((_DWORD *)v23 + 106) = 0;
            v51 = v50 + (v49 << 6);
            while ( v50 != v51 )
            {
              while ( 1 )
              {
                v51 -= 64;
                v52 = *(void **)(v51 + 24);
                if ( v52 == (void *)(v51 + 40) )
                  break;
                v58 = v50;
                operator delete(v52);
                v50 = v58;
                if ( v58 == v51 )
                  goto LABEL_37;
              }
            }
LABEL_37:
            v24 = *((unsigned int *)v23 + 106);
            v25 = *((unsigned int *)v23 + 107);
            *((_DWORD *)v23 + 134) = 0;
            v26 = v24 + 1;
          }
          else
          {
            v45 = operator new(0x3A0u);
            v25 = 8;
            v26 = 1;
            v23 = (unsigned __int8 *)v45;
            *(_BYTE *)v45 = 0;
            *(_QWORD *)(v45 + 96) = v45 + 112;
            *(_QWORD *)(v45 + 128) = v45 + 144;
            *(_QWORD *)(v45 + 160) = v45 + 176;
            *(_QWORD *)(v45 + 192) = v45 + 208;
            *(_QWORD *)(v45 + 224) = v45 + 240;
            *(_QWORD *)(v45 + 256) = v45 + 272;
            *(_QWORD *)(v45 + 288) = v45 + 304;
            *(_QWORD *)(v45 + 320) = v45 + 336;
            *(_QWORD *)(v45 + 352) = v45 + 368;
            *(_QWORD *)(v45 + 384) = v45 + 400;
            *(_QWORD *)(v45 + 416) = v45 + 432;
            *(_QWORD *)(v45 + 104) = 0;
            *(_BYTE *)(v45 + 112) = 0;
            *(_QWORD *)(v45 + 136) = 0;
            *(_BYTE *)(v45 + 144) = 0;
            *(_QWORD *)(v45 + 168) = 0;
            *(_BYTE *)(v45 + 176) = 0;
            *(_QWORD *)(v45 + 200) = 0;
            *(_BYTE *)(v45 + 208) = 0;
            *(_QWORD *)(v45 + 232) = 0;
            *(_BYTE *)(v45 + 240) = 0;
            *(_QWORD *)(v45 + 264) = 0;
            *(_BYTE *)(v45 + 272) = 0;
            *(_QWORD *)(v45 + 296) = 0;
            *(_BYTE *)(v45 + 304) = 0;
            *(_QWORD *)(v45 + 328) = 0;
            *(_BYTE *)(v45 + 336) = 0;
            *(_QWORD *)(v45 + 360) = 0;
            *(_BYTE *)(v45 + 368) = 0;
            *(_QWORD *)(v45 + 392) = 0;
            *(_BYTE *)(v45 + 400) = 0;
            *(_QWORD *)(v45 + 424) = 0x800000000LL;
            *(_QWORD *)(v45 + 528) = v45 + 544;
            *(_QWORD *)(v45 + 536) = 0x600000000LL;
            v24 = 0;
          }
          v66 = v23;
        }
        v62 = __PAIR64__(v8, v10);
        LOBYTE(v63) = 1;
        if ( v26 <= v25 )
          goto LABEL_17;
      }
      else
      {
        if ( !v70 )
          goto LABEL_11;
        v37 = sub_168B9E0(v64);
        v40 = v65;
        if ( v65 )
          v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65 + 32LL))(v65);
        v61 = v40;
        v41 = sub_1587BC0(v37, &v61, v35, v36, v38, v39);
        v42 = *v41 + 32LL * v69;
        v23 = *(unsigned __int8 **)(v42 + 8);
        if ( !v23 )
        {
          v46 = *(_QWORD *)(v42 + 16);
          v47 = *(_DWORD *)(v46 + 14976);
          if ( v47 )
          {
            v53 = (unsigned int)(v47 - 1);
            *(_DWORD *)(v46 + 14976) = v53;
            v23 = *(unsigned __int8 **)(v46 + 8 * v53 + 14848);
            v54 = *((unsigned int *)v23 + 134);
            *v23 = 0;
            v55 = *((_QWORD *)v23 + 66);
            *((_DWORD *)v23 + 106) = 0;
            v56 = v55 + (v54 << 6);
            while ( v55 != v56 )
            {
              while ( 1 )
              {
                v56 -= 64;
                v57 = *(void **)(v56 + 24);
                if ( v57 == (void *)(v56 + 40) )
                  break;
                v60 = v55;
                v59 = v56;
                operator delete(v57);
                v56 = v59;
                v55 = v60;
                if ( v60 == v59 )
                  goto LABEL_42;
              }
            }
LABEL_42:
            *((_DWORD *)v23 + 134) = 0;
          }
          else
          {
            v23 = (unsigned __int8 *)operator new(0x3A0u);
            *v23 = 0;
            *((_QWORD *)v23 + 12) = v23 + 112;
            *((_QWORD *)v23 + 16) = v23 + 144;
            *((_QWORD *)v23 + 20) = v23 + 176;
            *((_QWORD *)v23 + 24) = v23 + 208;
            *((_QWORD *)v23 + 28) = v23 + 240;
            *((_QWORD *)v23 + 32) = v23 + 272;
            *((_QWORD *)v23 + 36) = v23 + 304;
            *((_QWORD *)v23 + 40) = v23 + 336;
            *((_QWORD *)v23 + 44) = v23 + 368;
            *((_QWORD *)v23 + 48) = v23 + 400;
            *((_QWORD *)v23 + 52) = v23 + 432;
            v23[112] = 0;
            *((_QWORD *)v23 + 13) = 0;
            *((_QWORD *)v23 + 17) = 0;
            v23[144] = 0;
            *((_QWORD *)v23 + 21) = 0;
            v23[176] = 0;
            *((_QWORD *)v23 + 25) = 0;
            v23[208] = 0;
            *((_QWORD *)v23 + 29) = 0;
            v23[240] = 0;
            *((_QWORD *)v23 + 33) = 0;
            v23[272] = 0;
            *((_QWORD *)v23 + 37) = 0;
            v23[304] = 0;
            *((_QWORD *)v23 + 41) = 0;
            v23[336] = 0;
            *((_QWORD *)v23 + 45) = 0;
            v23[368] = 0;
            *((_QWORD *)v23 + 49) = 0;
            v23[400] = 0;
            *((_QWORD *)v23 + 53) = 0x800000000LL;
            *((_QWORD *)v23 + 66) = v23 + 544;
            *((_QWORD *)v23 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v42 + 8) = v23;
        }
        v62 = __PAIR64__(v8, v10);
        LOBYTE(v63) = 1;
        v24 = *((unsigned int *)v23 + 106);
        v26 = v24 + 1;
        if ( v24 + 1 <= (unsigned __int64)*((unsigned int *)v23 + 107) )
          goto LABEL_17;
      }
      sub_2237220(v23 + 416, v23 + 432, v26, 12);
      v24 = *((unsigned int *)v23 + 106);
LABEL_17:
      v27 = *((_QWORD *)v23 + 52) + 12 * v24;
      *(_QWORD *)v27 = v62;
      *(_DWORD *)(v27 + 8) = v63;
      ++*((_DWORD *)v23 + 106);
      goto LABEL_11;
    }
  }
  return 1;
}
