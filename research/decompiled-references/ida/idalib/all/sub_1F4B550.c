unsigned __int64 __fastcall sub_1F4B550(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax

  sub_1F1D950(*(_QWORD *)(a1 + 16), *(unsigned int **)(a2 + 56), a3, a4, a5, a6);
  sub_1F4B4A0(a1, a2);
  *(_QWORD *)(a2 + 104) = sub_1F16D80(*(_QWORD *)(a1 + 16));
  result = sub_1EE13A0(
             *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
             *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
             (__int64 *)(*(_QWORD *)(a1 + 16) + 32LL),
             (_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL));
  if ( result )
  {
    result = 2 * result + 1;
    *(_QWORD *)(a2 + 112) = result;
  }
  else
  {
    *(_QWORD *)(a2 + 112) = 0;
  }
  return result;
}
