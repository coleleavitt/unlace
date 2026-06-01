void __fastcall sub_183A170(__int64 a1, __int64 a2, __int64 a3)
{
  void **v3; // rax
  __m128 v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // r13
  __int64 v11; // rsi
  unsigned __int64 i; // rbx
  __int64 v13; // rdx
  __int64 *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r15
  char v17; // al
  char *v18; // rdi
  void **v19; // rbx
  void **v20; // rdi
  void **v21; // rbp
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  int v24; // ebx
  void *v25; // rcx
  __int64 v26; // r13
  char *v27; // rsi
  __int64 v28; // rdx
  __int64 v30; // [rsp+8h] [rbp-270h] BYREF
  __m128 v31; // [rsp+10h] [rbp-268h] BYREF
  void *v32[2]; // [rsp+20h] [rbp-258h] BYREF
  int v33; // [rsp+30h] [rbp-248h]
  char v34; // [rsp+34h] [rbp-244h]
  __int64 v35; // [rsp+38h] [rbp-240h] BYREF
  void *ptr; // [rsp+78h] [rbp-200h]
  __int64 v37; // [rsp+80h] [rbp-1F8h]
  _BYTE v38[72]; // [rsp+88h] [rbp-1F0h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-1A8h] BYREF
  void *v40[3]; // [rsp+D8h] [rbp-1A0h] BYREF
  __int64 v41; // [rsp+F0h] [rbp-188h]
  __int64 v42; // [rsp+F8h] [rbp-180h] BYREF
  unsigned int v43; // [rsp+100h] [rbp-178h]
  void *v44[2]; // [rsp+178h] [rbp-100h] BYREF
  int v45; // [rsp+188h] [rbp-F0h]
  char v46; // [rsp+18Ch] [rbp-ECh]
  _QWORD v47[5]; // [rsp+190h] [rbp-E8h] BYREF
  void *v48; // [rsp+1B8h] [rbp-C0h]
  __int64 v49; // [rsp+1C0h] [rbp-B8h]
  _DWORD v50[26]; // [rsp+1C8h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+230h] [rbp-48h]
  __int16 v52; // [rsp+238h] [rbp-40h]
  char v53; // [rsp+23Ah] [rbp-3Eh]

  v39 = 0;
  v40[2] = nullptr;
  v41 = 1;
  v40[1] = v40;
  v40[0] = v40;
  v3 = (void **)&v42;
  do
  {
    *v3 = nullptr;
    v3 += 2;
  }
  while ( v3 != v44 );
  v30 = a2;
  v44[0] = v47;
  v48 = v50;
  v49 = 0x400000000LL;
  v4 = _mm_loadh_ps((const double *)&v30);
  v52 = 1;
  v32[0] = &v35;
  ptr = v38;
  v44[1] = &byte_4;
  v45 = 0;
  v46 = 1;
  v47[4] = 0;
  v50[24] = 0;
  v51 = 0;
  v53 = 0;
  v32[1] = byte_8;
  v33 = 0;
  v34 = 1;
  v37 = 0x800000000LL;
  v31 = v4;
  v5 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  v10 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v5 & 4) != 0 )
    v10 = (_QWORD *)*v10;
  v11 = *(_QWORD *)(a2 + 40);
  if ( v10 )
    v10 -= 8;
  for ( i = sub_B94670((unsigned __int64)(v10 + 8), v11, v6, v7, v8, v9); i; i = v14[1] )
  {
    v13 = i;
    v14 = (__int64 *)(i & 0xFFFFFFFFFFFFFFF8LL);
    v15 = (__int64)v14;
    LODWORD(v13) = (v13 >> 2) & 1;
    v16 = (unsigned int)v13;
    if ( (_DWORD)v13 )
    {
      v15 = 0;
      if ( v14 )
        v15 = *v14;
    }
    if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 53 <= 1 )
      v15 = *(_QWORD *)(v15 + 64);
    if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 35 <= 3 )
      sub_183A070(v15, (__int64)v32);
    if ( !v16 )
      break;
    if ( !v14 )
      break;
  }
  v17 = sub_B6EFE0((__int64)v10, (__int64 *)sub_18399D0, (__int64)&v31, (__int64)&v39, 0);
  v18 = (char *)ptr;
  if ( v17 )
  {
    v22 = (unsigned int)v37;
    v23 = *(unsigned int *)(a3 + 8);
    v24 = v37;
    if ( (unsigned int)v37 <= v23 )
    {
      v18 = (char *)ptr;
      if ( (_DWORD)v37 )
      {
        memmove(*(void **)a3, ptr, 8LL * (unsigned int)v37);
        v18 = (char *)ptr;
      }
    }
    else
    {
      if ( (unsigned int)v37 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        *(_DWORD *)(a3 + 8) = 0;
        sub_2237220(a3, a3 + 16, v22, 8);
        v18 = (char *)ptr;
        v25 = *(void **)a3;
        v23 = 0;
        v22 = (unsigned int)v37;
        v27 = (char *)ptr;
      }
      else
      {
        v18 = (char *)ptr;
        v25 = *(void **)a3;
        v26 = 8 * v23;
        v27 = (char *)ptr;
        if ( *(_DWORD *)(a3 + 8) )
        {
          memmove(*(void **)a3, ptr, 8 * v23);
          v18 = (char *)ptr;
          v23 = v26;
          v22 = (unsigned int)v37;
          v25 = (void *)(v26 + *(_QWORD *)a3);
          v27 = (char *)ptr + v26;
        }
      }
      v28 = 8 * v22;
      if ( v27 != &v18[v28] )
      {
        memcpy(v25, v27, v28 - v23);
        v18 = (char *)ptr;
      }
    }
    *(_DWORD *)(a3 + 8) = v24;
  }
  if ( v18 != v38 )
    free(v18);
  if ( !v34 )
    free(v32[0]);
  if ( v48 != v50 )
    free(v48);
  if ( !v46 )
    free(v44[0]);
  if ( (v41 & 1) == 0 )
    operator delete(v42, 16LL * v43, 8);
  v19 = (void **)v40[0];
  if ( v40[0] != v40 )
  {
    while ( 1 )
    {
      v20 = (void **)v19[2];
      v21 = (void **)*v19;
      if ( v20 == v19 + 4 )
      {
        operator delete(v19);
        if ( v21 == v40 )
          return;
      }
      else
      {
        free(v20);
        operator delete(v19);
        if ( v21 == v40 )
          return;
      }
      v19 = v21;
    }
  }
}
