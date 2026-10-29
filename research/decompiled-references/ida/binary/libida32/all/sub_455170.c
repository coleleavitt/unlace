unsigned __int64 __fastcall sub_455170(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1 = switch_dbctx(*(int *)(a1 + 8));
  v3 = 0;
  sub_6141A0(**(_QWORD **)(v1 + 1480), 26, &v3, 8);
  *(_QWORD *)(a1 + 48) = v3;
  return v4 - __readfsqword(0x28u);
}

