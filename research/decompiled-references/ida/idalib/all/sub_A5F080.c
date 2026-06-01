__int64 __fastcall sub_A5F080(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]
  _QWORD v7[3]; // [rsp+10h] [rbp-18h] BYREF

  v1 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(unsigned int *)(a1 + 40);
  v2 = sub_2246FB0(&v5, asc_22E1692, 6, 0);
  v3 = v6;
  if ( v2 < v6 )
  {
    v3 = v2;
    v1 = v6 - v2;
  }
  v7[1] = v1;
  v7[0] = v5 + v3;
  sub_2247130(v7, asc_22E1692, 6, -1);
  return v7[0];
}
