__int64 __fastcall sub_20EA4E0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rbx
  int v6; // r12d
  __int64 v7; // rax
  char v8; // dl
  __int64 v9; // r14
  _DWORD *v10; // r15
  _DWORD *v11; // r14
  __int64 v12; // rax
  char v13; // dl
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  int v16; // r14d
  _BYTE *v17; // r15
  __int64 v18; // rdi
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rbx
  char *v22; // r13
  char *v23; // rbx
  _BYTE *i; // rax
  __int64 v25; // rsi
  unsigned int v26; // ecx
  __int64 v27; // rdi
  __m128i *v28; // rbx
  __m128i *v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdi
  int v33; // [rsp+8h] [rbp-990h]
  __int64 v34; // [rsp+8h] [rbp-990h]
  __int64 v35; // [rsp+8h] [rbp-990h]
  int v36; // [rsp+14h] [rbp-984h]
  __int64 v37; // [rsp+18h] [rbp-980h]
  __int64 v38; // [rsp+20h] [rbp-978h]
  __int128 v39; // [rsp+30h] [rbp-968h] BYREF
  __int64 v40; // [rsp+40h] [rbp-958h]
  void *ptr; // [rsp+48h] [rbp-950h]
  __int64 v42; // [rsp+50h] [rbp-948h]
  _BYTE v43[32]; // [rsp+58h] [rbp-940h] BYREF
  __m128i *v44; // [rsp+78h] [rbp-920h]
  __int64 v45; // [rsp+80h] [rbp-918h]
  __m128i si128; // [rsp+88h] [rbp-910h] BYREF
  _QWORD v47[35]; // [rsp+A0h] [rbp-8F8h] BYREF
  _BYTE v48[264]; // [rsp+1B8h] [rbp-7E0h] BYREF
  __int64 v49; // [rsp+2C0h] [rbp-6D8h]
  __int128 *v50; // [rsp+2C8h] [rbp-6D0h]
  _BYTE v51[256]; // [rsp+2D0h] [rbp-6C8h] BYREF
  __int64 v52; // [rsp+3D8h] [rbp-5C0h]
  __int128 *v53; // [rsp+3E0h] [rbp-5B8h]
  _BYTE v54[256]; // [rsp+3E8h] [rbp-5B0h] BYREF
  __int64 v55; // [rsp+4F0h] [rbp-4A8h]
  __int128 *v56; // [rsp+4F8h] [rbp-4A0h]
  _BYTE v57[256]; // [rsp+500h] [rbp-498h] BYREF
  __int64 v58; // [rsp+608h] [rbp-390h]
  __int128 *v59; // [rsp+610h] [rbp-388h]
  _BYTE v60[256]; // [rsp+618h] [rbp-380h] BYREF
  __int64 v61; // [rsp+720h] [rbp-278h]
  __int128 *v62; // [rsp+728h] [rbp-270h]
  _BYTE v63[256]; // [rsp+730h] [rbp-268h] BYREF
  __int64 v64; // [rsp+838h] [rbp-160h]
  __int128 *v65; // [rsp+840h] [rbp-158h]
  _BYTE v66[256]; // [rsp+848h] [rbp-150h] BYREF
  __int64 v67; // [rsp+950h] [rbp-48h]
  __int128 *v68; // [rsp+958h] [rbp-40h]
  _BYTE v69[56]; // [rsp+960h] [rbp-38h] BYREF

  *(_QWORD *)a1 = a1 + 16;
  v38 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x300000000LL;
  if ( a3 )
  {
    v4 = *(_DWORD *)(a2 + 12);
    v5 = a2;
    v39 = 0;
    v6 = *(unsigned __int8 *)(a2 + 8);
    v36 = v4;
    ptr = v43;
    v42 = 0x400000000LL;
    v44 = &si128;
    v40 = 0;
    memset(v47, 0, 256);
    v45 = 0;
    memset(v48, 0, 256);
    si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    v47[33] = 0;
    memset(v51, 0, sizeof(v51));
    v47[34] = &v39;
    v49 = 0;
    memset(v54, 0, sizeof(v54));
    v50 = &v39;
    v52 = 0;
    memset(v57, 0, sizeof(v57));
    v53 = &v39;
    v55 = 0;
    v56 = &v39;
    v58 = 0;
    v59 = &v39;
    v61 = 0;
    v62 = &v39;
    memset(v60, 0, sizeof(v60));
    v64 = 0;
    v65 = &v39;
    memset(v63, 0, sizeof(v63));
    v67 = 0;
    v68 = &v39;
    memset(v66, 0, sizeof(v66));
    v37 = a2 + 20 * a3;
    if ( v37 != a2 )
    {
      while ( 1 )
      {
        v7 = sub_20E97F0(&v47[35 * *(unsigned int *)(v5 + 16)], (unsigned int *)v5);
        if ( v8 )
        {
          v19 = *(unsigned int *)(a1 + 8);
          if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
          {
            v35 = v7;
            sub_2237220(a1, v38, v19 + 1, 16);
            v19 = *(unsigned int *)(a1 + 8);
            v7 = v35;
          }
          v20 = (_QWORD *)(*(_QWORD *)a1 + 16 * v19);
          *v20 = v5;
          v20[1] = v7;
          ++*(_DWORD *)(a1 + 8);
        }
        if ( *(_DWORD *)(v5 + 16) )
        {
          v9 = 70;
          v10 = v47;
        }
        else
        {
          v9 = 490;
          v10 = v48;
        }
        v11 = &v10[v9];
        do
        {
          while ( 1 )
          {
            v12 = sub_20E4E10(v10, (unsigned int *)v5);
            if ( v13 )
              break;
            v10 += 70;
            if ( v11 == v10 )
              goto LABEL_12;
          }
          v14 = *(unsigned int *)(a1 + 8);
          if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
          {
            v34 = v12;
            sub_2237220(a1, v38, v14 + 1, 16);
            v14 = *(unsigned int *)(a1 + 8);
            v12 = v34;
          }
          v10 += 70;
          v15 = (_QWORD *)(*(_QWORD *)a1 + 16 * v14);
          *v15 = v5;
          v15[1] = v12;
          ++*(_DWORD *)(a1 + 8);
        }
        while ( v11 != v10 );
LABEL_12:
        v5 += 20;
        if ( v37 == v5 )
          break;
        v16 = *(unsigned __int8 *)(v5 + 8);
        v33 = *(_DWORD *)(v5 + 12);
        if ( (_BYTE)v6 == (_BYTE)v16 && v36 == *(_DWORD *)(v5 + 12) )
        {
          v16 = v6;
          v33 = v36;
        }
        else
        {
          v17 = v47;
          do
          {
            v18 = (__int64)v17;
            v17 += 280;
            sub_20E3C50(v18);
          }
          while ( v69 != v17 );
        }
        v6 = v16;
        v36 = v33;
      }
    }
    v21 = v69;
    do
    {
      v21 -= 35;
      sub_20E3C50((__int64)v21);
    }
    while ( v21 != v47 );
    v22 = (char *)ptr;
    *(_QWORD *)&v39 = 0;
    v23 = (char *)ptr + 8 * (unsigned int)v42;
    if ( ptr != v23 )
    {
      for ( i = ptr; ; i = ptr )
      {
        v25 = 0x40000000000LL;
        v26 = (unsigned int)((v22 - i) >> 3) >> 7;
        if ( v26 <= 0x1D )
          v25 = 4096LL << v26;
        v27 = *(_QWORD *)v22;
        v22 += 8;
        operator delete(v27, v25, 16);
        if ( v23 == v22 )
          break;
      }
    }
    v28 = v44;
    v29 = &v44[(unsigned int)v45];
    if ( v44 != v29 )
    {
      do
      {
        v30 = v28->m128i_i64[1];
        v31 = v28->m128i_i64[0];
        ++v28;
        operator delete(v31, v30, 16);
      }
      while ( v29 != v28 );
      v29 = v44;
    }
    if ( v29 != &si128 )
      free(v29);
    if ( ptr != v43 )
      free(ptr);
  }
  return a1;
}
