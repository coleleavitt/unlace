__int64 __fastcall sub_1FBC9C0(__int64 a1, __int64 a2)
{
  unsigned __int64 (__fastcall *v3)(__int64); // rax
  int v4; // esi
  __int64 v5; // rax
  __int64 result; // rax

  sub_1FBC930(a1, a2);
  v3 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
  if ( v3 == sub_B70840 )
    v4 = *(_DWORD *)(a2 + 24);
  else
    v4 = v3(a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), v4, *(_QWORD *)(a1 + 24));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 104));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 112));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 88));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 128));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 120));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 96));
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 65) >> 5) & 3);
  v5 = sub_BB2270(a2);
  result = sub_1F92A90(*(_QWORD *)(a1 + 16), v5, *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 139;
  return result;
}
