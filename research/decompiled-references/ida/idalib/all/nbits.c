__int64 __fastcall nbits(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 result; // rax
  char v4; // dl
  __int64 v5; // rax

  v1 = *(_QWORD *)(qword_2CCB598 + 1672);
  v2 = *(_QWORD *)(v1 + 16);
  result = *(unsigned int *)(v2 + 20);
  if ( *(_DWORD *)(v2 + 16) != (_DWORD)result )
  {
    v4 = sub_510230(*(_QWORD *)(qword_2CCB598 + 1672), a1);
    v5 = *(_QWORD *)(v1 + 16);
    if ( v4 == 2 )
      return *(unsigned int *)(v5 + 16);
    else
      return *(unsigned int *)(v5 + 20);
  }
  return result;
}
