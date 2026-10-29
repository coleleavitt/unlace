void __fastcall sub_1CC2540(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned int v4; // eax
  __int64 *v7; // r13
  __int64 v8; // r15
  unsigned int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // r9
  __m128i v21; // rax
  signed __int64 v22; // r13
  _BYTE *v23; // r15
  unsigned __int8 *v24; // r14
  unsigned __int8 *v25; // rdx
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  void *v40; // rdi
  __int64 v41; // [rsp+0h] [rbp-258h]
  __int64 v42; // [rsp+0h] [rbp-258h]
  __int64 v43; // [rsp+8h] [rbp-250h]
  __m128i v44; // [rsp+10h] [rbp-248h] BYREF
  __int64 (__fastcall **v45)(); // [rsp+20h] [rbp-238h] BYREF
  int v46; // [rsp+28h] [rbp-230h]
  __int128 v47; // [rsp+30h] [rbp-228h]
  __int64 v48; // [rsp+40h] [rbp-218h]
  char v49; // [rsp+48h] [rbp-210h]
  int v50; // [rsp+4Ch] [rbp-20Ch]
  void **p_ptr; // [rsp+50h] [rbp-208h]
  __int64 v52; // [rsp+60h] [rbp-1F8h] BYREF
  int v53; // [rsp+68h] [rbp-1F0h]
  int v54; // [rsp+6Ch] [rbp-1ECh]
  __int64 v55; // [rsp+70h] [rbp-1E8h]
  char v56; // [rsp+78h] [rbp-1E0h]
  _QWORD v57[10]; // [rsp+80h] [rbp-1D8h] BYREF
  int v58; // [rsp+D0h] [rbp-188h]
  char v59; // [rsp+D8h] [rbp-180h]
  __int64 v60; // [rsp+E0h] [rbp-178h]
  __int64 v61; // [rsp+F0h] [rbp-168h] BYREF
  int v62; // [rsp+F8h] [rbp-160h]
  int v63; // [rsp+FCh] [rbp-15Ch]
  __int64 v64; // [rsp+100h] [rbp-158h]
  char v65; // [rsp+108h] [rbp-150h]
  unsigned __int8 *v66[10]; // [rsp+110h] [rbp-148h] BYREF
  int v67; // [rsp+160h] [rbp-F8h]
  char v68; // [rsp+168h] [rbp-F0h]
  __int64 v69; // [rsp+170h] [rbp-E8h]
  void *ptr; // [rsp+180h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+188h] [rbp-D0h]
  __int64 v72; // [rsp+198h] [rbp-C0h] BYREF
  unsigned __int8 *v73; // [rsp+1A0h] [rbp-B8h]
  __int64 v74; // [rsp+1A8h] [rbp-B0h]
  char v75; // [rsp+1F8h] [rbp-60h]
  unsigned int v76; // [rsp+200h] [rbp-58h]
  char v77; // [rsp+204h] [rbp-54h]

  v4 = 5683;
  if ( (**(_BYTE **)(a1 + 232) & 0x20) == 0 )
    v4 = a4 == 0 ? 5148 : 5517;
  v7 = (__int64 *)(a1 + 8);
  sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), a2, v4, 0);
  v8 = *(_QWORD *)(a3 + 40);
  if ( v75 )
  {
    v24 = v73;
    if ( !v73 )
    {
      v34 = v74;
      v35 = *(_DWORD *)(v74 + 14976);
      if ( v35 )
      {
        v36 = (unsigned int)(v35 - 1);
        *(_DWORD *)(v74 + 14976) = v36;
        v24 = *(unsigned __int8 **)(v34 + 8 * v36 + 14848);
        v37 = *((unsigned int *)v24 + 134);
        *v24 = 0;
        v38 = *((_QWORD *)v24 + 66);
        *((_DWORD *)v24 + 106) = 0;
        v39 = v38 + (v37 << 6);
        while ( v38 != v39 )
        {
          while ( 1 )
          {
            v39 -= 64;
            v40 = *(void **)(v39 + 24);
            if ( v40 == (void *)(v39 + 40) )
              break;
            v43 = v39;
            v42 = v38;
            operator delete(v40);
            v38 = v42;
            v39 = v43;
            if ( v42 == v43 )
              goto LABEL_29;
          }
        }
LABEL_29:
        *((_DWORD *)v24 + 134) = 0;
      }
      else
      {
        v24 = (unsigned __int8 *)operator new(0x3A0u);
        *v24 = 0;
        *((_QWORD *)v24 + 12) = v24 + 112;
        *((_QWORD *)v24 + 16) = v24 + 144;
        *((_QWORD *)v24 + 20) = v24 + 176;
        *((_QWORD *)v24 + 24) = v24 + 208;
        *((_QWORD *)v24 + 28) = v24 + 240;
        *((_QWORD *)v24 + 32) = v24 + 272;
        *((_QWORD *)v24 + 36) = v24 + 304;
        *((_QWORD *)v24 + 40) = v24 + 336;
        *((_QWORD *)v24 + 44) = v24 + 368;
        *((_QWORD *)v24 + 48) = v24 + 400;
        *((_QWORD *)v24 + 52) = v24 + 432;
        *((_QWORD *)v24 + 13) = 0;
        v24[112] = 0;
        *((_QWORD *)v24 + 17) = 0;
        v24[144] = 0;
        *((_QWORD *)v24 + 21) = 0;
        v24[176] = 0;
        *((_QWORD *)v24 + 25) = 0;
        v24[208] = 0;
        *((_QWORD *)v24 + 29) = 0;
        v24[240] = 0;
        *((_QWORD *)v24 + 33) = 0;
        v24[272] = 0;
        *((_QWORD *)v24 + 37) = 0;
        v24[304] = 0;
        *((_QWORD *)v24 + 41) = 0;
        v24[336] = 0;
        *((_QWORD *)v24 + 45) = 0;
        v24[368] = 0;
        *((_QWORD *)v24 + 49) = 0;
        v24[400] = 0;
        *((_QWORD *)v24 + 53) = 0x800000000LL;
        *((_QWORD *)v24 + 66) = v24 + 544;
        *((_QWORD *)v24 + 67) = 0x600000000LL;
      }
      v73 = v24;
    }
    v24[*v24 + 1] = 9;
    v25 = v73;
    v26 = *v73;
    *v73 = v26 + 1;
    *(_QWORD *)&v25[8 * v26 + 16] = v8;
  }
  else if ( v77 )
  {
    v14 = sub_168B9E0(&ptr);
    v15 = si128.m128i_i64[1];
    if ( si128.m128i_i64[1] )
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)si128.m128i_i64[1] + 32LL))(si128.m128i_i64[1]);
    v61 = v15;
    v16 = sub_1587BC0(v14, &v61, v10, v11, v12, v13);
    sub_AE9DF0((unsigned __int8 **)(*v16 + 32LL * v76 + 8), v8, 9u);
    sub_15F7200(&ptr);
    v9 = *(_DWORD *)(a3 + 24);
    if ( v9 )
      goto LABEL_6;
    goto LABEL_11;
  }
  sub_15F7200(&ptr);
  v9 = *(_DWORD *)(a3 + 24);
  if ( v9 )
  {
LABEL_6:
    sub_168B9F0((__int64)&v52, (__int64 *)(a1 + 8), v9, 0x1902u, 0);
    goto LABEL_7;
  }
