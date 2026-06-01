__int64 __fastcall sub_8722A0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi

  v2 = 0;
  result = *(unsigned int *)(a1 + 16);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 624LL);
  if ( v4 && (unsigned int)result < *(_DWORD *)(v4 - 4) )
    v2 = *(_QWORD *)(v4 + 8LL * (unsigned int)result);
  v5 = *(_QWORD *)(v2 + 24);
  if ( v5 )
  {
    *(_DWORD *)(v5 - 4) = 0;
    sub_186B220((void *)(v5 - 8));
    result = *(unsigned int *)(a1 + 16);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 624LL);
  }
  *(_QWORD *)(v4 + 8 * result) = 0;
  return result;
}

