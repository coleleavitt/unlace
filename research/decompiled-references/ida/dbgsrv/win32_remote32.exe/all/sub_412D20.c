/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412D20
// Address: 0x00412D20

//----- (00412D20) --------------------------------------------------------
int __userpurge sub_412D20@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, int a3, int *a4, char a5, int a6)
{
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  unsigned int v10; // esi
  int v11; // ecx
  int v12; // esi
  int v13; // edx
  char v14; // cl
  char v15; // al
  char v16; // dl
  unsigned int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // ecx
  const char *v22; // eax
  _DWORD *v23; // eax
  int v24; // eax
  int v25; // ecx
  char *v26; // eax
  _DWORD *v27; // ecx
  _DWORD *v28; // edx
  int v29; // ecx
  const char *v30; // eax
  _DWORD *v31; // eax
  int v32; // eax
  _DWORD *v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // edx
  unsigned int v37; // [esp-8h] [ebp-50h]
  double v38; // [esp-8h] [ebp-50h]
  int v39; // [esp-4h] [ebp-4Ch]
  int v40; // [esp+0h] [ebp-48h]
  unsigned int v41; // [esp+10h] [ebp-38h]
  char *v42; // [esp+14h] [ebp-34h] BYREF
  int v43; // [esp+18h] [ebp-30h]
  int v44; // [esp+1Ch] [ebp-2Ch]
  _DWORD *v45; // [esp+20h] [ebp-28h] BYREF
  int v46; // [esp+24h] [ebp-24h] BYREF
  int v47; // [esp+28h] [ebp-20h]
  int *v48; // [esp+2Ch] [ebp-1Ch]
  unsigned int v49; // [esp+30h] [ebp-18h]
  unsigned int v50; // [esp+34h] [ebp-14h] BYREF
  char v51; // [esp+3Bh] [ebp-Dh]
  int v52; // [esp+44h] [ebp-4h]
  _BYTE v53[80]; // [esp+48h] [ebp+0h] BYREF
  unsigned int v54; // [esp+98h] [ebp+50h] BYREF
  void *v55; // [esp+9Ch] [ebp+54h]
  int v56; // [esp+A0h] [ebp+58h]
  int v57; // [esp+A4h] [ebp+5Ch]
  int v58; // [esp+A8h] [ebp+60h]
  void *v59; // [esp+ACh] [ebp+64h]
  int v60; // [esp+B0h] [ebp+68h]
  int v61; // [esp+B4h] [ebp+6Ch]
  int v62; // [esp+B8h] [ebp+70h]
  int v63; // [esp+BCh] [ebp+74h]
  int v64; // [esp+C0h] [ebp+78h]
  int v65; // [esp+C4h] [ebp+7Ch]
  int v66; // [esp+C8h] [ebp+80h]
  int v67; // [esp+CCh] [ebp+84h]
  char v68; // [esp+D2h] [ebp+8Ah] BYREF
  int v69; // [esp+194h] [ebp+14Ch]

  v7 = *(_DWORD *)a1;
  v48 = a4;
  v41 = *a4;
  v47 = (*(int (__thiscall **)(int, int))(v7 + 24))(a1, *a4);
  v45 = (_DWORD *)a4[3];
  sub_45B9B0((_DWORD *)a3, 7);
  if ( (*(_DWORD *)(a3 + 16) & 0xFFFFFFF) != 7 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(3299);
  }
  *(_DWORD *)(a3 + 8) = v45;
  *(_DWORD *)(a3 + 20) = v41;
  v8 = a4[1] == 0;
  *(_DWORD *)(a3 + 28) = -1;
  *(_BYTE *)(a3 + 24) = v8;
  *(_BYTE *)(a3 + 12) = 0;
  if ( *(_BYTE *)(a1 + 661) && !v47 )
  {
    sub_45B9B0((_DWORD *)a3, 2);
    v9 = *(_DWORD *)(a3 + 16) & 0xFFFFFFF;
    if ( v9 != 2 && v9 != 4 )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(3296);
    }
    *(_DWORD *)(a3 + 20) = -1;
    return 1;
  }
  v10 = *(_DWORD *)(a3 + 4);
  v51 = 1;
  v49 = -1;
  v50 = v10;
  sub_408C10((int *)(a1 + 604), &v42, &v50);
  v11 = v44;
  if ( *(_BYTE *)(v44 + 13) || v10 < *(_DWORD *)(v44 + 16) )
    v11 = *(_DWORD *)(a1 + 604);
  v12 = 0;
  if ( v11 != *(_DWORD *)(a1 + 604) )
    v12 = v11 + 20;
  v46 = v12;
  if ( v12 )
  {
    v49 = *(_DWORD *)(v12 + 32);
    *(_DWORD *)(v12 + 32) = -1;
  }
  v13 = v47;
  v14 = a5;
  if ( v47 )
  {
    *(_BYTE *)(a3 + 12) = (*(_DWORD *)(v47 + 4) & 2) != 0;
    if ( !a5 )
    {
      if ( (*(_BYTE *)(v13 + 4) & 1) != 0 || *(_BYTE *)(a1 + 662) )
      {
        v51 = 1;
      }
      else
      {
        v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 232))(a1, a3, v13);
        v14 = a5;
        v51 = v15;
      }
    }
  }
  v16 = 0;
  *(_DWORD *)(a3 + 36) = 0;
  v50 = 0;
  if ( v41 > 0x406D1388 )
  {
    if ( v41 == -2147483645 )
    {
LABEL_32:
      if ( v14 )
      {
        if ( !v12 )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(638);
        }
        v32 = 6;
        if ( v49 != *(_DWORD *)(a3 + 8) )
          v32 = 13;
        sub_45B9B0((_DWORD *)a3, v32);
        goto LABEL_112;
      }
      if ( *(_DWORD *)(a1 + 512) != 2 )
      {
        if ( *(char *)(a1 + 520) > 0
          && sub_419040((_DWORD *)(a1 + 460), (unsigned int)v45)
          && sub_412090((int *)a1, *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 4)) == -1 )
        {
          HIDWORD(v38) = (char)--*(_BYTE *)(a1 + 520);
          LODWORD(v38) = *(_DWORD *)(a3 + 8);
          sub_43C900(a1, (int)"%a: resuming after DbgBreakPoint(), expecting bpts: %d\n", v38, v40);
          *(_BYTE *)(a3 + 12) = 1;
LABEL_105:
          (*(void (__stdcall **)(int, int))(*(_DWORD *)a1 + 80))(a1, a3);
          return 0;
        }
        v46 = sub_412090((int *)a1, *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 4));
        if ( v46 == -1 )
          goto LABEL_112;
        v33 = sub_416250((_DWORD *)a3);
        v34 = v46;
        *v33 = -1;
        if ( v34 == *(_DWORD *)(a3 + 8) )
          v34 = -1;
        v33[1] = v34;
