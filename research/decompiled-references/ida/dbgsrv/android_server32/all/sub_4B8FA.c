/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B8FA
// Address: 0x0004B8FA

//----- (0004B8FA) --------------------------------------------------------
void __fastcall sub_4B8FA(
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
        unsigned int a18,
        int a19,
        int a20,
        _DWORD *a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        unsigned int a29,
        int a30,
        int a31,
        unsigned int a32)
{
  _DWORD *v32; // r4
  void **v33; // r0
  int v34; // r1
  _BYTE *v35; // r0
  unsigned __int8 *v36; // r5
  int v37; // r0
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // [sp+44h] [bp+44h]

  if ( get_qerrno() != 90 )
    sub_46924((unsigned __int8 *)&a23);
  v32 = a21;
  v33 = (void **)(a21 + 3);
  v34 = a21[4];
  if ( a21[5] >= (unsigned int)(v34 + 1) )
  {
    v35 = *v33;
  }
  else
  {
    v35 = qvector_reserve((int)v33, *v33, v34 + 1, 0x18u);
    v32 = a21;
    a21[3] = v35;
    v34 = a21[4];
  }
  v35[24 * v34] = a19;
  v36 = &v35[24 * v34];
  memset(v36 + 8, 0, 0x10u);
  *((_DWORD *)v36 + 2) = 0;
  ++v32[4];
  move_idcv(v36, (unsigned __int8 *)&a23);
  v41 = a21[3] + 24 * a21[4] - 24;
  v37 = sub_46678((int)a21, v41);
  sub_4B964(
    v37,
    v38,
    v39,
    v40,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    (int)a21,
    v41,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    a29,
    a30,
    a31,
    a32);
}
// 4B961: variable 'v38' is possibly undefined
// 4B961: variable 'v39' is possibly undefined
// 4B961: variable 'v40' is possibly undefined
