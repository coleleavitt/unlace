__int64 __fastcall sub_2228330(
        unsigned int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int8 a7)
{
  __int64 result; // rax
  __int64 v8; // r13
  __int64 v9; // r10
  unsigned int v10; // eax
  unsigned int v11; // r11d
  unsigned int v12; // esi
  __int64 v13; // r12
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rbx
  int v17; // ecx
  unsigned int v18; // ecx

  result = 0;
  if ( !a1 )
    return result;
  v8 = a1 - 1;
  v9 = 0;
  v10 = a2 + a7;
  v11 = 0;
  v12 = a1;
  v13 = 0;
  v15 = v10 % a1;
  v14 = v10 / a1;
  while ( 1 )
  {
    v17 = v14 + (v15 > (unsigned int)v9);
    *(_DWORD *)(a5 + 4 * v9) = v17;
    v18 = v11 + v17;
    if ( a1 == v12 && v18 > a6 )
      break;
    v16 = v9 + 1;
    v11 = v18;
    if ( v8 == v9 )
      goto LABEL_8;
LABEL_4:
    v9 = v16;
  }
  v12 = v9;
  v16 = v9 + 1;
  v13 = a6 - v11;
  v11 = v18;
  if ( v8 != v9 )
    goto LABEL_4;
LABEL_8:
  if ( a7 )
    --*(_DWORD *)(a5 + 4LL * v12);
  return (v13 << 32) | v12;
}
