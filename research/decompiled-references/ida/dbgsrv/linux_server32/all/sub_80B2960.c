/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B2960
// Address: 0x080B2960

//----- (080B2960) --------------------------------------------------------
unsigned int __cdecl sub_80B2960(int a1, int a2, unsigned int *a3)
{
  void *v3; // esi
  const char *v4; // edi
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // esi
  char *v9; // eax
  char *v10; // eax
  int v11; // edi
  int v12; // esi
  char *v13; // ecx
  void *v14; // eax
  void *v15; // eax
  unsigned int result; // eax
  size_t v17; // eax
  size_t v18; // esi
  unsigned int v19; // edx
  int *v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  _BYTE *v23; // edx
  char *v24; // esi
  unsigned __int8 v25; // dl
  __int64 v26; // rax
  int *v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // edx
  char *v30; // ecx
  _DWORD *v31; // edx
  char *v32; // eax
  int v33; // [esp-Ch] [ebp-84h]
  int *v34; // [esp-8h] [ebp-80h]
  int v35; // [esp-4h] [ebp-7Ch]
  char **v36; // [esp+0h] [ebp-78h]
  int *v37; // [esp+4h] [ebp-74h]
  __int64 v38; // [esp+8h] [ebp-70h]
  const char *v39; // [esp+10h] [ebp-68h]
  signed int v40; // [esp+14h] [ebp-64h]
  int v41; // [esp+1Ch] [ebp-5Ch]
  int v42; // [esp+24h] [ebp-54h]
  int v43; // [esp+28h] [ebp-50h]
  char *v44; // [esp+2Ch] [ebp-4Ch]
  int v45; // [esp+2Ch] [ebp-4Ch]
  int v46; // [esp+30h] [ebp-48h]
  int v47; // [esp+34h] [ebp-44h]
  int v48; // [esp+38h] [ebp-40h]
  unsigned int v49; // [esp+3Ch] [ebp-3Ch] BYREF
  void *v50; // [esp+40h] [ebp-38h] BYREF
  int v51; // [esp+44h] [ebp-34h]
  int v52; // [esp+48h] [ebp-30h]
  void *ptr; // [esp+50h] [ebp-28h] BYREF
  int v54; // [esp+54h] [ebp-24h]
  int v55; // [esp+58h] [ebp-20h]
  unsigned int v56; // [esp+5Ch] [ebp-1Ch]
  int v57; // [esp+60h] [ebp-18h]

  v56 = __readgsdword(0x14u);
  v50 = nullptr;
  v51 = 0;
  v52 = 0;
  v40 = sub_80CDEC0(a3, a3[1]);
  sub_80B2480((int)&v50, v40);
  v3 = v50;
  if ( v40 > 0 )
  {
    v41 = 0;
    v44 = (char *)v50 + 4;
    v39 = "update_lowcnd(ea=%a cnd=%s)\n";
    v42 = 0;
    v37 = &dword_80DDFD8;
    do
    {
      v44[244] = 0;
      v42 += sub_80CE010(a3, a3[1]) - 1;
      *((_DWORD *)v44 - 1) = v42;
      v4 = (const char *)*a3;
      v5 = *a3;
      do
      {
        if ( v5 >= a3[1] )
          goto LABEL_6;
        ++v5;
      }
      while ( *(_BYTE *)(v5 - 1) );
      *a3 = v5;
      if ( !v4 || (v17 = strlen(v4), (v18 = v17) == 0) )
      {
LABEL_6:
        *((_DWORD *)v44 + 1) = 0;
        if ( !*(_BYTE *)(a1 + 96) )
          goto LABEL_7;
        goto LABEL_43;
      }
      v19 = v17 + 1;
      v20 = *(int **)v44;
      if ( *((_DWORD *)v44 + 2) < v19 )
      {
        LODWORD(v38) = v19;
        v20 = (int *)sub_80CF920((int)v44, v20, v19, 1u);
        v19 = v38;
        *(_DWORD *)v44 = v20;
      }
      *((_DWORD *)v44 + 1) = v19;
      memmove(v20, v4, v18);
      *(_BYTE *)(*(_DWORD *)v44 + v18) = 0;
      if ( *((_DWORD *)v44 + 1) > 1u )
      {
        *((_DWORD *)v44 + 62) = 0;
        v21 = sub_80CDEC0(a3, a3[1]);
        *((_DWORD *)v44 + 3) = v21;
        if ( v21 != 4 )
          *((_DWORD *)v44 + 62) = sub_80CDEC0(a3, a3[1]);
        v22 = a3[1];
        v23 = (_BYTE *)*a3;
        if ( *a3 < v22 )
        {
          v24 = v23 + 1;
          v25 = *v23;
          *a3 = (unsigned int)v24;
          if ( v25 )
          {
            v28 = v25;
            v29 = *((_DWORD *)v44 + 5);
            if ( v29 < v28 )
            {
              v32 = *((char **)v44 + 4);
              if ( *((_DWORD *)v44 + 6) < v28 )
              {
                v32 = (char *)sub_80CF920((int)(v44 + 16), v32, v28, 1u);
                v29 = *((_DWORD *)v44 + 5);
                *((_DWORD *)v44 + 4) = v32;
              }
              memset(&v32[v29], 0, v28 - v29);
              *((_DWORD *)v44 + 5) = v28;
              v22 = a3[1];
              v24 = (char *)*a3;
            }
            else if ( v28 != v29 )
            {
              *((_DWORD *)v44 + 5) = v28;
              v22 = a3[1];
              v24 = (char *)*a3;
            }
            v30 = &v24[v28];
            if ( !__CFADD__(v28, v24) && v22 >= (unsigned int)v30 )
            {
              v31 = *((_DWORD **)v44 + 4);
              *a3 = (unsigned int)v30;
              if ( v28 >= 4 )
              {
                *v31 = *(_DWORD *)v24;
                *(_DWORD *)((char *)v31 + v28 - 4) = *(_DWORD *)&v24[v28 - 4];
                qmemcpy(
                  (void *)((unsigned int)(v31 + 1) & 0xFFFFFFFC),
                  (const void *)(v24 - ((char *)v31 - ((unsigned int)(v31 + 1) & 0xFFFFFFFC))),
                  4 * (((unsigned int)v31 + v28 - ((unsigned int)(v31 + 1) & 0xFFFFFFFC)) >> 2));
                v22 = a3[1];
              }
              else
              {
                *(_BYTE *)v31 = *v24;
                if ( (v28 & 2) != 0 )
                  *(_WORD *)((char *)v31 + v28 - 2) = *(_WORD *)&v24[v28 - 2];
                v22 = a3[1];
              }
            }
          }
        }
        LODWORD(v26) = sub_80CE010(a3, v22);
        v38 = v26 - 1;
        *((_DWORD *)v44 + 9) = v26 - 1;
        if ( (_DWORD)v26 )
          sub_80B9AD0((int)(v44 + 28), a3);
      }
      if ( *(_BYTE *)(a1 + 96) )
      {
        if ( *((_DWORD *)v44 + 1) )
        {
          v27 = *(int **)v44;
LABEL_42:
          v34 = v27;
          v33 = v42;
          sub_8058290();
          goto LABEL_7;
        }
LABEL_43:
        v27 = &dword_80DDFD8;
        goto LABEL_42;
      }
LABEL_7:
      ++v41;
      v44 += 256;
    }
    while ( v40 != v41 );
    v3 = v50;
  }
  ptr = nullptr;
  v54 = 0;
  v6 = *(_DWORD *)(a1 + 244);
  v55 = 0;
  v7 = (*(int (__stdcall **)(int, unsigned int *, void *, signed int, void **, int, int *, int, int, int *, _DWORD, _DWORD, const char *, signed int, int, int, unsigned int *, int, __int64 *, char *, int, int, int))(*(_DWORD *)v6 + 176))(
         v6,
         &v49,
         v3,
         v40,
         &ptr,
         v33,
         v34,
         v35,
         a2,
         v37,
         v38,
         HIDWORD(v38),
         v39,
         v40,
         a1,
         v41,
         a3,
         v42,
         &qword_811CFF4,
         v44,
         v46,
         v47,
         v48);
  v8 = v7;
  if ( *(_BYTE *)(a1 + 96) )
  {
    v57 = v7;
    v56 = v43 - 276398;
    sub_8058290();
  }
  sub_80A6580(v36, v8);
  sub_80A6580(v36, v49);
  if ( v8 != 1 )
  {
    v9 = (char *)(v43 - 258076);
    if ( v54 )
      v9 = (char *)ptr;
    sub_80A6780(v36, v9);
  }
  if ( ptr )
  {
    v54 = 0;
    sub_80CF780(ptr);
  }
  v10 = (char *)v50;
  if ( v50 )
  {
    v11 = v51;
    if ( v51 )
    {
      v12 = 0;
      do
      {
        v13 = &v10[256 * v12];
        v14 = *((void **)v13 + 5);
        v45 = (int)v13;
        if ( v14 )
        {
          *((_DWORD *)v13 + 6) = 0;
          sub_80CF780(v14);
        }
        v15 = *(void **)(v45 + 4);
        if ( v15 )
        {
          *(_DWORD *)(v45 + 8) = 0;
          sub_80CF780(v15);
        }
        ++v12;
        v10 = (char *)v50;
      }
      while ( v11 != v12 );
    }
    v51 = 0;
    sub_80CF780(v10);
  }
  result = v56 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80B2D69: conditional instruction was optimized away because edi.4 is in (1..3)
// 80B2AB1: variable 'v33' is possibly undefined
// 80B2AB1: variable 'v34' is possibly undefined
// 80B2AB1: variable 'v35' is possibly undefined
// 80B2AB1: variable 'v37' is possibly undefined
// 80B2AB1: variable 'v38' is possibly undefined
// 80B2AB1: variable 'v39' is possibly undefined
// 80B2AB1: variable 'v41' is possibly undefined
// 80B2AB1: variable 'v42' is possibly undefined
// 80B2AB1: variable 'v44' is possibly undefined
// 80B2AB1: variable 'v46' is possibly undefined
// 80B2AB1: variable 'v47' is possibly undefined
// 80B2AB1: variable 'v48' is possibly undefined
// 80B2ACF: variable 'v43' is possibly undefined
// 80B2AE0: variable 'v36' is possibly undefined
// 80B2CA8: variable 'v26' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811CFF4: using guessed type __int64 qword_811CFF4;
