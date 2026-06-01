/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E2B2
// Address: 0x0005E2B2

//----- (0005E2B2) --------------------------------------------------------
void __fastcall sub_5E2B2(
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
        void **a29)
{
  int v29; // r5
  void **v30; // r6
  void *v31; // r0
  char *v32; // r4
  void *v33; // r0
  int i; // r6
  char *v35; // r7
  void *v36; // r0
  void *v37; // r0
  void *v38; // r0
  int v39; // r0
  int v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // [sp+68h] [bp+68h]

  v31 = *(void **)v29;
  if ( *(_DWORD *)v29 )
  {
    *(_DWORD *)(v29 + 4) = 0;
    qfree(v31);
    v31 = nullptr;
    *(_DWORD *)(v29 + 8) = 0;
    *(_DWORD *)v29 = 0;
  }
  v32 = (char *)*v30;
  if ( *v30 )
  {
    v33 = v30[1];
    if ( v33 )
    {
      v43 = (int)v33 - 1;
      for ( i = 0; ; i += 40 )
      {
        v35 = &v32[i];
        v36 = *(void **)&v32[i + 24];
        if ( v36 )
        {
          *((_DWORD *)v35 + 7) = 0;
          qfree(v36);
          *((_DWORD *)v35 + 6) = 0;
          *(_DWORD *)&v32[i + 32] = 0;
        }
        v37 = *((void **)v35 + 3);
        if ( v37 )
        {
          *((_DWORD *)v35 + 4) = 0;
          qfree(v37);
          *((_DWORD *)v35 + 3) = 0;
          *(_DWORD *)&v32[i + 20] = 0;
        }
        v38 = *(void **)&v32[i];
        if ( v38 )
        {
          *((_DWORD *)v35 + 1) = 0;
          qfree(v38);
          *(_DWORD *)&v32[i] = 0;
          *(_DWORD *)&v32[i + 8] = 0;
        }
        if ( !v43 )
          break;
        --v43;
        v32 = (char *)*a29;
      }
      v30 = a29;
      v32 = (char *)*a29;
    }
    v30[1] = nullptr;
    qfree(v32);
    sub_5EA34(v39, v40, v41, v42, a5, a6, a7, a8, a9);
  }
  else
  {
    sub_5EA3A((int)v31, a2, a3, a4, a5, a6, a7, a8, a9);
  }
}
// 5E2B2: variable 'v29' is possibly undefined
// 5E2C6: variable 'v30' is possibly undefined
// 5E2CC: variable 'a2' is possibly undefined
// 5E2CC: variable 'a3' is possibly undefined
// 5E2CC: variable 'a4' is possibly undefined
// 5E384: variable 'v39' is possibly undefined
// 5E384: variable 'v40' is possibly undefined
// 5E384: variable 'v41' is possibly undefined
// 5E384: variable 'v42' is possibly undefined
