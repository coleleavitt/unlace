/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78C20
// Address: 0x00078C20

//----- (00078C20) --------------------------------------------------------
int __cdecl sub_78C20(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        int (__cdecl *a6)(int a1, int a2, void *dest, _DWORD *a4))
{
  unsigned __int64 v6; // rdi
  _DWORD *v7; // ecx
  int v8; // kr00_4
  _DWORD *v9; // eax
  int v10; // edi
  char *v11; // eax
  void *v12; // esi
  const char *v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // edi
  int v16; // esi
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rax
  _DWORD *v20; // ecx
  char *v21; // eax
  int (__cdecl *v22)(int, int, void *, _DWORD *); // ecx
  int v23; // ecx
  int v24; // eax
  int v26; // [esp+0h] [ebp-3Ch]
  _BYTE *v27; // [esp+0h] [ebp-3Ch]
  int v28; // [esp+4h] [ebp-38h]
  _DWORD *v29; // [esp+8h] [ebp-34h]
  unsigned int v30; // [esp+Ch] [ebp-30h]
  int v31; // [esp+10h] [ebp-2Ch]
  int v32; // [esp+18h] [ebp-24h] BYREF
  int v33; // [esp+1Ch] [ebp-20h]
  int v34; // [esp+20h] [ebp-1Ch]
  unsigned int v35; // [esp+28h] [ebp-14h]

  v6 = __PAIR64__(a2, a3);
  v35 = __readgsdword(0x14u);
  v7 = a1;
  if ( dword_13BE90 && *(_BYTE *)(dword_13BE90 + 96) )
  {
    sub_1C900();
    v7 = a1;
    HIDWORD(v6) = a2;
  }
  if ( !v6 )
    return 1;
  v8 = HIDWORD(v6) - 1;
  if ( __PAIR64__(a3, HIDWORD(v6)) - 1 >= (unsigned int)v7[14] )
  {
    v10 = -1;
    if ( dword_13BE90 && *(_BYTE *)(dword_13BE90 + 96) )
LABEL_23:
      sub_1C900();
  }
  else
  {
    v9 = (_DWORD *)*v7;
    if ( *v7 && v9[1] == 1 )
    {
      v31 = v7[13];
      v10 = 1;
      if ( v9[3] )
        v11 = (char *)v9[2];
      else
        v11 = byte_EF875;
      v29 = open_linput(v11, 0);
      if ( v29 )
      {
        v28 = 100 * v8;
        v30 = *(_DWORD *)(v31 + 100 * v8 + 8);
        if ( !a6 )
        {
          v14 = 1;
          goto LABEL_27;
        }
        v32 = 0;
        v33 = 0;
        v34 = 0;
        if ( (unsigned __int8)qgetenv("IDA_DWARF_MAX_ZIP_RATIO", (int)&v32) )
        {
          v12 = (void *)v32;
          v13 = byte_EF875;
          if ( v33 )
            v13 = (const char *)v32;
          v14 = atoi(v13);
          if ( !v12 )
          {
LABEL_27:
            v26 = v30 / v14;
            v15 = *(_DWORD *)(v31 + v28 + 36);
            v16 = *(_DWORD *)(v31 + v28 + 32);
            if ( (v15 & v16) == 0xFFFFFFFF )
            {
              v16 = qlseek((int)v29, 0, 1);
              v15 = v17;
            }
            LODWORD(v18) = qlsize((int)v29);
            v19 = v18 - __PAIR64__(v15, v16);
            v20 = a5;
            if ( v19 < (unsigned int)v26 || ((v15 | HIDWORD(v19)) & 0x80000000) != 0 )
            {
              if ( dword_13BE90 && *(_BYTE *)(dword_13BE90 + 96) )
              {
                sub_1C900();
                v20 = a5;
              }
              *v20 = 435;
            }
            else
            {
              if ( *(_DWORD *)(v31 + v28 + 16) )
                v21 = *(char **)(v31 + v28 + 12);
              else
                v21 = byte_EF875;
              v27 = sub_79060(a1, a2, a3, v21, v30);
              if ( v27 )
              {
                qlseek((int)v29, *(_QWORD *)(v31 + v28 + 32), 0);
                v22 = sub_78B80;
                if ( a6 )
                  v22 = a6;
                v10 = v22((int)v29, v28 + v31, v27, a5);
                if ( v10 )
                {
                  v23 = 40 * a1[34];
                  if ( v23 )
                  {
                    v24 = a1[33];
                    while ( *(_BYTE **)(v24 + 28) != v27 )
                    {
                      v24 += 40;
                      v23 -= 40;
                      if ( !v23 )
                        goto LABEL_53;
                    }
                    sub_79CC0(a1 + 33, v24);
                    qfree(v27);
                  }
                }
                else
                {
                  *a4 = v27;
                  v10 = 0;
                }
                goto LABEL_53;
              }
              if ( dword_13BE90 && *(_BYTE *)(dword_13BE90 + 96) )
                sub_1C900();
              *a5 = 8;
            }
            v10 = 1;
LABEL_53:
            close_linput(v29);
            return v10;
          }
        }
        else
        {
          v14 = 1000;
          v12 = (void *)v32;
          if ( !v32 )
            goto LABEL_27;
        }
        v33 = 0;
        qfree(v12);
        v32 = 0;
        v34 = 0;
        goto LABEL_27;
      }
      goto LABEL_23;
    }
    sub_1C900();
    return 1;
  }
  return v10;
}
// 78E20: variable 'v17' is possibly undefined
// 78E33: variable 'v18' is possibly undefined
// 13BE90: using guessed type int dword_13BE90;
