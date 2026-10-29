__int64 __fastcall sub_366210(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // r14d
  int v3; // ebp
  int v4; // r12d
  int v5; // r13d
  __int64 v6; // rdx
  int v7; // eax
  _DWORD v9[4]; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v2 = a1[2];
  v3 = a1[26];
  v10 = __readfsqword(0x28u);
  v4 = a1[18];
  v5 = a1[10];
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
  *(_DWORD *)(a2 + 8) = v7;
  return 0;
}