LABEL_111:
        *(_BYTE *)(a3 + 12) = 1;
        goto LABEL_112;
      }
      sub_40D240(a1, a3, 1u);
LABEL_112:
      v16 = 0;
      goto LABEL_113;
    }
    if ( v41 == -2147483644 )
    {
LABEL_88:
      if ( !v12 || (v8 = (*(_BYTE *)(v12 + 28) & 1) == 0, LOBYTE(v49) = 1, v8) )
        LOBYTE(v49) = 0;
      v46 = sub_44B3A0((_DWORD *)a1, *(_DWORD *)(a3 + 4), v49);
      if ( v46 == -1 )
      {
        if ( (_BYTE)v49 )
        {
          sub_45B9B0((_DWORD *)a3, 6);
          *(_BYTE *)(a3 + 12) = 1;
          *(_DWORD *)(v12 + 28) &= ~1u;
        }
        goto LABEL_112;
      }
      sub_45B9B0((_DWORD *)a3, 5);
      if ( (*(_DWORD *)(a3 + 16) & 0xFFFFFFF) != 5 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(3298);
      }
      *(_DWORD *)(a3 + 20) = v46;
      *(_DWORD *)(a3 + 24) = -1;
      goto LABEL_111;
    }
    if ( v41 != -1073741819 )
      goto LABEL_113;
    v37 = v48[6];
    v49 = v37;
    *(_DWORD *)(a3 + 28) = v37;
    sub_43CF50((_DWORD *)a1, &v45, v37, 1);
    v23 = v45;
    if ( v45 != *(_DWORD **)(a1 + 248)
      || (v49 = *(_DWORD *)(a3 + 8),
          v23 = (_DWORD *)*sub_43CF50((_DWORD *)a1, &v46, v49, 1),
          v45 = v23,
          v23 != *(_DWORD **)(a1 + 248)) )
    {
      v39 = *(_DWORD *)(a1 + 456);
      v50 = 1;
      if ( sub_4195D0(v23, v49, v48[5], v48[3], v39) )
      {
        v31 = sub_416250((_DWORD *)a3);
        *v31 = v49;
        v31[1] = -1;
        *(_BYTE *)(a3 + 12) = 1;
        goto LABEL_81;
      }
      if ( v12 )
      {
        v24 = v50;
        if ( (*(_BYTE *)(v12 + 28) & 1) != 0 )
          v24 = 3;
        v50 = v24;
      }
      v55 = nullptr;
      v56 = 0;
      v57 = 0;
      v59 = nullptr;
      v60 = 0;
      v61 = 0;
      v62 = -1;
      v65 = 0;
      v66 = 0;
      v67 = 0;
      v25 = 8;
      v63 = -1;
      v64 = -1;
      v26 = &v68;
      do
      {
        *(_DWORD *)(v26 - 2) = 0;
        v26 += 24;
        *(_DWORD *)(v26 - 22) = 0;
        *(_DWORD *)(v26 - 18) = 0;
        *(_DWORD *)(v26 - 14) = 0;
        *(_DWORD *)(v26 - 10) = 0;
        *(_DWORD *)(v26 - 6) = 0;
        --v25;
      }
      while ( v25 );
      v52 = 2;
      v54 = v45[5];
      v58 = v45[12];
      v27 = *(_DWORD **)(a1 + 176);
      v69 = v45[7];
      v28 = &v27[*(_DWORD *)(a1 + 180)];
      if ( v27 == v28 )
      {
LABEL_61:
        if ( sub_43D2B0((_DWORD *)a1, &v54, (_DWORD *)a3, v50) )
        {
          if ( (v50 & 2) != 0 )
          {
            sub_45B9B0((_DWORD *)a3, 6);
            *(_BYTE *)(a3 + 12) = 1;
            *(_DWORD *)(v12 + 28) &= ~1u;
            v52 = 3;
            if ( v59 )
            {
              v60 = 0;
              sub_453A20(v59);
              v59 = nullptr;
              v61 = 0;
            }
            v52 = 4;
            if ( v55 )
            {
              v56 = 0;
              sub_453A20(v55);
            }
            return 1;
          }
          v52 = 5;
          if ( v59 )
          {
            v60 = 0;
            sub_453A20(v59);
            v59 = nullptr;
            v61 = 0;
          }
          v52 = 6;
          if ( v55 )
          {
            v56 = 0;
            sub_453A20(v55);
            return 0;
          }
          return 0;
        }
      }
      else
      {
        while ( v45[5] != *v27 )
        {
          if ( ++v27 == v28 )
            goto LABEL_61;
        }
      }
      v52 = 7;
      if ( v59 )
      {
        v60 = 0;
        sub_453A20(v59);
        v59 = nullptr;
        v61 = 0;
      }
      v52 = 8;
      if ( v55 )
      {
        v56 = 0;
        sub_453A20(v55);
      }
      v52 = -1;
    }
    if ( v47 && (*(_DWORD *)(a3 + 16) & 0xFFFFFFF) == 7 )
    {
      v29 = v48[5];
      if ( v29 == 8 )
      {
        v30 = "executed";
      }
      else
      {
        v30 = "written";
        if ( v29 != 1 )
          v30 = "read";
      }
      if ( *(_DWORD *)(v47 + 24) )
        sub_402970(a2, (LPVOID *)(a3 + 32), *(char **)(v47 + 20), *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 28), v30);
      else
        sub_402970(a2, (LPVOID *)(a3 + 32), (char *)MultiByteStr, *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 28), v30);
      v16 = v50;
      goto LABEL_113;
    }
