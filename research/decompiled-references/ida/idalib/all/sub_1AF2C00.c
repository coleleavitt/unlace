__int64 __fastcall sub_1AF2C00(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  v3 = *(_QWORD *)(v1 + 27464);
  result = *(unsigned int *)(v3 + 40);
  if ( (_DWORD)result )
    v2 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * result - 8);
  *(_QWORD *)(v1 + 328) = v2;
  return result;
}
