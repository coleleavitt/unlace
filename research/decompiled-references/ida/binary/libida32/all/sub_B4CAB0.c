__int64 __fastcall sub_B4CAB0(__int64 a1, __int64 a2)
{
  __int64 (*v2)(); // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+8h] [rbp-10h] BYREF

  v2 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
  if ( v2 == sub_9DD400 )
    v3 = sub_B4CD20(a2);
  else
    v3 = ((__int64 (__fastcall *)(__int64))v2)(a2);
  v8 = v3;
  return sub_B43950(a1, (__int64)sub_B47AB0, (__int64)&v8, v4, v5, v6);
}

