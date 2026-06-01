__int64 __fastcall sub_369800(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rax
  _DWORD v9[4]; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v2 = a1[1];
  v3 = a1[13];
  v10 = __readfsqword(0x28u);
  v4 = a1[9];
  v5 = a1[5];
  v6 = getseg(v2);
  v7 = 0;
  if ( v6 )
  {
    v9[0] = v5;
    v9[1] = v4;
    v9[2] = v3;
    set_array_parameters(v2, v9);
    v7 = 1;
  }
  *(_QWORD *)(a2 + 8) = v7;
  return 0;
}
