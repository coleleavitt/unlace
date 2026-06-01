/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70EB4
// Address: 0x00070EB4

//----- (00070EB4) --------------------------------------------------------
void *__fastcall sub_70EB4(int a1)
{
  int v1; // r3
  int v2; // r4
  const char *v3; // r0
  const char *v4; // r9
  size_t v5; // r6
  int addr; // r0
  int v7; // r7
  void *v8; // r4
  int v10; // r0
  int v11; // r2
  int v12; // r4
  int v13; // r8
  char v14[1024]; // [sp+4h] [bp-404h] BYREF

  v1 = a1 + 1;
  if ( a1 == -1 )
    v2 = *_errno_location();
  else
    v2 = a1;
  v3 = (const char *)strerror_r(v2, v14, 1024, v1);
  v4 = v3;
  if ( v3 )
  {
    v5 = strlen(v3);
    addr = _tls_get_addr(&dword_D23A4);
    v7 = addr;
    v8 = *(void **)(addr + 88);
    if ( v5 )
    {
      if ( v5 + 1 > *(_DWORD *)(addr + 96) )
      {
        v8 = sub_77EB0(addr + 88, *(void **)(addr + 88), v5 + 1, 1u);
        *(_DWORD *)(v7 + 88) = v8;
      }
      v13 = _tls_get_addr(&dword_D23A4);
      *(_DWORD *)(v13 + 92) = v5 + 1;
      memmove(v8, v4, v5);
      *(_BYTE *)(*(_DWORD *)(v13 + 88) + v5) = 0;
      return *(void **)(v13 + 88);
    }
    else
    {
      *(_DWORD *)(addr + 92) = 0;
    }
  }
  else
  {
    v10 = _tls_get_addr(&dword_D23A4);
    v11 = v2;
    v12 = v10;
    sub_1873C(v10 + 88, "unknown error code %d", v11);
    return *(void **)(v12 + 88);
  }
  return v8;
}
// 70EE0: variable 'v1' is possibly undefined
// 13FC4: using guessed type int __fastcall strerror_r(_DWORD, _DWORD, _DWORD, _DWORD);
// 143B4: using guessed type int __fastcall _tls_get_addr(_DWORD);
// D23A4: using guessed type int dword_D23A4;