LABEL_81:
    v16 = v50;
    goto LABEL_113;
  }
  if ( v41 == 1080890248 )
  {
    if ( v48[5] != 4096 || v48[8] )
      goto LABEL_113;
    v42 = nullptr;
    v43 = 0;
    v44 = 0;
    v52 = 9;
    sub_415CB0((int)&v42, 1024);
    if ( (*(int (__stdcall **)(int, int, char *, int, _DWORD))(*(_DWORD *)a1 + 140))(
           a1,
           v48[6],
           v42,
           v43 != 0 ? v43 - 1 : 0,
           0) > 0 )
    {
      v18 = v48[7];
      sub_402760("Thread %d is named '%s'\n");
      v19 = sub_410D70((int *)(a1 + 604), v18);
      v20 = v19;
      if ( v19 )
      {
        v21 = v19 + 36;
        v22 = MultiByteStr;
        if ( v43 )
          v22 = v42;
        sub_401590(v21, v22);
        *(_DWORD *)(v20 + 28) |= 4u;
      }
      v12 = v46;
      *(_BYTE *)(a3 + 12) = 1;
    }
    v52 = 10;
    if ( v42 )
    {
      v43 = 0;
      sub_453A20(v42);
      v42 = nullptr;
      v44 = 0;
    }
    v52 = -1;
    goto LABEL_112;
  }
  if ( v41 > 0x4000001E )
  {
    if ( v41 != 1073741855 )
      goto LABEL_113;
    goto LABEL_32;
  }
  if ( v41 == 1073741854 )
    goto LABEL_88;
  if ( (v41 == 250477286 || v41 == 250608334) && v48[4] == 5 && v48[5] == 2 && v48[6] == 3 )
  {
    if ( (*(int (__stdcall **)(int, int, _BYTE *, int, _DWORD))(*(_DWORD *)a1 + 140))(a1, v48[8], v53, 80, 0) == 80 )
      return sub_412D20(a3, v53, 0, 0);
    goto LABEL_112;
  }
