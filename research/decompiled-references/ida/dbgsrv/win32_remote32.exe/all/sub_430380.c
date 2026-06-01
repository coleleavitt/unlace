/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430380
// Address: 0x00430380

//----- (00430380) --------------------------------------------------------
void __userpurge sub_430380(int *a1@<ecx>, int a2@<ebx>, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // esi
  _DWORD *i; // edi
  bool v6; // cc
  SIZE_T *v7; // edx
  _DWORD *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  char *v14; // eax
  int v15; // edi
  int v16; // esi
  _OWORD *v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // eax
  _DWORD *v20; // eax
  unsigned int v21; // edx
  signed int v22; // eax
  LPVOID v23; // eax
  unsigned int v24; // ecx
  int **v25; // edi
  float v26; // xmm1_4
  int v27; // esi
  int **v28; // eax
  int *v29; // ecx
  int *v30; // eax
  unsigned int v31; // [esp-4h] [ebp-50h]
  int *v32[3]; // [esp+Ch] [ebp-40h] BYREF
  char *v33; // [esp+18h] [ebp-34h]
  int *v34; // [esp+1Ch] [ebp-30h] BYREF
  int *v35; // [esp+20h] [ebp-2Ch]
  int v36; // [esp+24h] [ebp-28h]
  unsigned int v37; // [esp+28h] [ebp-24h]
  _DWORD *v38; // [esp+2Ch] [ebp-20h]
  _OWORD *v39; // [esp+30h] [ebp-1Ch]
  _DWORD *v40; // [esp+34h] [ebp-18h] BYREF
  int *v41; // [esp+38h] [ebp-14h]
  int v42; // [esp+3Ch] [ebp-10h]
  int v43; // [esp+48h] [ebp-4h]

  v41 = a1;
  v4 = a3;
  for ( i = a4; v4 != i; a3 = v4 )
  {
    v6 = v4[7] <= 0xFu;
    v7 = v4 + 2;
    v8 = (_DWORD *)v4[6];
    v39 = v4 + 2;
    v38 = v8;
    v40 = v4 + 2;
    if ( !v6 )
      v40 = (_DWORD *)*v7;
    v9 = 0;
    v10 = -2128831035;
    v42 = -2128831035;
    if ( v4[6] )
    {
      v11 = -2128831035;
      do
      {
        v12 = *((unsigned __int8 *)v40 + v9++);
        v13 = v11 ^ v12;
        v11 = 16777619 * v13;
      }
      while ( v9 < (unsigned int)v38 );
      v4 = a3;
      v42 = 16777619 * v13;
      i = a4;
      v10 = 16777619 * v13;
      v7 = a3 + 2;
    }
    sub_430150((int **)v41, &v34, v7, v10);
    if ( !v35 )
    {
      if ( v41[2] == 89478485 )
        sub_4627A2((int)"unordered_map/set too long");
      v32[2] = v41 + 1;
      v43 = 0;
      v33 = nullptr;
      v14 = (char *)sub_4627C2(0x30u);
      v15 = (int)v39;
      *(_OWORD *)(v14 + 8) = 0;
      *((_DWORD *)v14 + 6) = 0;
      v16 = (int)(v14 + 8);
      v38 = v14;
      *((_DWORD *)v14 + 7) = 0;
      v17 = (_OWORD *)v15;
      v6 = *(_DWORD *)(v15 + 20) <= 0xFu;
      v33 = v14;
      v18 = *(_DWORD *)(v15 + 16);
      v36 = v16;
      v37 = v18;
      v39 = (_OWORD *)v15;
      if ( !v6 )
      {
        v17 = *(_OWORD **)v15;
        v39 = *(_OWORD **)v15;
      }
      if ( v18 > 0x7FFFFFFF )
        sub_431BD0();
      if ( v18 > 0xF )
      {
        v19 = v18 | 0xF;
        if ( v19 <= 0x7FFFFFFF )
        {
          if ( v19 < 0x16 )
            v19 = 22;
        }
        else
        {
          v19 = 0x7FFFFFFF;
        }
        v40 = (_DWORD *)v19;
        v20 = sub_430060(a2, v15, v16, (SIZE_T *)&v40);
        v21 = v37;
        *(_DWORD *)(v16 + 20) = v40;
        *(_DWORD *)v16 = v20;
        *(_DWORD *)(v16 + 16) = v21;
        sub_464310((unsigned int)v20, (unsigned int)v39, v21 + 1);
      }
      else
      {
        *(_DWORD *)(v16 + 16) = v18;
        *(_DWORD *)(v16 + 20) = 15;
        *(_OWORD *)v16 = *v17;
      }
      *(_DWORD *)(v16 + 24) = 0;
      *(_DWORD *)(v16 + 28) = 0;
      *(_DWORD *)(v16 + 32) = 0;
      v22 = *(_DWORD *)(v15 + 28);
      LOBYTE(v43) = 1;
      v39 = (_OWORD *)v22;
      if ( v22 )
      {
        v23 = sub_4539E0(v22);
        v24 = (unsigned int)v39;
        v31 = (unsigned int)v39;
        *(_DWORD *)(v16 + 24) = v23;
        *(_DWORD *)(v16 + 32) = v24;
        sub_464310((unsigned int)v23, *(_DWORD *)(v15 + 24), v31);
        *(_DWORD *)(v16 + 28) = v39;
      }
      *(_BYTE *)(v16 + 36) = *(_BYTE *)(v15 + 36);
      *(_BYTE *)(v16 + 37) = *(_BYTE *)(v15 + 37);
      v25 = (int **)v41;
      v43 = 2;
      v26 = (float)(unsigned int)(v41[2] + 1);
      if ( (float)(v26 / (float)(unsigned int)v41[7]) <= *(float *)v41 )
      {
        v29 = v34;
        v27 = v42;
      }
      else
      {
        sub_431970(v41);
        v27 = v42;
        v28 = sub_430150(v25, v32, v38 + 2, v42);
        v29 = *v28;
        v30 = v28[1];
        v34 = v29;
        v35 = v30;
      }
      v33 = nullptr;
      sub_431910(v25, v27, (int)v29, v38);
      i = a4;
      v4 = a3;
      v43 = -1;
    }
    v4 = (_DWORD *)*v4;
  }
}
