__int64 __fastcall sub_13C3750(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v4; // r12
  __int64 i; // rax
  unsigned __int64 v6; // rax
  _WORD *v7; // r14
  __int64 *v8; // rax
  size_t v9; // rdx
  size_t v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r15
  const char *v14; // rax
  __int64 v15; // rax
  char v16; // dl
  unsigned __int8 *v17; // rbp
  _BOOL8 v18; // r14
  unsigned __int8 *v19; // rdx
  __int64 v20; // rax
  size_t *v21; // rbp
  size_t v22; // r12
  size_t v23; // rax
  unsigned __int8 *v24; // rbp
  unsigned __int8 *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // r14
  void *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // r12
  void *v40; // rdi
  __int64 v42; // [rsp+0h] [rbp-1C8h]
  __int64 v43; // [rsp+0h] [rbp-1C8h]
  const char *v45; // [rsp+10h] [rbp-1B8h] BYREF
  __int16 v46; // [rsp+30h] [rbp-198h]
  char v47[32]; // [rsp+40h] [rbp-188h] BYREF
  __int16 v48; // [rsp+60h] [rbp-168h]
  char v49[32]; // [rsp+70h] [rbp-158h] BYREF
  __int16 v50; // [rsp+90h] [rbp-138h]
  unsigned __int8 *v51; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-120h]
  __int16 v53; // [rsp+C0h] [rbp-108h]
  void *ptr; // [rsp+F0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-D0h]
  _BYTE v56[192]; // [rsp+108h] [rbp-C0h] BYREF

  v4 = a1;
  for ( i = a1[1]; i; i = *(_QWORD *)(v6 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v6 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v6 )
      break;
    a1 = (_QWORD *)v6;
  }
  v7 = (_WORD *)sub_228AA60(a1 + 4, *a1, 0);
  v8 = (__int64 *)v4[2];
  v10 = v9;
  v11 = *v8;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v56;
  sub_A1FE50(&ptr, (_BYTE *)v8 + 32, (_BYTE *)v8 + v11 + 32);
  if ( v10 != 10 )
  {
    if ( j__strlen("module.modulemap") != v10 )
      goto LABEL_8;
    if ( !v10 )
    {
LABEL_15:
      v53 = 257;
      v14 = "module.private.modulemap";
      v50 = 257;
      v48 = 257;
      goto LABEL_16;
    }
LABEL_14:
    if ( memcmp(v7, "module.modulemap", v10) )
      goto LABEL_8;
    goto LABEL_15;
  }
  if ( *(_QWORD *)v7 != 0x6D2E656C75646F6DLL || v7[4] != 28769 )
  {
    if ( j__strlen("module.modulemap") != 10 )
    {
LABEL_8:
      v12 = 0;
      goto LABEL_9;
    }
    goto LABEL_14;
  }
  v53 = 257;
  v14 = "module_private.map";
  v50 = 257;
  v48 = 257;
