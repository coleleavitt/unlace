/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58354
// Address: 0x00058354

//----- (00058354) --------------------------------------------------------
int __fastcall sub_58354(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        int *a6,
        int (__fastcall *a7)(int a1, int a2, void *a3, int *a4))
{
  _DWORD *v9; // r3
  int v11; // r6
  int v12; // r0
  int v13; // r6
  int v14; // r2
  _DWORD *v15; // r0
  int v16; // r1
  const char *v17; // r4
  unsigned int v18; // r2
  const char *v19; // r0
  char *v20; // r0
  int v21; // r1
  __int64 v22; // r0
  __int64 v23; // r0
  char *v24; // r2
  const char *v25; // r2
  _BYTE *v26; // r4
  int (__fastcall *v27)(int, int, void *, int *); // r5
  int v28; // r3
  int v29; // r1
  int v30; // r2
  int v31; // r0
  const char *v32; // r1
  char *s; // [sp+4h] [bp-54h] BYREF
  __int64 *v35; // [sp+10h] [bp-48h]
  int (__fastcall *v36)(int, int, void *, int *); // [sp+14h] [bp-44h]
  unsigned int v37; // [sp+18h] [bp-40h]
  int *v38; // [sp+1Ch] [bp-3Ch]
  __int64 v39; // [sp+20h] [bp-38h]
  int v40; // [sp+28h] [bp-30h]
  unsigned int v41; // [sp+2Ch] [bp-2Ch]
  int v42; // [sp+30h] [bp-28h]
  int v43; // [sp+34h] [bp-24h]
  int *v44; // [sp+38h] [bp-20h]
  int *v45; // [sp+3Ch] [bp-1Ch]
  void *v46; // [sp+40h] [bp-18h]
  int v47; // [sp+44h] [bp-14h]
  const char *v48; // [sp+48h] [bp-10h] BYREF
  int v49; // [sp+4Ch] [bp-Ch]
  int v50; // [sp+50h] [bp-8h]

  v9 = a1;
  v46 = &_stack_chk_guard;
  v47 = a4;
  if ( dword_DE4A8 && *(_BYTE *)(dword_DE4A8 + 96) )
  {
    sub_1BBA0((int)"bfd_load_section(obj=%p, section_index=%llu).\n", a1, a3, v47);
    v9 = a1;
  }
  v11 = 1;
  if ( a4 | a3 )
  {
    v12 = a3 - 1;
    if ( __PAIR64__(v47, a3) - 1 >= (unsigned int)v9[14] )
    {
      v11 = -1;
      if ( dword_DE4A8 && *(_BYTE *)(dword_DE4A8 + 96) )
        sub_1BBA0((int)"No such section.\n");
    }
    else
    {
      v13 = 104 * v12;
      v14 = v9[13];
      v45 = (int *)(v14 + 104 * v12);
      v15 = (_DWORD *)*v9;
      if ( *v9 && v15[1] == 1 )
      {
        v16 = v15[3];
        v42 = v14;
        v40 = (int)v9;
        if ( v16 )
          v17 = (const char *)v15[2];
        else
          v17 = &byte_B3CBE;
        v41 = 0;
        v44 = open_linput(v17, 0);
        if ( v44 )
        {
          v43 = v45[2];
          v18 = 1;
          v36 = a7;
          if ( !a7 )
            goto LABEL_26;
          v49 = 0;
          v48 = nullptr;
          v50 = 0;
          if ( qgetenv("IDA_DWARF_MAX_ZIP_RATIO", (int)&v48) )
          {
            HIDWORD(v39) = v48;
            if ( v49 )
              v19 = v48;
            else
              v19 = &byte_B3CBE;
            v18 = atoi(v19);
            v20 = (char *)HIDWORD(v39);
            if ( HIDWORD(v39) )
              goto LABEL_25;
          }
          else
          {
            v18 = 1000;
            v20 = (char *)v48;
            if ( v48 )
            {
LABEL_25:
              HIDWORD(v39) = v18;
              v49 = 0;
              qfree(v20);
              v50 = 0;
              v48 = nullptr;
              v18 = HIDWORD(v39);
            }
          }
LABEL_26:
          v21 = v45[9];
          LODWORD(v39) = v45[8];
          HIDWORD(v39) = v21;
          v37 = v43 / v18;
          if ( ((unsigned int)v39 & v21) == 0xFFFFFFFF )
            v39 = qlseek((int)v44, 0, 1);
          LODWORD(v22) = qlsize(v44);
          v35 = (__int64 *)(v45 + 8);
          v38 = a6;
          v23 = v22 - v39;
          if ( v23 < __SPAIR64__(v41, v37) || (HIDWORD(v39) | HIDWORD(v23)) < 0 )
          {
            if ( dword_DE4A8 && *(_BYTE *)(dword_DE4A8 + 96) )
            {
              if ( v45[4] )
                v25 = *(const char **)(v42 + v13 + 12);
              else
                v25 = &byte_B3CBE;
              if ( v36 )
                v32 = "Seemingly wrong";
              else
                v32 = "Wrong";
              sub_1BBA0((int)"%s section '%s' size %u bytes\n", v32, v25, v43);
            }
            v31 = 435;
          }
          else
          {
            if ( v45[4] )
              v24 = *(char **)(v42 + v13 + 12);
            else
              v24 = &byte_B3CBE;
            v26 = sub_58664((_DWORD *)v40, (int)&s, a3, v47, v24, v43);
            if ( v26 )
            {
              qlseek((int)v44, *v35, 0);
              v27 = v36;
              if ( !v36 )
                v27 = sub_582F0;
              v11 = v27((int)v44, (int)v45, v26, v38);
              if ( v11 )
              {
                v28 = *(_DWORD *)(v40 + 144);
                if ( 40 * v28 )
                {
                  v29 = *(_DWORD *)(v40 + 140);
                  v30 = 40 * v28;
                  while ( *(_BYTE **)(v29 + 28) != v26 )
                  {
                    v30 -= 40;
                    v29 += 40;
                    if ( !v30 )
                      goto LABEL_58;
                  }
                  sub_58F10((_DWORD *)(v40 + 140), v29);
                  qfree(v26);
                }
              }
              else
              {
                *a5 = v26;
                v11 = 0;
              }
              goto LABEL_58;
            }
            if ( dword_DE4A8 && *(_BYTE *)(dword_DE4A8 + 96) )
              sub_1BBA0((int)"Couldn't allocate %u bytes of data for section.\n", v43);
            v31 = 8;
          }
          *v38 = v31;
          v11 = 1;
LABEL_58:
          close_linput(v44);
          return v11;
        }
        sub_1BBA0((int)"Cannot open file: %s.\n", v17);
        return 1;
      }
      else
      {
        sub_1BBA0((int)"Input source is not local file.\n");
        return 1;
      }
    }
  }
  return v11;
}
// 584CA: variable 'v22' is possibly undefined
// B3CBE: using guessed type char byte_B3CBE;
// DE4A8: using guessed type int dword_DE4A8;
