/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A2720
// Address: 0x080A2720

//----- (080A2720) --------------------------------------------------------
void __cdecl sub_80A2720(int a1, unsigned int a2, int a3)
{
  _DWORD *v3; // ebp
  unsigned int v4; // edx
  int v5; // edi
  _DWORD *v6; // ecx
  size_t v7; // eax
  _DWORD *v8; // esi
  void *v9; // eax
  void *v10; // eax
  size_t n; // [esp+0h] [ebp-20h]
  int v12; // [esp+24h] [ebp+4h]
  int v13; // [esp+28h] [ebp+8h]

  v3 = (_DWORD *)a1;
  v4 = a2;
  if ( *(_DWORD *)(a1 + 8) < a2 )
  {
    v10 = sub_80CF920(a1, *(void **)a1, a2, 0x10u);
    v4 = a2;
    *(_DWORD *)a1 = v10;
  }
  if ( *(_DWORD *)(a1 + 4) < v4 )
  {
    v5 = *(_DWORD *)(a1 + 4);
    v6 = (_DWORD *)a1;
    do
    {
      v8 = (_DWORD *)(*v6 + 16 * v5);
      *v8 = -2;
      v8[1] = 0;
      v8[2] = 0;
      v8[3] = 0;
      if ( v8 != (_DWORD *)a3 )
      {
        if ( *(int *)a3 >= -1 )
        {
          v8[1] = 0;
          v8[2] = 0;
          v8[3] = 0;
          v7 = *(_DWORD *)(a3 + 8);
          n = v7;
          if ( v7 )
          {
            v13 = v4;
            v12 = (int)v6;
            v9 = sub_80CF8B0(v7);
            v8[1] = v9;
            v8[3] = n;
            memcpy(v9, *(const void **)(a3 + 4), n);
            v4 = v13;
            v8[2] = n;
            v6 = (_DWORD *)v12;
          }
        }
        else
        {
          *(_QWORD *)(v8 + 1) = *(_QWORD *)(a3 + 4);
        }
        *v8 = *(_DWORD *)a3;
      }
      ++v5;
    }
    while ( v4 != v5 );
    v3 = v6;
  }
  v3[1] = v4;
}
