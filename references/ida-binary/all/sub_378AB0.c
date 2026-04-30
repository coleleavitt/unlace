__int64 __fastcall path_details_ah_t__::vfunc_4(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  char *v11; // rbx
  __int64 v12; // rdi
  __int64 v14; // [rsp+8h] [rbp-130h] BYREF
  _QWORD v15[7]; // [rsp+10h] [rbp-128h] BYREF
  char v16; // [rsp+48h] [rbp-F0h] BYREF
  char v17; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v18; // [rsp+C8h] [rbp-70h]
  __int64 v19; // [rsp+D0h] [rbp-68h]
  __int64 v20; // [rsp+E0h] [rbp-58h]
  __int64 v21; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v22; // [rsp+108h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  sub_378600((__int64)v15, a2, a1 + 32);
  v14 = 0;
  sub_4AED50(v15, &v14, v2, v3);
  v15[0] = path_details_chooser_t___vtable;
  if ( v20 )
  {
    v21 = 0;
    qfree(v20, (const char *)&v14);
  }
  v4 = v18;
  if ( v18 )
  {
    v5 = v19;
    if ( v19 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = (__int64 *)(v4 + v6);
        v9 = *(_QWORD *)(v4 + v6 + 24);
        if ( v9 )
        {
          v8[4] = 0;
          qfree(v9, (const char *)&v14);
        }
        v10 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v10, (const char *)&v14);
        }
        ++v7;
        v4 = v18;
        v6 += 56;
      }
      while ( v5 != v7 );
    }
    v19 = 0;
    qfree(v4, (const char *)&v14);
  }
  v11 = &v17;
  v15[0] = &stru_86F6A0;
  do
  {
    v12 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 )
    {
      *((_QWORD *)v11 + 1) = 0;
      qfree(v12, (const char *)&v14);
    }
    v11 -= 24;
  }
  while ( v11 != &v16 );
  return 0;
}
