__int64 __fastcall sub_6B650(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // rbp
  const char *v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r15
  const char *v10; // rax
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a1[3];
  v14[1] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 256);
  v14[0] = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, _QWORD *))(v5 + 360))(a2, &v12, v14) )
  {
    v6 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(v5 + 464))(v14[0]);
    sub_1D740((__int64)"ERROR: %s\n", v6);
  }
  v7 = a3 + 1;
  v8 = v7;
  if ( v7 >= a1[6] )
    return 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1[5] + 8 * v8);
    v14[0] = 0;
    if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, _QWORD *))(v5 + 360))(v9, &v13, v14) )
    {
      v10 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(v5 + 464))(v14[0]);
      sub_1D740((__int64)"ERROR: %s\n", v10);
    }
    if ( v13 == v12 )
      break;
    v8 = ++v7;
    if ( v7 >= a1[6] )
      return 0;
  }
  return v9;
}
