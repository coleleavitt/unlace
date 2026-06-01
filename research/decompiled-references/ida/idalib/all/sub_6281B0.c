__int64 __fastcall sub_6281B0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1672);
  sub_3CB900(v1 + 2336);
  result = register_undo_handler(165, 0, 0, 0);
  *(_DWORD *)(v1 + 2392) = 0;
  return result;
}
