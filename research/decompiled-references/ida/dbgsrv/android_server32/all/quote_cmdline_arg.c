/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: quote_cmdline_arg
// Address: 0x000729C4

//----- (000729C4) --------------------------------------------------------
int __fastcall quote_cmdline_arg(int a1)
{
  int v2; // r4
  char *v3; // r5
  int v4; // r6
  unsigned int v5; // r0
  unsigned int v6; // r2
  char *v7; // r1
  unsigned int v8; // r7
  char *v9; // r0
  unsigned int v10; // r4
  void *v11; // r1
  char *v12; // r1
  unsigned int v13; // r4
  void *v14; // r1
  void *v15; // r0
  unsigned int v16; // r2
  unsigned int v17; // r3
  int result; // r0
  unsigned __int8 *v19; // r1
  int v20; // [sp+8h] [bp-18h]
  void *ptr; // [sp+10h] [bp-10h] BYREF
  unsigned int v22; // [sp+14h] [bp-Ch]
  unsigned int v23; // [sp+18h] [bp-8h]

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 )
    v3 = *(char **)a1;
  else
    v3 = &byte_B3CBE;
  LOBYTE(v4) = *v3;
  if ( *v3 && !strpbrk(v3, " \t?*[]()<>;&$|^#") )
  {
    v19 = (unsigned __int8 *)(v3 + 1);
    while ( (unsigned __int8)v4 != 39 && (unsigned __int8)v4 != 34 )
    {
      v4 = *v19;
      result = 0;
      ++v19;
      if ( !v4 )
        return result;
    }
  }
  v5 = 0;
  v22 = 0;
  ptr = nullptr;
  v23 = 0;
  v6 = 2;
  if ( v2 )
    v6 = v2 + 1;
  v20 = a1;
  if ( !v6 )
  {
    v7 = nullptr;
LABEL_13:
    v8 = 0;
    goto LABEL_14;
  }
  v7 = (char *)qvector_reserve((int)&ptr, nullptr, v6, 1u);
  ptr = v7;
  v8 = v22 - 1;
  v5 = v23;
  if ( !v22 )
    goto LABEL_13;
LABEL_14:
  if ( v5 < v8 + 2 )
  {
    v7 = (char *)qvector_reserve((int)&ptr, v7, v8 + 2, 1u);
    ptr = v7;
  }
  v22 = v8 + 2;
  v9 = &v7[v8];
  LOBYTE(v10) = 39;
  while ( 1 )
  {
    *v9 = v10;
    *((_BYTE *)ptr + v8 + 1) = 0;
    v10 = (unsigned __int8)*v3;
    if ( v10 > 0x26 )
    {
      if ( v10 != 92 && v10 != 39 )
        goto LABEL_28;
      goto LABEL_23;
    }
    if ( v10 != 34 )
      break;
LABEL_23:
    v10 = v22 - 1;
    if ( !v22 )
      v10 = 0;
    v11 = ptr;
    if ( v23 < v10 + 2 )
    {
      v11 = qvector_reserve((int)&ptr, ptr, v10 + 2, 1u);
      ptr = v11;
    }
    v22 = v10 + 2;
    *((_BYTE *)v11 + v10) = 92;
    *((_BYTE *)ptr + v10 + 1) = 0;
    LOBYTE(v10) = *v3;
LABEL_28:
    v8 = v22 - 1;
    if ( !v22 )
      v8 = 0;
    ++v3;
    v12 = (char *)ptr;
    if ( v23 < v8 + 2 )
    {
      v12 = (char *)qvector_reserve((int)&ptr, ptr, v8 + 2, 1u);
      ptr = v12;
    }
    v22 = v8 + 2;
    v9 = &v12[v8];
  }
  if ( *v3 )
    goto LABEL_28;
  v13 = v22 - 1;
  if ( !v22 )
    v13 = 0;
  v14 = ptr;
  if ( v23 < v13 + 2 )
  {
    v14 = qvector_reserve((int)&ptr, ptr, v13 + 2, 1u);
    ptr = v14;
  }
  v22 = v13 + 2;
  *((_BYTE *)v14 + v13) = 39;
  *((_BYTE *)ptr + v13 + 1) = 0;
  v15 = *(void **)v20;
  *(_DWORD *)v20 = ptr;
  v16 = *(_DWORD *)(v20 + 4);
  *(_DWORD *)(v20 + 4) = v22;
  v17 = *(_DWORD *)(v20 + 8);
  *(_DWORD *)(v20 + 8) = v23;
  ptr = v15;
  v22 = v16;
  v23 = v17;
  if ( v15 )
  {
    v22 = 0;
    qfree(v15);
    v23 = 0;
    ptr = nullptr;
  }
  return 1;
}
// B3CBE: using guessed type char byte_B3CBE;
