/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CA02
// Address: 0x0004CA02

//----- (0004CA02) --------------------------------------------------------
int __fastcall sub_4CA02(
        unsigned __int8 *a1,
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
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        unsigned __int8 a29,
        int a30,
        void *a31,
        int a32,
        int a33,
        int a34)
{
  _DWORD *v34; // r5
  int v35; // r6
  int v36; // r7
  int v37; // r1
  int v38; // r1
  int v39; // r0
  int v40; // r2
  int v41; // r1
  int v42; // r2
  int v43; // r2
  int v44; // r3
  int v45; // r1
  int v46; // r0
  int v47; // r0
  void *v48; // r0
  int v49; // r0
  int v50; // r1
  int v51; // r2
  int v52; // r3
  int v53; // r0
  unsigned int v55; // [sp+1Ch] [bp+1Ch]

  v37 = *a1;
  if ( v37 != 10 )
    a1 = (unsigned __int8 *)sub_4B2F6(a1, v37, a3, a4);
  v38 = *((_DWORD *)a1 + 2);
  v39 = *((_DWORD *)a1 + 3);
  *v34 = v38;
  v34[1] = v39;
  sub_4B2F6(v39, v38, a3, a4);
  v55 = *(_DWORD *)(v35 + 12);
  free_idcv((unsigned __int8 *)v35);
  *(_DWORD *)(v35 + 8) = v55 > 1;
  v40 = *(_DWORD *)(a22 + 8);
  if ( v36 != 173 )
  {
    if ( !v40 )
      goto LABEL_8;
    goto LABEL_7;
  }
  *(_DWORD *)(a22 + 8) = v40 == 0;
  if ( !v40 )
LABEL_7:
    sub_40948(a21, a17);
LABEL_8:
  v41 = *(_DWORD *)(a21 + 12);
  v42 = *(_DWORD *)(a21 + 16);
  a29 = a19;
  a34 = 0;
  a33 = 0;
  a32 = 0;
  a31 = nullptr;
  copy_idcv(&a29, (unsigned __int8 *)(v41 + v42 * (_DWORD)v34 - 24));
  v45 = a21;
  v46 = *(_DWORD *)(a21 + 16);
  if ( v46 )
  {
    v47 = v46 - 1;
    *(_DWORD *)(a21 + 16) = v47;
    free_idcv((unsigned __int8 *)(*(_DWORD *)(a21 + 12) + (_DWORD)v34 * v47));
  }
  if ( a29 != 5 )
  {
    if ( a29 != 7 )
      sub_4B2F6(a29, v45, v43, v44);
    v48 = a31;
    if ( !a31 )
      v48 = (void *)sub_4B2F6(0, v45, v43, v44);
    a32 = 0;
    qfree(v48);
    JUMPOUT(0x4CACE);
  }
  v49 = sub_448A0((int)a31, &a29);
  v53 = sub_4B2F6(v49, v50, v51, v52);
  return sub_4CAE8(v53);
}
// 4CACA: control flows out of bounds to 4CACE
// 4CA10: variable 'v34' is possibly undefined
// 4CA14: variable 'a3' is possibly undefined
// 4CA14: variable 'a4' is possibly undefined
// 4CA18: variable 'v35' is possibly undefined
// 4CA5A: variable 'v36' is possibly undefined
// 4CABA: variable 'v45' is possibly undefined
// 4CABA: variable 'v43' is possibly undefined
// 4CABA: variable 'v44' is possibly undefined
// 4CAE4: variable 'v50' is possibly undefined
// 4CAE4: variable 'v51' is possibly undefined
// 4CAE4: variable 'v52' is possibly undefined
// 4B2F6: using guessed type int __fastcall sub_4B2F6(_DWORD, _DWORD, _DWORD, _DWORD);
// 4CAE8: using guessed type int __fastcall sub_4CAE8(_DWORD);
