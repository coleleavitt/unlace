/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808BC30
// Address: 0x0808BC30

//----- (0808BC30) --------------------------------------------------------
int __cdecl sub_808BC30(_DWORD *a1, int a2, int a3, int a4, unsigned __int8 *a5, char a6)
{
  int v6; // ecx
  void *v7; // ebx
  int v8; // eax
  char *v9; // ecx
  char *v10; // eax
  size_t v11; // edi
  int v12; // eax
  char *v13; // ecx
  char *v14; // eax
  int v15; // eax
  char *v16; // ecx
  char *v17; // eax
  unsigned __int8 v18; // al
  _DWORD *v20; // [esp+0h] [ebp-90h]
  int v21; // [esp+4h] [ebp-8Ch]
  unsigned __int8 v22; // [esp+14h] [ebp-7Ch]
  unsigned __int8 v23[4]; // [esp+20h] [ebp-70h] BYREF
  void *v24; // [esp+24h] [ebp-6Ch]
  size_t v25; // [esp+28h] [ebp-68h]
  size_t v26; // [esp+2Ch] [ebp-64h]
  unsigned __int8 v27[4]; // [esp+38h] [ebp-58h] BYREF
  int v28; // [esp+3Ch] [ebp-54h]
  int v29; // [esp+40h] [ebp-50h]
  int v30; // [esp+44h] [ebp-4Ch]
  int v31; // [esp+48h] [ebp-48h]
  unsigned __int8 v32[4]; // [esp+4Ch] [ebp-44h] BYREF
  __int128 v33; // [esp+50h] [ebp-40h]
  unsigned __int8 v34[4]; // [esp+60h] [ebp-30h] BYREF
  __int128 v35; // [esp+64h] [ebp-2Ch]
  unsigned int v36; // [esp+74h] [ebp-1Ch]

  v36 = __readgsdword(0x14u);
  if ( a3 < 0 )
  {
    if ( a3 != -1 && (unsigned int)-a3 < dword_811D3A0[0] )
      goto LABEL_3;
LABEL_21:
    sub_80C7910(0, "?");
    sub_80C7880(88);
    sub_808CA30(a1);
    v22 = 0;
    goto LABEL_17;
  }
  if ( (unsigned int)a3 >= *(_DWORD *)(a1[1] + 4) )
    goto LABEL_21;
LABEL_3:
  v21 = a1[4];
  v6 = a1[10];
  v7 = (void *)a1[9];
  if ( a1[11] < (unsigned int)(v6 + 1) )
  {
    v7 = sub_80CF920((int)(a1 + 9), v7, v6 + 1, 4u);
    a1[9] = v7;
    v6 = a1[10];
  }
  *((_DWORD *)v7 + v6) = v21;
  v29 = 0;
  ++a1[10];
  v20 = a1 + 3;
  ++*(_DWORD *)(a2 + 24);
  v8 = a1[4];
  v30 = 0;
  v9 = (char *)a1[3];
  v31 = 0;
  v27[0] = 5;
  v28 = a2;
  if ( a1[5] < (unsigned int)(v8 + 1) )
  {
    v9 = (char *)sub_80CF920((int)v20, v9, v8 + 1, 0x14u);
    a1[3] = v9;
    v8 = a1[4];
  }
  v10 = &v9[20 * v8];
  *v10 = 2;
  *(_OWORD *)(v10 + 4) = 0;
  ++a1[4];
  sub_808A290((unsigned __int8 *)v10, v27);
  v23[0] = 7;
  v24 = nullptr;
  v11 = *(_DWORD *)(a4 + 4);
  v25 = 0;
  v26 = 0;
  if ( v11 )
  {
    v24 = sub_80CF8B0(v11);
    v26 = v11;
    memcpy(v24, *(const void **)a4, v11);
    v25 = v11;
  }
  v12 = a1[4];
  v13 = (char *)a1[3];
  if ( a1[5] < (unsigned int)(v12 + 1) )
  {
    v13 = (char *)sub_80CF920((int)v20, v13, v12 + 1, 0x14u);
    a1[3] = v13;
    v12 = a1[4];
  }
  v14 = &v13[20 * v12];
  *v14 = 2;
  *(_OWORD *)(v14 + 4) = 0;
  ++a1[4];
  sub_808A290((unsigned __int8 *)v14, v23);
  if ( a6 )
  {
    v18 = sub_80890B0(a1, a5, nullptr, a3);
  }
  else
  {
    v32[0] = 2;
    v33 = 0;
    sub_8089810(v32, a5);
    v34[0] = 2;
    v35 = 0;
    sub_8089810(v34, v32);
    v15 = a1[4];
    v16 = (char *)a1[3];
    if ( a1[5] < (unsigned int)(v15 + 1) )
    {
      v16 = (char *)sub_80CF920((int)v20, v16, v15 + 1, 0x14u);
      a1[3] = v16;
      v15 = a1[4];
    }
    v17 = &v16[20 * v15];
    *v17 = 2;
    *(_OWORD *)(v17 + 4) = 0;
    sub_8089810((unsigned __int8 *)v17, v34);
    ++a1[4];
    sub_8089430((int)v34);
    sub_8089430((int)v32);
    v18 = sub_80890B0(a1, nullptr, nullptr, a3);
  }
  v22 = v18;
  sub_8089430((int)v23);
  sub_8089430((int)v27);
LABEL_17:
  if ( v36 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v22;
}
// 811D3A0: using guessed type int dword_811D3A0[3];
