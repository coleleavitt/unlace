__int64 __fastcall sub_7777C0(__int64 a1, __int64 a2)
{
  __int64 (*v2)(); // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+8h] [rbp-10h] BYREF

  v2 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
  if ( v2 == sub_6A41B0 )
    v3 = sub_777E10(a2);
  else
    v3 = ((__int64 (__fastcall *)(__int64))v2)(a2);
  v5 = v3;
  return sub_76F460(a1, (__int64)sub_774190, (__int64)&v5);
}