LABEL_16:
  v45 = v14;
  v46 = 259;
  sub_228A3B0(&ptr, &v45, v47, v49, &v51);
  sub_FD9C70((__int64)&v51, a2, ptr, si128.m128i_u64[0], 0, 1, 1);
  v15 = sub_A05DE0(&v51);
  if ( !v16 )
  {
    sub_A04D90((__int64 *)&v51);
    goto LABEL_8;
  }
  v12 = v15;
  sub_A04D90((__int64 *)&v51);
  if ( v12 && a4 && j__strlen("module.map") == v10 && (!v10 || !memcmp(v7, "module.map", v10)) )
  {
    sub_FC70B0((__int64)&v51, a3, 0, 1353);
    sub_AEC220(&v51, ptr, si128.m128i_i64[0]);
    v17 = v51;
    if ( !v51 )
    {
      v27 = v52;
      v28 = *(_DWORD *)(v52 + 14976);
      if ( v28 )
      {
        v31 = (unsigned int)(v28 - 1);
        *(_DWORD *)(v52 + 14976) = v31;
        v17 = *(unsigned __int8 **)(v27 + 8 * v31 + 14848);
        v32 = *((unsigned int *)v17 + 134);
        *v17 = 0;
        v33 = *((_QWORD *)v17 + 66);
        *((_DWORD *)v17 + 106) = 0;
        v34 = v33 + (v32 << 6);
        while ( v33 != v34 )
        {
          while ( 1 )
          {
            v34 -= 64;
            v35 = *(void **)(v34 + 24);
            if ( v35 == (void *)(v34 + 40) )
              break;
            v42 = v33;
            operator delete(v35);
            v33 = v42;
            if ( v42 == v34 )
              goto LABEL_41;
          }
        }
LABEL_41:
        *((_DWORD *)v17 + 134) = 0;
      }
      else
      {
        v17 = (unsigned __int8 *)operator new(0x3A0u);
        *v17 = 0;
        *((_QWORD *)v17 + 12) = v17 + 112;
        *((_QWORD *)v17 + 16) = v17 + 144;
        *((_QWORD *)v17 + 20) = v17 + 176;
        *((_QWORD *)v17 + 24) = v17 + 208;
        *((_QWORD *)v17 + 28) = v17 + 240;
        *((_QWORD *)v17 + 32) = v17 + 272;
        *((_QWORD *)v17 + 36) = v17 + 304;
        *((_QWORD *)v17 + 40) = v17 + 336;
        *((_QWORD *)v17 + 44) = v17 + 368;
        *((_QWORD *)v17 + 48) = v17 + 400;
        *((_QWORD *)v17 + 52) = v17 + 432;
        *((_QWORD *)v17 + 13) = 0;
        v17[112] = 0;
        *((_QWORD *)v17 + 17) = 0;
        v17[144] = 0;
        *((_QWORD *)v17 + 21) = 0;
        v17[176] = 0;
        *((_QWORD *)v17 + 25) = 0;
        v17[208] = 0;
        *((_QWORD *)v17 + 29) = 0;
        v17[240] = 0;
        *((_QWORD *)v17 + 33) = 0;
        v17[272] = 0;
        *((_QWORD *)v17 + 37) = 0;
        v17[304] = 0;
        *((_QWORD *)v17 + 41) = 0;
        v17[336] = 0;
        *((_QWORD *)v17 + 45) = 0;
        v17[368] = 0;
        *((_QWORD *)v17 + 49) = 0;
        v17[400] = 0;
        *((_QWORD *)v17 + 53) = 0x800000000LL;
        *((_QWORD *)v17 + 66) = v17 + 544;
        *((_QWORD *)v17 + 67) = 0x600000000LL;
      }
      v51 = v17;
    }
    v18 = 0;
    v17[*v17 + 1] = 2;
    v19 = v51;
    v20 = *v51;
    *v51 = v20 + 1;
    *(_QWORD *)&v19[8 * v20 + 16] = 1;
    v21 = (size_t *)v4[2];
    v22 = *v21;
    v23 = j__strlen(".framework");
    if ( v23 <= v22 )
    {
      v18 = 1;
      if ( v23 )
        v18 = memcmp((char *)v21 + v22 - v23 + 32, ".framework", v23) == 0;
    }
    v24 = v51;
    if ( !v51 )
    {
      v29 = v52;
      v30 = *(_DWORD *)(v52 + 14976);
      if ( v30 )
      {
        v36 = (unsigned int)(v30 - 1);
        *(_DWORD *)(v52 + 14976) = v36;
        v24 = *(unsigned __int8 **)(v29 + 8 * v36 + 14848);
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
            v43 = v38;
            operator delete(v40);
            v38 = v43;
            if ( v43 == v39 )
              goto LABEL_46;
          }
        }
LABEL_46:
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
      v51 = v24;
    }
    v24[*v24 + 1] = 2;
    v25 = v51;
    v26 = *v51;
    *v51 = v26 + 1;
    *(_QWORD *)&v25[8 * v26 + 16] = v18;
    sub_AEA040((__int64)&v51);
  }
LABEL_9:
  if ( ptr != v56 )
    free(ptr);
  return v12;
}
