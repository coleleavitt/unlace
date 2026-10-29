__int64 __fastcall sub_AE0330(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 112LL);
  *(_QWORD *)(a1 + 80) = (unsigned int)result;
  return result;
}

