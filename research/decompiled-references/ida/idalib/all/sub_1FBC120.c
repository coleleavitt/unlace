__int64 __fastcall sub_1FBC120(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1FBBC70((__int64 *)a1, a2);
  result = sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 65;
  return result;
}
