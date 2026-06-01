/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B9680
// Address: 0x080B9680

//----- (080B9680) --------------------------------------------------------
unsigned int __cdecl sub_80B9680(int a1, _DWORD *a2, char a3)
{
  size_t v3; // eax
  unsigned int i; // esi
  unsigned int *v5; // edi
  size_t v6; // eax
  size_t v7; // eax
  size_t v8; // eax
  size_t v9; // edx
  unsigned int v10; // edi
  unsigned int v11; // ecx
  unsigned int result; // eax
  void *src; // [esp+10h] [ebp-40h]
  char *ptr; // [esp+14h] [ebp-3Ch]
  int v15; // [esp+18h] [ebp-38h]
  unsigned int v16; // [esp+1Ch] [ebp-34h]
  unsigned int v17; // [esp+1Ch] [ebp-34h]
  size_t na; // [esp+20h] [ebp-30h]
  size_t n; // [esp+20h] [ebp-30h]
  _BYTE v20[5]; // [esp+2Bh] [ebp-25h] BYREF
  _DWORD v21[8]; // [esp+30h] [ebp-20h] BYREF

  v21[0] = __readgsdword(0x14u);
  v3 = sub_80CDC90(v20, (unsigned int)v21, a2[1]) - v20;
  if ( v3 )
    sub_80B7DF0(v3, (char **)a1, v20);
  for ( i = 0; i < a2[1]; ++i )
  {
    v5 = (unsigned int *)(*a2 + 20 * i);
    v6 = sub_80CDC90(v20, (unsigned int)v21, *v5) - v20;
    if ( v6 )
      sub_80B7DF0(v6, (char **)a1, v20);
    v7 = sub_80CDC90(v20, (unsigned int)v21, v5[3]) - v20;
    if ( v7 )
      sub_80B7DF0(v7, (char **)a1, v20);
    if ( !a3 )
      continue;
    v8 = sub_80CDC90(v20, (unsigned int)v21, v5[1]) - v20;
    if ( v8 )
      sub_80B7DF0(v8, (char **)a1, v20);
    v9 = v5[3];
    if ( !v9 )
      continue;
    src = (void *)v5[2];
    v10 = *(_DWORD *)(a1 + 4);
    v11 = v10 + v9;
    if ( __CFADD__(v10, v9) )
    {
      if ( v10 > 0x7FFFFFFE )
      {
        if ( v10 != 0x7FFFFFFF )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_23;
      }
      v11 = 0x7FFFFFFF;
    }
    v15 = *(_DWORD *)(a1 + 4);
    ptr = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v11 )
    {
      n = v9;
      v17 = v11;
      ptr = (char *)sub_80CF920(a1, ptr, v11, 1u);
      *(_DWORD *)a1 = ptr;
      v15 = *(_DWORD *)(a1 + 4);
      v9 = n;
      v11 = v17;
    }
    na = v9;
    v16 = v11;
    memset(&ptr[v15], 0, v11 - v15);
    v9 = na;
    *(_DWORD *)(a1 + 4) = v16;
LABEL_23:
    memcpy((void *)(*(_DWORD *)a1 + v10), src, v9);
  }
  result = v21[0] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
