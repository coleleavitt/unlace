/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_661E0
// Address: 0x000661E0

//----- (000661E0) --------------------------------------------------------
void __fastcall sub_661E0(int a1)
{
  int v2; // r0
  unsigned int v3; // r6
  unsigned int v4; // r6
  unsigned int v5; // r6
  int v6; // r0
  size_t v7; // r0
  void *v8; // r3
  size_t v9; // r10
  int v10; // r0
  void *v11; // r3
  __suseconds_t v12; // r0
  int v13; // r1
  const char *v14; // r2
  const char *v15; // r1
  int *v16; // r1
  const char *v17; // r0
  const void *v18; // r9
  const void *v19; // r9
  void *v20; // r0
  const void *v21; // r9
  void *v22; // r0
  size_t v23; // r11
  int v24; // r11
  int v25; // r0
  unsigned int v26; // r9
  size_t v27; // r10
  int v28; // r11
  int v29; // r9
  int v30; // r11
  unsigned int v31; // r10
  _BYTE *v32; // r1
  const char *v33; // r6
  int v34; // r7
  const char *v35; // r0
  void *ptr; // [sp+Ch] [bp-478h]
  void *ptra; // [sp+Ch] [bp-478h]
  void *ptrb; // [sp+Ch] [bp-478h]
  int v39; // [sp+14h] [bp-470h] BYREF
  __int64 v40; // [sp+18h] [bp-46Ch] BYREF
  unsigned int v41; // [sp+20h] [bp-464h]
  char *v42; // [sp+24h] [bp-460h]
  int v43; // [sp+28h] [bp-45Ch]
  int v44; // [sp+2Ch] [bp-458h]
  int v45; // [sp+30h] [bp-454h]
  void *v46; // [sp+34h] [bp-450h] BYREF
  unsigned int v47; // [sp+38h] [bp-44Ch]
  int v48; // [sp+3Ch] [bp-448h]
  __int16 v49; // [sp+40h] [bp-444h]
  void *v50; // [sp+44h] [bp-440h] BYREF
  unsigned int v51; // [sp+48h] [bp-43Ch]
  unsigned int v52; // [sp+4Ch] [bp-438h]
  void *v53; // [sp+50h] [bp-434h] BYREF
  unsigned int v54; // [sp+54h] [bp-430h]
  unsigned int v55; // [sp+58h] [bp-42Ch]
  char v56[28]; // [sp+5Ch] [bp-428h] BYREF
  char v57[1028]; // [sp+78h] [bp-40Ch] BYREF

  v2 = sub_66694(*(unsigned __int8 *)(a1 + 58));
  v3 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 40) = v2;
  v45 = 44;
  v46 = nullptr;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = nullptr;
  v51 = 0;
  v52 = 0;
  v53 = nullptr;
  v54 = 0;
  v55 = 0;
  if ( v3 > 1 )
  {
    v18 = *(const void **)(a1 + 4);
    v46 = sub_78018((int)&v46, nullptr, v3, 1u);
    v47 = v3;
    memmove(v46, v18, v3 - 1);
    *((_BYTE *)v46 + v3 - 1) = 0;
  }
  v4 = *(_DWORD *)(a1 + 20);
  v49 = *(_WORD *)(a1 + 56);
  if ( v4 > 1 )
  {
    v19 = *(const void **)(a1 + 16);
    v20 = v50;
    if ( v4 > v52 )
    {
      v20 = sub_78018((int)&v50, v50, v4, 1u);
      v50 = v20;
    }
    v51 = v4;
    memmove(v20, v19, v4 - 1);
    *((_BYTE *)v50 + v4 - 1) = 0;
  }
  else
  {
    v51 = 0;
  }
  v5 = *(_DWORD *)(a1 + 32);
  if ( v5 > 1 )
  {
    v21 = *(const void **)(a1 + 28);
    v22 = v53;
    if ( v5 > v55 )
    {
      v22 = sub_78018((int)&v53, v53, *(_DWORD *)(a1 + 32), 1u);
      v53 = v22;
    }
    v54 = v5;
    memmove(v22, v21, v5 - 1);
    *((_BYTE *)v53 + v5 - 1) = 0;
  }
  else
  {
    v54 = 0;
  }
  if ( !sub_666C8(*(_DWORD *)(a1 + 40)) )
  {
    if ( *(_DWORD *)(a1 + 8) <= 1u )
      v33 = "0.0.0.0";
    else
      v33 = *(const char **)(a1 + 4);
    v34 = *(unsigned __int16 *)(a1 + 56);
    v35 = (const char *)sub_666B0(*(_DWORD *)(a1 + 40));
    sub_695E4("%s:%u: %s\n", v33, v34, v35);
    sub_66704((_DWORD *)(a1 + 40));
    exit(1);
  }
  v6 = *(_DWORD *)(a1 + 40);
  v40 = 0;
  v41 = 0;
  v42 = nullptr;
  v43 = 0;
  v44 = 0;
  sub_666E8(v6);
  if ( sub_78204(v57, 2) )
  {
    v7 = strlen(v57);
    v8 = (void *)v40;
    v9 = v7;
    if ( v7 )
    {
      v23 = v7 + 1;
      if ( v7 + 1 > v41 )
      {
        v8 = sub_78018((int)&v40, (void *)v40, v7 + 1, 1u);
        LODWORD(v40) = v8;
      }
      HIDWORD(v40) = v23;
      memmove(v8, v57, v9);
      *(_BYTE *)(v40 + v9) = 0;
      v24 = HIDWORD(v40);
      v8 = (void *)v40;
      if ( v43 )
        v17 = v42;
      else
        v17 = (const char *)&dword_8DB98;
      if ( HIDWORD(v40) )
      {
        ptra = (void *)v40;
        v25 = strcmp(v17, (const char *)v40);
        v11 = ptra;
        if ( !v25 )
        {
LABEL_12:
          if ( v11 )
          {
            HIDWORD(v40) = 0;
            sub_77F70(v11);
            LODWORD(v40) = 0;
            v41 = 0;
          }
          goto LABEL_14;
        }
        v26 = v24 + 8;
        v27 = v24 - 1;
        v28 = v24 + 7;
        if ( v26 <= v41 )
          goto LABEL_51;
        goto LABEL_62;
      }
    }
    else
    {
      HIDWORD(v40) = 0;
      v17 = (const char *)&dword_8DB98;
    }
    ptr = v8;
    v10 = strcmp(v17, (const char *)&dword_8DB98);
    v11 = ptr;
    if ( !v10 )
      goto LABEL_12;
    if ( v41 > 8 )
    {
      HIDWORD(v40) = 9;
      *((_BYTE *)ptr + 8) = 0;
LABEL_55:
      qmemcpy(v11, " (my ip ", 8);
      v29 = HIDWORD(v40);
      v30 = HIDWORD(v40) - 1;
      v31 = HIDWORD(v40) + 1;
      if ( !HIDWORD(v40) )
      {
        v31 = 2;
        v29 = 1;
        v30 = 0;
      }
      v32 = (_BYTE *)v40;
      if ( v31 > v41 )
      {
        v32 = sub_78018((int)&v40, (void *)v40, v31, 1u);
        LODWORD(v40) = v32;
      }
      HIDWORD(v40) = v31;
      v32[v29] = 0;
      *(_BYTE *)(v40 + v30) = 41;
      goto LABEL_14;
    }
    v26 = 9;
    v28 = 8;
    v27 = 0;
LABEL_62:
    v11 = sub_78018((int)&v40, v11, v26, 1u);
    LODWORD(v40) = v11;
LABEL_51:
    HIDWORD(v40) = v26;
    *((_BYTE *)v11 + v28) = 0;
    v11 = (void *)v40;
    if ( v27 )
    {
      ptrb = (void *)v40;
      memmove((void *)(v40 + 8), (const void *)v40, v27);
      v11 = ptrb;
    }
    goto LABEL_55;
  }
