__int64 __fastcall sub_B53B50(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( (*(_DWORD *)(a1 + 40) & 7) == 6 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL);
  return result;
}

