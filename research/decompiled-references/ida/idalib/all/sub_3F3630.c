unsigned __int64 __fastcall sub_3F3630(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _QWORD *v3; // rax
  __m128i v5; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &off_2BF9EE0;
  *(_QWORD *)(a1 + 16) = &off_2BF9F20;
  *(_QWORD *)(a1 + 8) = 0;
  v1 = qword_2CCB598;
  *(_QWORD *)(a1 + 32) = -1;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = v1;
  *(_OWORD *)(a1 + 48) = 0;
  hook_event_listener(0, a1, 0, 1);
  *(_QWORD *)a1 = off_2B271D8;
  *(_QWORD *)(a1 + 16) = off_2B27218;
  netnode_check(a1 + 64, "$ pin tracer ", 0, 0);
  netnode_check(a1 + 72, "$ gdb options", 0, 0);
  netnode_check(a1 + 80, "$ xnu options", 0, 0);
  netnode_check(a1 + 88, "$ ios options", 0, 0);
  netnode_check(a1 + 96, "$ bxldr_params", 0, 0);
  netnode_check(a1 + 104, "$ windbg_params", 0, 0);
  netnode_check(a1 + 112, "$ remote mac arm options", 0, 0);
  netnode_check(a1 + 120, "$ local mac arm options", 0, 0);
  netnode_check(a1 + 128, "$ remote mac options", 0, 0);
  netnode_check(a1 + 136, "$ local mac options", 0, 0);
  netnode_check(a1 + 144, "$ debugger application", 0, 0);
  netnode_check(a1 + 152, "$ debugger configuration", 0, 0);
  v2 = *(_QWORD *)(a1 + 24);
  *(_OWORD *)(a1 + 160) = 0;
  v3 = *(_QWORD **)(v2 + 1672);
  v5 = 0;
  sub_630CA0(*v3, 26, &v5, 16);
  *(__m128i *)(a1 + 160) = _mm_load_si128(&v5);
  return v6 - __readfsqword(0x28u);
}
