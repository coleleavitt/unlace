/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431BE0
// Address: 0x00431BE0

//----- (00431BE0) --------------------------------------------------------
int __userpurge sub_431BE0@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        const char *a3,
        const char *a4,
        unsigned int a5,
        char a6,
        bool *a7)
{
  bool v7; // zf
  int *v8; // esi
  const char *v9; // edx
  _DWORD *v10; // edi
  int v11; // esi
  _DWORD *v12; // eax
  int v13; // edi
  __int128 *v14; // edx
  int v15; // esi
  unsigned int i; // ecx
  int v17; // eax
  int *v18; // eax
  char *v19; // eax
  int v20; // eax
  float v21; // xmm1_4
  int *v22; // ecx
  void *v23; // ecx
  int v24; // esi
  bool v25; // cl
  unsigned int v27; // [esp-8h] [ebp-64h]
  int v28; // [esp-4h] [ebp-60h]
  int *v29; // [esp+Ch] [ebp-50h] BYREF
  bool *v30; // [esp+14h] [ebp-48h]
  const char *v31; // [esp+18h] [ebp-44h]
  int v32; // [esp+1Ch] [ebp-40h]
  _DWORD *v33; // [esp+20h] [ebp-3Ch]
  int *v34; // [esp+24h] [ebp-38h] BYREF
  int *v35; // [esp+28h] [ebp-34h]
  const char *v36; // [esp+2Ch] [ebp-30h]
  bool v37; // [esp+33h] [ebp-29h]
  __int128 v38; // [esp+34h] [ebp-28h] BYREF
  __int64 v39; // [esp+44h] [ebp-18h]
  int v40; // [esp+58h] [ebp-4h]

  v7 = *(_BYTE *)(a1 + 320) == 0;
  v8 = (int *)(a1 + 284);
  v9 = a3;
  v31 = a4;
  v36 = a3;
  v30 = a7;
  v35 = (int *)(a1 + 284);
  if ( !v7 )
  {
    *(_BYTE *)(a1 + 320) = 0;
    v10 = sub_4627C2(0x20u);
    v33 = v10;
    v40 = 0;
    if ( v10 )
    {
      v11 = *v8;
      *v10 = *(_DWORD *)v11;
      v10[1] = 0;
      v10[2] = 0;
      v12 = sub_4627C2(0x30u);
      *v12 = v12;
      v12[1] = v12;
      v10[1] = v12;
      v10[3] = 0;
      v10[4] = 0;
      v10[5] = 0;
      v10[6] = *(_DWORD *)(v11 + 24);
      v10[7] = *(_DWORD *)(v11 + 28);
      v28 = v10[1];
      v27 = (*(_DWORD *)(v11 + 16) - *(_DWORD *)(v11 + 12)) >> 2;
      LOBYTE(v40) = 2;
      sub_40B9C0((int)(v10 + 3), v27, v28);
      sub_430380(v10, a2, **(_DWORD ***)(v11 + 4), *(_DWORD **)(v11 + 4));
      v8 = v35;
    }
    else
    {
      v10 = nullptr;
    }
    v9 = v36;
    v40 = -1;
    *v8 = (int)v10;
  }
  if ( !v9 || !*v9 || a5 > 0x7F )
    return sub_45CC20(38);
  v13 = *v8;
  v39 = 0;
  v38 = 0;
  v36 = *(const char **)(v13 + 8);
  sub_4300C0(&v38, (unsigned int)v9, strlen(v9));
  v14 = &v38;
  v40 = 3;
  v15 = -2128831035;
  if ( HIDWORD(v39) > 0xF )
    v14 = (__int128 *)v38;
  for ( i = 0; i < (unsigned int)v39; v15 = 16777619 * (v15 ^ v17) )
    v17 = *((unsigned __int8 *)v14 + i++);
  sub_430150((int **)v13, &v34, &v38, v15);
  v18 = v35;
  if ( !v35 )
  {
    if ( *(_DWORD *)(v13 + 8) == 89478485 )
      sub_4627A2((int)"unordered_map/set too long");
    v32 = v13 + 4;
    LOBYTE(v40) = 4;
    v19 = (char *)sub_4627C2(0x30u);
    v33 = v19;
    *(_OWORD *)(v19 + 8) = 0;
    *((_DWORD *)v19 + 6) = 0;
    *((_DWORD *)v19 + 7) = 0;
    *(__int128 *)(v19 + 8) = v38;
    *((_QWORD *)v19 + 3) = v39;
    v39 = 0xF00000000LL;
    LOBYTE(v38) = 0;
    *((_DWORD *)v19 + 8) = 0;
    *((_DWORD *)v19 + 9) = 0;
    *((_DWORD *)v19 + 10) = 0;
    *((_WORD *)v19 + 22) = 0;
    v20 = *(_DWORD *)(v13 + 8) + 1;
    LOBYTE(v40) = 5;
    v21 = (float)(unsigned int)v20;
    if ( (float)(v21 / (float)*(unsigned int *)(v13 + 28)) <= *(float *)v13 )
    {
      v22 = v34;
    }
    else
    {
      sub_431970((int *)v13);
      v22 = *sub_430150((int **)v13, &v29, v33 + 2, v15);
    }
    v18 = sub_431910((_DWORD *)v13, v15, (int)v22, v33);
  }
  v23 = (void *)v38;
  v24 = (int)(v18 + 8);
  v40 = -1;
  if ( HIDWORD(v39) > 0xF )
  {
    v40 = 8;
    if ( (unsigned int)(HIDWORD(v39) + 1) >= 0x1000 )
    {
      v23 = *(void **)(v38 - 4);
      if ( (unsigned int)(v38 - (_DWORD)v23 - 4) > 0x1F )
      {
        sub_467F04(a2, v13);
        JUMPOUT(0x431F40);
      }
    }
    sub_4627F2(v23);
    v40 = -1;
  }
  v25 = *(_DWORD *)(v13 + 8) != (_DWORD)v36;
  v39 = 0xF00000000LL;
  LOBYTE(v38) = 0;
  v37 = v25;
  if ( v31 && *v31 )
  {
    sub_401590(v24, v31);
    v25 = v37;
  }
  else
  {
    *(_DWORD *)(v24 + 4) = 0;
  }
  *(_BYTE *)(v24 + 12) = a5;
  *(_BYTE *)(v24 + 13) = a6;
  if ( v30 )
    *v30 = v25;
  return 0;
}
// 431F3B: control flows out of bounds to 431F40
