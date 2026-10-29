/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CDC0
// Address: 0x0004CDC0

//----- (0004CDC0) --------------------------------------------------------
void __fastcall sub_4CDC0(
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
        int a21,
        int a22,
        unsigned __int8 a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        unsigned __int8 a29,
        int a30,
        int *a31,
        unsigned __int8 *a32,
        unsigned __int8 *a33,
        unsigned __int8 *a34)
{
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r4
  int *v38; // r5
  unsigned __int8 *v39; // r6
  int v40; // r7
  int v41; // r1
  int v42; // r2
  int v43; // r2
  int v44; // r3
  int v45; // r1
  int v46; // r0
  int v47; // r0
  int *v48; // r0
  int v49; // r0
  int v50; // r1
  int v51; // r2
  int v52; // r3
  int *v53; // r5
  int v54; // r1
  int v55; // r2
  int v56; // r4
  int v57; // r0
  int v58; // r0
  int v59; // r1
  _BYTE *v60; // r0
  int v61; // r7
  char *v62; // r5
  int v63; // r0
  int v64; // r1
  int v65; // r2
  int v66; // r3
  int v67; // r0

  v41 = *(_DWORD *)(v37 + 12);
  v42 = *(_DWORD *)(v37 + 16);
  a29 = a19;
  a33 = (unsigned __int8 *)v38;
  a32 = (unsigned __int8 *)v38;
  a31 = v38;
  copy_idcv(&a29, (unsigned __int8 *)(v41 + v42 * (_DWORD)v39 - 24));
  v45 = a21;
  v46 = *(_DWORD *)(a21 + 16);
  if ( v46 )
  {
    v47 = v46 - 1;
    *(_DWORD *)(a21 + 16) = v47;
    v39 = (unsigned __int8 *)((_DWORD)v39 * v47);
    free_idcv(&v39[*(_DWORD *)(a21 + 12)]);
  }
  if ( a29 != 5 )
  {
    if ( a29 != 7 )
      sub_4B2F6(a29, v45, v43, v44);
    v48 = a31;
    if ( !a31 )
      v48 = (int *)sub_4B2F6(0, v45, v43, v44);
    a32 = (unsigned __int8 *)v38;
    qfree(v48);
    a33 = nullptr;
    a31 = nullptr;
    sub_4B2F6(0, v34, v35, v36);
    JUMPOUT(0x4CAD8);
  }
  v49 = sub_448A0((int)a31, &a29);
  sub_4B2F6(v49, v50, v51, v52);
  sub_448A0((int)a31, &a29);
  v53 = v38 + 3;
  sub_4AA10(v53, &a23);
  v54 = *(_DWORD *)(a21 + 12);
  v55 = *(_DWORD *)(a21 + 16);
  a29 = a19;
  a34 = v39;
  a33 = v39;
  a32 = v39;
  a31 = (int *)v39;
  copy_idcv(&a29, (unsigned __int8 *)(v54 + v55 * v40 - 24));
  v56 = a21;
  v57 = *(_DWORD *)(a21 + 16);
  if ( v57 )
  {
    v58 = v57 - 1;
    *(_DWORD *)(a21 + 16) = v58;
    free_idcv((unsigned __int8 *)(*(_DWORD *)(a21 + 12) + v58 * v40));
  }
  if ( a29 == 5 )
  {
    sub_448A0((int)a31, &a29);
  }
  else if ( a29 == 7 && a31 )
  {
    a32 = v39;
    qfree(a31);
    a33 = nullptr;
    a31 = nullptr;
    v56 = a21;
  }
  v59 = *(_DWORD *)(v56 + 16);
  if ( *(_DWORD *)(v56 + 20) >= (unsigned int)(v59 + 1) )
  {
    v60 = (_BYTE *)*v53;
  }
  else
  {
    v60 = qvector_reserve((int)v53, (void *)*v53, v59 + 1, 0x18u);
    v56 = a21;
    *(_DWORD *)(a21 + 12) = v60;
    v59 = *(_DWORD *)(a21 + 16);
  }
  v61 = v40 * v59;
  v60[v61] = a19;
  v62 = &v60[v61];
  memset(&v60[v61 + 8], 0, 0x10u);
  *((_DWORD *)v62 + 2) = v39;
  ++*(_DWORD *)(v56 + 16);
  v63 = move_idcv((unsigned __int8 *)v62, &a23);
  v67 = sub_4B2F6(v63, v64, v65, v66);
  sub_4CF30(v67);
}
// 4CAD4: control flows out of bounds to 4CAD8
// 4CDC0: variable 'v37' is possibly undefined
// 4CDCC: variable 'v38' is possibly undefined
// 4CDD2: variable 'v39' is possibly undefined
// 4CDFE: variable 'v45' is possibly undefined
// 4CDFE: variable 'v43' is possibly undefined
// 4CDFE: variable 'v44' is possibly undefined
// 4CAD4: variable 'v34' is possibly undefined
// 4CAD4: variable 'v35' is possibly undefined
// 4CAD4: variable 'v36' is possibly undefined
// 4CE78: variable 'v50' is possibly undefined
// 4CE78: variable 'v51' is possibly undefined
// 4CE78: variable 'v52' is possibly undefined
// 4CEA2: variable 'v40' is possibly undefined
// 4CF2C: variable 'v64' is possibly undefined
// 4CF2C: variable 'v65' is possibly undefined
// 4CF2C: variable 'v66' is possibly undefined
// 4B2F6: using guessed type int __fastcall sub_4B2F6(_DWORD, _DWORD, _DWORD, _DWORD);
// 4CF30: using guessed type void __fastcall __noreturn sub_4CF30(_DWORD);
