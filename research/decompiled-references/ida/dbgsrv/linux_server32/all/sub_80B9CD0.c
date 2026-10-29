/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B9CD0
// Address: 0x080B9CD0

//----- (080B9CD0) --------------------------------------------------------
void __cdecl sub_80B9CD0(int a1)
{
  int v1; // ebx
  unsigned int v2; // edx
  char *v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // [esp+0h] [ebp-24h]
  int v7; // [esp+0h] [ebp-24h]
  size_t n; // [esp+4h] [ebp-20h]
  size_t na; // [esp+4h] [ebp-20h]
  int v10; // [esp+8h] [ebp-1Ch]

  sub_80A1FC0(a1);
  v1 = *(_DWORD *)(a1 + 256);
  *(_OWORD *)(a1 + 496) = -1;
  *(_DWORD *)a1 = &off_811CC84;
  *(_DWORD *)(a1 + 512) = -1;
  *(_DWORD *)(a1 + 516) = -1;
  *(_DWORD *)(a1 + 520) = -1;
  v10 = v1;
  v2 = v1 + 1;
  if ( v1 == -1 )
  {
    v5 = 0x7FFFFFFF;
  }
  else
  {
    n = 1;
    v3 = *(char **)(a1 + 252);
    v4 = v1 + 1;
    if ( *(_DWORD *)(a1 + 260) < v2 )
    {
      v7 = v1 + 1;
      na = v1 + 1;
      v3 = (char *)sub_80CF920(a1 + 252, v3, v2, 1u);
      v1 = *(_DWORD *)(a1 + 256);
      *(_DWORD *)(a1 + 252) = v3;
      v4 = v7;
      n = na - v1;
    }
    v6 = v4;
    memset(&v3[v1], 0, n);
    v5 = v6;
  }
  *(_DWORD *)(a1 + 256) = v5;
  *(_BYTE *)(*(_DWORD *)(a1 + 252) + v10) = -52;
  *(_DWORD *)(a1 + 488) = 0;
  *(_OWORD *)(a1 + 456) = -1;
  *(_DWORD *)(a1 + 492) = 256;
  *(_OWORD *)(a1 + 472) = 0;
  sub_80A1BD0((_DWORD *)a1, "linux");
}
// 811CC84: using guessed type int (__cdecl *off_811CC84)(int, int);
