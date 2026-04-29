__int64 __fastcall sub_6BB40(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v3; // rbx
  const char *v4; // rax
  __int64 result; // rax
  int v6; // [rsp+Ch] [rbp-1Ch] BYREF
  _QWORD v7[3]; // [rsp+10h] [rbp-18h] BYREF

  v7[1] = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  v6 = 0;
  v7[0] = 0;
  v3 = *(_QWORD *)(v1 + 256);
  if ( (*(unsigned int (__fastcall **)(__int64, int *, _QWORD *))(v3 + 336))(v2, &v6, v7) )
  {
    v4 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(v3 + 464))(v7[0]);
    sub_1D740((__int64)"ERROR: %s\n", v4);
  }
  result = 4;
  if ( v6 )
    return 3;
  return result;
}
