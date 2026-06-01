void __fastcall sub_18E3710(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __m128 v5; // xmm0
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int8 *v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int8 *v29; // rbx
  unsigned __int8 *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  void *v38; // rdi
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // r14
  __int64 v44; // r12
  void *v45; // rdi
  __int64 v46; // rdx
  int v47; // eax
  unsigned __int8 *v48; // rax
  unsigned __int8 *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rax
  void *v54; // rdi
  __int64 v55; // [rsp+8h] [rbp-100h]
  __int64 v56; // [rsp+8h] [rbp-100h]
  __int64 v57; // [rsp+8h] [rbp-100h]
  __int64 v58; // [rsp+10h] [rbp-F8h]
  __int64 v59; // [rsp+18h] [rbp-F0h]
  __int64 v60; // [rsp+28h] [rbp-E0h] BYREF
  __m128 v61; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v62[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v64; // [rsp+60h] [rbp-A8h]
  __int64 v65; // [rsp+68h] [rbp-A0h]
  char v66; // [rsp+B8h] [rbp-50h]
  unsigned int v67; // [rsp+C0h] [rbp-48h]
  char v68; // [rsp+C4h] [rbp-44h]

  sub_168B9F0((__int64)v62, (__int64 *)(a2 + 8), a3, *(_DWORD *)(a1 + 8), 0);
  v5 = (__m128)_mm_loadu_si128((const __m128i *)*(_QWORD *)(a1 + 16));
  v61 = v5;
  v6 = sub_F6CE20((__int64 *)&v61);
  v7 = sub_F6CCB0((__int64 *)&v61, v5);
  if ( !v66 )
  {
    if ( !v68 )
      goto LABEL_3;
    v17 = sub_168B9E0(v62);
    v20 = v63;
    if ( v63 )
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 32LL))(v63);
    v60 = v20;
    v21 = sub_1587BC0(v17, &v60, v15, v16, v18, v19);
    v22 = *v21 + 32LL * v67;
    v23 = *(unsigned __int8 **)(v22 + 8);
    if ( v23 )
    {
      v24 = *((unsigned int *)v23 + 106);
      v25 = *((unsigned int *)v23 + 107);
      v26 = v24 + 1;
    }
    else
    {
      v46 = *(_QWORD *)(v22 + 16);
      v47 = *(_DWORD *)(v46 + 14976);
      if ( v47 )
      {
        v50 = (unsigned int)(v47 - 1);
        *(_DWORD *)(v46 + 14976) = v50;
        v23 = *(unsigned __int8 **)(v46 + 8 * v50 + 14848);
        v51 = *((unsigned int *)v23 + 134);
        *v23 = 0;
        v52 = *((_QWORD *)v23 + 66);
        *((_DWORD *)v23 + 106) = 0;
        v53 = v52 + (v51 << 6);
        if ( v52 == v53 )
        {
          v26 = 1;
          v24 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v53 -= 64;
              v54 = *(void **)(v53 + 24);
              if ( v54 == (void *)(v53 + 40) )
                break;
              v59 = v53;
              v57 = v22;
              operator delete(v54);
              v53 = v59;
              v22 = v57;
              if ( v52 == v59 )
                goto LABEL_44;
            }
          }
          while ( v52 != v53 );
LABEL_44:
          v24 = *((unsigned int *)v23 + 106);
          v26 = v24 + 1;
        }
        *((_DWORD *)v23 + 134) = 0;
        v25 = *((unsigned int *)v23 + 107);
      }
      else
      {
        v56 = v22;
        v48 = (unsigned __int8 *)operator new(0x3A0u);
        v25 = 8;
        v26 = 1;
        v23 = v48;
        *v48 = 0;
        *((_QWORD *)v48 + 12) = v48 + 112;
        *((_QWORD *)v48 + 16) = v48 + 144;
        *((_QWORD *)v48 + 20) = v48 + 176;
        *((_QWORD *)v48 + 24) = v48 + 208;
        *((_QWORD *)v48 + 28) = v48 + 240;
        *((_QWORD *)v48 + 32) = v48 + 272;
        *((_QWORD *)v48 + 36) = v48 + 304;
        *((_QWORD *)v48 + 40) = v48 + 336;
        *((_QWORD *)v48 + 44) = v48 + 368;
        *((_QWORD *)v48 + 48) = v48 + 400;
        *((_QWORD *)v48 + 52) = v48 + 432;
        *((_QWORD *)v48 + 13) = 0;
        v48[112] = 0;
        *((_QWORD *)v48 + 17) = 0;
        v48[144] = 0;
        *((_QWORD *)v48 + 21) = 0;
        v48[176] = 0;
        *((_QWORD *)v48 + 25) = 0;
        v48[208] = 0;
        *((_QWORD *)v48 + 29) = 0;
        v48[240] = 0;
        *((_QWORD *)v48 + 33) = 0;
        v48[272] = 0;
        *((_QWORD *)v48 + 37) = 0;
        v48[304] = 0;
        *((_QWORD *)v48 + 41) = 0;
        v48[336] = 0;
        *((_QWORD *)v48 + 45) = 0;
        v48[368] = 0;
        *((_QWORD *)v48 + 49) = 0;
        v48[400] = 0;
        *((_QWORD *)v48 + 53) = 0x800000000LL;
        v22 = v56;
        *((_QWORD *)v48 + 66) = v48 + 544;
        *((_QWORD *)v48 + 67) = 0x600000000LL;
        v24 = 0;
      }
      *(_QWORD *)(v22 + 8) = v23;
    }
    v61.m128_u64[0] = __PAIR64__(v6, v7);
    v61.m128_i8[8] = 1;
    if ( v26 <= v25 )
      goto LABEL_17;
    goto LABEL_13;
  }
  v23 = v64;
  if ( v64 )
  {
    v24 = *((unsigned int *)v64 + 106);
    v27 = *((unsigned int *)v64 + 107);
    v26 = v24 + 1;
  }
  else
  {
    v32 = v65;
    v33 = *(_DWORD *)(v65 + 14976);
    if ( v33 )
    {
      v34 = (unsigned int)(v33 - 1);
      *(_DWORD *)(v65 + 14976) = v34;
      v23 = *(unsigned __int8 **)(v32 + 8 * v34 + 14848);
      v35 = *((unsigned int *)v23 + 134);
      *v23 = 0;
      v36 = *((_QWORD *)v23 + 66);
      *((_DWORD *)v23 + 106) = 0;
      v37 = v36 + (v35 << 6);
      if ( v36 == v37 )
      {
        v26 = 1;
        v24 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v37 -= 64;
            v38 = *(void **)(v37 + 24);
            if ( v38 == (void *)(v37 + 40) )
              break;
            v58 = v36;
            v55 = v37;
            operator delete(v38);
            v37 = v55;
            v36 = v58;
            if ( v58 == v55 )
              goto LABEL_24;
          }
        }
        while ( v36 != v37 );
LABEL_24:
        v24 = *((unsigned int *)v23 + 106);
        v26 = v24 + 1;
      }
      *((_DWORD *)v23 + 134) = 0;
      v27 = *((unsigned int *)v23 + 107);
    }
    else
    {
      v49 = (unsigned __int8 *)operator new(0x3A0u);
      v27 = 8;
      v26 = 1;
      v23 = v49;
      *v49 = 0;
      *((_QWORD *)v49 + 12) = v49 + 112;
      *((_QWORD *)v49 + 16) = v49 + 144;
      *((_QWORD *)v49 + 20) = v49 + 176;
      *((_QWORD *)v49 + 24) = v49 + 208;
      *((_QWORD *)v49 + 28) = v49 + 240;
      *((_QWORD *)v49 + 32) = v49 + 272;
      *((_QWORD *)v49 + 36) = v49 + 304;
      *((_QWORD *)v49 + 40) = v49 + 336;
      *((_QWORD *)v49 + 44) = v49 + 368;
      *((_QWORD *)v49 + 48) = v49 + 400;
      *((_QWORD *)v49 + 52) = v49 + 432;
      *((_QWORD *)v49 + 13) = 0;
      v49[112] = 0;
      *((_QWORD *)v49 + 17) = 0;
      v49[144] = 0;
      *((_QWORD *)v49 + 21) = 0;
      v49[176] = 0;
      *((_QWORD *)v49 + 25) = 0;
      v49[208] = 0;
      *((_QWORD *)v49 + 29) = 0;
      v49[240] = 0;
      *((_QWORD *)v49 + 33) = 0;
      v49[272] = 0;
      *((_QWORD *)v49 + 37) = 0;
      v49[304] = 0;
      *((_QWORD *)v49 + 41) = 0;
      v49[336] = 0;
      *((_QWORD *)v49 + 45) = 0;
      v49[368] = 0;
      *((_QWORD *)v49 + 49) = 0;
      v49[400] = 0;
      *((_QWORD *)v49 + 53) = 0x800000000LL;
      *((_QWORD *)v49 + 66) = v49 + 544;
      *((_QWORD *)v49 + 67) = 0x600000000LL;
      v24 = 0;
    }
    v64 = v23;
  }
  v61.m128_u64[0] = __PAIR64__(v6, v7);
  v61.m128_i8[8] = 1;
  if ( v26 > v27 )
  {
LABEL_13:
    sub_2237220(v23 + 416, v23 + 432, v26, 12);
    v24 = *((unsigned int *)v23 + 106);
  }
