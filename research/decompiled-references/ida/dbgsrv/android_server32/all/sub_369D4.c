/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_369D4
// Address: 0x000369D4

//----- (000369D4) --------------------------------------------------------
int __fastcall sub_369D4(unsigned __int64 a1, int a2, int (__fastcall ***a3)(_DWORD, int, char *))
{
  int v3; // r7
  unsigned int v4; // r6
  unsigned int v5; // r3
  unsigned int v6; // r2
  unsigned int v7; // r5
  unsigned int v8; // r2
  __int64 v9; // r4
  unsigned int v10; // r6
  unsigned int v11; // r6
  _BOOL1 v12; // cf
  unsigned int v13; // r4
  int v14; // r4
  int v15; // r7
  unsigned int v16; // r1
  int v17; // r5
  unsigned int v18; // r3
  __int64 *v19; // r2
  char *v20; // r2
  unsigned int v22; // [sp+Ch] [bp-74h]
  unsigned int v23; // [sp+Ch] [bp-74h]
  unsigned int v24; // [sp+10h] [bp-70h]
  unsigned int v25; // [sp+14h] [bp-6Ch]
  __int64 *v26; // [sp+18h] [bp-68h]
  __int64 *v28; // [sp+28h] [bp-58h]
  int v30; // [sp+30h] [bp-50h]
  _UNKNOWN **v31; // [sp+34h] [bp-4Ch] BYREF
  int v32; // [sp+38h] [bp-48h]
  unsigned int v33; // [sp+3Ch] [bp-44h]
  unsigned int v34; // [sp+40h] [bp-40h]
  int v35; // [sp+44h] [bp-3Ch]
  unsigned int v36; // [sp+48h] [bp-38h]
  unsigned int v37; // [sp+4Ch] [bp-34h]
  void *v38[2]; // [sp+50h] [bp-30h] BYREF
  int v39; // [sp+58h] [bp-28h]
  int v40; // [sp+5Ch] [bp-24h]
  int v41; // [sp+60h] [bp-20h]
  int v42; // [sp+64h] [bp-1Ch]
  int v43; // [sp+68h] [bp-18h]
  int v44; // [sp+6Ch] [bp-14h] BYREF
  char *v45; // [sp+70h] [bp-10h] BYREF
  int v46; // [sp+74h] [bp-Ch]
  int v47; // [sp+78h] [bp-8h]

  v3 = a1;
  v32 = a1;
  v31 = &off_D64AC;
  v4 = *(_DWORD *)(HIDWORD(a1) + 24);
  v5 = *(_DWORD *)(HIDWORD(a1) + 28);
  LODWORD(a1) = 0;
  v36 = 0;
  v35 = 0;
  v34 = v5;
  v33 = v4;
  v6 = *(_DWORD *)(HIDWORD(a1) + 56);
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v40 = 0;
  v39 = 0;
  v38[1] = nullptr;
  v38[0] = nullptr;
  v37 = v6;
  v30 = v32;
  if ( *(_DWORD *)(HIDWORD(a1) + 4) == 8 )
  {
    v7 = 0;
    if ( !v6 )
      goto LABEL_18;
  }
  else
  {
    v24 = v4;
    v25 = v6;
    HIDWORD(v9) = *(_DWORD *)(v3 + 172);
    v3 = v32;
    v8 = (*(_QWORD *)(HIDWORD(v9) + 376) - *(_QWORD *)(HIDWORD(v9) + 368)) >> 32;
    LODWORD(v9) = *(_DWORD *)(HIDWORD(v9) + 376) - *(_DWORD *)(HIDWORD(v9) + 368);
    v10 = *(_DWORD *)(v32 + 56);
    if ( HIDWORD(a1) + 64 < v10 || HIDWORD(a1) + 64 >= v10 + (*(_DWORD *)(v32 + 60) << 6) )
    {
      HIDWORD(v9) = (*(_QWORD *)(HIDWORD(v9) + 376) - *(_QWORD *)(HIDWORD(v9) + 368)) >> 32;
      v6 = v25;
    }
    else
    {
      v11 = *(_DWORD *)(HIDWORD(a1) + 88);
      v22 = *(_DWORD *)(HIDWORD(a1) + 92);
      HIDWORD(v9) = (*(_QWORD *)(HIDWORD(v9) + 376) - *(_QWORD *)(HIDWORD(v9) + 368)) >> 32;
      v12 = __PAIR64__(v22, v11) >= __PAIR64__(v8, v9);
      v6 = v25;
      if ( !v12 && __PAIR64__(v22, v11) >= __PAIR64__(v5, v24) )
        v9 = *(_QWORD *)(HIDWORD(a1) + 88);
    }
    v23 = v9;
    LODWORD(a1) = 0;
    v12 = v24 >= (unsigned int)v9;
    LODWORD(v9) = HIDWORD(v9);
    v12 = __CFSUB__(v5, HIDWORD(v9), v12);
    v7 = 0;
    if ( !v12 )
    {
      LODWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 32);
      v7 = *(_DWORD *)(HIDWORD(a1) + 36);
      HIDWORD(a1) = __PAIR64__(v7, a1) < __PAIR64__(v13, v23) - __PAIR64__(v5, v24);
      if ( __PAIR64__(v7, a1) >= __PAIR64__(v13, v23) - __PAIR64__(v5, v24) )
        v7 = (__PAIR64__(v13, v23) - __PAIR64__(v5, v24)) >> 32;
      v3 = v32;
      if ( !HIDWORD(a1) )
        LODWORD(a1) = v23 - v24;
      v6 = v25;
    }
    if ( !v6 )
      goto LABEL_18;
  }
  HIDWORD(a1) = v7;
  a1 /= v6;
  v7 = HIDWORD(a1);
