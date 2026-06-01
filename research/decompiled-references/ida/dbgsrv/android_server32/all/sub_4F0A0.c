/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F0A0
// Address: 0x0004F0A0

//----- (0004F0A0) --------------------------------------------------------
int *__fastcall sub_4F0A0(int a1, char *s)
{
  _DWORD *v2; // r7
  size_t v3; // r4
  char *v4; // r7
  int *v5; // r4
  int *result; // r0
  _DWORD *v8; // [sp+8h] [bp-14h]
  unsigned int v9; // [sp+Ch] [bp-10h] BYREF
  size_t v10; // [sp+10h] [bp-Ch]
  void *ptr; // [sp+14h] [bp-8h]

  v2 = *(_DWORD **)(a1 + 464);
  ptr = nullptr;
  v10 = 0;
  v9 = 0;
  v3 = strlen(s);
  if ( v3 >= 0xFFFFFFF0 )
    sub_55F54();
  v8 = v2;
  if ( v3 >= 0xB )
  {
    v4 = (char *)operator new((v3 + 16) & 0xFFFFFFF0);
    ptr = v4;
    v9 = ((v3 + 16) & 0xFFFFFFF0) + 1;
    v10 = v3;
    goto LABEL_6;
  }
  LOBYTE(v9) = 2 * v3;
  v4 = (char *)&v9 + 1;
  if ( v3 )
LABEL_6:
    qmemcpy(v4, s, v3);
  v4[v3] = 0;
  v5 = sub_56270(v8, (unsigned __int8 *)&v9);
  if ( (unsigned __int8)v9 << 31 )
    operator delete(ptr);
  result = v5 + 5;
  if ( !v5 )
    return nullptr;
  return result;
}
