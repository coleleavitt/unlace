__int64 __fastcall sub_1FC4620(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1FC2FE0(a1, a2);
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 32), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 372;
  return result;
}
