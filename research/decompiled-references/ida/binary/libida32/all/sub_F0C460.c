__int64 __fastcall sub_F0C460(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_F0C410(a1, a2);
  result = *(unsigned int *)(a2 + 48);
  if ( (_DWORD)result )
    return sub_971800(*(_QWORD *)(a1 + 1096), " readonly");
  return result;
}

