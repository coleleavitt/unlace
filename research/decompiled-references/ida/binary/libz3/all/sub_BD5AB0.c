__int64 __fastcall sub_BD5AB0(__int64 a1, __int64 a2, int **a3, __m128 a4, __m128 a5, __m128 a6)
{
  unsigned int v9; // r15d
  unsigned int v10; // ecx
  int *v11; // rax
  int *v12; // rbx
  unsigned int v13; // ecx
  __int64 v14; // rsi
  int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r9
  int *v19; // rdi
  __int64 v20; // rax
  _DWORD *v21; // r14
  int v22; // eax
  __int64 v23; // r12
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _DWORD *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // ebp
  __int64 v37; // rax
  int v38; // [rsp+0h] [rbp-F8h]
  __int64 v39; // [rsp+0h] [rbp-F8h]
  __int64 v40; // [rsp+0h] [rbp-F8h]
  __int64 v41; // [rsp+8h] [rbp-F0h]
  int v42; // [rsp+8h] [rbp-F0h]
  int v43; // [rsp+8h] [rbp-F0h]
  __int64 v44; // [rsp+10h] [rbp-E8h]
  int v45; // [rsp+10h] [rbp-E8h]
  int v46; // [rsp+10h] [rbp-E8h]
  __int64 v47; // [rsp+18h] [rbp-E0h]
  __int64 v48; // [rsp+18h] [rbp-E0h]
  void *v49; // [rsp+18h] [rbp-E0h]
  __int64 v50; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+28h] [rbp-D0h]
  void *v52; // [rsp+30h] [rbp-C8h]
  int v53[2]; // [rsp+38h] [rbp-C0h]
  int v54[2]; // [rsp+40h] [rbp-B8h] BYREF
  void *v55; // [rsp+48h] [rbp-B0h]

  if ( (*(_BYTE *)(a2 + 44) & 8) != 0 )
  {
    v10 = -1;
    v9 = 0;
  }
  else
  {
    v9 = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
    v10 = v9 - 1;
  }
  if ( sub_B70A50((__int64 *)(*(_QWORD *)(a1 + 16) + 8440LL), (__int64)a3, **a3, v10, (_QWORD **)(a2 + 120), 0) )
  {
    v11 = *a3;
    v12 = v54;
    ++*(_DWORD *)(a1 + 316);
    *(_QWORD *)v54 = v11;
    v52 = v54;
    *(_QWORD *)v53 = 0x1000000001LL;
    if ( v9 <= 1 )
    {
      v14 = 1;
    }
    else
    {
      v13 = 16;
      LODWORD(v14) = 1;
      v15 = 1;
      v16 = 1;
      do
      {
        v18 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v16 + 32);
        if ( (unsigned int)v14 >= v13 )
        {
          v44 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v16 + 32);
          LODWORD(v41) = 2 * v13;
          LODWORD(v14) = v53[0];
          v19 = (int *)v52;
          v12 = (int *)sub_186B270(16LL * v13);
          v13 = v41;
          v18 = v44;
          if ( v53[0] )
          {
            if ( (unsigned int)(v53[0] - 1) <= 2 || v12 == (int *)((char *)v52 + 8) )
            {
              v37 = 0;
              do
              {
                *(_QWORD *)&v12[v37] = *(_QWORD *)&v19[v37];
                v37 += 2;
              }
              while ( 2LL * (unsigned int)v14 != v37 );
            }
            else
            {
              v20 = 0;
              do
              {
                a4 = (__m128)_mm_loadu_si128((const __m128i *)&v19[v20]);
                *(__m128 *)&v12[v20] = a4;
                v20 += 4;
              }
              while ( 4LL * ((unsigned int)v14 >> 1) != v20 );
              if ( (v14 & 1) != 0 )
                *(_QWORD *)&v12[2 * (v14 & 0xFFFFFFFE)] = *(_QWORD *)&v19[2 * (v14 & 0xFFFFFFFE)];
            }
          }
          if ( v19 != v54 && v19 )
          {
            LODWORD(v44) = v41;
            v41 = v18;
            sub_186B220(v19);
            LODWORD(v14) = v53[0];
            v13 = v44;
            v18 = v41;
          }
          v52 = v12;
          v53[1] = v13;
        }
        v17 = (unsigned int)v14;
        ++v15;
        v14 = (unsigned int)(v14 + 1);
        *(_QWORD *)&v12[2 * v17] = v18;
        v16 = (unsigned __int16)v15;
        v53[0] = v14;
      }
      while ( (unsigned __int16)v15 < v9 );
    }
    v21 = (_DWORD *)sub_BDD3C0(a1, v14, v12);
    sub_1684300(&v50, *(_QWORD *)(a1 + 24));
    v22 = sub_1684260(&v50, *a3);
    v23 = *(_QWORD *)(a1 + 24);
    v26 = sub_15DC610(
            v23,
            v22,
            v53[0] - 1,
            (int)v52 + 8,
            v24,
            v25,
            v38,
            v41,
            v44,
            (int)v54,
            v50,
            v51,
            (int)v52,
            v53[0],
            v54[0],
            v55);
    v30 = (_DWORD *)v26;
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    sub_B6F780(
      *(_QWORD **)(a1 + 16),
      (__int64)v21,
      0,
      a4,
      a5,
      a6,
      v27,
      v28,
      v29,
      v39,
      v42,
      v45,
      v47,
      v50,
      v51,
      (__int64)v52);
    sub_B6F780(
      *(_QWORD **)(a1 + 16),
      (__int64)v30,
      0,
      a4,
      a5,
      a6,
      v31,
      v32,
      v33,
      v40,
      v43,
      v46,
      v48,
      v50,
      v51,
      (__int64)v52);
    v34 = sub_BD4E90(a1, v21, v30);
    if ( v30 )
    {
      if ( v30[2]-- == 1 )
        sub_15D7BC0(v23, v30);
    }
    if ( v52 && v52 != v49 )
      sub_186B220(v52);
  }
  else
  {
    return 0;
  }
  return v34;
}

