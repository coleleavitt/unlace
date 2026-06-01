/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441A60
// Address: 0x00441A60

//----- (00441A60) --------------------------------------------------------
int __usercall sub_441A60@<eax>(
        __m128i a1@<xmm0>,
        _DWORD *a2,
        __int64 a3,
        unsigned int *a4,
        int *a5,
        int (__cdecl *a6)(int a1, int a2, __m128i *a3, int *a4))
{
  int v6; // ecx
  _DWORD *v8; // eax
  int v9; // edi
  const CHAR *v10; // ebx
  int *v11; // ecx
  unsigned int v12; // ebx
  unsigned __int8 *v13; // eax
  int v14; // ecx
  const char *v15; // eax
  int *v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  LPVOID v19; // esi
  int v20; // edi
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // esi
  int v24; // ecx
  unsigned int v25; // esi
  unsigned int v26; // eax
  LPVOID v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  int (__cdecl *v30)(int, int, __m128i *, int *); // eax
  void **v31; // esi
  void **v32; // eax
  int v33; // esi
  void *v34; // eax
  void *v35; // eax
  int v36; // eax
  int v37; // ecx
  int v38; // [esp-Ch] [ebp-50h]
  void *v39; // [esp-8h] [ebp-4Ch]
  int v40; // [esp-4h] [ebp-48h]
  unsigned __int8 *v41; // [esp+10h] [ebp-34h] BYREF
  int v42; // [esp+14h] [ebp-30h]
  int v43; // [esp+18h] [ebp-2Ch]
  int **v44; // [esp+1Ch] [ebp-28h]
  int v45; // [esp+20h] [ebp-24h]
  unsigned int v46; // [esp+24h] [ebp-20h]
  unsigned int v47; // [esp+28h] [ebp-1Ch]
  int v48; // [esp+2Ch] [ebp-18h] BYREF
  unsigned int v49; // [esp+30h] [ebp-14h]
  int *v50; // [esp+34h] [ebp-10h] BYREF
  int v51; // [esp+40h] [ebp-4h]
  int v52; // [esp+54h] [ebp+10h]

  v6 = dword_4B6C08;
  if ( dword_4B6C08 && *(_BYTE *)(dword_4B6C08 + 104) )
  {
    sub_402760("bfd_load_section(obj=%p, section_index=%llu).\n");
    v6 = dword_4B6C08;
  }
  if ( !a3 )
    return 1;
  if ( a3 - 1 < (unsigned __int64)(unsigned int)a2[14] )
  {
    v8 = (_DWORD *)*a2;
    v9 = 104 * a3 - 104 + a2[13];
    v45 = v9;
    if ( !v8 || v8[1] != 1 )
    {
      sub_402760("Input source is not local file.\n");
      return 1;
    }
    v10 = MultiByteStr;
    if ( v8[3] )
      v10 = (const CHAR *)v8[2];
    v11 = sub_45C5A0((int)v10, v9, a1, v10, 0);
    v50 = v11;
    if ( !v11 )
    {
      sub_402760("Cannot open file: %s.\n");
      return 1;
    }
    v44 = &v50;
    v12 = *(_DWORD *)(v9 + 8);
    v51 = 0;
    v47 = v12;
    v49 = 1;
    if ( a6 )
    {
      v41 = nullptr;
      v42 = 0;
      v43 = 0;
      LOBYTE(v51) = 1;
      if ( sub_4560B0("IDA_DWARF_MAX_ZIP_RATIO", (void **)&v41) )
      {
        v13 = (unsigned __int8 *)MultiByteStr;
        if ( v42 )
          v13 = v41;
        v49 = sub_469088(v12, v9, v13);
      }
      else
      {
        v49 = 1000;
      }
      LOBYTE(v51) = 2;
      if ( v41 )
      {
        v42 = 0;
        sub_453A20(v41);
      }
      v11 = v50;
      LOBYTE(v51) = 0;
    }
    v38 = *(_DWORD *)(v9 + 36);
    v48 = v12 / v49;
    if ( sub_408E60(v9, (int)v11, &v48, 1u, *(_DWORD *)(v9 + 32), v38, -1, -1) )
    {
      v15 = MultiByteStr;
      if ( *(_DWORD *)(v9 + 16) )
        v15 = *(const char **)(v9 + 12);
      v48 = (int)v15;
      v12 = (unsigned int)sub_453990(v12 + 1);
      if ( v12 )
      {
        v16 = a2 + 35;
        v17 = a2[37];
        v18 = a2[36] + 1;
        v49 = (unsigned int)(a2 + 35);
        v46 = v17;
        if ( v18 > v17 )
        {
          v19 = sub_453B00((int)(a2 + 35), nullptr, v18, 0x28u);
          v40 = *(_DWORD *)(v49 + 4);
          v20 = *(_DWORD *)(v49 + 8);
          v39 = *(void **)v49;
          *(_DWORD *)(v49 + 8) = v46;
          sub_43FE40((int)v19, (int)v39, v40);
          sub_453A20(*(void **)v49);
          v16 = (int *)v49;
          *(_DWORD *)(v49 + 8) = v20;
          v9 = v45;
          *v16 = (int)v19;
        }
        v21 = 5 * v16[1];
        v22 = *v16;
        *(_DWORD *)(v22 + 8 * v21) = 0;
        *(_DWORD *)(v22 + 8 * v21 + 4) = 0;
        *(_DWORD *)(v22 + 8 * v21 + 8) = 0;
        v23 = v22 + 8 * v21;
        v24 = v23 + 12;
        v49 = v23;
        *(_DWORD *)(v23 + 12) = 0;
        *(_DWORD *)(v23 + 16) = 0;
        *(_DWORD *)(v23 + 20) = 0;
        ++v16[1];
        *(_QWORD *)(v23 + 32) = a3;
        if ( v48 && (v25 = strlen((const char *)v48)) != 0 )
        {
          v26 = v25 + 1;
          if ( v25 + 1 > *(_DWORD *)(v24 + 8) )
          {
            v27 = sub_453B00(v24, *(void **)v24, v25 + 1, 1u);
            v24 = v49 + 12;
            *(_DWORD *)(v49 + 12) = v27;
            v26 = v25 + 1;
          }
          *(_DWORD *)(v24 + 4) = v26;
          sub_464310(*(_DWORD *)v24, v48, v25);
          v28 = v49;
          *(_BYTE *)(v25 + *(_DWORD *)(v49 + 12)) = 0;
        }
        else
        {
          *(_DWORD *)(v24 + 4) = 0;
          v28 = v49;
        }
        v29 = v47;
        *(_DWORD *)(v28 + 24) = v47;
        *(_DWORD *)(v28 + 28) = v12;
        *(_BYTE *)(v12 + v29) = 0;
        sub_45C810(v12, v9, (int)v50, *(_QWORD *)(v9 + 32), 0);
        v30 = sub_4418C0;
        if ( a6 )
          v30 = a6;
        v52 = v30((int)v50, v9, (__m128i *)v12, a5);
        if ( v52 )
        {
          v9 = (int)a2;
          v31 = (void **)a2[35];
          v32 = &v31[10 * a2[36]];
          if ( v31 != v32 )
          {
            while ( v31[7] != (void *)v12 )
            {
              v31 += 10;
              if ( v31 == v32 )
              {
                v33 = v52;
                goto LABEL_60;
              }
            }
            v34 = v31[3];
            LOBYTE(v51) = 5;
            if ( v34 )
            {
              v31[4] = nullptr;
              sub_453A20(v34);
              v31[3] = nullptr;
              v31[5] = nullptr;
            }
            v35 = *v31;
            LOBYTE(v51) = 6;
            if ( v35 )
            {
              v31[1] = nullptr;
              sub_453A20(v35);
              *v31 = nullptr;
              v31[2] = nullptr;
            }
            v36 = a2[36];
            LOBYTE(v51) = 0;
            v37 = a2[35] + 40 * v36 - (_DWORD)v31;
            sub_43FE40(
              (int)v31,
              (int)(v31 + 10),
              ((int)((unsigned __int64)(1717986919LL * v37) >> 32) >> 4)
            - 1
            + ((unsigned int)((unsigned __int64)(1717986919LL * v37) >> 32) >> 31));
            --a2[36];
            sub_453A20((void *)v12);
          }
          v33 = v52;
        }
        else
        {
          v33 = 0;
          *a4 = v12;
        }
        goto LABEL_60;
      }
      if ( dword_4B6C08 && *(_BYTE *)(dword_4B6C08 + 104) )
        sub_402760("Couldn't allocate %u bytes of data for section.\n");
      v14 = 8;
    }
    else
    {
      if ( dword_4B6C08 && *(_BYTE *)(dword_4B6C08 + 104) )
        sub_402760("%s section '%s' size %u bytes\n");
      v14 = 435;
    }
    v33 = 1;
    *a5 = v14;
LABEL_60:
    v51 = 8;
    sub_45C550(v12, v9, v50);
    return v33;
  }
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 104) )
      sub_402760("No such section.\n");
  }
  return -1;
}
// 4B6C08: using guessed type int dword_4B6C08;
