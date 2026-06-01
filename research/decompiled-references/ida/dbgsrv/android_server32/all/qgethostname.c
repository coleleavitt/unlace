/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgethostname
// Address: 0x0007EB54

//----- (0007EB54) --------------------------------------------------------
int __fastcall qgethostname(int a1)
{
  int v1; // r1
  int result; // r0
  int v3; // r0
  size_t v4; // r5
  unsigned int v5; // r4
  _DWORD *v6; // r1
  void *v7; // r0
  _DWORD *v8; // r4
  char name[4100]; // [sp+18h] [bp-1004h] BYREF

  v1 = gethostname(name, 0x1000u);
  result = 0;
  if ( !v1 )
  {
    name[4095] = 0;
    v3 = _strlen_chk(name, 4096);
    if ( v3 )
    {
      v4 = v3;
      v5 = v3 + 1;
      v6 = (_DWORD *)a1;
      if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v3 + 1) )
      {
        v7 = *(void **)a1;
      }
      else
      {
        v7 = qvector_reserve(a1, *(void **)a1, v5, 1u);
        v6 = (_DWORD *)a1;
        *(_DWORD *)a1 = v7;
      }
      v6[1] = v5;
      v8 = v6;
      memmove(v7, name, v4);
      *(_BYTE *)(*v8 + v4) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 4) = 0;
    }
    return 1;
  }
  return result;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
