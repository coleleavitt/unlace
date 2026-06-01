__int64 __fastcall sub_5220F0(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdx
  unsigned __int64 v3; // rax
  __int64 (__fastcall *v4)(); // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  sub_521DF0(*(__int64 **)(a1 + 8), a2);
  v2 = *(unsigned __int64 **)(a1 + 16);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  if ( *v2 < v3 )
    return v10 - __readfsqword(0x28u);
  *v2 = v3 - 1;
  v4 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 64LL);
  if ( v4 == sub_522900 )
  {
    v5 = *(_QWORD **)(a1 + 8);
    if ( (unsigned __int8)sub_7AF760(*v5) )
    {
      v6 = v5 + 1;
      if ( v5[1] == -1 )
      {
        sub_7BF040(v6, *v5, "$ scriptsnippets", 0);
        v6 = v5 + 1;
      }
      v7 = *v5;
      v9 = v5[9];
      sub_7BE7C0(v6, v7, 1, &v9, 8, 89);
    }
    return v10 - __readfsqword(0x28u);
  }
  return ((__int64 (__fastcall *)(__int64, __int64))v4)(a1, 2);
}
