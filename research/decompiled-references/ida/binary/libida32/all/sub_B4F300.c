__int64 __fastcall sub_B4F300(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 result; // rax
  __int64 v3; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = (__int64 *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 56) & 4) != 0 )
    v1 = (__int64 *)v1[4];
  result = 0;
  if ( v1 )
  {
    v3 = *v1;
    v4[1] = v1 + 1;
    v4[0] = v3;
    return sub_F490E0(v4);
  }
  return result;
}

