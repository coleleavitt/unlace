__int64 __fastcall sub_1FC8BF0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1FC8A00(a1, a2);
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 255;
  return result;
}
