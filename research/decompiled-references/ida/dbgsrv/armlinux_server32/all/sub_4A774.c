/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A774
// Address: 0x0004A774

//----- (0004A774) --------------------------------------------------------
int __fastcall sub_4A774(int a1, char *a2, int a3, int a4, unsigned __int8 *a5, unsigned __int8 *a6, int a7)
{
  int v9; // r1
  unsigned int v10; // r6
  void *v11; // r0
  int v12; // r7
  char *v14; // r2
  char *v15; // r0
  int v16; // r3
  int v17; // r5
  void *v18; // lr
  int v19; // r7
  _BYTE *v20; // r2
  const char *v21; // r2
  int v22; // r6
  int v23; // r9
  int v24; // r8
  unsigned int v25; // r6
  _BYTE *v26; // r0
  char *v27; // r6
  size_t v28; // r0
  size_t v29; // r9
  int v30; // r3
  void *v31; // r1
  int v33; // r2
  int v34; // r1
  int v35; // r3
  int v36; // r2
  int v37; // r3
  int v38; // r6
  int v39; // r7
  int v40; // r9
  unsigned int v41; // r6
  void *v42; // r1
  const char *v43; // r2
  double v44; // [sp+0h] [bp-8Ch]
  size_t v45; // [sp+8h] [bp-84h]
  int v47; // [sp+10h] [bp-7Ch]
  unsigned __int8 v49[8]; // [sp+20h] [bp-6Ch] BYREF
  const char *v50; // [sp+28h] [bp-64h]
  int v51; // [sp+2Ch] [bp-60h]
  int v52; // [sp+30h] [bp-5Ch]
  int v53; // [sp+34h] [bp-58h]
  unsigned __int8 v54[8]; // [sp+38h] [bp-54h] BYREF
  int v55; // [sp+40h] [bp-4Ch]
  int v56; // [sp+44h] [bp-48h]
  int v57; // [sp+48h] [bp-44h]
  int v58; // [sp+4Ch] [bp-40h]
  unsigned __int8 v59[8]; // [sp+50h] [bp-3Ch] BYREF
  const char *v60; // [sp+58h] [bp-34h]
  unsigned int v61; // [sp+5Ch] [bp-30h]
  int v62; // [sp+60h] [bp-2Ch]
  int v63; // [sp+64h] [bp-28h]
  unsigned __int8 v64[8]; // [sp+68h] [bp-24h] BYREF
  char *s; // [sp+70h] [bp-1Ch]
  int v66; // [sp+74h] [bp-18h]
  int v67; // [sp+78h] [bp-14h]
  int v68; // [sp+7Ch] [bp-10h]

  v9 = *(_DWORD *)(a1 + 40);
  v10 = *(_DWORD *)(a1 + 44);
  v11 = *(void **)(a1 + 36);
  HIDWORD(v44) = a7;
  if ( v9 + 1 > v10 )
  {
    v11 = sub_78018(a1 + 36, v11, v9 + 1, 4u);
    v9 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 36) = v11;
  }
  v12 = 0;
  *((_DWORD *)v11 + v9) = 0;
  ++*(_DWORD *)(a1 + 40);
  if ( a4 > 0 )
  {
    do
    {
      v64[0] = 2;
      s = nullptr;
      v66 = 0;
      v67 = 0;
      v68 = 0;
      sub_45B30(v64, a5);
      v16 = *(_DWORD *)(a1 + 16);
      if ( (unsigned int)(v16 + 1) <= *(_DWORD *)(a1 + 20) )
      {
        v14 = *(char **)(a1 + 12);
      }
      else
      {
        v14 = (char *)sub_78018(a1 + 12, *(void **)(a1 + 12), v16 + 1, 0x18u);
        v16 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 12) = v14;
      }
      v15 = &v14[24 * v16];
      *v15 = 2;
      *((_DWORD *)v15 + 2) = 0;
      *((_DWORD *)v15 + 3) = 0;
      *((_DWORD *)v15 + 4) = 0;
      *((_DWORD *)v15 + 5) = 0;
      sub_45B30((unsigned __int8 *)v15, v64);
      ++v12;
      a5 += 24;
      ++*(_DWORD *)(a1 + 16);
      sub_45758(v64);
    }
    while ( a4 != v12 );
  }
  v17 = sub_453AC((_DWORD *)a1, a6, a2, a3);
  if ( !v17 )
  {
    if ( a7 )
    {
      v18 = *(void **)a7;
      v19 = *(_DWORD *)(a1 + 12) + 24 * *(_DWORD *)(a1 + 16) - 24;
      if ( *(_DWORD *)(a7 + 8) <= 0xDu )
      {
        v18 = sub_78018(a7, *(void **)a7, 0xEu, 1u);
        *(_DWORD *)a7 = v18;
      }
      *(_DWORD *)(a7 + 4) = 14;
      qmemcpy(v18, "Runtime error", 13);
      v20 = *(_BYTE **)a7;
      v54[0] = 2;
      v49[0] = 2;
      v20[13] = 0;
      v50 = nullptr;
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v58 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      sub_49534(v54, v19, "line", 0);
      sub_49534(v49, v19, "file", 0);
      if ( v54[0] == 2 && v55 > 0 && v49[0] == 7 )
      {
        if ( v51 )
        {
          v43 = v50;
          if ( !*v50 )
            v43 = "<unknown>";
        }
        else
        {
          v43 = "<unknown>";
        }
        sub_34260(a7, " on %s:%d", v43, v55);
      }
      else
      {
        v59[0] = 2;
        v60 = nullptr;
        v61 = 0;
        v62 = 0;
        v63 = 0;
        sub_49534(v59, v19, "func", 0);
        if ( v59[0] == 7 && v61 > 1 )
        {
          v64[0] = 2;
          s = nullptr;
          v66 = 0;
          v67 = 0;
          v68 = 0;
          sub_49534(v64, v19, "pc", 0);
          if ( v61 )
            v21 = v60;
          else
            v21 = (const char *)&dword_8DB98;
          sub_34260(a7, " at %s+0x%a", v21, v44);
          sub_45758(v64);
        }
        sub_45758(v59);
      }
      v22 = *(_DWORD *)(HIDWORD(v44) + 4);
      if ( v22 )
      {
        v23 = v22 - 1;
        v24 = v22 + 1;
        v25 = v22 + 2;
      }
      else
      {
        v23 = 0;
        v24 = 2;
        v25 = 3;
      }
      v26 = *(_BYTE **)HIDWORD(v44);
      if ( *(_DWORD *)(HIDWORD(v44) + 8) < v25 )
      {
        v26 = sub_78018(SHIDWORD(v44), *(void **)HIDWORD(v44), v25, 1u);
        *(_DWORD *)HIDWORD(v44) = v26;
      }
      *(_DWORD *)(HIDWORD(v44) + 4) = v25;
      v26[v24] = 0;
      *(_WORD *)(*(_DWORD *)HIDWORD(v44) + v23) = *(_WORD *)": ";
      v64[0] = 2;
      s = nullptr;
      v66 = 0;
      v67 = 0;
      v68 = 0;
      sub_49534(v64, v19, "description", 0);
      if ( v64[0] == 7 )
      {
        if ( v66 )
          v27 = s;
        else
          v27 = (char *)&dword_8DB98;
        if ( v27 )
        {
          v28 = strlen(v27);
          v29 = v28;
          v30 = *(_DWORD *)(HIDWORD(v44) + 4);
          if ( v30 )
          {
            v47 = v30 - 1;
            v45 = v28 + v30 - 1;
          }
          else
          {
            v47 = 0;
            v45 = v28;
          }
          v31 = *(void **)HIDWORD(v44);
          if ( v45 + 1 > *(_DWORD *)(HIDWORD(v44) + 8) )
          {
            v31 = sub_78018(SHIDWORD(v44), v31, v45 + 1, 1u);
            *(_DWORD *)HIDWORD(v44) = v31;
          }
          *(_DWORD *)(HIDWORD(v44) + 4) = v45 + 1;
          *((_BYTE *)v31 + v45) = 0;
          memmove((void *)(*(_DWORD *)HIDWORD(v44) + v47), v27, v29);
        }
      }
      else
      {
        v38 = *(_DWORD *)(HIDWORD(v44) + 4);
        if ( v38 )
        {
          v39 = v38 - 1;
          v40 = v38 + 18;
          v41 = v38 + 19;
        }
        else
        {
          v39 = 0;
          v40 = 19;
          v41 = 20;
        }
        v42 = *(void **)HIDWORD(v44);
        if ( *(_DWORD *)(HIDWORD(v44) + 8) < v41 )
        {
          v42 = sub_78018(SHIDWORD(v44), v42, v41, 1u);
          *(_DWORD *)HIDWORD(v44) = v42;
        }
        *(_DWORD *)(HIDWORD(v44) + 4) = v41;
        *((_BYTE *)v42 + v40) = 0;
        qmemcpy((void *)(*(_DWORD *)HIDWORD(v44) + v39), "Unhandled exception", 19);
      }
      sub_45758(v64);
      sub_45758(v54);
      sub_45758(v49);
    }
    if ( a6 && !sub_46354(a6, (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 24 * *(_DWORD *)(a1 + 16) - 24)) )
    {
      v33 = *(_DWORD *)(a1 + 16);
      v34 = *(_DWORD *)(a1 + 12);
      v64[0] = 2;
      s = nullptr;
      v66 = 0;
      v67 = 0;
      v68 = 0;
      sub_45B30(v64, (unsigned __int8 *)(v34 + 24 * v33 - 24));
      v35 = *(_DWORD *)(a1 + 16);
      if ( v35 )
      {
        v36 = *(_DWORD *)(a1 + 12);
        v37 = v35 - 1;
        *(_DWORD *)(a1 + 16) = v37;
        sub_45758((unsigned __int8 *)(v36 + 24 * v37));
      }
      sub_45758(v64);
    }
  }
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 4) + 72) )
  {
    ((void (__fastcall *)(unsigned int, char *, int, int, int))callui)(
      0x18u,
      (char *)0xA,
      0,
      (int)&callui,
      SLODWORD(v44));
    *(_BYTE *)(*(_DWORD *)(a1 + 4) + 72) = 0;
  }
  return v17;
}
// 4A980: variable 'v44' is possibly undefined
// 8DB98: using guessed type int dword_8DB98;
// D4944: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
