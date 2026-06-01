__int64 __fastcall sub_79BFB0(
        _QWORD *a1,
        const char *ptr,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
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
  void *v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r12
  unsigned __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rsi
  const char *v27; // r13
  size_t v28; // rax
  __int64 v29; // r14
  size_t v30; // r8
  size_t v31; // r9
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // r14
  unsigned __int64 v40; // rdx
  __int64 v41; // rsi
  __m128i si128; // xmm0
  __int64 v43; // r13
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v51; // [rsp+18h] [rbp-E0h]
  __int64 v52; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v53; // [rsp+18h] [rbp-E0h]
  size_t v54; // [rsp+20h] [rbp-D8h]
  size_t v55; // [rsp+28h] [rbp-D0h]
  char v56[8]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v57; // [rsp+38h] [rbp-C0h]
  __int64 v58; // [rsp+48h] [rbp-B0h]
  char v59[8]; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v60; // [rsp+58h] [rbp-A0h]
  __int64 v61; // [rsp+68h] [rbp-90h]
  char v62[8]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v63; // [rsp+78h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-70h]
  char v65[8]; // [rsp+90h] [rbp-68h] BYREF
  __int128 v66; // [rsp+98h] [rbp-60h]
  __int64 v67; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v68; // [rsp+B8h] [rbp-40h]

  v7 = a4;
  v10 = a1[10];
  v11 = a1[9];
  v68 = __readfsqword(0x28u);
  if ( a1[11] < (unsigned __int64)(v10 + 1) )
  {
    v35 = qvector_reserve(a1 + 9, v11, v10 + 1, 4);
    a1[9] = v35;
    v11 = v35;
    v10 = a1[10];
  }
  *(_DWORD *)(v11 + 4 * v10) = 0;
  ++a1[10];
  if ( (int)v7 > 0 )
  {
    v12 = a5 + 32 * v7;
    do
    {
      v65[0] = 2;
      v67 = 0;
      v66 = 0;
      copy_idcv(v65);
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
      free_idcv(v65);
    }
    while ( v12 != a5 );
  }
  v17 = sub_795CA0(a1, a6, ptr, a3);
  if ( !(_BYTE)v17 )
  {
    if ( a7 )
    {
      v20 = (void *)*a7;
      v21 = a1[3] + 32LL * a1[4] - 32;
      if ( (unsigned __int64)a7[2] <= 0xD )
      {
        v37 = qvector_reserve(a7, v20, 14, 1);
        *a7 = v37;
        v20 = (void *)v37;
      }
      a7[1] = 14;
      qmemcpy(v20, "Runtime error", 13);
      v22 = *a7;
      v56[0] = 2;
      *(_BYTE *)(v22 + 13) = 0;
      v58 = 0;
      v59[0] = 2;
      v61 = 0;
      v57 = 0;
      v60 = 0;
      get_idcv_attr(v59, v21, "line", 0);
      get_idcv_attr(v56, v21, "file", 0);
      if ( v59[0] == 2 && (__int64)v60 > 0 && v56[0] == 7 )
      {
        sub_35A910(a7);
      }
      else
      {
        v62[0] = 2;
        v64 = 0;
        v63 = 0;
        get_idcv_attr(v62, v21, "func", 0);
        if ( v62[0] == 7 && *((_QWORD *)&v63 + 1) > 1u )
        {
          v65[0] = 2;
          v66 = 0;
          v67 = 0;
          get_idcv_attr(v65, v21, "pc", 0);
          sub_35A910(a7);
          free_idcv(v65);
        }
        free_idcv(v62);
      }
      v23 = a7[1];
      if ( v23 )
      {
        v25 = v23 + 1;
        v24 = v23 + 2;
        --v23;
      }
      else
      {
        v24 = 3;
        v25 = 2;
      }
      v26 = *a7;
      if ( a7[2] < v24 )
      {
        v51 = v24;
        v44 = qvector_reserve(a7, v26, v24, 1);
        *a7 = v44;
        v24 = v51;
        v26 = v44;
      }
      a7[1] = v24;
      *(_BYTE *)(v26 + v25) = 0;
      *(_WORD *)(*a7 + v23) = 8250;
      v65[0] = 2;
      v67 = 0;
      v66 = 0;
      get_idcv_attr(v65, v21, "description", 0);
      if ( v65[0] == 7 )
      {
        v27 = haystack;
        if ( *((_QWORD *)&v66 + 1) )
          v27 = (const char *)v66;
        if ( v27 )
        {
          v28 = strlen(v27);
          v29 = a7[1];
          v30 = v28;
          v31 = v28;
          if ( v29 )
          {
            --v29;
            v31 = v28 + v29;
          }
          v32 = *a7;
          v33 = v31 + 1;
          if ( a7[2] < v31 + 1 )
          {
            v55 = v28;
            v54 = v31;
            v52 = v31 + 1;
            v45 = qvector_reserve(a7, v32, v33, 1);
            v30 = v55;
            v31 = v54;
            *a7 = v45;
            v32 = v45;
            v33 = v52;
          }
          a7[1] = v33;
          *(_BYTE *)(v32 + v31) = 0;
          memmove((void *)(v29 + *a7), v27, v30);
        }
      }
      else
      {
        v38 = a7[1];
        if ( v38 )
        {
          v39 = v38 + 18;
          v40 = v38 + 19;
          --v38;
        }
        else
        {
          v40 = 20;
          v39 = 19;
        }
        v41 = *a7;
        if ( a7[2] < v40 )
        {
          v53 = v40;
          v47 = qvector_reserve(a7, v41, v40, 1);
          *a7 = v47;
          v40 = v53;
          v41 = v47;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A83A0);
        a7[1] = v40;
        *(_BYTE *)(v41 + v39) = 0;
        v43 = *a7 + v38;
        *(__m128i *)v43 = si128;
        *(_DWORD *)(v43 + 15) = 1852795252;
      }
      free_idcv(v65);
      free_idcv(v59);
      free_idcv(v56);
    }
    if ( a6 && !(unsigned int)move_idcv(a6, a1[3] + 32LL * a1[4] - 32) )
    {
      v65[0] = 2;
      v66 = 0;
      v67 = 0;
      copy_idcv(v65);
      v36 = a1[4];
      if ( v36 )
      {
        v46 = v36 - 1;
        a1[4] = v46;
        free_idcv(a1[3] + 32 * v46);
      }
      free_idcv(v65);
    }
  }
  if ( *(_BYTE *)(a1[1] + 124LL) )
    callui(24, 10, 0, (int)&callui, v18, v19);
  return v17;
}
