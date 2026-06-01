__int64 (*__fastcall sub_3053B0(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( (char *)result != (char *)sub_305040 )
    return (__int64 (*)(void))result();
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  return result;
}

