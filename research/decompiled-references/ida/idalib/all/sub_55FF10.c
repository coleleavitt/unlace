__int64 __fastcall sub_55FF10(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebp
  _QWORD *v3; // rax
  __int64 v4; // rax
  unsigned int v5; // edx

  v2 = *(_DWORD *)(a1 + 12);
  v3 = (_QWORD *)sub_559D40(*(_QWORD *)(qword_2CCB598 + 1656), a2);
  v4 = sub_55F9A0(v3, a2, v2, 1);
  v5 = 0;
  if ( v4 )
    return *(unsigned __int8 *)(v4 + 100);
  return v5;
}
