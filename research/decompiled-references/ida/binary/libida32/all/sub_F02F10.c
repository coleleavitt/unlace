__int64 __fastcall sub_F02F10(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  size_t v3; // rax
  __int64 v4; // r12
  char *v5; // rax
  __int64 result; // rax
  __int64 v7; // rax

  v2 = *a1;
  v3 = j__strlen(" ");
  v4 = sub_9717A0(v2, " ", v3);
  v5 = sub_AF4F60(a2);
  result = sub_971800(v4, v5);
  if ( *(char *)(a2 + 51) < 0 )
  {
    v7 = sub_971800(*a1, " ");
    return sub_2257BD0(v7, *(_DWORD *)(a2 + 48) & 0x3FFFFFFF);
  }
  return result;
}

