__int64 __fastcall sub_7348F0(__int64 a1, unsigned __int32 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1376);
  *(unsigned __int32 *)((char *)&stru_10010.st_name + result) = a2;
  *(_DWORD *)(result + 65548) = -1;
  return result;
}

