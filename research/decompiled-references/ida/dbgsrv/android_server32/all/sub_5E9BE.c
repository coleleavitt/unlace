/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E9BE
// Address: 0x0005E9BE

//----- (0005E9BE) --------------------------------------------------------
void __fastcall sub_5E9BE(
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
        void *a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        void **a30,
        int a31)
{
  signed int v31; // r4
  void **v32; // r5
  int v33; // r6
  int v34; // r1
  int v35; // r2
  int v36; // r3
  char *v37; // r4
  unsigned int v38; // r5
  int i; // r7
  int v40; // r3
  void *v41; // r0
  _DWORD *v42; // r6
  void *v43; // r0
  int v44; // r0
  int v45; // r1
  int v46; // r2
  int v47; // r3
  unsigned int v48; // [sp+68h] [bp+68h]

  sub_5C524(a28, a31, v31, (int)&STACK[0x1090]);
  v37 = (char *)*v32;
  if ( *v32 )
  {
    v48 = (unsigned int)v32[1];
    if ( v48 )
    {
      v38 = 1;
      for ( i = 8; ; i += 12 )
      {
        v40 = (int)&v37[4 * a22 + i];
        v41 = *(void **)(v40 - 4);
        v42 = (_DWORD *)(v40 - 4);
        if ( v41 )
        {
          *(_DWORD *)&v37[4 * a22 + i] = a21;
          qfree(v41);
          *v42 = 0;
          *(_DWORD *)&v37[i] = 0;
        }
        if ( v38 >= v48 )
          break;
        ++v38;
        v37 = (char *)*a30;
      }
      v32 = a30;
      v37 = (char *)*a30;
      v33 = a29;
    }
    v32[1] = a21;
    qfree(v37);
    v32[2] = nullptr;
    *v32 = nullptr;
  }
  v43 = *(void **)v33;
  if ( *(_DWORD *)v33 )
  {
    *(_DWORD *)(v33 + 4) = a21;
    qfree(v43);
    sub_5EA34(v44, v45, v46, v47, a5, a6, a7, a8, a9);
  }
  else
  {
    sub_5EA3A(0, v34, v35, v36, a5, a6, a7, a8, a9);
  }
}
// 5E9C8: variable 'v31' is possibly undefined
// 5E9CC: variable 'v32' is possibly undefined
// 5EA26: variable 'v33' is possibly undefined
// 5EA2A: variable 'v34' is possibly undefined
// 5EA2A: variable 'v35' is possibly undefined
// 5EA2A: variable 'v36' is possibly undefined
// 5EA31: variable 'v44' is possibly undefined
// 5EA31: variable 'v45' is possibly undefined
// 5EA31: variable 'v46' is possibly undefined
// 5EA31: variable 'v47' is possibly undefined
