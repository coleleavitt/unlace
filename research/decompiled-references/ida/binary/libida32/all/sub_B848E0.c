__int64 __fastcall sub_B848E0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbx
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 88);
  if ( !v1 )
    return 0;
  v2 = v1 + 8;
  v3 = *(_QWORD *)(v2 - 8);
  v6[1] = v2;
  v6[0] = v3;
  v4 = (unsigned int)sub_F490E0(v6);
  return (v4 << 32) | (unsigned int)sub_F48F70(v6);
}

