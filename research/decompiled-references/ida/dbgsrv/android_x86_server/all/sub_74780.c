/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74780
// Address: 0x00074780

//----- (00074780) --------------------------------------------------------
int __cdecl sub_74780(int a1, char a2, char a3)
{
  _DWORD *v3; // edi
  char v4; // al
  _BYTE *v5; // eax
  unsigned __int8 v6; // cl
  int v7; // esi
  const char *v8; // eax
  char *v9; // eax
  _DWORD *v10; // eax
  int v11; // edi
  int v12; // esi
  char *v13; // eax
  const char *v14; // eax
  int v15; // esi
  char v16; // cl
  char v17; // di
  _BYTE *v18; // edx
  void *v19; // eax
  FILE *v21; // eax
  void **v22; // eax
  int v23; // edx
  unsigned int v24; // ecx
  _DWORD *v25; // eax
  int v26; // edx
  char v27; // [esp+24h] [ebp-1048h]
  FILE *v28; // [esp+24h] [ebp-1048h]
  int v29; // [esp+28h] [ebp-1044h]
  int v30; // [esp+2Ch] [ebp-1040h]
  char *v31; // [esp+30h] [ebp-103Ch]
  const char *v32; // [esp+34h] [ebp-1038h]
  int v33; // [esp+38h] [ebp-1034h] BYREF
  int v34; // [esp+3Ch] [ebp-1030h]
  int v35; // [esp+40h] [ebp-102Ch]
  _BYTE *v36; // [esp+48h] [ebp-1024h] BYREF
  int v37; // [esp+4Ch] [ebp-1020h]
  int v38; // [esp+50h] [ebp-101Ch]
  void *v39[5]; // [esp+58h] [ebp-1014h] BYREF
  char v40; // [esp+6Ch] [ebp-1000h]
  int v41; // [esp+70h] [ebp-FFCh]
  int v42; // [esp+74h] [ebp-FF8h]
  int v43; // [esp+78h] [ebp-FF4h]
  int v44; // [esp+7Ch] [ebp-FF0h]
  unsigned int v45; // [esp+1058h] [ebp-14h]

  v3 = (_DWORD *)a1;
  v45 = __readgsdword(0x14u);
  v4 = *(_BYTE *)(a1 + 244);
  if ( (unsigned __int8)(v4 - 9) >= 5u && v4 != 32 )
  {
    v18 = (_BYTE *)(*(_DWORD *)(a1 + 4) - 1);
    *(_DWORD *)(a1 + 4) = v18;
    *v18 = v4;
  }
  v36 = nullptr;
  v37 = 0;
  v38 = 0;
  v5 = *(_BYTE **)(a1 + 4);
  v6 = *v5;
  if ( *v5 != 34 && v6 != 60 )
  {
    do
    {
      v39[4] = nullptr;
      v40 = 0;
      v42 = 0;
      v41 = 0;
      v44 = 0;
      v43 = 0;
      memset(v39, 0, 14);
      v7 = sub_6EB10(a1, (int)v39, 0, nullptr);
      if ( !v7 && *(_DWORD *)(a1 + 32) )
        v7 = sub_6FBF0(a1, (int)v39);
      v16 = 5;
      if ( !v7 && LOWORD(v39[3]) != 1 )
      {
        if ( (unsigned __int8)sub_74C60((int)&v36, (int)v39) )
          v16 = 0;
        else
          v16 = 6;
      }
      if ( v39[0] )
      {
        v17 = v16;
        v39[1] = nullptr;
        qfree(v39[0]);
        v39[0] = nullptr;
        v39[2] = nullptr;
        v16 = v17;
      }
    }
    while ( !v16 );
    if ( v16 != 5 )
    {
      v7 = 30;
      goto LABEL_43;
    }
    v3 = (_DWORD *)a1;
    if ( v7 )
      goto LABEL_43;
    v5 = v36;
    *(_DWORD *)(a1 + 4) = v36;
    if ( !v5 )
      return 30;
    v6 = *v5;
  }
  v7 = 30;
  if ( v6 != 34 )
  {
    if ( v6 != 60 )
      goto LABEL_43;
    v6 = 62;
  }
  v8 = v5 + 1;
  v3[1] = v8;
  v27 = v6;
  v9 = strchr(v8, v6);
  if ( v9 )
  {
    *v9 = 0;
    v7 = 31;
    if ( v3[33] <= 0x7Fu )
    {
      v31 = sub_6E510((int)v3, (char *)v39, 4096, (_BYTE *)v3[1], v27, a3);
      sub_1B530((int)&v33, v31);
      v10 = v3;
      v11 = v3[29];
      v12 = 12 * v10[30];
      v29 = v11 + v12;
      if ( v12 )
      {
        v13 = (char *)v33;
        v30 = v33;
        if ( !v34 )
          v13 = byte_EF875;
        v32 = v13;
        while ( 1 )
        {
          v14 = byte_EF875;
          if ( *(_DWORD *)(v11 + 4) )
            v14 = *(const char **)v11;
          if ( !strcmp(v32, v14) )
            break;
          v11 += 12;
          v12 -= 12;
          if ( !v12 )
          {
            v15 = v29;
            v11 = v29;
            goto LABEL_39;
          }
        }
        v15 = v29;
LABEL_39:
        v19 = (void *)v30;
        if ( !v30 )
          goto LABEL_41;
      }
      else
      {
        v19 = (void *)v33;
        v15 = v11 + v12;
        if ( !v33 )
          goto LABEL_41;
      }
      v34 = 0;
      qfree(v19);
      v33 = 0;
      v35 = 0;
LABEL_41:
      if ( v11 != v15 )
        goto LABEL_42;
      if ( v31 )
      {
        v21 = fopenRT(v31);
        if ( v21 )
        {
          v28 = v21;
          v22 = (void **)(a1 + 128);
          v23 = *(_DWORD *)(a1 + 132);
          v24 = v23 + 1;
          if ( *(_DWORD *)(a1 + 136) >= (unsigned int)(v23 + 1) )
          {
            v25 = *v22;
          }
          else
          {
            v25 = qvector_reserve(a1 + 128, *v22, v24, 0x18u);
            *(_DWORD *)(a1 + 128) = v25;
            v23 = *(_DWORD *)(a1 + 132);
            v24 = v23 + 1;
          }
          v26 = 3 * v23;
          *(_DWORD *)(a1 + 132) = v24;
          v25[2 * v26 + 1] = *(_DWORD *)(a1 + 140);
          v25[2 * v26 + 4] = *(_DWORD *)(a1 + 148);
          v25[2 * v26] = *(_DWORD *)(a1 + 144);
          LOBYTE(v25[2 * v26 + 5]) = *(_BYTE *)(a1 + 68);
          v25[2 * v26 + 2] = *(_DWORD *)(a1 + 104);
          v25[2 * v26 + 3] = *(_DWORD *)(a1 + 108);
          *(_DWORD *)(a1 + 140) = v28;
          *(_DWORD *)(a1 + 144) = qstrdup(v31);
          *(_DWORD *)(a1 + 148) = 0;
          *(_DWORD *)(a1 + 104) = sub_697D0;
          *(_DWORD *)(a1 + 108) = a1;
          *(_BYTE *)(a1 + 68) = 0;
          v7 = 0;
          goto LABEL_43;
        }
      }
      if ( !a2 )
      {
        v7 = 32;
        set_error_string(0, *(char **)(a1 + 4));
      }
      else
      {
LABEL_42:
        v7 = 0;
        set_qerrno(0);
      }
    }
  }
LABEL_43:
  if ( v36 )
  {
    v37 = 0;
    qfree(v36);
    v36 = nullptr;
    v38 = 0;
  }
  return v7;
}
