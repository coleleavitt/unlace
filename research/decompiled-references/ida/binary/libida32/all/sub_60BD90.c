__int64 __fastcall sub_60BD90(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1480);
  sub_3C65C0(v1 + 2248);
  result = register_undo_handler(165, 0, 0, 0);
  *(_DWORD *)(v1 + 2304) = 0;
  return result;
}

