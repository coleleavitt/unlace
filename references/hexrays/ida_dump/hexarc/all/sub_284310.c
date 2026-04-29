__int64 __fastcall sub_284310(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // edx
  int v3; // edx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 *v7; // [rsp+8h] [rbp-50h] BYREF
  __int64 *v8; // [rsp+10h] [rbp-48h] BYREF
  __int64 v9; // [rsp+18h] [rbp-40h]
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+34h] [rbp-24h]
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  sub_27C880(&v8, a1, a2);
  v2 = 0;
  if ( *v8 != v9 )
  {
    v3 = *(_DWORD *)(a2 + 12);
    v4 = *(__int64 **)(v9 + 8);
    v12 = 0;
    v5 = a1[8];
    v11 = v3;
    v10[0] = &off_4AD4B8;
    v10[1] = v5;
    v7 = v4;
    sub_279C00(v8, &v7, (__int64)v10);
    LOBYTE(v2) = v12 != 0;
  }
  return v2;
}
