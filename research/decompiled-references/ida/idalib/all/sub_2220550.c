__int64 __fastcall sub_2220550(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 result; // rax

  v6 = a1 + 8;
  *(_QWORD *)(v6 - 8) = &off_2BEAE58;
  result = sub_2253560(v6, a4);
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = a3;
  *(_BYTE *)(a1 + 56) = 0;
  return result;
}
