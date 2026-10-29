__int64 __fastcall sub_101B310(__int64 a1)
{
  __int64 result; // rax

  LODWORD(result) = *(_DWORD *)a1;
  if ( *(int *)a1 < 0 )
    return (unsigned int)sub_1021D50(*(_QWORD *)(a1 + 8), (unsigned int)result);
  else
    return (unsigned int)result;
}