LABEL_113:
  if ( !*(_BYTE *)(a1 + 662) && sub_43CE80((_DWORD *)a1, a3, v16) )
    return 0;
  if ( (*(_DWORD *)(a3 + 16) & 0xFFFFFFF) != 7 )
    return 1;
  v35 = v47;
  if ( v47 )
  {
    if ( *(_DWORD *)(a3 + 36) > 1u )
      goto LABEL_123;
    v36 = v48[6];
    v46 = v48[5];
    if ( *(_DWORD *)(v47 + 24) )
      sub_402970(a2, (LPVOID *)(a3 + 32), *(char **)(v47 + 20), *(_DWORD *)(a3 + 8), v46, v36);
    else
      sub_402970(a2, (LPVOID *)(a3 + 32), (char *)MultiByteStr, *(_DWORD *)(a3 + 8), v46, v36);
  }
  else
  {
    sub_402970(a2, (LPVOID *)(a3 + 32), "unknown exception code %X", v41);
  }
  v35 = v47;
LABEL_123:
  if ( !v51 )
  {
    sub_43D5E0(a3, v35);
    if ( v12 && (*(_BYTE *)(v12 + 28) & 1) != 0 )
    {
      if ( !sub_417270(v12, a2, 0) )
        sub_43C950(a2, a1, (int)"%d: (clr_step) SetThreadContext failed", *(_DWORD *)(v12 + 16));
      if ( *(_BYTE *)(a3 + 12) )
      {
        sub_45B9B0((_DWORD *)a3, 6);
        return 1;
      }
    }
    goto LABEL_105;
  }
  return 1;
}
// 413431: variable 'v40' is possibly undefined
// 43D5E0: using guessed type _DWORD __stdcall sub_43D5E0(_DWORD, _DWORD);
// 4B70F0: using guessed type char byte_4B70F0;
