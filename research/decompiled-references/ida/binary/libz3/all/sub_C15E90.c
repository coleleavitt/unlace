__int64 __fastcall sub_C15E90(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(v1 + 8);
  if ( *(_BYTE *)(v2 + 61) )
    return *(unsigned __int8 *)(v1 + 2201);
  result = *(unsigned __int8 *)(v2 + 51);
  if ( (_BYTE)result )
    return *(unsigned __int8 *)(v1 + 2201);
  return result;
}

