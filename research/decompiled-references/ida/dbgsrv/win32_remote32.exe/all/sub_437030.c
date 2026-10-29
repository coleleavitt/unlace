/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437030
// Address: 0x00437030

//----- (00437030) --------------------------------------------------------
char __userpurge sub_437030@<al>(int a1@<ecx>, int a2@<ebx>, _DWORD **a3)
{
  _DWORD **v3; // eax
  _DWORD *v4; // esi
  bool v5; // zf
  int *v6; // edi
  int v7; // esi
  _DWORD *v8; // eax
  __int128 *v9; // edx
  char *v10; // edi
  int v11; // esi
  unsigned int i; // ecx
  int v13; // eax
  int *v14; // eax
  int *v15; // edi
  char *v16; // eax
  int v17; // eax
  float v18; // xmm1_4
  int **v19; // eax
  int *v20; // ecx
  int *v21; // eax
  int v22; // esi
  char *v23; // eax
  unsigned int v25; // [esp+8h] [ebp-68h]
  int v26; // [esp+Ch] [ebp-64h]
  int *v27[4]; // [esp+1Ch] [ebp-54h] BYREF
  char *v28; // [esp+2Ch] [ebp-44h]
  const char *v29; // [esp+30h] [ebp-40h]
  int *v30; // [esp+34h] [ebp-3Ch] BYREF
  int *v31; // [esp+38h] [ebp-38h]
  _DWORD **v32; // [esp+3Ch] [ebp-34h]
  int v33; // [esp+40h] [ebp-30h]
  _DWORD *v34; // [esp+44h] [ebp-2Ch]
  __int128 v35; // [esp+48h] [ebp-28h] BYREF
  __int64 v36; // [esp+58h] [ebp-18h]
  int v37; // [esp+6Ch] [ebp-4h]

  v33 = a1;
  v3 = a3;
  v32 = a3;
  v4 = *a3;
  v34 = v4;
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_BYTE *)(a1 + 320) == 0;
      v29 = (const char *)v3[1];
      if ( !v5 )
      {
        *(_BYTE *)(a1 + 320) = 0;
        v6 = (int *)sub_4627C2(0x20u);
        v27[2] = v6;
        v37 = 0;
        if ( v6 )
        {
          v7 = *(_DWORD *)(v33 + 284);
          *v6 = *(_DWORD *)v7;
          v6[1] = 0;
          v6[2] = 0;
          v8 = sub_4627C2(0x30u);
          *v8 = v8;
          v8[1] = v8;
          v6[1] = (int)v8;
          v6[3] = 0;
          v6[4] = 0;
          v6[5] = 0;
          v6[6] = *(_DWORD *)(v7 + 24);
          v6[7] = *(_DWORD *)(v7 + 28);
          v26 = v6[1];
          v25 = (*(_DWORD *)(v7 + 16) - *(_DWORD *)(v7 + 12)) >> 2;
          LOBYTE(v37) = 2;
          sub_40B9C0((int)(v6 + 3), v25, v26);
          sub_430380(v6, a2, **(_DWORD ***)(v7 + 4), *(_DWORD **)(v7 + 4));
          v4 = v34;
        }
        else
        {
          v6 = nullptr;
        }
        a1 = v33;
        v37 = -1;
        *(_DWORD *)(v33 + 284) = v6;
      }
      if ( v4 && *(_BYTE *)v4 )
      {
        v34 = *(_DWORD **)(a1 + 284);
        v35 = 0;
        v36 = 0;
        sub_4300C0(&v35, (unsigned int)v4, strlen((const char *)v4));
        v9 = &v35;
        v10 = (char *)v35;
        v11 = -2128831035;
        if ( HIDWORD(v36) > 0xF )
          v9 = (__int128 *)v35;
        v37 = 3;
        for ( i = 0; i < (unsigned int)v36; v11 = 16777619 * (v11 ^ v13) )
          v13 = *((unsigned __int8 *)v9 + i++);
        sub_430150((int **)v34, &v30, &v35, v11);
        v14 = v31;
        if ( !v31 )
        {
          v15 = v34;
          if ( v34[2] == 89478485 )
            goto LABEL_33;
          v27[3] = v34 + 1;
          LOBYTE(v37) = 4;
          v28 = nullptr;
          v16 = (char *)sub_4627C2(0x30u);
          v34 = v16;
          v28 = v16;
          *(_OWORD *)(v16 + 8) = 0;
          *((_DWORD *)v16 + 6) = 0;
          *((_DWORD *)v16 + 7) = 0;
          *(__int128 *)(v16 + 8) = v35;
          *((_QWORD *)v16 + 3) = v36;
          v36 = 0xF00000000LL;
          LOBYTE(v35) = 0;
          *((_DWORD *)v16 + 8) = 0;
          *((_DWORD *)v16 + 9) = 0;
          *((_DWORD *)v16 + 10) = 0;
          *((_WORD *)v16 + 22) = 0;
          v17 = v15[2] + 1;
          LOBYTE(v37) = 5;
          v18 = (float)(unsigned int)v17;
          if ( (float)(v18 / (float)(unsigned int)v15[7]) <= *(float *)v15 )
          {
            v20 = v30;
          }
          else
          {
            sub_431970(v15);
            v19 = sub_430150((int **)v15, v27, v34 + 2, v11);
            v20 = *v19;
            v21 = v19[1];
            v30 = v20;
            v31 = v21;
          }
          v28 = nullptr;
          v14 = sub_431910(v15, v11, (int)v20, v34);
          v10 = (char *)v35;
        }
        v22 = (int)(v14 + 8);
        v37 = -1;
        if ( HIDWORD(v36) > 0xF )
        {
          v23 = v10;
          v37 = 8;
          if ( (unsigned int)(HIDWORD(v36) + 1) >= 0x1000 )
          {
            v10 = *((char **)v10 - 1);
            if ( (unsigned int)(v23 - v10 - 4) > 0x1F )
            {
              sub_467F04(a2, (int)v10);
LABEL_33:
              sub_4627A2((int)"unordered_map/set too long");
            }
          }
          sub_4627F2(v10);
          v37 = -1;
        }
        v36 = 0xF00000000LL;
        LOBYTE(v35) = 0;
        if ( v29 && *v29 )
        {
          sub_401590(v22, v29);
          *(_WORD *)(v22 + 12) = 0;
        }
        else
        {
          *(_DWORD *)(v22 + 4) = 0;
          *(_WORD *)(v22 + 12) = 0;
        }
      }
      else if ( sub_45CC20(38) )
      {
        return 0;
      }
      v3 = v32 + 2;
      v32 = v3;
      v4 = *v3;
      v34 = v4;
      if ( !v4 )
        return 1;
      a1 = v33;
    }
  }
  return 1;
}
