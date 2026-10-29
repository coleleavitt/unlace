__int64 __fastcall sub_690140(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 56);
  result = *(unsigned int *)(v1 + 8);
  if ( (_DWORD)result )
    return (__int64)(*(_QWORD *)(v1 + 88) - *(_QWORD *)(v1 + 80)) >> 6;
  return result;
}

