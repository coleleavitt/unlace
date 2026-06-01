__int64 __fastcall sub_966310(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *a2;
  if ( !(unsigned int)sub_8E7030(v2) )
    return sub_8EB4E0(*(_QWORD *)(a1 + 16), (__int64)a2);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 7488) + 56LL))(*(_QWORD *)(v2 + 7488), v3);
  if ( (_BYTE)result )
    return sub_8EB4E0(*(_QWORD *)(a1 + 16), (__int64)a2);
  return result;
}

