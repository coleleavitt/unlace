__int64 __fastcall sub_2E30B0(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 *v5; // [rsp+0h] [rbp-38h] BYREF
  int v6; // [rsp+8h] [rbp-30h]
  __int64 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v5 = &idaplace_t___vtable;
  v7 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 128LL))(a2);
  v6 = a2[2];
  if ( !sub_27D410(v7) )
    idaplace_t__adjust(&v5, *(_QWORD *)(a1 + 728));
  return sub_1F4160(a1, (__int64)&v5, a3);
}
