/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_489FC
// Address: 0x000489FC

//----- (000489FC) --------------------------------------------------------
int __fastcall sub_489FC(int a1, int a2, int a3, int a4, unsigned __int8 *a5, char a6)
{
  int v10; // r3
  int v11; // r9
  void *v12; // r1
  void *v13; // r0
  int v14; // r2
  int v15; // r2
  int v16; // r3
  _BYTE *v17; // r0
  int v18; // r3
  char *v19; // r3
  size_t v20; // r7
  int v21; // r3
  char *v22; // r1
  int v23; // r3
  char *v24; // r3
  int v25; // r0
  int v26; // r5
  void *v28; // r0
  const void *v29; // r1
  int v30; // r3
  _BYTE *v31; // r0
  int v32; // r3
  char *v33; // r0
  unsigned __int8 v34[8]; // [sp+8h] [bp-6Ch] BYREF
  int v35; // [sp+10h] [bp-64h]
  int v36; // [sp+14h] [bp-60h]
  int v37; // [sp+18h] [bp-5Ch]
  int v38; // [sp+1Ch] [bp-58h]
  unsigned __int8 v39[8]; // [sp+20h] [bp-54h] BYREF
  void *v40; // [sp+28h] [bp-4Ch]
  size_t v41; // [sp+2Ch] [bp-48h]
  size_t v42; // [sp+30h] [bp-44h]
  unsigned __int8 v43[8]; // [sp+38h] [bp-3Ch] BYREF
  int v44; // [sp+40h] [bp-34h]
  int v45; // [sp+44h] [bp-30h]
  int v46; // [sp+48h] [bp-2Ch]
  int v47; // [sp+4Ch] [bp-28h]
  unsigned __int8 v48[8]; // [sp+50h] [bp-24h] BYREF
  int v49; // [sp+58h] [bp-1Ch]
  int v50; // [sp+5Ch] [bp-18h]
  int v51; // [sp+60h] [bp-14h]
  int v52; // [sp+64h] [bp-10h]

  if ( a3 < 0 )
  {
    if ( a3 != -1 && -a3 < (unsigned int)dword_D2CC8 )
      goto LABEL_3;
LABEL_16:
    v26 = 0;
    sub_70A98(0, "?");
    sub_70A2C(88);
    sub_4918C((_DWORD *)a1);
    return v26;
  }
  if ( (unsigned int)a3 >= *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) )
    goto LABEL_16;
LABEL_3:
  v10 = *(_DWORD *)(a1 + 40);
  v11 = *(_DWORD *)(a1 + 16);
  v12 = *(void **)(a1 + 36);
  if ( (unsigned int)(v10 + 1) > *(_DWORD *)(a1 + 44) )
  {
    v13 = sub_77EB0(a1 + 36, v12, v10 + 1, 4u);
    v10 = *(_DWORD *)(a1 + 40);
    v12 = v13;
    *(_DWORD *)(a1 + 36) = v13;
  }
  *((_DWORD *)v12 + v10) = v11;
  v14 = *(_DWORD *)(a1 + 40);
  v37 = 0;
  v36 = 0;
  v38 = 0;
  *(_DWORD *)(a1 + 40) = v14 + 1;
  v15 = *(_DWORD *)(a2 + 24);
  v35 = a2;
  v34[0] = 5;
  *(_DWORD *)(a2 + 24) = v15 + 1;
  v16 = *(_DWORD *)(a1 + 16);
  if ( (unsigned int)(v16 + 1) > *(_DWORD *)(a1 + 20) )
  {
    v17 = sub_77EB0(a1 + 12, *(void **)(a1 + 12), v16 + 1, 0x18u);
    v16 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 12) = v17;
  }
  else
  {
    v17 = *(_BYTE **)(a1 + 12);
  }
  v18 = 24 * v16;
  v17[v18] = 2;
  v19 = &v17[v18];
  *((_DWORD *)v19 + 3) = 0;
  *((_DWORD *)v19 + 4) = 0;
  *((_DWORD *)v19 + 5) = 0;
  *((_DWORD *)v19 + 2) = 0;
  ++*(_DWORD *)(a1 + 16);
  sub_461C4((unsigned __int8 *)v19, v34);
  v20 = *(_DWORD *)(a4 + 4);
  v39[0] = 7;
  v40 = nullptr;
  v41 = 0;
  v42 = 0;
  if ( v20 )
  {
    v28 = sub_77E84(v20);
    v29 = *(const void **)a4;
    v40 = v28;
    v42 = v20;
    memcpy(v28, v29, v20);
    v41 = v20;
  }
  v21 = *(_DWORD *)(a1 + 16);
  v22 = *(char **)(a1 + 12);
  if ( (unsigned int)(v21 + 1) > *(_DWORD *)(a1 + 20) )
  {
    v22 = (char *)sub_77EB0(a1 + 12, v22, v21 + 1, 0x18u);
    v21 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 12) = v22;
  }
  v23 = 24 * v21;
  v22[v23] = 2;
  v24 = &v22[v23];
  *((_DWORD *)v24 + 3) = 0;
  *((_DWORD *)v24 + 4) = 0;
  *((_DWORD *)v24 + 5) = 0;
  *((_DWORD *)v24 + 2) = 0;
  ++*(_DWORD *)(a1 + 16);
  sub_461C4((unsigned __int8 *)v24, v39);
  if ( a6 )
  {
    v25 = sub_4521C((_DWORD *)a1, a5, nullptr, a3);
  }
  else
  {
    v43[0] = 2;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    sub_459A0(v43, a5);
    v48[0] = 2;
    v50 = 0;
    v49 = 0;
    v51 = 0;
    v52 = 0;
    sub_459A0(v48, v43);
    v30 = *(_DWORD *)(a1 + 16);
    v31 = *(_BYTE **)(a1 + 12);
    if ( (unsigned int)(v30 + 1) > *(_DWORD *)(a1 + 20) )
    {
      v31 = sub_77EB0(a1 + 12, *(void **)(a1 + 12), v30 + 1, 0x18u);
      v30 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 12) = v31;
    }
    v32 = 24 * v30;
    v31[v32] = 2;
    v33 = &v31[v32];
    *((_DWORD *)v33 + 2) = 0;
    *((_DWORD *)v33 + 3) = 0;
    *((_DWORD *)v33 + 4) = 0;
    *((_DWORD *)v33 + 5) = 0;
    sub_459A0((unsigned __int8 *)v33, v48);
    ++*(_DWORD *)(a1 + 16);
    sub_455C8(v48);
    sub_455C8(v43);
    v25 = sub_4521C((_DWORD *)a1, nullptr, nullptr, a3);
  }
  v26 = v25;
  sub_455C8(v39);
  sub_455C8(v34);
  return v26;
}
// D2CC8: using guessed type int dword_D2CC8;
