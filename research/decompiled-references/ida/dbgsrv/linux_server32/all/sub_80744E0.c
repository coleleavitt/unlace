/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80744E0
// Address: 0x080744E0

//----- (080744E0) --------------------------------------------------------
int __cdecl sub_80744E0(int a1, int a2)
{
  int v2; // ecx
  char *v3; // eax
  size_t v4; // eax
  void *v5; // eax
  size_t n; // [esp+0h] [ebp-34h]
  size_t v8; // [esp+4h] [ebp-30h]
  char *s; // [esp+8h] [ebp-2Ch]
  const char *v10; // [esp+Ch] [ebp-28h] BYREF
  int v11; // [esp+10h] [ebp-24h]
  int v12; // [esp+14h] [ebp-20h]
  unsigned int v13; // [esp+18h] [ebp-1Ch]

  v13 = __readgsdword(0x14u);
  v10 = nullptr;
  v2 = *(_DWORD *)(a1 + 8);
  v11 = 0;
  v3 = (char *)&dword_80DDFD8;
  v12 = 0;
  if ( v2 )
    v3 = *(char **)(a1 + 4);
  sub_807C440(v3, (void **)&v10, 3);
  s = (char *)v10;
  if ( !v11 )
  {
    *(_BYTE *)a2 = 7;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    goto LABEL_8;
  }
  if ( v10 )
  {
    v4 = strlen(v10);
    *(_BYTE *)a2 = 7;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    if ( !v4 )
    {
LABEL_9:
      v11 = 0;
      sub_80CF780(s);
      goto LABEL_10;
    }
    n = v4;
    v8 = v4 + 1;
    v5 = sub_80CF920(a2 + 4, nullptr, v4 + 1, 1u);
    *(_DWORD *)(a2 + 4) = v5;
    *(_DWORD *)(a2 + 8) = v8;
    memmove(v5, s, n);
    *(_BYTE *)(*(_DWORD *)(a2 + 4) + n) = 0;
    s = (char *)v10;
LABEL_8:
    if ( !s )
      goto LABEL_10;
    goto LABEL_9;
  }
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
LABEL_10:
  if ( v13 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
