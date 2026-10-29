__int64 __fastcall sub_77BB40(_QWORD *a1, const char *ptr, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // ebp
  int v18; // r8d
  int v19; // r9d
  _BYTE *v20; // rsi
  _BYTE *v21; // rax
  __int64 v22; // r12
  unsigned __int64 v23; // rdx
  __int64 v24; // r14
  _BYTE *v25; // rsi
  const char *v26; // r13
  size_t v27; // rax
  __int64 v28; // r14
  size_t v29; // r8
  size_t v30; // r9
  _BYTE *v31; // rsi
  size_t v32; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // r14
  unsigned __int64 v39; // rdx
  _BYTE *v40; // rsi
  __m128i si128; // xmm0
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v50; // [rsp+18h] [rbp-E0h]
  size_t v51; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v52; // [rsp+18h] [rbp-E0h]
  size_t v53; // [rsp+20h] [rbp-D8h]
  size_t v54; // [rsp+28h] [rbp-D0h]
  char v55[8]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v56; // [rsp+38h] [rbp-C0h]
  __int64 v57; // [rsp+48h] [rbp-B0h]
  char v58[8]; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v59; // [rsp+58h] [rbp-A0h]
  __int64 v60; // [rsp+68h] [rbp-90h]
  char v61[8]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v62; // [rsp+78h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-70h]
  char v64[8]; // [rsp+90h] [rbp-68h] BYREF
  __int128 v65; // [rsp+98h] [rbp-60h]
  __int64 v66; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v67; // [rsp+B8h] [rbp-40h]

  v7 = a4;
  v10 = a1[10];
  v11 = a1[9];
  v67 = __readfsqword(0x28u);
  if ( a1[11] < (unsigned __int64)(v10 + 1) )
  {
    v34 = qvector_reserve(a1 + 9, v11, v10 + 1, 4);
    a1[9] = v34;
    v11 = v34;
    v10 = a1[10];
  }
  *(_DWORD *)(v11 + 4 * v10) = 0;
  ++a1[10];
  if ( (int)v7 > 0 )
  {
    v12 = a5 + 32 * v7;
    do
    {
      v64[0] = 2;
      v66 = 0;
      v65 = 0;
      copy_idcv(v64);
      v14 = a1[4];
      v15 = a1[3];
      if ( a1[5] < (unsigned __int64)(v14 + 1) )
      {
        v16 = qvector_reserve(a1 + 3, v15, v14 + 1, 32);
        a1[3] = v16;
        v15 = v16;
        v14 = a1[4];
      }
      v13 = v15 + 32 * v14;
      *(_BYTE *)v13 = 2;
      *(_QWORD *)(v13 + 24) = 0;
      *(_OWORD *)(v13 + 8) = 0;
      copy_idcv(v13);
      ++a1[4];
      a5 += 32;
      free_idcv(v64);
    }
    while ( v12 != a5 );
  }
  v17 = sub_775860(a1, a6, ptr, a3);
  if ( !(_BYTE)v17 )
  {
    if ( a7 )
    {
      v20 = *(_BYTE **)a7;
      if ( *(_QWORD *)(a7 + 16) <= 0xDu )
      {
        v36 = qvector_reserve(a7, v20, 14, 1);
        *(_QWORD *)a7 = v36;
        v20 = (_BYTE *)v36;
      }
      *(_QWORD *)(a7 + 8) = 14;
      qmemcpy(v20, "Runtime error", 13);
      v21 = *(_BYTE **)a7;
      v55[0] = 2;
      v21[13] = 0;
      v57 = 0;
      v58[0] = 2;
      v60 = 0;
      v56 = 0;
      v59 = 0;
      get_idcv_attr();
      get_idcv_attr();
      v61[0] = 2;
      v63 = 0;
      v62 = 0;
      get_idcv_attr();
      free_idcv(v61);
      v22 = *(_QWORD *)(a7 + 8);
      if ( v22 )
      {
        v24 = v22 + 1;
        v23 = v22 + 2;
        --v22;
      }
      else
      {
        v23 = 3;
        v24 = 2;
      }
      v25 = *(_BYTE **)a7;
      if ( *(_QWORD *)(a7 + 16) < v23 )
      {
        v50 = v23;
        v43 = qvector_reserve(a7, v25, v23, 1);
        *(_QWORD *)a7 = v43;
        v23 = v50;
        v25 = (_BYTE *)v43;
      }
      *(_QWORD *)(a7 + 8) = v23;
      v25[v24] = 0;
      *(_WORD *)(*(_QWORD *)a7 + v22) = 8250;
      v64[0] = 2;
      v66 = 0;
      v65 = 0;
      get_idcv_attr();
      if ( v64[0] == 7 )
      {
        v26 = haystack;
        if ( *((_QWORD *)&v65 + 1) )
          v26 = (const char *)v65;
        if ( v26 )
        {
          v27 = strlen(v26);
          v28 = *(_QWORD *)(a7 + 8);
          v29 = v27;
          v30 = v27;
          if ( v28 )
          {
            --v28;
            v30 = v27 + v28;
          }
          v31 = *(_BYTE **)a7;
          v32 = v30 + 1;
          if ( *(_QWORD *)(a7 + 16) < v30 + 1 )
          {
            v54 = v27;
            v53 = v30;
            v51 = v30 + 1;
            v44 = qvector_reserve(a7, v31, v32, 1);
            v29 = v54;
            v30 = v53;
            *(_QWORD *)a7 = v44;
            v31 = (_BYTE *)v44;
            v32 = v51;
          }
          *(_QWORD *)(a7 + 8) = v32;
          v31[v30] = 0;
          memmove((void *)(v28 + *(_QWORD *)a7), v26, v29);
        }
      }
      else
      {
        v37 = *(_QWORD *)(a7 + 8);
        if ( v37 )
        {
          v38 = v37 + 18;
          v39 = v37 + 19;
          --v37;
        }
        else
        {
          v39 = 20;
          v38 = 19;
        }
        v40 = *(_BYTE **)a7;
        if ( *(_QWORD *)(a7 + 16) < v39 )
        {
          v52 = v39;
          v46 = qvector_reserve(a7, v40, v39, 1);
          *(_QWORD *)a7 = v46;
          v39 = v52;
          v40 = (_BYTE *)v46;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_2384370);
        *(_QWORD *)(a7 + 8) = v39;
        v40[v38] = 0;
        v42 = *(_QWORD *)a7 + v37;
        *(__m128i *)v42 = si128;
        *(_DWORD *)(v42 + 15) = 1852795252;
      }
      free_idcv(v64);
      free_idcv(v58);
      free_idcv(v55);
    }
    if ( a6 && !(unsigned int)move_idcv(a6, a1[3] + 32LL * a1[4] - 32) )
    {
      v64[0] = 2;
      v65 = 0;
      v66 = 0;
      copy_idcv(v64);
      v35 = a1[4];
      if ( v35 )
      {
        v45 = v35 - 1;
        a1[4] = v45;
        free_idcv(a1[3] + 32 * v45);
      }
      free_idcv(v64);
    }
  }
  if ( *(_BYTE *)(a1[1] + 124LL) )
    callui(24, 10, 0, (int)&callui, v18, v19);
  return v17;
}

