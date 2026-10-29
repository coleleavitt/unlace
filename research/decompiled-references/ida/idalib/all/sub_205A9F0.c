__int64 __fastcall sub_205A9F0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // r12
  __int64 v4; // rbx
  unsigned int v5; // ebx
  int v7; // [rsp+Ch] [rbp-12Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-128h]
  __int64 v9; // [rsp+18h] [rbp-120h]
  _QWORD v10[4]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v11; // [rsp+40h] [rbp-F8h] BYREF

  v1 = *(_QWORD *)(a1 - 96);
  v10[0] = *(_QWORD *)(a1 - 128);
  v9 = 0x2000000001LL;
  v10[1] = v1;
  v2 = *(_QWORD *)(a1 - 64);
  LODWORD(v9) = 2;
  ptr = v10;
  v10[2] = v2;
  v3 = *(_QWORD *)(a1 - 32);
  LODWORD(v9) = 3;
  v10[3] = v3;
  v4 = *(_QWORD *)(a1 + 8);
  LODWORD(v9) = 4;
  v7 = sub_2053D00(v10, (__int64)&v11);
  v5 = sub_2050F80(v4, &v7);
  if ( ptr != v10 )
    free(ptr);
  return v5;
}
