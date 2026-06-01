/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8073800
// Address: 0x08073800

//----- (08073800) --------------------------------------------------------
int __cdecl sub_8073800(int a1, int a2)
{
  int v2; // ecx
  const char *v3; // eax
  void *v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // eax
  int v8; // ecx
  size_t v9; // eax
  void *v10; // eax
  char *v11; // eax
  int v12; // [esp+0h] [ebp-50h]
  unsigned int v13; // [esp+4h] [ebp-4Ch]
  unsigned int v14; // [esp+8h] [ebp-48h]
  size_t n; // [esp+Ch] [ebp-44h]
  size_t na; // [esp+Ch] [ebp-44h]
  int v17; // [esp+10h] [ebp-40h]
  char *s; // [esp+14h] [ebp-3Ch]
  void *src; // [esp+18h] [ebp-38h] BYREF
  int v20; // [esp+1Ch] [ebp-34h]
  int v21; // [esp+20h] [ebp-30h]
  void *ptr; // [esp+28h] [ebp-28h] BYREF
  int v23; // [esp+2Ch] [ebp-24h]
  unsigned int v24; // [esp+30h] [ebp-20h]
  unsigned int v25; // [esp+34h] [ebp-1Ch]

  v25 = __readgsdword(0x14u);
  src = nullptr;
  v2 = *(_DWORD *)(a1 + 8);
  v20 = 0;
  v21 = 0;
  v3 = (const char *)&dword_80DDFD8;
  if ( v2 )
    v3 = *(const char **)(a1 + 4);
  if ( !(unsigned __int8)sub_807DE60(a2, -1, v3, (__m128i **)&src) )
  {
    ptr = nullptr;
    v23 = 0;
    v24 = 0;
    v5 = sub_80CF920((int)&ptr, nullptr, 0xEu, 1u);
    v23 = 14;
    ptr = v5;
    qmemcpy(v5, "IDC_FAILURE: ", 13);
    v6 = v20;
    s = (char *)ptr;
    *((_BYTE *)ptr + 13) = 0;
    if ( v6 )
    {
      v7 = v6 - 1;
      n = v6 - 1;
      if ( v6 != 1 )
      {
        v8 = v23;
        v14 = v6 - 1;
        if ( v23 )
        {
          v8 = v23 - 1;
          v14 = v23 - 1 + v7;
          v6 = v23 + v7;
        }
        if ( v24 < v6 )
        {
          v12 = v8;
          v13 = v6;
          v11 = (char *)sub_80CF920((int)&ptr, s, v6, 1u);
          v8 = v12;
          v6 = v13;
          s = v11;
          ptr = v11;
        }
        v23 = v6;
        s[v14] = 0;
        memcpy((char *)ptr + v8, src, n);
        s = (char *)ptr;
      }
    }
    if ( v23 )
    {
      if ( !s )
      {
        *(_BYTE *)a2 = 7;
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 12) = 0;
        goto LABEL_4;
      }
      v9 = strlen(s);
      *(_BYTE *)a2 = 7;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 12) = 0;
      if ( !v9 )
      {
LABEL_20:
        v23 = 0;
        sub_80CF780(s);
        goto LABEL_4;
      }
      na = v9;
      v17 = v9 + 1;
      v10 = sub_80CF920(a2 + 4, nullptr, v9 + 1, 1u);
      *(_DWORD *)(a2 + 4) = v10;
      *(_DWORD *)(a2 + 8) = v17;
      memmove(v10, s, na);
      *(_BYTE *)(*(_DWORD *)(a2 + 4) + na) = 0;
      s = (char *)ptr;
    }
    else
    {
      *(_BYTE *)a2 = 7;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 12) = 0;
    }
    if ( !s )
      goto LABEL_4;
    goto LABEL_20;
  }
LABEL_4:
  if ( src )
  {
    v20 = 0;
    sub_80CF780(src);
  }
  if ( v25 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
