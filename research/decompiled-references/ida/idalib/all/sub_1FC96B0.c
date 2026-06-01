__int64 __fastcall sub_1FC96B0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  sub_1FC2690(a1, (__int64)a2);
  sub_183F100(a1 + 32, a2[2]);
  sub_1F92A90(*(_QWORD *)(a1 + 16), a2[3], *(_QWORD *)(a1 + 24));
  result = sub_1F6F5B0(*(_QWORD **)(a1 + 16), a2[4], *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 217;
  return result;
}
