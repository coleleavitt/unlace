__int64 __fastcall sub_B688D0(unsigned __int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    a1 = sub_B68580(a1);
  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 2320LL);
  result = 1;
  if ( !(*(_BYTE *)(v1 + 201) >> 5) )
    return *(_BYTE *)(v1 + 22) >> 7;
  return result;
}

