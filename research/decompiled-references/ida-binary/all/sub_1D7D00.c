unsigned __int64 __fastcall sub_1D7D00(__int64 a1)
{
  void **v1; // rax
  void **v3; // rbx
  void **v4; // rbp
  void *v5; // rdi
  __int64 v6; // rsi
  unsigned __int8 *v7; // r14
  unsigned __int8 *i; // rbx
  unsigned __int64 v9; // rax
  unsigned __int8 *v10; // r12
  bool v11; // cc
  signed int v12; // edi
  _BYTE *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v17; // rsi
  unsigned __int8 *v18; // rbp
  unsigned __int8 *v19; // rdx
  unsigned __int8 *v20; // r15
  unsigned __int8 v21; // al
  unsigned __int8 *v22; // rdx
  unsigned __int8 v23; // di
  char *v24; // rsi
  char *v25; // rdx
  _BYTE *v26; // rax
  _BYTE *v27; // rax
  int v28; // edx
  signed int v29; // edi
  int v30; // esi
  _BYTE *v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // edx
  _BYTE *v35; // rbp
  __int64 v36; // rax
  __int64 v37; // rcx
  void *v38; // r15
  unsigned int v39; // eax
  __int64 v40; // r12
  _BYTE *v41; // rax
  void *v42; // r15
  _BYTE *v43; // rax
  void *v44; // r15
  __int64 v45; // rdi
  int v46; // edx
  __int64 v47; // rdi
  void *v48; // [rsp+0h] [rbp-D8h]
  void *v49; // [rsp+0h] [rbp-D8h]
  void *v50; // [rsp+8h] [rbp-D0h]
  void *v51; // [rsp+8h] [rbp-D0h]
  int v52; // [rsp+10h] [rbp-C8h]
  int v53; // [rsp+20h] [rbp-B8h]
  int v54; // [rsp+28h] [rbp-B0h]
  int v55; // [rsp+28h] [rbp-B0h]
  void *v56; // [rsp+28h] [rbp-B0h]
  _QWORD v57[2]; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v58[2]; // [rsp+50h] [rbp-88h] BYREF
  void *v59[2]; // [rsp+60h] [rbp-78h] BYREF
  void *v60; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v61; // [rsp+78h] [rbp-60h]
  _QWORD v62[3]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v63; // [rsp+98h] [rbp-40h]

  v1 = *(void ***)(a1 + 112);
  v63 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 36) = 1;
  *(_BYTE *)(a1 + 80) = 0;
  if ( v1 )
  {
    v3 = &v1[4 * (_QWORD)*(v1 - 1)];
    if ( v1 == v3 )
    {
      v6 = 0;
    }
    else
    {
      do
      {
        v4 = v3;
        v5 = *(v3 - 2);
        v3 -= 4;
        if ( v5 )
          operator delete[](v5);
        if ( *v3 )
          operator delete[](*v3);
      }
      while ( *(void ***)(a1 + 112) != v3 );
      v6 = 32LL * (_QWORD)*(v4 - 5);
    }
    operator delete[](v3 - 1, v6 + 8);
  }
  v7 = *(unsigned __int8 **)(a1 + 16);
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 129) = 1;
  for ( i = v7; ; *(_QWORD *)(a1 + 16) = i )
  {
    v9 = *i;
    if ( (_BYTE)v9 == 32 )
      break;
    if ( (char)v9 > 32 )
    {
      if ( (_BYTE)v9 == 62 )
        break;
      goto LABEL_36;
    }
    if ( (char)v9 > 10 )
    {
      if ( (_BYTE)v9 == 13 )
        break;
LABEL_36:
      ++i;
      continue;
    }
    if ( (char)v9 > 8 )
      break;
    ++i;
    if ( !(_BYTE)v9 )
      return v63 - __readfsqword(0x28u);
  }
  v52 = (int)i;
  v10 = i;
  v11 = (char)v9 <= 47;
  while ( v11 )
  {
    if ( (_BYTE)v9 != 13 )
    {
      if ( (char)v9 > 13 )
      {
        if ( (_BYTE)v9 != 32 )
          goto LABEL_41;
      }
      else if ( (unsigned __int8)(v9 - 9) > 1u )
      {
        goto LABEL_41;
      }
    }
    *(_QWORD *)(a1 + 16) = ++v10;
LABEL_21:
    v9 = *v10;
    v11 = (char)v9 <= 47;
    if ( (_BYTE)v9 == 47 )
    {
      *(_BYTE *)(a1 + 80) = 1;
      *(_QWORD *)(a1 + 16) = v10 + 1;
      if ( v7 >= i )
        goto LABEL_23;
LABEL_32:
      if ( *(i - 1) == 47 )
      {
        *(_BYTE *)(a1 + 80) = 1;
        v52 = (_DWORD)i - 1;
        v61 = 0;
        if ( v7 )
          goto LABEL_24;
        goto LABEL_34;
      }
LABEL_23:
      v61 = 0;
      if ( v7 )
      {
LABEL_24:
        v12 = v52 - (_DWORD)v7 + 1;
        v61 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v12), 224).m128i_u64[0];
        v13 = (_BYTE *)operator new[](v12);
        v14 = 0;
        if ( v52 - (int)v7 > 0 )
        {
          do
          {
            v13[v14] = v7[v14];
            v15 = v14++;
          }
          while ( v52 - (_DWORD)v7 - 1 != v15 );
        }
        v60 = v13;
        v13[v52 - (int)v7] = 0;
        sub_1CAEC0(a1 + 48, (__int64)&v60);
        if ( v13 )
          operator delete[](v13);
        goto LABEL_28;
      }
