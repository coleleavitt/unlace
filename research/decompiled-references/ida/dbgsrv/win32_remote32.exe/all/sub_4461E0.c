/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4461E0
// Address: 0x004461E0

//----- (004461E0) --------------------------------------------------------
int __userpurge sub_4461E0@<eax>(__m128i a1@<xmm0>, int a2, int a3, int a4, const CHAR **a5, _DWORD *a6)
{
  unsigned int v6; // eax
  _BYTE *v7; // eax
  _BYTE *v8; // eax
  unsigned int v9; // esi
  const CHAR *v10; // eax
  int *v11; // eax
  bool v12; // zf
  char v13; // al
  _BYTE *v14; // eax
  _BYTE *v15; // eax
  _DWORD *v16; // ebx
  _BYTE *v17; // eax
  int v18; // ecx
  int v19; // esi
  unsigned int *v20; // ebx
  _BYTE *v21; // eax
  _BYTE *v22; // eax
  _BYTE *v23; // eax
  const char *v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // ebx
  unsigned int v28; // esi
  unsigned int v30; // [esp+10h] [ebp-294h]
  int v31; // [esp+1Ch] [ebp-288h]
  unsigned int v32; // [esp+20h] [ebp-284h]
  int *v33; // [esp+24h] [ebp-280h] BYREF
  char v34; // [esp+2Bh] [ebp-279h]
  int (__stdcall **v35)(int, int); // [esp+2Ch] [ebp-278h] BYREF
  void *v36; // [esp+30h] [ebp-274h]
  int v37; // [esp+34h] [ebp-270h]
  int v38; // [esp+38h] [ebp-26Ch]
  unsigned int v39; // [esp+264h] [ebp-40h]
  _BYTE v40[10]; // [esp+270h] [ebp-34h] BYREF
  char v41[2]; // [esp+27Ah] [ebp-2Ah] BYREF
  _BYTE v42[10]; // [esp+27Ch] [ebp-28h] BYREF
  char v43[2]; // [esp+286h] [ebp-1Eh] BYREF
  char v44[4]; // [esp+288h] [ebp-1Ch] BYREF
  int **v45; // [esp+28Ch] [ebp-18h] BYREF
  char v46; // [esp+291h] [ebp-13h] BYREF
  char v47[2]; // [esp+292h] [ebp-12h] BYREF
  int v48; // [esp+2A0h] [ebp-4h]

  v6 = *(_DWORD *)(a2 + 4) + 1;
  if ( v6 > *(_DWORD *)(a2 + 8) )
    *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v6, 1u);
  *(_BYTE *)(*(_DWORD *)(a2 + 4) + *(_DWORD *)a2) = 1;
  ++*(_DWORD *)(a2 + 4);
  v7 = sub_4540B0(&v45, (unsigned int)&v46, *(unsigned __int8 *)(a4 + 96));
  sub_401600(a2, (unsigned int)&v45, v7 - (_BYTE *)&v45);
  v8 = sub_4540B0(&v45, (unsigned int)&v46, *(unsigned __int8 *)(a4 + 97));
  sub_401600(a2, (unsigned int)&v45, v8 - (_BYTE *)&v45);
  v9 = 0;
  v10 = MultiByteStr;
  if ( a5[1] )
    v10 = *a5;
  v11 = sub_45C5A0((int)a5, a2, a1, v10, 0);
  v33 = v11;
  if ( v11 )
  {
    v45 = &v33;
    v12 = a5[3] == (const CHAR *)11;
    v48 = 0;
    if ( v12 )
    {
      v35 = &off_48A4F0;
      v36 = nullptr;
      v37 = 0;
      v38 = 0;
      LOBYTE(v48) = 1;
      v13 = sub_415880((int)&v35, a1, (int)v11, 1, 1);
      v35 = &off_48A4F0;
      if ( v13 )
        v9 = v39;
      LOBYTE(v48) = 2;
      if ( v36 )
      {
        v37 = 0;
        sub_453A20(v36);
      }
      v11 = v33;
    }
    v48 = 3;
    sub_45C550((int)a5, a2, v11);
    v48 = -1;
  }
  v14 = sub_454140(v44, (unsigned int)v47, v9, 0);
  sub_401600(a2, (unsigned int)v44, v14 - v44);
  v15 = sub_4540B0(&v45, (unsigned int)&v46, (unsigned int)a5[3]);
  sub_401600(a2, (unsigned int)&v45, v15 - (_BYTE *)&v45);
  v16 = a6;
  v17 = sub_4540B0(&v45, (unsigned int)&v46, a6[1]);
  sub_401600(a2, (unsigned int)&v45, v17 - (_BYTE *)&v45);
  v18 = 0;
  v45 = (int **)a6[1];
  v31 = 0;
  if ( (int)v45 > 0 )
  {
    do
    {
      v19 = *(_DWORD *)(*v16 + 4 * v18);
      v20 = (unsigned int *)(*(_DWORD *)(a4 + 52) + 104 * v19);
      v21 = sub_454140(v42, (unsigned int)v43, *v20, v20[1]);
      sub_401600(a2, (unsigned int)v42, v21 - v42);
      v22 = sub_454140(v40, (unsigned int)v41, v20[2], 0);
      sub_401600(a2, (unsigned int)v40, v22 - v40);
      v23 = sub_454170(&v33, (unsigned int)&v33 + 3, v19);
      sub_401600(a2, (unsigned int)&v33, v23 - (_BYTE *)&v33);
      if ( v20[4] )
      {
        v24 = pNodeName;
        if ( v20[3] )
          v24 = (const char *)v20[3];
      }
      else
      {
        v24 = MultiByteStr;
      }
      v32 = (unsigned int)v24;
      v25 = strlen(v24);
      v12 = v25 == -1;
      v26 = v25 + 1;
      v30 = v26;
      if ( v12 )
        goto LABEL_29;
      v27 = *(_DWORD *)(a2 + 4);
      v28 = v27 + v26;
      if ( v27 + v26 < v27 )
        v28 = 0x7FFFFFFF;
      if ( v28 <= v27 )
      {
        if ( v28 == v27 )
          goto LABEL_28;
        v34 = 0;
        if ( v28 >= v27 )
          goto LABEL_28;
      }
      else
      {
        if ( v28 > *(_DWORD *)(a2 + 8) )
          *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v28, 1u);
        sub_464890((__m128i *)(*(_DWORD *)(a2 + 4) + *(_DWORD *)a2), 0, v28 - *(_DWORD *)(a2 + 4));
        v26 = v30;
        v34 = 0;
      }
      *(_DWORD *)(a2 + 4) = v28;
LABEL_28:
      sub_464310(v27 + *(_DWORD *)a2, v32, v26);
LABEL_29:
      v16 = a6;
      v18 = v31 + 1;
      v31 = v18;
    }
    while ( v18 < (int)v45 );
  }
  return 0;
}
// 48A4F0: using guessed type int (__stdcall *off_48A4F0)(int, int);
