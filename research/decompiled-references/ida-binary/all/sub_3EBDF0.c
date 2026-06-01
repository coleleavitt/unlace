__int64 __fastcall sub_3EBDF0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v13; // [rsp+0h] [rbp-108h] BYREF
  char v14; // [rsp+8h] [rbp-100h]
  __int64 v15; // [rsp+10h] [rbp-F8h] BYREF
  char v16; // [rsp+18h] [rbp-F0h]
  char v17; // [rsp+19h] [rbp-EFh]
  _BYTE v18[8]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v19; // [rsp+28h] [rbp-E0h]
  __int64 v20; // [rsp+30h] [rbp-D8h]
  __int64 v21; // [rsp+38h] [rbp-D0h]
  __int64 v22; // [rsp+48h] [rbp-C0h]
  __int64 v23; // [rsp+50h] [rbp-B8h]
  __int64 v24; // [rsp+68h] [rbp-A0h]
  __int64 v25; // [rsp+70h] [rbp-98h]
  __int64 v26; // [rsp+80h] [rbp-88h]
  __int64 v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  __int64 v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v34; // [rsp+E8h] [rbp-20h]

  v34 = __readfsqword(0x28u);
  v14 = 0;
  v13 = -1;
  get_xrefpos(&v13);
  v16 = 0;
  v15 = v13;
  v17 = v14;
  sub_4A3550(v18, a1, 0, 0);
  v19 = a1 + 184;
  v1 = sub_4AE210(a1, &v15, v18);
  if ( v32 )
  {
    v33 = 0;
    qfree(v32, (const char *)&v15);
  }
  if ( v30 )
  {
    v31 = 0;
    qfree(v30, (const char *)&v15);
  }
  v2 = v28;
  if ( v28 )
  {
    v3 = v29;
    if ( v29 )
    {
      v4 = 0;
      do
      {
        v5 = (__int64 *)(v2 + 24 * v4);
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6, (const char *)&v15);
          v2 = v28;
        }
        ++v4;
      }
      while ( v3 != v4 );
    }
    v29 = 0;
    qfree(v2, (const char *)&v15);
  }
  v7 = v26;
  if ( v26 )
  {
    v8 = v27;
    if ( v27 )
    {
      v9 = 0;
      do
      {
        v10 = (__int64 *)(v7 + 24 * v9);
        v11 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v11, (const char *)&v15);
          v7 = v26;
        }
        ++v9;
      }
      while ( v8 != v9 );
    }
    v27 = 0;
    qfree(v7, (const char *)&v15);
  }
  if ( v24 )
  {
    v25 = 0;
    qfree(v24, (const char *)&v15);
  }
  if ( v22 )
  {
    v23 = 0;
    qfree(v22, (const char *)&v15);
  }
  if ( v20 )
  {
    v21 = 0;
    qfree(v20, (const char *)&v15);
  }
  return v1;
}
