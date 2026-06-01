__int64 __fastcall sub_25D6A0(__int64 a1, __int64 a2, double a3)
{
  __int64 bpt_kernel_interface; // rax
  __int64 result; // rax
  const char *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // r12
  const char *v11; // r14
  __int64 v12; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v13[9]; // [rsp+20h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 8LL))(bpt_kernel_interface, 0);
  result = 0;
  if ( dbg && (_QWORD)xmmword_8CC398 )
  {
    sub_3E1240();
    v5 = &s1;
    if ( xmmword_8CC590 )
      v5 = (const char *)qword_8CC588;
    sub_258520(v5, "EventCnd", 0);
    sub_212770(a3);
    v6 = dbg;
    v7 = qword_8CC390;
    v8 = *(int *)(dbg + 64);
    if ( (int)v8 > 0 )
    {
      v9 = 32 * v8;
      v10 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v6 + 56) + v10 + 9) & 1) != 0 )
        {
          v11 = &s1;
          if ( *(_QWORD *)(v7 + 8) )
            v11 = *(const char **)v7;
          v12 = *(int *)(v7 + 40);
          netnode_check(v13, "$ debugger configuration", 0, 1);
          netnode_hashset(v13[0], v11, &v12, 8, 72);
        }
        v10 += 32;
        v7 += 56;
        if ( v9 == v10 )
          break;
        v6 = dbg;
      }
    }
    sub_258840();
    return 1;
  }
  return result;
}
