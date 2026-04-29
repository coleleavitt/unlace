unsigned __int64 __fastcall sub_88670(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 v4; // r12
  const char *v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r13
  int v8; // eax
  unsigned __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v1 = *(__int64 **)(a1 + 88);
  v13 = __readfsqword(0x28u);
  v10 = 0;
  v11 = 0;
  v2 = *v1;
  v12 = 0;
  v3 = v1[32];
  v4 = *(_QWORD *)(v2 + 24);
  if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int64 *, __int64 *, __int64 *))(v3 + 80))(
         v4,
         &v10,
         &v11,
         &v12) )
  {
    v5 = (const char *)(*(__int64 (__fastcall **)(__int64))(v3 + 464))(v12);
    sub_1D740((__int64)"ERROR: %s\n", v5);
  }
  v6 = v10;
  v7 = v10 + v11;
  if ( v10 >= v10 + v11 )
  {
    if ( !under_debugger )
      interr(30430);
    BUG();
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 256LL) + 48LL))(*(_QWORD *)(**(_QWORD **)(a1 + 88) + 24LL));
  sub_88260(a1, *(_QWORD *)(**(_QWORD **)(a1 + 88) + 16LL), v4, v8 != 0, v6, v7);
  return v13 - __readfsqword(0x28u);
}
