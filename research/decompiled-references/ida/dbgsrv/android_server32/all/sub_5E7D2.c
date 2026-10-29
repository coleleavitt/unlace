/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E7D2
// Address: 0x0005E7D2

//----- (0005E7D2) --------------------------------------------------------
void __fastcall sub_5E7D2(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        void *a33,
        int a34,
        int a35,
        int a36,
        int a37,
        char *a38,
        unsigned int a39,
        int a40,
        char *a41,
        unsigned int a42)
{
  int v42; // r1
  int v43; // r2
  int v44; // r3
  int v45; // r6
  void *v46; // r0
  void *v47; // r0
  char *v48; // r4
  unsigned int v49; // r7
  int v50; // r5
  int v51; // r2
  int v52; // r3
  void *v53; // r0
  _DWORD *v54; // r6
  char *v55; // r4
  unsigned int v56; // r7
  int v57; // r5
  int v58; // r2
  int v59; // r3
  void *v60; // r0
  _DWORD *v61; // r6

  free_debug_event(&STACK[0x2090]);
  v45 = a23;
  if ( a33 )
    qfree(a33);
  v46 = *(void **)(a29 + 16);
  if ( v46 )
  {
    *(_DWORD *)(a29 + 20) = 0;
    qfree(v46);
    *(_DWORD *)(a29 + 24) = 0;
    *(_DWORD *)(a29 + 16) = 0;
  }
  v47 = *(void **)a29;
  if ( *(_DWORD *)a29 )
  {
    *(_DWORD *)(a29 + 4) = 0;
    qfree(v47);
    v47 = nullptr;
    *(_DWORD *)(a29 + 8) = 0;
    *(_DWORD *)a29 = 0;
  }
  v48 = a38;
  if ( a38 )
  {
    if ( a39 )
    {
      v49 = 1;
      v50 = 16;
      while ( 1 )
      {
        v51 = 4 * v45;
        v52 = (int)&v48[4 * v45 + v50];
        v53 = *(void **)(v52 - 4);
        v54 = (_DWORD *)(v52 - 4);
        if ( v53 )
        {
          *(_DWORD *)&v48[v50 + v51] = 0;
          qfree(v53);
          *v54 = 0;
          *(_DWORD *)&v48[v50] = 0;
        }
        if ( v49 >= a39 )
          break;
        v50 += 20;
        ++v49;
        v48 = a38;
        v45 = a23;
      }
      v48 = a38;
      v45 = a23;
    }
    qfree(v48);
    v47 = nullptr;
  }
  v55 = a41;
  if ( a41 )
  {
    if ( a42 )
    {
      v56 = 1;
      v57 = 16;
      while ( 1 )
      {
        v58 = 4 * v45;
        v59 = (int)&v55[4 * v45 + v57];
        v60 = *(void **)(v59 - 4);
        v61 = (_DWORD *)(v59 - 4);
        if ( v60 )
        {
          *(_DWORD *)&v55[v57 + v58] = 0;
          qfree(v60);
          *v61 = 0;
          *(_DWORD *)&v55[v57] = 0;
        }
        if ( v56 >= a42 )
          break;
        v57 += 20;
        ++v56;
        v55 = a41;
        v45 = a23;
      }
      v55 = a41;
    }
    qfree(v55);
    v47 = nullptr;
  }
  sub_5EA3A((int)v47, v42, v43, v44, a5, a6, a7, a8, a9);
}
// 5E876: variable 'v42' is possibly undefined
// 5E876: variable 'v43' is possibly undefined
// 5E876: variable 'v44' is possibly undefined
