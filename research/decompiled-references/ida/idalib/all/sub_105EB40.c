__int64 __fastcall sub_105EB40(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // r14
  char *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned int v7; // r15d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r15
  _QWORD v12[2]; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int64 v13; // [rsp+10h] [rbp-F8h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-F0h]
  unsigned __int8 v15; // [rsp+30h] [rbp-D8h]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h]
  _BYTE v18[184]; // [rsp+50h] [rbp-B8h] BYREF

  v12[0] = a2;
  v12[1] = a3;
  ptr = v18;
  v17 = 0x800000000LL;
  sub_22471D0(v12, &ptr, "+", 1, 0xFFFFFFFFLL, 1);
  v3 = (char *)ptr;
  v4 = (char *)ptr + 16 * (unsigned int)v17;
  if ( ptr == v4 )
  {
    v7 = 1;
  }
  else
  {
    do
    {
      v8 = sub_2246FB0(v3, asc_22E1692, 6, 0);
      v9 = *((_QWORD *)v3 + 1);
      v10 = 0;
      if ( v8 < v9 )
      {
        v10 = v9 - v8;
        v9 = v8;
      }
      v13 = *(_QWORD *)v3 + v9;
      v14 = v10;
      v5 = sub_2247130(&v13, asc_22E1692, 6, -1) + 1;
      if ( v5 > v14 )
        v5 = v14;
      v6 = v5 + v14 - v10;
      if ( v6 > v14 )
        v6 = v14;
      sub_229B200(&v13, v13, v6);
      v7 = v15;
      if ( !v15 )
        break;
      v3 += 16;
    }
    while ( v4 != v3 );
    v4 = (char *)ptr;
  }
  if ( v4 != v18 )
    free(v4);
  return v7;
}
