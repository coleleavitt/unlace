/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B110
// Address: 0x000000000005B110

//----- (000000000005B110) ----------------------------------------------------
unsigned __int64 __fastcall sub_5B110(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // r12
  char *v4; // r14
  unsigned int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // rcx
  void **v8; // rbp
  unsigned int v9; // eax
  unsigned int v10; // ecx
  char *v11; // rcx
  char *v12; // rbx
  __int64 v13; // rax
  __int64 *v14; // rsi
  __m128i si128; // xmm0
  __int64 v16; // rcx
  char *v17; // rax
  _QWORD *epi64; // rsi
  __int64 v19; // rcx
  unsigned int v20; // eax
  void **v21; // rbx
  void **v22; // r12
  unsigned __int64 v23; // rax
  void *v24; // rcx
  void **v25; // rcx
  _QWORD *v26; // r14
  __int64 v27; // rax
  __int64 *v28; // rsi
  __int64 v30; // [rsp+0h] [rbp-68h]
  __int128 *v32; // [rsp+10h] [rbp-58h] BYREF
  __int128 v33; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+30h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  v3 = (__int64 *)(a1 + 16);
  v4 = *(char **)(a1 + 16);
  if ( !v4 )
    goto LABEL_8;
  v5 = *(_DWORD *)(a2 + 88);
  v6 = a1 + 16;
  v7 = *(_QWORD *)(a1 + 16);
  do
  {
    if ( *(_DWORD *)(v7 + 32) >= v5 )
      v6 = v7;
    v7 = *(_QWORD *)(v7 + 8LL * (*(_DWORD *)(v7 + 32) < v5));
  }
  while ( v7 );
  if ( (__int64 *)v6 == v3 || v5 < *(_DWORD *)(v6 + 32) )
  {
LABEL_8:
    v33 = 0;
    v32 = &v33;
    v30 = a2;
    if ( v4 )
    {
      v8 = (void **)(a1 + 16);
      v9 = *(_DWORD *)(a2 + 88);
      while ( 1 )
      {
        v10 = *((_DWORD *)v4 + 8);
        if ( v9 >= v10 )
        {
          if ( v10 >= v9 )
            goto LABEL_18;
          v8 = (void **)(v4 + 8);
          v11 = *((char **)v4 + 1);
          if ( !v11 )
            goto LABEL_18;
        }
        else
        {
          v11 = *(char **)v4;
          v8 = (void **)v4;
          if ( !*(_QWORD *)v4 )
          {
            v8 = (void **)v4;
            goto LABEL_18;
          }
        }
        v4 = v11;
      }
    }
    v4 = (char *)(a1 + 16);
    v8 = (void **)(a1 + 16);
LABEL_18:
    v12 = (char *)*v8;
    if ( !*v8 )
    {
      v12 = (char *)operator new(0x40u);
      *((_DWORD *)v12 + 8) = *(_DWORD *)(a2 + 88);
      *((_OWORD *)v12 + 3) = 0;
      *((_QWORD *)v12 + 5) = v12 + 48;
      *(_OWORD *)v12 = 0;
      *((_QWORD *)v12 + 2) = v4;
      *v8 = v12;
      v13 = **(_QWORD **)(a1 + 8);
      if ( v13 )
      {
        *(_QWORD *)(a1 + 8) = v13;
        v14 = (__int64 *)*v8;
      }
      else
      {
        v14 = (__int64 *)v12;
      }
      sub_4A450(*(__int64 **)(a1 + 16), v14);
      ++*(_QWORD *)(a1 + 24);
    }
    sub_5D8F0((__int64)(v12 + 40), *((_QWORD **)v12 + 6));
    si128 = _mm_load_si128((const __m128i *)&v32);
    *(__m128i *)(v12 + 40) = si128;
    v16 = *((_QWORD *)&v33 + 1);
    *((_QWORD *)v12 + 7) = *((_QWORD *)&v33 + 1);
    v17 = v12 + 48;
    epi64 = (_QWORD *)_mm_extract_epi64(si128, 1);
    if ( v16 )
    {
      epi64[2] = v17;
      v32 = &v33;
      v33 = 0;
      epi64 = nullptr;
    }
    else
    {
      *((_QWORD *)v12 + 5) = v17;
    }
    sub_5D8F0((__int64)&v32, epi64);
    v19 = *v3;
    if ( *v3 )
    {
      a2 = v30;
      v20 = *(_DWORD *)(v30 + 88);
      v6 = a1 + 16;
      do
      {
        if ( *(_DWORD *)(v19 + 32) >= v20 )
          v6 = v19;
        v19 = *(_QWORD *)(v19 + 8LL * (*(_DWORD *)(v19 + 32) < v20));
      }
      while ( v19 );
      if ( (__int64 *)v6 == v3 || v20 < *(_DWORD *)(v6 + 32) )
        v6 = a1 + 16;
    }
    else
    {
      v6 = a1 + 16;
      a2 = v30;
    }
  }
  v21 = *(void ***)(v6 + 48);
  if ( v21 )
  {
    v22 = (void **)(v6 + 48);
    v23 = *(_QWORD *)(a2 + 56);
    while ( 1 )
    {
      v24 = v21[4];
      if ( v23 >= (unsigned __int64)v24 )
      {
        if ( (unsigned __int64)v24 >= v23 )
          goto LABEL_46;
        v22 = v21 + 1;
        v25 = (void **)v21[1];
        if ( !v25 )
          goto LABEL_46;
      }
      else
      {
        v25 = (void **)*v21;
        v22 = v21;
        if ( !*v21 )
          goto LABEL_45;
      }
      v21 = v25;
    }
  }
  v21 = (void **)(v6 + 48);
LABEL_45:
  v22 = v21;
LABEL_46:
  v26 = *v22;
  if ( !*v22 )
  {
    v26 = operator new(0x30u);
    v26[4] = *(_QWORD *)(a2 + 56);
    *((_DWORD *)v26 + 10) = 0;
    *(_OWORD *)v26 = 0;
    v26[2] = v21;
    *v22 = v26;
    v27 = **(_QWORD **)(v6 + 40);
    if ( v27 )
    {
      *(_QWORD *)(v6 + 40) = v27;
      v28 = (__int64 *)*v22;
    }
    else
    {
      v28 = v26;
    }
    sub_4A450(*(__int64 **)(v6 + 48), v28);
    ++*(_QWORD *)(v6 + 56);
  }
  *((_DWORD *)v26 + 10) = a3;
  return __readfsqword(0x28u);
}
