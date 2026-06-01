__int64 __fastcall sub_56FEC0(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 32);
  *(_QWORD *)(a1 + 24) += result;
  return result;
}

