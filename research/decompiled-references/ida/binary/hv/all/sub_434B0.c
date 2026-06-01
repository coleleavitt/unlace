__int64 __fastcall sub_434B0(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  bool v4; // cf
  __int64 v5; // rdx
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = *a2 + a3;
  if ( v4 )
    return 0;
  v7[0] = *a2;
  *(_DWORD *)(a1 + 12) = sub_93BC0(v7, v5);
  if ( v3 >= v7[0] )
    return 0;
  *a2 = v7[0];
  return 1;
}

