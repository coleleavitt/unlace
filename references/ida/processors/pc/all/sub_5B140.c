__int64 __fastcall sub_5B140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rdi
  unsigned int v6; // r14d
  __int64 v8; // [rsp+10h] [rbp-38h] BYREF
  __int64 v9; // [rsp+18h] [rbp-30h] BYREF
  __int128 v10; // [rsp+20h] [rbp-28h]
  unsigned __int64 v11; // [rsp+30h] [rbp-18h]

  v5 = *(_QWORD *)(a1 + 16);
  v11 = __readfsqword(0x28u);
  v9 = 0;
  v8 = -1;
  v10 = 0;
  v6 = sub_5A980(v5, a2, a3, a4, a5, (__int64)&v9, &v8);
  if ( v8 != -1 )
    sub_58AC0(a2);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v6;
}
