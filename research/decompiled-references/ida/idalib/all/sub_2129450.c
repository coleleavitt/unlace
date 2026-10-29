__int64 __fastcall sub_2129450(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  void (*v3)(); // rdx
  unsigned int v4; // [rsp+18h] [rbp-40h] BYREF
  const char *v5; // [rsp+20h] [rbp-38h] BYREF
  __int16 v6; // [rsp+40h] [rbp-18h]

  v5 = "expected integer";
  v6 = 259;
  if ( (unsigned __int8)sub_2154400(a1, &v4, &v5) )
    return 1;
  result = sub_21544B0(a1);
  if ( (_BYTE)result )
    return 1;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(void (**)())(*(_QWORD *)v2 + 808LL);
  if ( v3 != nullsub_1414 )
  {
    ((void (__fastcall *)(__int64, _QWORD))v3)(v2, v4);
    return 0;
  }
  return result;
}
