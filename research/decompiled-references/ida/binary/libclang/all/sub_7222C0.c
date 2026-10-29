__int64 __fastcall sub_7222C0(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 80) += a2;
  if ( *(_QWORD *)(a1 + 8) < (unsigned __int64)(result + a2) || !result )
    return sub_722150(a1, a2, a3);
  *(_QWORD *)a1 = result + a2;
  return result;
}

