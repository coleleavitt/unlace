__int64 __fastcall sub_690120(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 56);
  result = *(unsigned int *)(v1 + 8);
  if ( (_DWORD)result )
    return -1431655765 * (unsigned int)((__int64)(*(_QWORD *)(v1 + 64) - *(_QWORD *)(v1 + 56)) >> 2);
  return result;
}

