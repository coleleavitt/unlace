__int64 __fastcall sub_F39EF0(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // rdx

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 40LL);
  for ( i = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
        *(_BYTE *)(i + 16) == 30 && *(_QWORD *)(i + 32) == *(_QWORD *)(a1 + 32);
        i = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL) )
  {
    result = sub_F39EF0(i);
  }
  return result;
}

