/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44CB48
// Address: 0x000000000044CB48

//----- (000000000044CB48) ----------------------------------------------------
__int64 __fastcall sub_44CB48(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 *a5, unsigned __int8 a6)
{
  int v11; // w24
  __int64 v12; // x20
  __int64 v13; // x3
  _DWORD *v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  char *v17; // x4
  __int64 *v18; // x0
  size_t v19; // x27
  __int64 v20; // x0
  char *v21; // x4
  __int64 *v22; // x0
  unsigned __int8 v23; // w0
  unsigned int v24; // w20
  char *v26; // x0
  char *v27; // x0
  void *v28; // x0
  const void *v29; // x1
  __int64 v30; // x0
  char *v31; // x4
  char *v32; // x0
  __int64 *v33; // x0
  __int64 v34[4]; // [xsp+58h] [xbp-88h] BYREF
  __int64 v35; // [xsp+78h] [xbp-68h] BYREF
  void *v36; // [xsp+80h] [xbp-60h]
  size_t v37; // [xsp+88h] [xbp-58h]
  size_t v38; // [xsp+90h] [xbp-50h]
  __int64 v39[4]; // [xsp+98h] [xbp-48h] BYREF
  __int64 v40[4]; // [xsp+B8h] [xbp-28h] BYREF

  v11 = a6;
  if ( a3 < 0 )
  {
    if ( a3 != -1 && qword_520148 > (unsigned __int64)-a3 )
      goto LABEL_3;
LABEL_16:
    sub_486A58(0, "?");
    v24 = 0;
    sub_4869C8(88);
    sub_44D6D0((_QWORD *)a1);
    return v24;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) <= (unsigned __int64)a3 )
    goto LABEL_16;
LABEL_3:
  v12 = *(_QWORD *)(a1 + 32);
  v13 = *(_QWORD *)(a1 + 80);
  v14 = *(_DWORD **)(a1 + 72);
  if ( (unsigned __int64)(v13 + 1) > *(_QWORD *)(a1 + 88) )
  {
    v14 = sub_491288(a1 + 72, *(void **)(a1 + 72), v13 + 1, 4u);
    *(_QWORD *)(a1 + 72) = v14;
    v13 = *(_QWORD *)(a1 + 80);
  }
  v14[v13] = v12;
  LOBYTE(v34[0]) = 5;
  v15 = *(_QWORD *)(a1 + 80);
  v34[1] = a2;
  *(_QWORD *)(a1 + 80) = v15 + 1;
  v34[2] = 0;
  v34[3] = 0;
  ++*(_DWORD *)(a2 + 48);
  v16 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int64)(v16 + 1) > *(_QWORD *)(a1 + 40) )
  {
    v26 = (char *)sub_491288(a1 + 24, *(void **)(a1 + 24), v16 + 1, 0x20u);
    *(_QWORD *)(a1 + 24) = v26;
    v17 = v26;
    v16 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v17 = *(char **)(a1 + 24);
  }
  v18 = (__int64 *)&v17[32 * v16];
  *(_BYTE *)v18 = 2;
  v18[1] = 0;
  v18[2] = 0;
  v18[3] = 0;
  ++*(_QWORD *)(a1 + 32);
  sub_449520(v18, v34);
  v19 = *(_QWORD *)(a4 + 8);
  LOBYTE(v35) = 7;
  v36 = nullptr;
  v37 = 0;
  v38 = 0;
  if ( v19 )
  {
    v28 = sub_491248(v19);
    v29 = *(const void **)a4;
    v36 = v28;
    v38 = v19;
    memcpy(v28, v29, v19);
    v37 = v19;
  }
  v20 = *(_QWORD *)(a1 + 32);
  v21 = *(char **)(a1 + 24);
  if ( (unsigned __int64)(v20 + 1) > *(_QWORD *)(a1 + 40) )
  {
    v27 = (char *)sub_491288(a1 + 24, *(void **)(a1 + 24), v20 + 1, 0x20u);
    *(_QWORD *)(a1 + 24) = v27;
    v21 = v27;
    v20 = *(_QWORD *)(a1 + 32);
  }
  v22 = (__int64 *)&v21[32 * v20];
  *(_BYTE *)v22 = 2;
  v22[1] = 0;
  v22[2] = 0;
  v22[3] = 0;
  ++*(_QWORD *)(a1 + 32);
  sub_449520(v22, &v35);
  if ( v11 )
  {
    v23 = sub_447D60((_QWORD *)a1, a5, nullptr, a3);
  }
  else
  {
    memset(&v39[1], 0, 24);
    LOBYTE(v39[0]) = 2;
    sub_4488B8(v39, a5);
    memset(&v40[1], 0, 24);
    LOBYTE(v40[0]) = 2;
    sub_4488B8(v40, v39);
    v30 = *(_QWORD *)(a1 + 32);
    v31 = *(char **)(a1 + 24);
    if ( (unsigned __int64)(v30 + 1) > *(_QWORD *)(a1 + 40) )
    {
      v32 = (char *)sub_491288(a1 + 24, *(void **)(a1 + 24), v30 + 1, 0x20u);
      *(_QWORD *)(a1 + 24) = v32;
      v31 = v32;
      v30 = *(_QWORD *)(a1 + 32);
    }
    v33 = (__int64 *)&v31[32 * v30];
    *(_BYTE *)v33 = 2;
    v33[1] = 0;
    v33[2] = 0;
    v33[3] = 0;
    sub_4488B8(v33, v40);
    ++*(_QWORD *)(a1 + 32);
    sub_448310(v40);
    sub_448310(v39);
    v23 = sub_447D60((_QWORD *)a1, nullptr, nullptr, a3);
  }
  v24 = v23;
  sub_448310(&v35);
  sub_448310(v34);
  return v24;
}
// 520148: using guessed type __int64 qword_520148;
