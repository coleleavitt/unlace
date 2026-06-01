__int64 __fastcall pb_chooser_t__::vfunc_13(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+8h] [rbp-20h]
  __int64 v6; // [rsp+10h] [rbp-18h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL * **(_QWORD **)a2);
    v5 = 0;
    v4 = &idaplace_t___vtable;
    v6 = v3;
    sub_1929C0((__int64)&v4, 0);
  }
  return 0;
}
