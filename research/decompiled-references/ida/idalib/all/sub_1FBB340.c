__int64 __fastcall sub_1FBB340(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 56));
  sub_1FBAE50((__int64 *)a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned __int8 *)(a2 + 33));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 36), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 40), *(_QWORD *)(a1 + 24));
  sub_1F6F5B0(*(_QWORD **)(a1 + 16), *(_QWORD *)(a2 + 72), *(_QWORD *)(a1 + 24));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 64));
  result = sub_1F81430(a1 + 8, *(__int64 **)(a2 + 48), *(_QWORD *)(a2 + 56));
  *(_DWORD *)(a1 + 224) = 146;
  return result;
}
