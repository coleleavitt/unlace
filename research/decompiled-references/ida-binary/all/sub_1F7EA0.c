__int64 __fastcall sub_1F7EA0(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v5; // rax

  v3 = *(_DWORD *)(a3 + 12);
  if ( v3 <= 0xFFFFFF )
  {
    if ( !v3 || (unsigned __int64)v3 >= *(_QWORD *)(a1 + 56) )
      return 0;
    v5 = sub_524F70(a1 + 40, v3, 0);
    v3 = sub_524F80(a1 + 40, v5, 0);
  }
  *a2 = v3;
  return 1;
}
