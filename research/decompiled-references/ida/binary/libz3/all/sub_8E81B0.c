__int64 __fastcall sub_8E81B0(_QWORD *a1, _QWORD *a2)
{
  unsigned int *v2; // r12
  char v3; // dl
  __int64 result; // rax

  v2 = (unsigned int *)*a2;
  v3 = sub_15D2CB0(a1[13], *a2);
  result = 0;
  if ( v3 )
  {
    if ( (_QWORD *)a1[1081] == a2 )
      return 0xFFFFFFFFLL;
    else
      return (unsigned int)*(char *)(a1[1106] + (unsigned int)(2 * *(_DWORD *)(a1[1104] + 4LL * *v2)));
  }
  return result;
}

