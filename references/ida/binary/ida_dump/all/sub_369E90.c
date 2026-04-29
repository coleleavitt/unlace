__int64 __fastcall sub_369E90(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rdx

  if ( ((a3 & 0xFFFFFFF0) == 0x40 || (a3 & 0xFFFFFFF0) == 0xD0)
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 936) + 56LL))(*(_QWORD *)(a2 + 936)) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 936) + 16LL);
    result = v5 + 8;
    if ( (*(_BYTE *)(v5 + 288) & 2) != 0 )
      return v5 + 144;
  }
  else
  {
    sub_D1380(a1, a3);
    return a1;
  }
  return result;
}
