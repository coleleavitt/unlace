/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A404
// Address: 0x0008A404

//----- (0008A404) --------------------------------------------------------
int __fastcall sub_8A404(int a1, int a2, int a3, int a4)
{
  _BYTE *v4; // r2
  int v7; // r7
  __int64 v9; // r8
  unsigned int *v10; // r3
  int v11; // r3
  int v12; // r2
  int v13; // r3
  const char *v14; // r11
  int v15; // r9
  int v16; // r1
  char v17; // r10
  char v18; // t1
  int v19; // r2
  void (__fastcall *v20)(int, int, int); // r3
  int v21; // r1
  void (__fastcall *v22)(int, int, int); // r3
  int v23; // r2
  int v24; // r2
  int v25; // r1
  int v26; // r2
  int v27; // r2
  void (__fastcall *v28)(int, int, int); // r3
  char *v29; // r6
  int v30; // r3
  int v31; // r1
  char v32; // r9
  char v33; // t1
  int v34; // r2
  void (__fastcall *v35)(int, int, int); // r3
  int v36; // r3
  char *v37; // r6
  int v38; // r1
  char v39; // r11
  char v40; // t1
  int v41; // r2
  void (__fastcall *v42)(int, int, int); // r3
  unsigned int *v43; // [sp+4h] [bp-8h]

  v4 = **(_BYTE ***)(a3 + 8);
  if ( *v4 != 102 )
    return 0;
  v7 = *(_DWORD *)(a1 + 288);
  v9 = *(_QWORD *)(*(_DWORD *)a4 + 8);
  if ( *(_DWORD *)HIDWORD(v9) == 59 )
  {
    v10 = *(unsigned int **)(HIDWORD(v9) + 12);
  }
  else
  {
    v10 = nullptr;
    v43 = nullptr;
  }
  if ( *(_DWORD *)HIDWORD(v9) == 59 )
  {
    HIDWORD(v9) = *(_DWORD *)(HIDWORD(v9) + 8);
    v43 = v10;
  }
  *(_DWORD *)(a1 + 288) = -1;
  switch ( v4[1] )
  {
    case 'L':
    case 'R':
      v11 = *(_DWORD *)(a1 + 256);
      if ( v11 == 255 )
      {
        *(_BYTE *)(a1 + 255) = 0;
        (*(void (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
        v12 = *(_DWORD *)(a1 + 292);
        v11 = 0;
        *(_DWORD *)(a1 + 256) = 0;
        *(_DWORD *)(a1 + 292) = v12 + 1;
      }
      *(_DWORD *)(a1 + 256) = v11 + 1;
      *(_BYTE *)(a1 + v11) = 40;
      *(_BYTE *)(a1 + 260) = 40;
      sub_8A36C(a1, a2, (unsigned int *)HIDWORD(v9));
      sub_8A308(a1, a2, (_DWORD *)v9);
      v13 = *(_DWORD *)(a1 + 256);
      v14 = "...";
      v15 = 3;
      do
      {
        v16 = v13;
        v18 = *v14++;
        v17 = v18;
        if ( v13 == 255 )
        {
          v19 = *(_DWORD *)(a1 + 268);
          v20 = *(void (__fastcall **)(int, int, int))(a1 + 264);
          *(_BYTE *)(a1 + 255) = 0;
          v20(a1, 255, v19);
          v13 = 1;
          v16 = 0;
          ++*(_DWORD *)(a1 + 292);
        }
        else
        {
          ++v13;
        }
        --v15;
        *(_DWORD *)(a1 + 256) = v13;
        *(_BYTE *)(a1 + v16) = v17;
        *(_BYTE *)(a1 + 260) = v17;
      }
      while ( v15 );
      sub_8A308(a1, a2, (_DWORD *)v9);
      sub_8A36C(a1, a2, v43);
      v21 = *(_DWORD *)(a1 + 256);
      if ( v21 != 255 )
        goto LABEL_36;
      v22 = *(void (__fastcall **)(int, int, int))(a1 + 264);
      v23 = *(_DWORD *)(a1 + 268);
      *(_BYTE *)(a1 + 255) = 0;
      v22(a1, 255, v23);
      v24 = 1;
      v21 = 0;
      ++*(_DWORD *)(a1 + 292);
      goto LABEL_18;
    case 'l':
      v36 = *(_DWORD *)(a1 + 256);
      v37 = "(...";
      do
      {
        v38 = v36;
        v40 = *v37++;
        v39 = v40;
        if ( v36 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
          v36 = 1;
          v38 = 0;
          ++*(_DWORD *)(a1 + 292);
        }
        else
        {
          ++v36;
        }
        *(_DWORD *)(a1 + 256) = v36;
        *(_BYTE *)(a1 + v38) = v39;
        *(_BYTE *)(a1 + 260) = v39;
      }
      while ( "" != v37 );
      sub_8A308(a1, a2, (_DWORD *)v9);
      sub_8A36C(a1, a2, (unsigned int *)HIDWORD(v9));
      v21 = *(_DWORD *)(a1 + 256);
      if ( v21 == 255 )
      {
        v41 = *(_DWORD *)(a1 + 268);
        v42 = *(void (__fastcall **)(int, int, int))(a1 + 264);
        *(_BYTE *)(a1 + 255) = 0;
        v42(a1, 255, v41);
        v24 = 1;
        v21 = 0;
        ++*(_DWORD *)(a1 + 292);
      }
      else
      {
LABEL_36:
        v24 = v21 + 1;
      }
LABEL_18:
      *(_DWORD *)(a1 + 256) = v24;
      *(_BYTE *)(a1 + v21) = 41;
      *(_BYTE *)(a1 + 260) = 41;
      break;
    case 'r':
      v25 = *(_DWORD *)(a1 + 256);
      if ( v25 == 255 )
      {
        v27 = *(_DWORD *)(a1 + 268);
        v28 = *(void (__fastcall **)(int, int, int))(a1 + 264);
        *(_BYTE *)(a1 + 255) = 0;
        v28(a1, 255, v27);
        v26 = 1;
        v25 = 0;
        ++*(_DWORD *)(a1 + 292);
      }
      else
      {
        v26 = v25 + 1;
      }
      *(_DWORD *)(a1 + 256) = v26;
      *(_BYTE *)(a1 + v25) = 40;
      *(_BYTE *)(a1 + 260) = 40;
      sub_8A36C(a1, a2, (unsigned int *)HIDWORD(v9));
      v29 = "...)";
      sub_8A308(a1, a2, (_DWORD *)v9);
      v30 = *(_DWORD *)(a1 + 256);
      do
      {
        v31 = v30;
        v33 = *v29++;
        v32 = v33;
        if ( v30 == 255 )
        {
          v34 = *(_DWORD *)(a1 + 268);
          v35 = *(void (__fastcall **)(int, int, int))(a1 + 264);
          *(_BYTE *)(a1 + 255) = 0;
          v35(a1, 255, v34);
          v30 = 1;
          v31 = 0;
          ++*(_DWORD *)(a1 + 292);
        }
        else
        {
          ++v30;
        }
        *(_DWORD *)(a1 + 256) = v30;
        *(_BYTE *)(a1 + v31) = v32;
        *(_BYTE *)(a1 + 260) = v32;
      }
      while ( v29 != "" );
      break;
    default:
      break;
  }
  *(_DWORD *)(a1 + 288) = v7;
  return 1;
}
// 8A528: variable 'v43' is possibly undefined