LABEL_34:
      v60 = nullptr;
      sub_1CAEC0(a1 + 48, (__int64)&v60);
LABEL_28:
      ++*(_QWORD *)(a1 + 16);
      return v63 - __readfsqword(0x28u);
    }
  }
  if ( (_BYTE)v9 == 62 )
  {
    if ( v7 >= i )
      goto LABEL_23;
    goto LABEL_32;
  }
LABEL_41:
  v17 = 0x100002600LL;
  v18 = v10;
  while ( (unsigned __int8)v9 > 0x20u )
  {
    v20 = v18 + 1;
    v19 = v18 + 1;
    if ( (_BYTE)v9 == 61 )
      goto LABEL_48;
LABEL_45:
    *(_QWORD *)(a1 + 16) = v19;
    v9 = *v19;
    v18 = v19;
  }
  if ( !_bittest64(&v17, v9) )
  {
    if ( !(_BYTE)v9 )
      return v63 - __readfsqword(0x28u);
    v19 = v18 + 1;
    goto LABEL_45;
  }
  if ( !(_BYTE)v9 )
    return v63 - __readfsqword(0x28u);
  v20 = v18 + 1;
LABEL_48:
  *(_QWORD *)(a1 + 16) = v20;
  v21 = v18[1];
  if ( v21 == 39 || v21 == 34 )
  {
LABEL_54:
    *(_QWORD *)(a1 + 16) = v20 + 1;
    v23 = v20[1];
    if ( v23 != v21 )
    {
      v24 = (char *)(v20 + 2);
      while ( v23 )
      {
        *(_QWORD *)(a1 + 16) = v24;
        v25 = v24;
        v23 = *v24++;
        if ( v23 == v21 )
          goto LABEL_58;
      }
      return v63 - __readfsqword(0x28u);
    }
    v25 = (char *)(v20 + 1);
LABEL_58:
    v53 = (int)v25;
    *(_QWORD *)(a1 + 16) = v25 + 1;
    v58[1] = 0x100000001LL;
    v26 = (_BYTE *)operator new[](1u);
    *v26 = 0;
    v48 = v26;
    v59[1] = (void *)0x100000001LL;
    v27 = (_BYTE *)operator new[](1u);
    *v27 = 0;
    v28 = v53;
    v50 = v27;
    LODWORD(v61) = 0;
    if ( v10 )
    {
      v29 = (_DWORD)v18 - (_DWORD)v10 + 1;
      v61 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v29), 224).m128i_u64[0];
      v30 = (_DWORD)v18 - (_DWORD)v10;
      v31 = (_BYTE *)operator new[](v29);
      v32 = 0;
      v28 = v53;
      if ( v30 > 0 )
      {
        do
        {
          v31[v32] = v10[v32];
          v33 = v32++;
        }
        while ( v30 - 1 != v33 );
      }
      v31[v30] = 0;
    }
    else
    {
      HIDWORD(v61) = 0;
      v31 = nullptr;
    }
    v54 = v28;
    v60 = v31;
    v58[0] = (unsigned __int64)v48;
    v59[0] = v50;
    sub_1CAEC0((__int64)v58, (__int64)&v60);
    v34 = v54;
    if ( v31 )
    {
      operator delete[](v31);
      v34 = v54;
    }
    v55 = v34 - ((_DWORD)v20 + 1);
    v57[1] = _mm_shuffle_epi32(_mm_cvtsi32_si128(v34 - (int)v20), 224).m128i_u64[0];
    v35 = (_BYTE *)operator new[](v34 - (int)v20);
    v36 = 0;
    if ( v55 > 0 )
    {
      do
      {
        v35[v36] = v20[v36 + 1];
        v37 = v36++;
      }
      while ( v55 - 1 != v37 );
    }
    v57[0] = v35;
    v35[v55] = 0;
    sub_1D7280(&v60, a1, (__int64)v57);
    v38 = v60;
    sub_1CAEC0((__int64)v59, (__int64)&v60);
    v49 = (void *)v58[0];
    v51 = v59[0];
    if ( v38 )
      operator delete[](v38);
    v39 = *(_DWORD *)(a1 + 124);
    if ( *(_DWORD *)(a1 + 120) < v39 + 1 )
    {
      v61 = 0x100000001LL;
      v41 = (_BYTE *)operator new[](1u);
      *v41 = 0;
      v42 = v41;
      v62[1] = 0x100000001LL;
      v43 = (_BYTE *)operator new[](1u);
      *v43 = 0;
      v60 = v42;
      v62[0] = v43;
      sub_1CAEC0((__int64)&v60, (__int64)v58);
      sub_1CAEC0((__int64)v62, (__int64)v59);
      v44 = v60;
      v56 = (void *)v62[0];
      sub_1D7A00(a1 + 112, 2 * *(_DWORD *)(a1 + 124) + 1);
      v45 = *(unsigned int *)(a1 + 124);
      v46 = v45 + 1;
      v47 = *(_QWORD *)(a1 + 112) + 32 * v45;
      *(_DWORD *)(a1 + 124) = v46;
      sub_1CAEC0(v47, (__int64)&v60);
      sub_1CAEC0(v47 + 16, (__int64)v62);
      *(_BYTE *)(a1 + 129) = 0;
      if ( v56 )
        operator delete[](v56);
      if ( v44 )
        operator delete[](v44);
    }
    else
    {
      *(_DWORD *)(a1 + 124) = v39 + 1;
      v40 = *(_QWORD *)(a1 + 112) + 32LL * v39;
      sub_1CAEC0(v40, (__int64)v58);
      sub_1CAEC0(v40 + 16, (__int64)v59);
      *(_BYTE *)(a1 + 129) = 0;
    }
    if ( v35 )
      operator delete[](v35);
    if ( v51 )
      operator delete[](v51);
    if ( v49 )
      operator delete[](v49);
    v10 = *(unsigned __int8 **)(a1 + 16);
    goto LABEL_21;
  }
  v22 = v18 + 2;
  while ( v21 )
  {
    *(_QWORD *)(a1 + 16) = v22;
    v21 = *v22;
    v20 = v22++;
    if ( v21 == 34 || v21 == 39 )
      goto LABEL_54;
  }
  return v63 - __readfsqword(0x28u);
}
