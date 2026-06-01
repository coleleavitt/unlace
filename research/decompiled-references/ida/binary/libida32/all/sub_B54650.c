__int64 __fastcall sub_B54650(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  if ( !v1 )
    return 0;
  if ( (v1 & 4) == 0 )
    return 0;
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v2 )
    return 0;
  v3 = v2 + 8;
  v4 = *(_QWORD *)(v3 - 8);
  v7[1] = v3;
  v7[0] = v4;
  v5 = (unsigned int)sub_F490E0(v7);
  return (v5 << 32) | (unsigned int)sub_F48F70(v7);
}

