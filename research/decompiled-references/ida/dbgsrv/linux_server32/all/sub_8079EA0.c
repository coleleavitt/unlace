/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8079EA0
// Address: 0x08079EA0

//----- (08079EA0) --------------------------------------------------------
int __cdecl sub_8079EA0(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // ebp
  unsigned int v7; // edx
  unsigned int v8; // ecx
  _DWORD *v9; // eax
  int v11; // eax
  size_t n; // [esp+18h] [ebp-34h]
  int v13; // [esp+1Ch] [ebp-30h]
  int v14; // [esp+20h] [ebp-2Ch]
  char *ptr; // [esp+24h] [ebp-28h]
  unsigned int v16; // [esp+28h] [ebp-24h]
  unsigned int v17; // [esp+28h] [ebp-24h]
  unsigned int v18; // [esp+2Ch] [ebp-20h]
  unsigned int v19; // [esp+2Ch] [ebp-20h]

  v2 = *(_DWORD *)(a1 + 144);
  v13 = *(_DWORD *)(*(_DWORD *)(a1 + 140) + 4 * v2 - 4);
  if ( v2 )
    *(_DWORD *)(a1 + 144) = v2 - 1;
  n = *(_DWORD *)(a1 + 112) - v13;
  v3 = (_DWORD *)operator new(0x10u);
  v3[3] = 0;
  v4 = v3;
  *v3 = a2;
  v5 = sub_80CF8B0(0xCu);
  *v5 = 0;
  v6 = v5;
  v5[1] = 0;
  v5[2] = 0;
  v4[1] = v5;
  if ( n )
  {
    v7 = v5[1];
    v14 = **(_DWORD **)(a1 + 108);
    v8 = v7 + n;
    if ( __CFADD__(v7, n) )
    {
      if ( v7 > 0x7FFFFFFE )
      {
        if ( v7 != 0x7FFFFFFF )
          v5[1] = 0x7FFFFFFF;
LABEL_8:
        memcpy((void *)(v7 + *v6), (const void *)(v13 + v14), n);
        goto LABEL_9;
      }
      v8 = 0x7FFFFFFF;
    }
    ptr = (char *)*v5;
    v11 = v5[1];
    if ( v6[2] < v8 )
    {
      v19 = v7;
      v17 = v8;
      ptr = (char *)sub_80CF920((int)v6, ptr, v8, 1u);
      v7 = v19;
      *v6 = ptr;
      v8 = v17;
      v11 = v6[1];
    }
    v18 = v7;
    v16 = v8;
    memset(&ptr[v11], 0, v8 - v11);
    v7 = v18;
    v6[1] = v16;
    goto LABEL_8;
  }
LABEL_9:
  v9 = (_DWORD *)(*(_DWORD *)(a1 + 188) + 4 * *(_DWORD *)(a1 + 192) - 4);
  v4[2] = *v9;
  *v9 = v4;
  sub_8077EF0(a1, n);
  return 0;
}
