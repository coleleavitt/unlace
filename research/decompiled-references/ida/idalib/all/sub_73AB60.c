__int64 __fastcall sub_73AB60(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 32);
  if ( (_DWORD)result )
  {
    sub_738AD0(*(_QWORD *)(a1 + 8), *(_QWORD *)a2);
    result = *(unsigned int *)(a1 + 5800);
    if ( (_DWORD)result )
    {
      if ( *(_DWORD *)(a2 + 32) >= (unsigned int)result )
      {
        result = sub_738DE0(*(_QWORD *)(a1 + 8), *(_QWORD *)a2);
        *(_DWORD *)(a2 + 32) = 0;
      }
    }
  }
  return result;
}
