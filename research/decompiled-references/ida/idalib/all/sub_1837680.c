__int64 __fastcall sub_1837680(__int64 *a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r12
  __int64 result; // rax
  __int64 v5; // [rsp+8h] [rbp-70h]
  __int64 v6; // [rsp+10h] [rbp-68h] BYREF
  int v7; // [rsp+18h] [rbp-60h]
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-38h]
  __int128 v11; // [rsp+50h] [rbp-28h]

  v2 = *((_DWORD *)a1 + 44);
  v3 = *a1;
  v6 = *(_QWORD *)(a2 + 40);
  v7 = v2;
  sub_B85890(&v8, v6);
  v9 = 0;
  *(_OWORD *)ptr = 0;
  v11 = 0;
  result = sub_190AE60(v3, (unsigned int)&v9, (unsigned int)&v6, a2, 0, 0, 0);
  if ( HIDWORD(ptr[1]) )
  {
    v5 = result;
    free(ptr[0]);
    return v5;
  }
  return result;
}
