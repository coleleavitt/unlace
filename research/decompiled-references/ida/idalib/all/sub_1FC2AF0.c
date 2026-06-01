__int64 __fastcall sub_1FC2AF0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  result = sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 211;
  return result;
}
