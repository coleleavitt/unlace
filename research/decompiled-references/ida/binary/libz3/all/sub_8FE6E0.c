__int64 __fastcall sub_8FE6E0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  result = *(unsigned __int8 *)(*(_QWORD *)(v1 + 8) + 562LL);
  if ( (_BYTE)result )
    return *(unsigned __int8 *)(v1 + 2201);
  return result;
}

