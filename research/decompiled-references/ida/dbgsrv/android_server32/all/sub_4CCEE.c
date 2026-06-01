/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CCEE
// Address: 0x0004CCEE

//----- (0004CCEE) --------------------------------------------------------
void __fastcall sub_4CCEE(
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
        unsigned __int8 a19,
        int a20,
        _DWORD *a21,
        int a22,
        unsigned __int8 a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        unsigned __int8 a29,
        int a30,
        unsigned __int8 *a31,
        unsigned __int8 *a32,
        unsigned __int8 *a33,
        unsigned __int8 *a34)
{
  int v34; // r5
  unsigned __int8 *v35; // r6
  int v36; // r7
  int v37; // r0
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int *v41; // r5
  int v42; // r1
  int v43; // r2
  _DWORD *v44; // r4
  int v45; // r0
  int v46; // r0
  int v47; // r1
  _BYTE *v48; // r0
  int v49; // r7
  char *v50; // r5
  int v51; // r0
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int v55; // r0
  int v56; // r1
  int v57; // r2
  int v58; // r3

  v37 = sub_448A0((int)a31, &a29);
  sub_4B2F6(v37, v38, v39, v40);
  sub_448A0((int)a31, &a29);
  v41 = (int *)(v34 + 12);
  sub_4AA10(v41, &a23);
  v42 = a21[3];
  v43 = a21[4];
  a29 = a19;
  a34 = v35;
  a33 = v35;
  a32 = v35;
  a31 = v35;
  copy_idcv(&a29, (unsigned __int8 *)(v42 + v43 * v36 - 24));
  v44 = a21;
  v45 = a21[4];
  if ( v45 )
  {
    v46 = v45 - 1;
    a21[4] = v46;
    free_idcv((unsigned __int8 *)(a21[3] + v46 * v36));
  }
  if ( a29 == 5 )
  {
    sub_448A0((int)a31, &a29);
  }
  else if ( a29 == 7 && a31 )
  {
    a32 = v35;
    qfree(a31);
    a33 = nullptr;
    a31 = nullptr;
  }
  v47 = a21[4];
  if ( a21[5] >= (unsigned int)(v47 + 1) )
  {
    v48 = (_BYTE *)*v41;
  }
  else
  {
    v48 = qvector_reserve((int)v41, (void *)*v41, v47 + 1, 0x18u);
    v44 = a21;
    a21[3] = v48;
    v47 = a21[4];
  }
  v49 = v36 * v47;
  v48[v49] = a19;
  v50 = &v48[v49];
  memset(&v48[v49 + 8], 0, 0x10u);
  *((_DWORD *)v50 + 2) = v35;
  ++v44[4];
  v51 = move_idcv((unsigned __int8 *)v50, &a23);
  v55 = sub_4B2F6(v51, v52, v53, v54);
  sub_4CDB8(
    v55,
    v56,
    v57,
    v58,
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
    a22,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    a29,
    a30,
    (int *)a31,
    a32,
    a33,
    a34);
}
// 4CCF6: variable 'v38' is possibly undefined
// 4CCF6: variable 'v39' is possibly undefined
// 4CCF6: variable 'v40' is possibly undefined
// 4CD02: variable 'v34' is possibly undefined
// 4CD18: variable 'v35' is possibly undefined
// 4CD20: variable 'v36' is possibly undefined
// 4CDB4: variable 'v52' is possibly undefined
// 4CDB4: variable 'v53' is possibly undefined
// 4CDB4: variable 'v54' is possibly undefined
// 4CDB5: variable 'v56' is possibly undefined
// 4CDB5: variable 'v57' is possibly undefined
// 4CDB5: variable 'v58' is possibly undefined
// 4B2F6: using guessed type int __fastcall sub_4B2F6(_DWORD, _DWORD, _DWORD, _DWORD);