LABEL_14:
  v12 = sub_78F48();
  sub_66E0C(v56, 25, v12, v13, 0);
  if ( v43 )
    v14 = v42;
  else
    v14 = (const char *)&dword_8DB98;
  if ( HIDWORD(v40) )
    v15 = (const char *)v40;
  else
    v15 = (const char *)&dword_8DB98;
  sub_695E4("%s Listening on %s:%u%s...\n", v56, v14, *(unsigned __int16 *)(a1 + 56), v15);
  while ( *(_DWORD *)(a1 + 40) )
  {
    v39 = sub_66694(*(unsigned __int8 *)(a1 + 58));
    if ( sub_666D0(v39) && (v16 = (int *)(*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 12))(a1, v39)) != nullptr )
    {
      sub_66130(a1, v16);
    }
    else
    {
      sub_66704(&v39);
      if ( !*(_DWORD *)(a1 + 40) )
        break;
      sub_695E4("Rejected client\n");
    }
  }
  if ( v42 )
  {
    v43 = 0;
    sub_77F70(v42);
  }
  if ( (_DWORD)v40 )
  {
    HIDWORD(v40) = 0;
    sub_77F70((void *)v40);
  }
  if ( v53 )
  {
    v54 = 0;
    sub_77F70(v53);
  }
  if ( v50 )
  {
    v51 = 0;
    sub_77F70(v50);
  }
  if ( v46 )
  {
    v47 = 0;
    sub_77F70(v46);
  }
}
// 6629E: conditional instruction was optimized away because %0x28.4==0
// 662E2: variable 'v13' is possibly undefined
// 66694: using guessed type int __fastcall sub_66694(_DWORD);
// 8DB98: using guessed type int dword_8DB98;
