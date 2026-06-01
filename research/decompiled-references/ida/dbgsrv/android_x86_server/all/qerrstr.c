/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qerrstr
// Address: 0x000A39F0

//----- (000A39F0) --------------------------------------------------------
int __cdecl qerrstr(int errnum)
{
  int v1; // ecx
  int v2; // edi
  char *v3; // eax
  char *v4; // esi
  size_t v5; // eax
  unsigned int v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  unsigned int v9; // esi
  _DWORD *v10; // edi
  bool v11; // cc
  _DWORD *address; // eax
  void *v14; // [esp+4h] [ebp-38h]
  void *v15; // [esp+18h] [ebp-24h]
  char *v16; // [esp+20h] [ebp-1Ch]
  size_t v17; // [esp+24h] [ebp-18h]
  int v18; // [esp+28h] [ebp-14h]

  v2 = errnum;
  if ( errnum == -1 )
    v2 = *(_DWORD *)__errno(v1);
  v3 = strerror(v2);
  if ( !v3 || (v4 = v3, (v5 = strlen(v3)) == 0) )
  {
    _emutls_get_address((unsigned int *)dword_13BC24)[23] = 0;
LABEL_10:
    address = _emutls_get_address((unsigned int *)dword_13BC24);
    sub_1F400((int)(address + 22), "unknown error code %d", v2);
    return _emutls_get_address((unsigned int *)dword_13BC24)[22];
  }
  v18 = v2;
  v17 = v5;
  v6 = v5 + 1;
  v7 = _emutls_get_address((unsigned int *)dword_13BC24);
  v16 = v4;
  if ( v7[24] >= v6 )
  {
    v9 = v6;
    v15 = (void *)v7[22];
  }
  else
  {
    v14 = (void *)v7[22];
    v8 = _emutls_get_address((unsigned int *)dword_13BC24);
    v15 = qvector_reserve((int)(v8 + 22), v14, v6, 1u);
    v8[22] = v15;
    v9 = v6;
  }
  v10 = _emutls_get_address((unsigned int *)dword_13BC24);
  v10[23] = v9;
  memmove(v15, v16, v17);
  *(_BYTE *)(v10[22] + v17) = 0;
  v11 = v10[23] <= 1u;
  v2 = v18;
  if ( v11 )
    goto LABEL_10;
  return _emutls_get_address((unsigned int *)dword_13BC24)[22];
}
// A3A10: variable 'v1' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13BC24: using guessed type int dword_13BC24[4];
