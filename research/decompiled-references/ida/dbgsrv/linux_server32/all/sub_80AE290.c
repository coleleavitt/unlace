/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AE290
// Address: 0x080AE290

//----- (080AE290) --------------------------------------------------------
int __cdecl sub_80AE290(unsigned int a1)
{
  _DWORD *v1; // eax
  int v2; // edi
  int v3; // eax
  char *v4; // ecx
  char *v5; // ecx
  int v6; // ecx
  bool v7; // al
  __int64 v9; // rax
  void *v10; // eax
  size_t v11; // eax
  void *v12; // edx
  __m128i v13; // xmm0
  int *v14; // [esp+8h] [ebp-298h]
  __int64 v15; // [esp+8h] [ebp-298h]
  void *v16; // [esp+8h] [ebp-298h]
  int *v17; // [esp+10h] [ebp-290h]
  void *ptr; // [esp+20h] [ebp-280h] BYREF
  unsigned __int64 v19; // [esp+24h] [ebp-27Ch]
  unsigned int v20[3]; // [esp+30h] [ebp-270h] BYREF
  unsigned __int8 v21; // [esp+3Ch] [ebp-264h]
  int (__cdecl **v22)(int, int, int); // [esp+40h] [ebp-260h] BYREF
  void *v23; // [esp+44h] [ebp-25Ch]
  int v24; // [esp+48h] [ebp-258h]
  int v25; // [esp+4Ch] [ebp-254h]
  int v26; // [esp+78h] [ebp-228h]
  __int16 v27; // [esp+7Ch] [ebp-224h]
  unsigned __int16 v28; // [esp+7Eh] [ebp-222h]
  unsigned int v29; // [esp+84h] [ebp-21Ch]
  int v30; // [esp+88h] [ebp-218h]
  unsigned __int16 v31; // [esp+8Ch] [ebp-214h]
  __int16 v32; // [esp+8Eh] [ebp-212h]
  int v33; // [esp+27Ch] [ebp-24h]
  unsigned int v34; // [esp+284h] [ebp-1Ch]

  v34 = __readgsdword(0x14u);
  v1 = *(_DWORD **)a1;
  if ( !*(_DWORD *)a1 || v1[1] != 1 )
    goto LABEL_17;
  v14 = &dword_80DDFD8;
  if ( v1[3] )
    v14 = (int *)v1[2];
  v17 = sub_80CD4D0((int)v14, 0);
  if ( v17 )
  {
    v23 = nullptr;
    v22 = &off_811C184;
    v24 = 0;
    v25 = 0;
    v2 = sub_80A7C10((int)&v22, (int)v17, 1, 1);
    if ( (_BYTE)v2 )
    {
      v3 = *(_DWORD *)(a1 + 56);
      v4 = *(char **)(a1 + 52);
      if ( *(_DWORD *)(a1 + 60) < (unsigned int)(v3 + 1) )
      {
        v4 = (char *)sub_80CF920(a1 + 52, v4, v3 + 1, 0x64u);
        *(_DWORD *)(a1 + 52) = v4;
        v3 = *(_DWORD *)(a1 + 56);
      }
      v5 = &v4[100 * v3];
      *(_DWORD *)v5 = 0;
      *((_DWORD *)v5 + 24) = 0;
      memset(
        (void *)((unsigned int)(v5 + 4) & 0xFFFFFFFC),
        0,
        4 * ((unsigned int)&v5[-((unsigned int)(v5 + 4) & 0xFFFFFFFC) + 100] >> 2));
      ptr = nullptr;
      v19 = 0;
      ++*(_DWORD *)(a1 + 56);
      if ( v29 )
      {
        v15 = (unsigned int)(18 * v30) + (unsigned __int64)v29;
        LODWORD(v9) = sub_80CD730((int)v17, v15, 0);
        if ( v15 == v9 && sub_80CD690((int)v17, v20, 4) == 4 && v20[0] > 4 )
        {
          sub_80CD730((int)v17, -4, 1);
          if ( (unsigned __int8)sub_80AD760(v17, v20, 1u, -1, 0xFFFFFFFF, -1) )
          {
            v10 = sub_80CF710(v20[0] + 1);
            if ( v10 )
            {
              v16 = v10;
              v11 = sub_80CD690((int)v17, v10, v20[0]);
              v12 = v16;
              if ( v11 == v20[0] )
              {
                *((_BYTE *)v16 + v11) = 0;
                if ( ptr )
                {
                  LODWORD(v19) = 0;
                  sub_80CF780(ptr);
                  v12 = v16;
                }
                ptr = v12;
                v13 = _mm_cvtsi32_si128(v20[0] + 1);
                v19 = _mm_unpacklo_epi32(v13, v13).m128i_u64[0];
              }
              else
              {
                sub_80CF780(v16);
              }
            }
          }
        }
      }
      v21 = 0;
      v20[0] = (unsigned int)&off_811C198;
      v20[1] = a1;
      v20[2] = (unsigned int)&ptr;
      if ( v26 == 23126 )
        v6 = v33 + 40;
      else
        v6 = v33 + v31 + 24;
      sub_80A6CF0((int)&v22, v17, v6, v28, (int)v20);
      v2 = v21;
      v7 = v27 == -21916 || v27 == 512 || v27 == -31132;
      *(_BYTE *)(a1 + 93) = v32 < 0;
      *(_BYTE *)(a1 + 92) = v7;
      if ( ptr )
      {
        LODWORD(v19) = 0;
        sub_80CF780(ptr);
      }
    }
    else
    {
      sub_8058290();
    }
    v22 = &off_811C184;
    if ( v23 )
    {
      v24 = 0;
      sub_80CF780(v23);
    }
    sub_80CD620(v17);
  }
  else
  {
LABEL_17:
    sub_8058290();
    v2 = 0;
  }
  if ( v34 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v2;
}
// 80AE57C: variable 'v9' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811C184: using guessed type int (__cdecl *off_811C184)(int, int, int);
// 811C198: using guessed type int (__cdecl *off_811C198)(int, int);