LABEL_11:
  ptr = &v72;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v47 = 0;
  v45 = &off_2BEBEE0;
  v46 = 2;
  v49 = 0;
  v50 = 1;
  v48 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v45, 0, 0, 0);
  v21.m128i_i64[0] = sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v17, v18, v19, v20);
  v44 = v21;
  v44.m128i_i8[3] = v21.m128i_i8[3] | 0x80;
  sub_BB7900(a3, (__int64)&v45, &v44, 0, 0);
  sub_168B9F0((__int64)&v61, v7, *(_DWORD *)(a3 + 24), 0x1901u, 0);
  v22 = (signed __int64)p_ptr[1];
  v23 = *p_ptr;
  if ( v68 )
  {
    sub_AEC220(v66, *p_ptr, (signed __int64)p_ptr[1]);
    v27 = v68;
LABEL_19:
    v59 = 0;
    v52 = v61;
    v53 = v62;
    v54 = v63;
    v55 = v64;
    v56 = v65;
    if ( v27 )
    {
      sub_FC70F0((__int64)v57, (__int64)v66);
      v59 = 1;
      v57[9] = v66[9];
      v58 = v67;
    }
    goto LABEL_14;
  }
  if ( BYTE4(v69) )
  {
    v28 = sub_168B9E0(&v61);
    v32 = v64;
    if ( v64 )
    {
      v41 = v28;
      v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
      v28 = v41;
    }
    v52 = v32;
    v33 = sub_1587BC0(v28, &v52, v28, v29, v30, v31);
    sub_AEC220((unsigned __int8 **)(*v33 + 32LL * (unsigned int)v69 + 8), v23, v22);
    v27 = v68;
    goto LABEL_19;
  }
  v59 = 0;
  v52 = v61;
  v53 = v62;
  v54 = v63;
  v55 = v64;
  v56 = v65;
LABEL_14:
  v60 = v69;
  sub_15F7200(&v61);
  v45 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v45);
  if ( ptr != &v72 )
    free(ptr);
LABEL_7:
  sub_15F7200(&v52);
}
