/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809B450
// Address: 0x0809B450

//----- (0809B450) --------------------------------------------------------
int *__cdecl sub_809B450(int **a1, int a2)
{
  unsigned __int16 v2; // ax
  unsigned int v3; // edx
  size_t v4; // ecx
  void *v5; // eax
  int *result; // eax
  int *v7; // eax
  int v8; // eax
  const char *v9; // edx
  signed int v10; // eax
  int *v11; // edx
  char *v12; // eax
  unsigned int v13; // eax
  char *v14; // edx
  int v15; // ecx
  size_t v16; // eax
  size_t v17; // edx
  _BYTE *v18; // eax
  char *v19; // edx
  void *v20; // eax
  unsigned int v21; // ecx
  _DWORD *v22; // eax
  _BYTE *v23; // eax
  size_t v24; // [esp+0h] [ebp-444h]
  size_t v25; // [esp+0h] [ebp-444h]
  unsigned int v26; // [esp+4h] [ebp-440h]
  size_t v27; // [esp+4h] [ebp-440h]
  size_t v28; // [esp+4h] [ebp-440h]
  unsigned int v29; // [esp+4h] [ebp-440h]
  const char *src; // [esp+8h] [ebp-43Ch]
  void *ptr; // [esp+14h] [ebp-430h] BYREF
  int v32; // [esp+18h] [ebp-42Ch]
  int v33; // [esp+1Ch] [ebp-428h]
  char v34[5]; // [esp+23h] [ebp-421h] BYREF
  char v35; // [esp+28h] [ebp-41Ch] BYREF
  char v36; // [esp+29h] [ebp-41Bh] BYREF
  void *v37; // [esp+428h] [ebp-1Ch]

  v37 = (void *)__readgsdword(0x14u);
  v2 = *(_WORD *)(a2 + 12);
  switch ( v2 )
  {
    case 1u:
      v18 = *a1;
      if ( (unsigned int)a1[2] <= 5 )
      {
        v18 = sub_80CF920((int)a1, v18, 6u, 1u);
        *a1 = (int *)v18;
      }
      a1[1] = (int *)6;
      *(_DWORD *)v18 = 1145980220;
      v18[4] = 62;
      *((_BYTE *)*a1 + 5) = 0;
      goto LABEL_9;
    case 2u:
      goto LABEL_2;
    case 3u:
      sub_805ED10(a1, "0x%a", *(_DWORD *)(a2 + 16));
      goto LABEL_9;
    case 4u:
      ptr = nullptr;
      v32 = 0;
      v33 = 0;
      v8 = *(_DWORD *)(a2 + 4);
      if ( v8 )
      {
        v9 = *(const char **)a2;
        v10 = v8 - 1;
      }
      else
      {
        v10 = 0;
        v9 = (const char *)&dword_80DDFD8;
      }
      sub_80C3A30((int)&ptr, v9, v10);
      v11 = &dword_80DDFD8;
      if ( v32 )
        v11 = (int *)ptr;
      v12 = "";
      if ( *(_BYTE *)(a2 + 20) )
        v12 = "L";
      sub_805ED10(a1, "%s\"%s\"", v12, v11);
      if ( ptr )
      {
        v32 = 0;
        sub_80CF780(ptr);
      }
      goto LABEL_9;
    case 5u:
      v13 = *(_DWORD *)(a2 + 16);
      if ( v13 )
      {
        v14 = v34;
        v15 = 24 * (v13 != (char)v13);
        do
        {
          if ( (unsigned __int8)(v13 >> v15) )
            *v14++ = v13 >> v15;
          v15 -= 8;
        }
        while ( v15 != -8 );
        *v14 = 0;
        sub_80C3A50((unsigned int)&v35, v34, 1024);
        sub_805ED10(a1, "'%s'", &v35);
      }
      else
      {
        v22 = *a1;
        if ( (unsigned int)a1[2] <= 4 )
        {
          v22 = sub_80CF920((int)a1, v22, 5u, 1u);
          *a1 = v22;
        }
        a1[1] = (int *)5;
        *v22 = 657480743;
        *((_BYTE *)*a1 + 4) = 0;
      }
      goto LABEL_9;
    case 6u:
      v7 = &dword_80DDFD8;
      if ( *(_DWORD *)(a2 + 4) )
        v7 = *(int **)a2;
      sub_805ED10(a1, "@type %s", v7);
      goto LABEL_9;
    case 7u:
      sub_80CA380((int)&v35, 1024, (__m128i *)(a2 + 24), 50);
      v16 = strlen(&v35);
      v17 = v16;
      if ( !v16 )
        goto LABEL_32;
      v21 = v16 + 1;
      v20 = *a1;
      if ( (unsigned int)a1[2] >= v21 )
        goto LABEL_43;
      v24 = v17;
      v28 = v21;
      v20 = sub_80CF920((int)a1, v20, v21, 1u);
      goto LABEL_51;
    case 8u:
      sub_805ED10(a1, "0x%llxi64", *(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 28));
      goto LABEL_9;
    default:
      if ( (unsigned __int16)(v2 - 128) <= 0x37Fu )
      {
LABEL_2:
        if ( (int **)a2 == a1 )
          goto LABEL_9;
        v3 = *(_DWORD *)(a2 + 4);
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v3 != 1 )
          {
            src = *(const char **)a2;
            v5 = *a1;
            if ( (unsigned int)a1[2] < v3 )
            {
              v25 = v3 - 1;
              v29 = *(_DWORD *)(a2 + 4);
              v5 = sub_80CF920((int)a1, v5, v3, 1u);
              v4 = v25;
              v3 = v29;
              *a1 = (int *)v5;
            }
            a1[1] = (int *)v3;
            v26 = v3;
            memmove(v5, src, v4);
            *((_BYTE *)*a1 + v26 - 1) = 0;
            goto LABEL_9;
          }
        }
        goto LABEL_32;
      }
      if ( v2 == 11868 )
      {
        v23 = *a1;
        if ( (unsigned int)a1[2] <= 3 )
        {
          v23 = sub_80CF920((int)a1, v23, 4u, 1u);
          *a1 = (int *)v23;
        }
        a1[1] = (int *)4;
        *(_WORD *)v23 = 11822;
        v23[2] = 46;
        *((_BYTE *)*a1 + 3) = 0;
        goto LABEL_9;
      }
      if ( v2 > 0xFFu )
      {
        v35 = HIBYTE(*(_WORD *)(a2 + 12));
        v19 = &v36;
      }
      else
      {
        v19 = &v35;
      }
      *v19 = v2;
      v19[1] = 0;
      v17 = strlen(&v35);
      if ( !v17 )
      {
LABEL_32:
        a1[1] = nullptr;
        goto LABEL_33;
      }
      v20 = *a1;
      v21 = v17 + 1;
      if ( (unsigned int)a1[2] < v17 + 1 )
      {
        v24 = v17;
        v28 = v17 + 1;
        v20 = sub_80CF920((int)a1, v20, v17 + 1, 1u);
LABEL_51:
        v17 = v24;
        v21 = v28;
        *a1 = (int *)v20;
      }
LABEL_43:
      a1[1] = (int *)v21;
      v27 = v17;
      memmove(v20, &v35, v17);
      *((_BYTE *)*a1 + v27) = 0;
LABEL_9:
      if ( a1[1] )
      {
        result = *a1;
        goto LABEL_11;
      }
LABEL_33:
      result = &dword_80DDFD8;
LABEL_11:
      if ( v37 != (_BYTE *)__readgsdword(0x14u) )
        sub_80D7AB0();
      return result;
  }
}
// 80DDFD8: using guessed type int dword_80DDFD8;
