__int64 __fastcall sub_F26BD0(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  size_t v3; // rax
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rax

  v2 = *a1;
  v3 = j__strlen(" ");
  v4 = sub_9954E0(v2, " ", v3);
  result = sub_227B910(v4, *(_DWORD *)(a2 + 40) & 0x3FFFFFFF);
  if ( *(char *)(a2 + 47) < 0 )
  {
    v6 = sub_995540(*a1, " ");
    return sub_227B910(v6, *(_DWORD *)(a2 + 44) & 0x3FFFFFFF);
  }
  return result;
}
