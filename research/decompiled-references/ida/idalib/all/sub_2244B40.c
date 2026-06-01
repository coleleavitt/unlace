void __fastcall sub_2244B40(__int64 a1, int a2, int a3)
{
  unsigned int v3; // edx
  unsigned __int64 v4; // rbp
  _QWORD *v5; // rax

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = a3;
  if ( a2 )
  {
    v3 = 4 * a2 / 3u;
    v4 = ((((((((((v3 + 1) | ((unsigned __int64)(v3 + 1) >> 1)) >> 2) | (v3 + 1) | ((unsigned __int64)(v3 + 1) >> 1)) >> 4)
            | (((v3 + 1) | ((unsigned __int64)(v3 + 1) >> 1)) >> 2)
            | (v3 + 1)
            | ((unsigned __int64)(v3 + 1) >> 1)) >> 8)
          | (((((v3 + 1) | ((unsigned __int64)(v3 + 1) >> 1)) >> 2) | (v3 + 1) | ((unsigned __int64)(v3 + 1) >> 1)) >> 4)
          | (((v3 + 1) | ((unsigned __int64)(v3 + 1) >> 1)) >> 2)
          | (v3 + 1)
          | ((unsigned __int64)(v3 + 1) >> 1)) >> 16)
        | (((((((v3 + 1) | ((unsigned __int64)(v3 + 1) >> 1)) >> 2) | (v3 + 1) | ((unsigned __int64)(v3 + 1) >> 1)) >> 4)
          | (((v3 + 1) | ((unsigned __int64)(v3 + 1) >> 1)) >> 2)
          | (v3 + 1)
          | ((unsigned __int64)(v3 + 1) >> 1)) >> 8)
        | (((((v3 + 1) | ((unsigned __int64)(v3 + 1) >> 1)) >> 2) | (v3 + 1) | ((unsigned __int64)(v3 + 1) >> 1)) >> 4)
        | (((v3 + 1) | ((unsigned __int64)(v3 + 1) >> 1)) >> 2)
        | (v3 + 1)
        | ((unsigned __int64)(v3 + 1) >> 1))
       + 1;
    v5 = calloc((unsigned int)(v4 + 1), 0xCu);
    if ( !v5 )
      sub_2221CE0("Allocation failed", 1u);
    v5[v4] = 2;
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v4;
  }
}