LABEL_18:
  v35 = a1;
  v36 = v7;
  v26 = (__int64 *)(v3 + 264);
  v28 = (__int64 *)(v3 + 232);
  v14 = 0;
  do
  {
    v15 = 0;
    if ( !sub_36C78((int)&v31, &v44) )
      break;
    v15 = 0;
    if ( v14 )
    {
      v16 = *(unsigned __int16 *)(v44 + 30);
      v17 = *(_DWORD *)(v44 + 32);
      v18 = *(_DWORD *)(v44 + 24);
      if ( v16 > 0xFF1E )
      {
        if ( v16 != 65311 && v16 != 65521 )
        {
LABEL_27:
          if ( v18 && (*(_BYTE *)(v44 + 28) & 0xFu) - 1 <= 1 )
          {
            v46 = 0;
            v45 = nullptr;
            v47 = 0;
            if ( dword_DE334 != -1 )
              v17 -= dword_DE334;
            v19 = v28;
            if ( a2 != 1 )
            {
              v19 = v26;
              if ( a2 != 2 )
              {
                if ( !under_debugger )
                  interr(20086);
                __debugbreak();
              }
            }
            sub_32154(v30, (void **)&v45, v19, v18);
            if ( v46 )
              v20 = v45;
            else
              v20 = &byte_B3CBE;
            v15 = (**a3)(a3, v17, v20);
            if ( v45 )
            {
              v46 = 0;
              qfree(v45);
              v47 = 0;
              v45 = nullptr;
            }
          }
        }
      }
      else if ( *(_WORD *)(v44 + 30) && v16 != 65280 )
      {
        goto LABEL_27;
      }
    }
    --v14;
  }
  while ( !v15 );
  v31 = &off_D64AC;
  if ( v38[0] )
  {
    sub_35D20((int *)v38, 0);
    qfree(v38[0]);
    v39 = 0;
    v38[0] = nullptr;
  }
  return v15;
}
// B3CBE: using guessed type char byte_B3CBE;
// D64AC: using guessed type _UNKNOWN *off_D64AC;
// DE334: using guessed type int dword_DE334;
// E0550: using guessed type char under_debugger;
