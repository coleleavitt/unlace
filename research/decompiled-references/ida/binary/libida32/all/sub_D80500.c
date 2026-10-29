__int64 __fastcall sub_D80500(__int64 *a1, unsigned int *a2, unsigned __int64 *a3)
{
  __int64 v3; // rcx
  int v5; // [rsp+Ch] [rbp-1Ch] BYREF
  _QWORD v6[3]; // [rsp+10h] [rbp-18h] BYREF

  v3 = *a1;
  v6[0] = a3;
  v5 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 17448) + 272LL);
  v6[1] = &v5;
  return sub_D7F2B0(
           a2,
           a1,
           0,
           *a3,
           (__int64 (__fastcall *)(__int64, __int64 *, _QWORD, unsigned __int64, __int64, __int64))sub_D7D330,
           (__int64)v6);
}

