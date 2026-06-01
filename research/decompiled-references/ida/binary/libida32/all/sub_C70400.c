__int64 __fastcall sub_C70400(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // ebx
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(a1 + 72);
  if ( v1 && (v1 & 4) == 0 )
  {
    v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v3 )
    {
      v4 = v3 + 8;
      v5 = *(_QWORD *)(v4 - 8);
      v7[1] = v4;
      v7[0] = v5;
      v6 = sub_F490E0(v7);
      sub_F48F70(v7);
      return v6;
    }
  }
  return result;
}

