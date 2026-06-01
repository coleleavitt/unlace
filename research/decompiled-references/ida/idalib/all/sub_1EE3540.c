__int64 __fastcall sub_1EE3540(_QWORD *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rax
  int v6; // edi
  unsigned __int64 v7; // rax

  v4 = (unsigned int)*a4;
  v6 = v4 + 1;
  v7 = *(_QWORD *)(*a3 + 8 * v4);
  *a4 = v6;
  if ( v7 )
    v7 = sub_1EE0A70((__int64)a1, a2, v7);
  return sub_1EE2910(a1, v7);
}
