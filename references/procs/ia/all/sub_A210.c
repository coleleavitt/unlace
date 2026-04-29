unsigned __int64 __fastcall sub_A210(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  _QWORD *v6; // rdi
  _QWORD *v8; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v4 = a1 + 28;
  v9 = __readfsqword(0x28u);
  v6 = (_QWORD *)a1[77];
  v8 = v4;
  if ( (unsigned __int8)sub_98F0(v6, (__int64)&v8, a3, a4) )
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *(_QWORD *)(a1[77] + 128LL), 5);
  return v9 - __readfsqword(0x28u);
}