LABEL_17:
  v28 = *((_QWORD *)v23 + 52) + 12 * v24;
  *(_QWORD *)v28 = v61.m128_u64[0];
  *(_DWORD *)(v28 + 8) = v61.m128_i32[2];
  LOBYTE(v28) = v66;
  ++*((_DWORD *)v23 + 106);
  if ( !(_BYTE)v28 )
  {
LABEL_3:
    if ( v68 )
    {
      v10 = sub_168B9E0(v62);
      v13 = v63;
      if ( v63 )
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 32LL))(v63);
      v61.m128_u64[0] = v13;
      v14 = sub_1587BC0(v10, (__int64 *)&v61, v8, v9, v11, v12);
      sub_AE9DF0((unsigned __int8 **)(*v14 + 32LL * v67 + 8), a4, 8u);
    }
    goto LABEL_4;
  }
  v29 = v64;
  if ( !v64 )
  {
    v39 = v65;
    v40 = *(_DWORD *)(v65 + 14976);
    if ( v40 )
    {
      v41 = (unsigned int)(v40 - 1);
      *(_DWORD *)(v65 + 14976) = v41;
      v29 = *(unsigned __int8 **)(v39 + 8 * v41 + 14848);
      v42 = *((unsigned int *)v29 + 134);
      *v29 = 0;
      v43 = *((_QWORD *)v29 + 66);
      *((_DWORD *)v29 + 106) = 0;
      v44 = v43 + (v42 << 6);
      while ( v43 != v44 )
      {
        while ( 1 )
        {
          v44 -= 64;
          v45 = *(void **)(v44 + 24);
          if ( v45 == (void *)(v44 + 40) )
            break;
          operator delete(v45);
          if ( v43 == v44 )
            goto LABEL_31;
        }
      }
LABEL_31:
      *((_DWORD *)v29 + 134) = 0;
    }
    else
    {
      v29 = (unsigned __int8 *)operator new(0x3A0u);
      *v29 = 0;
      *((_QWORD *)v29 + 12) = v29 + 112;
      *((_QWORD *)v29 + 16) = v29 + 144;
      *((_QWORD *)v29 + 20) = v29 + 176;
      *((_QWORD *)v29 + 24) = v29 + 208;
      *((_QWORD *)v29 + 28) = v29 + 240;
      *((_QWORD *)v29 + 32) = v29 + 272;
      *((_QWORD *)v29 + 36) = v29 + 304;
      *((_QWORD *)v29 + 40) = v29 + 336;
      *((_QWORD *)v29 + 44) = v29 + 368;
      *((_QWORD *)v29 + 48) = v29 + 400;
      *((_QWORD *)v29 + 52) = v29 + 432;
      *((_QWORD *)v29 + 13) = 0;
      v29[112] = 0;
      *((_QWORD *)v29 + 17) = 0;
      v29[144] = 0;
      *((_QWORD *)v29 + 21) = 0;
      v29[176] = 0;
      *((_QWORD *)v29 + 25) = 0;
      v29[208] = 0;
      *((_QWORD *)v29 + 29) = 0;
      v29[240] = 0;
      *((_QWORD *)v29 + 33) = 0;
      v29[272] = 0;
      *((_QWORD *)v29 + 37) = 0;
      v29[304] = 0;
      *((_QWORD *)v29 + 41) = 0;
      v29[336] = 0;
      *((_QWORD *)v29 + 45) = 0;
      v29[368] = 0;
      *((_QWORD *)v29 + 49) = 0;
      v29[400] = 0;
      *((_QWORD *)v29 + 53) = 0x800000000LL;
      *((_QWORD *)v29 + 66) = v29 + 544;
      *((_QWORD *)v29 + 67) = 0x600000000LL;
    }
    v64 = v29;
  }
  v29[*v29 + 1] = 8;
  v30 = v64;
  v31 = *v64;
  *v64 = v31 + 1;
  *(_QWORD *)&v30[8 * v31 + 16] = a4;
LABEL_4:
  sub_15F7200(v62);
}
