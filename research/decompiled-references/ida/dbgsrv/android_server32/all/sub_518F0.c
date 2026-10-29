/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_518F0
// Address: 0x000518F0

//----- (000518F0) --------------------------------------------------------
int __fastcall sub_518F0(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r1
  const char *v7; // r0
  size_t v8; // r2
  char *v9; // r1
  size_t v10; // r6
  char *v11; // r0
  size_t v12; // r6
  int *v13; // r5
  __int16 v14; // r0
  size_t v15; // [sp+4h] [bp-1Ch]
  char *v16; // [sp+4h] [bp-1Ch]
  const char *v17; // [sp+8h] [bp-18h]
  size_t v18; // [sp+10h] [bp-10h] BYREF
  size_t v19; // [sp+14h] [bp-Ch]
  void *ptr; // [sp+18h] [bp-8h]

  if ( !a2 )
    sub_50E30(a1, a3);
  if ( sub_511B4(a1, (char **)a3) )
    return 0;
  v6 = sub_50F44((char **)a1, a3, &v18);
  result = -1;
  if ( !v6 )
    result = (unsigned __int8)v18;
  if ( result != -1 )
  {
    if ( result == 2 )
      return 0;
    if ( result == 1 )
      return 1;
    if ( *(_DWORD *)(a3 + 4) )
      v7 = *(const char **)a3;
    else
      v7 = &byte_B3CBE;
    ptr = nullptr;
    v19 = 0;
    v18 = 0;
    v17 = v7;
    v8 = strlen(v7);
    if ( v8 >= 0xFFFFFFF0 )
      sub_55F54();
    if ( v8 >= 0xB )
    {
      v10 = (v8 + 16) & 0xFFFFFFF0;
      v15 = v8;
      v11 = (char *)operator new(v10);
      v8 = v15;
      v9 = v11;
      ptr = v11;
      v18 = v10 + 1;
      v19 = v15;
    }
    else
    {
      LOBYTE(v18) = 2 * v8;
      v9 = (char *)&v18 + 1;
      if ( !v8 )
        goto LABEL_21;
    }
    v16 = v9;
    v12 = v8;
    qmemcpy(v9, v17, v8);
    v9 = v16;
    v8 = v12;
LABEL_21:
    v9[v8] = 0;
    v13 = sub_56E40((_DWORD *)(a1 + 48), (unsigned __int8 *)&v18);
    if ( (unsigned __int8)v18 << 31 )
      operator delete(ptr);
    if ( v13 )
      v14 = *((_WORD *)v13 + 10);
    else
      v14 = 2;
    *(_WORD *)(a3 + 12) = v14;
    return 0;
  }
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;
