unsigned __int64 __fastcall sub_616A20(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+8h] [rbp-20h]
  __int64 v8; // [rsp+10h] [rbp-18h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  register_undo_handler(164, sub_6137A0, 0, 1);
  sub_613490(a1 + 552, a1);
  v4 = **(_QWORD **)(a1 + 1480);
  v6 = v4;
  if ( v4 )
    v7 = *(_DWORD *)(v4 + 1332);
  else
    v7 = -1;
  v8 = v4 + 552;
  sub_614CE0((__int64)&v6, (__int64)&unk_2B0AE20, 0, v1, v2, v3);
  return v9 - __readfsqword(0x28u);
}

