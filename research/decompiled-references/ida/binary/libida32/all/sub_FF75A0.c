__int64 __fastcall sub_FF75A0(__int64 a1)
{
  __int64 result; // rax

  LODWORD(result) = *(_DWORD *)a1;
  if ( *(int *)a1 < 0 )
    return (unsigned int)sub_FFDE50(*(_QWORD *)(a1 + 8), (unsigned int)result);
  else
    return (unsigned int)result;
}

