__int64 __fastcall sub_64DEB0(__int64 a1, __int64 *a2)
{
  int v2; // edx
  __int64 v3; // rbx
  __int64 v4; // r12
  int v5; // r13d
  char v6; // r14
  const char *v7; // rax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = v2 + 1;
  v3 = *a2;
  v4 = *a2 + (a2[1] << 7);
  if ( v4 == *a2 )
  {
    result = 1;
  }
  else
  {
    do
    {
      v5 = *(_DWORD *)(v3 + 116);
      v6 = *(_BYTE *)(v3 + 120);
      v7 = sub_51E6F0(v3);
      result = sub_64C150(
                 (_BYTE *)a1,
                 (__int64 *)(v3 + 64),
                 *(char **)(v3 + 16),
                 v7,
                 (v5 & 0x800) != 0,
                 v6,
                 v5,
                 nullptr,
                 nullptr);
      if ( !(_BYTE)result )
        break;
      v3 += 128;
    }
    while ( v4 != v3 );
    v2 = *(_DWORD *)(a1 + 36) - 1;
  }
  *(_DWORD *)(a1 + 36) = v2;
  return result;
}

