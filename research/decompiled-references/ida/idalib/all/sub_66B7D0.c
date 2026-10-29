__int64 __fastcall sub_66B7D0(__int64 a1, __int64 *a2)
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
  v4 = *a2 + 144 * a2[1];
  if ( v4 == *a2 )
  {
    result = 1;
  }
  else
  {
    do
    {
      v5 = *(_DWORD *)(v3 + 132);
      v6 = *(_BYTE *)(v3 + 136);
      v7 = sub_537210(v3);
      result = sub_669A50(
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
      v3 += 144;
    }
    while ( v4 != v3 );
    v2 = *(_DWORD *)(a1 + 36) - 1;
  }
  *(_DWORD *)(a1 + 36) = v2;
  return result;
}
