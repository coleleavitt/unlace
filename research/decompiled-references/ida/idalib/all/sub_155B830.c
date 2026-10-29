__int64 __fastcall sub_155B830(__int64 a1, int a2, __int32 *a3, __int64 *a4, unsigned int a5, __m128i a6, __m128 a7)
{
  char v7; // r14
  __int64 v9; // rax
  __int16 v10; // ax
  int v11; // r10d
  __int64 v12; // rdx
  void **v13; // rbp
  unsigned __int64 v14; // rax
  void **v15; // r15
  void **v16; // r14
  void **v17; // rdi
  void **v18; // rdi
  void **v19; // r15
  void **v20; // r14
  __int64 v21; // r14
  _BYTE *v22; // rdi
  _BYTE *v23; // rbp
  _BYTE *v24; // r12
  _BYTE *v25; // rdi
  int v27; // eax
  unsigned int v28; // edx
  char v29; // al
  int v30; // r10d
  unsigned int v31; // edx
  int v32; // esi
  unsigned __int64 v33; // rax
  bool v34; // zf
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 *v39; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // [rsp+0h] [rbp-2A8h]
  int v45; // [rsp+18h] [rbp-290h]
  char v46; // [rsp+1Fh] [rbp-289h]
  int v51; // [rsp+48h] [rbp-260h]
  __int64 v52; // [rsp+48h] [rbp-260h]
  __int64 v53; // [rsp+48h] [rbp-260h]
  int *v54; // [rsp+50h] [rbp-258h]
  int v55; // [rsp+58h] [rbp-250h]
  int v56; // [rsp+5Ch] [rbp-24Ch]
  __int16 v57; // [rsp+66h] [rbp-242h] BYREF
  int v58; // [rsp+68h] [rbp-240h] BYREF
  int v59; // [rsp+6Ch] [rbp-23Ch] BYREF
  __int64 v60; // [rsp+70h] [rbp-238h] BYREF
  int v61; // [rsp+78h] [rbp-230h]
  void *ptr; // [rsp+80h] [rbp-228h] BYREF
  __int64 v63; // [rsp+88h] [rbp-220h]
  _BYTE v64[32]; // [rsp+90h] [rbp-218h] BYREF
  void *v65; // [rsp+B0h] [rbp-1F8h] BYREF
  unsigned __int64 p_ptr; // [rsp+B8h] [rbp-1F0h]
  __int64 v67; // [rsp+C0h] [rbp-1E8h] BYREF
  char v68; // [rsp+C8h] [rbp-1E0h]
  void *v69; // [rsp+D0h] [rbp-1D8h]
  __int64 v70; // [rsp+E0h] [rbp-1C8h] BYREF
  __int16 v71; // [rsp+F0h] [rbp-1B8h]
  __int64 v72; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v73; // [rsp+108h] [rbp-1A0h] BYREF
  _BYTE *v74; // [rsp+110h] [rbp-198h]
  __int64 v75; // [rsp+118h] [rbp-190h]
  _BYTE v76[320]; // [rsp+120h] [rbp-188h] BYREF
  __int64 v77; // [rsp+260h] [rbp-48h]
  char v78; // [rsp+268h] [rbp-40h]

  v7 = 1;
  v9 = *(_QWORD *)(a1 + 96);
  v77 = *(_QWORD *)(v9 + 512);
  *(_QWORD *)(v9 + 512) = &v73;
  v74 = v76;
  v72 = v9;
  v60 = a1;
  v61 = 0;
  v73 = 0;
  v75 = 0x400000000LL;
  v78 = 0;
  v63 = 0x400000000LL;
  v45 = 0;
  v46 = 0;
  ptr = v64;
  v10 = *(_WORD *)(a1 + 32);
  while ( 1 )
  {
    v11 = 0;
    v12 = *(unsigned int *)(a1 + 16);
    if ( v10 == 134 )
    {
      *(_DWORD *)(a1 + 40) = v12;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      v11 = *(_DWORD *)(a1 + 40);
      v10 = *(_WORD *)(a1 + 32);
      v12 = *(unsigned int *)(a1 + 16);
    }
    if ( v10 != 146 )
      break;
    *(_DWORD *)(a1 + 40) = v12;
    v51 = v11;
    v54 = (int *)(a1 + 16);
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    v27 = *(_DWORD *)(a1 + 40);
    v28 = *(_DWORD *)(a1 + 2548);
    v58 = 0;
    v55 = v27;
    v59 = 0;
    v65 = &v67;
    p_ptr = 0x400000000LL;
    v29 = sub_1558C40(a1, (__int64)&v60, v28, (__int64)&v65, &v58, &v59, a6, a7);
    v30 = v51;
    if ( v29 )
      goto LABEL_56;
    v31 = p_ptr;
    v32 = *(_DWORD *)(a1 + 2548);
    if ( (_DWORD)p_ptr )
    {
      ++v32;
      ++v45;
      v7 = 0;
      v33 = 0;
      v34 = *(_WORD *)(a1 + 32) == 176;
      *(_DWORD *)(a1 + 2548) = v32;
      if ( v34 )
      {
        v39 = *(__int64 **)(a1 + 8);
        v56 = v51;
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v39, v54);
        v52 = *(_QWORD *)(a1 + 96);
        v40 = sub_14C51E0(a1, 0, a6, *(double *)a7.m128_u64);
        v41 = sub_183C1F0(v52, v40);
        v30 = v56;
        if ( v41 <= 1 )
        {
LABEL_56:
          v57 = 25;
          sub_15680D0(a1, &v57, 1, 3);
          if ( *(_WORD *)(a1 + 32) == 63 )
          {
            v42 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v42, v54);
          }
          v21 = 0;
          if ( v65 != &v67 )
            free(v65);
          goto LABEL_25;
        }
        v32 = *(_DWORD *)(a1 + 2548);
        v31 = p_ptr;
        v33 = v41 & 0xFFFFFFFFFFFFFFFELL;
      }
    }
    else
    {
      v33 = 0;
      v46 = 1;
    }
    v35 = sub_1CB4650(*(_QWORD *)(a1 + 96), v32, v30, v55, v58, v59, (__int64)v65, v31, v33);
    v36 = (unsigned int)v63;
    v37 = (unsigned int)v63 + 1LL;
    if ( v37 > HIDWORD(v63) )
    {
      v53 = v35;
      sub_2237220(&ptr, v64, v37, 8);
      v36 = (unsigned int)v63;
      v35 = v53;
    }
    *((_QWORD *)ptr + v36) = v35;
    LODWORD(v63) = v63 + 1;
    if ( v65 == &v67 )
    {
      v10 = *(_WORD *)(a1 + 32);
      if ( v10 != 134 )
        goto LABEL_48;
    }
    else
    {
      free(v65);
      v10 = *(_WORD *)(a1 + 32);
      if ( v10 != 134 )
      {
LABEL_48:
        if ( v10 != 146 )
        {
          p_ptr = (unsigned __int64)&ptr;
          v67 = 0;
          v68 = v46;
          LODWORD(v65) = (v7 & 1) + 1;
          if ( v10 == 175 )
          {
            v43 = sub_1552B50(a1, (__int64)&v65, a3, *(double *)a6.m128i_i64, a7);
            if ( !v78 )
            {
              v44 = v43;
              sub_1818070(v72, v77, v43);
              v78 = 1;
              v43 = v44;
            }
            v21 = sub_17A2530(*(_QWORD *)(a1 + 96), v43, 0);
          }
          else
          {
            v21 = sub_154D400((__m128i *)a1, a2, (__int64)&v65, (__int64)&v72, a3, a4, a6, a7, a5);
          }
          goto LABEL_25;
        }
      }
    }
  }
  sub_1564820(&v65, a1, v12, 1654);
  if ( (_BYTE)v71 )
  {
    sub_FC7790(v67, (__int64 *)&v65, SHIBYTE(v71));
    v67 = 0;
    v71 = 0;
  }
  if ( v69 != &v70 )
    operator delete(v69);
  v13 = (void **)v65;
  if ( v65 )
  {
    v14 = p_ptr;
    if ( p_ptr )
    {
      if ( (unsigned __int64)v65 < p_ptr || (unsigned __int64)v65 > p_ptr + 14848 )
      {
        v15 = *((void ***)v65 + 66);
        v16 = &v15[8 * (unsigned __int64)*((unsigned int *)v65 + 134)];
        if ( v15 != v16 )
        {
          do
          {
            while ( 1 )
            {
              v16 -= 8;
              v17 = (void **)v16[3];
              if ( v17 == v16 + 5 )
                break;
              operator delete(v17);
              if ( v15 == v16 )
                goto LABEL_15;
            }
          }
          while ( v15 != v16 );
LABEL_15:
          v16 = (void **)v13[66];
        }
        if ( v16 != v13 + 68 )
          free(v16);
        v18 = (void **)v13[52];
        v19 = v13 + 52;
        if ( v18 != v13 + 54 )
          free(v18);
        v20 = v13 + 12;
        do
        {
          while ( 1 )
          {
            v19 -= 4;
            if ( *v19 == v19 + 2 )
              break;
            operator delete(*v19);
            if ( v19 == v20 )
              goto LABEL_23;
          }
        }
        while ( v19 != v20 );
LABEL_23:
        operator delete(v13, 0x3A0u);
      }
      else
      {
        v38 = *(unsigned int *)(p_ptr + 14976);
        *(_DWORD *)(p_ptr + 14976) = v38 + 1;
        *(_QWORD *)(v14 + 8 * v38 + 14848) = v13;
      }
    }
  }
  v21 = 0;
LABEL_25:
  v22 = ptr;
  *(_DWORD *)(a1 + 2548) -= v45;
  if ( v22 != v64 )
    free(v22);
  if ( !v78 )
  {
    sub_1818070(v72, v77, 0);
    v78 = 1;
  }
  v23 = v74;
  v24 = &v74[80 * (unsigned int)v75];
  if ( v74 != v24 )
  {
    do
    {
      v25 = v23;
      v23 += 80;
      sub_15B6850(v25);
    }
    while ( v24 != v23 );
    v24 = v74;
  }
  if ( v24 != v76 )
    free(v24);
  for ( ; v61; --v61 )
    sub_1564F70(v60);
  return v21;
}
