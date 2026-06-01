__int64 __fastcall sub_D9E2A0(_QWORD *a1, _QWORD *a2, double a3)
{
  int v3; // ebx
  __int64 v4; // rbp
  __int64 v5; // r12
  unsigned int v7; // r12d
  __int64 *v8; // rbx
  __int64 *v9; // r14
  __int64 v10; // rsi
  __int64 *v11; // rbx
  __int64 *v12; // r13
  __int64 v13; // rsi
  _Unwind_Exception *v15; // [rsp-8h] [rbp-38h]
  int v16; // [rsp+0h] [rbp-30h]
  int v17; // [rsp+8h] [rbp-28h]
  __int64 v18; // [rsp+10h] [rbp-20h]
  __int64 v19; // [rsp+18h] [rbp-18h]

  v19 = v5;
  v18 = v4;
  v17 = v3;
  v16 = LODWORD(a3);
  if ( a3 <= 0.0 )
    return 0;
  v7 = sub_D9DF20((__int64)a1);
  if ( !(_BYTE)v7 || a3 <= 1.797693134862316e308 && sub_D9EA60(a1 + 7, a1 + 10) > a3 )
    return 0;
  sub_D9D9D0(a1);
  v8 = (__int64 *)a1[6];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    while ( v9 != v8 )
    {
      v10 = *v8++;
      sub_EDBA20(*a2, v10, 0, v15, v16, v17, v18, v19);
    }
  }
  v11 = (__int64 *)a1[23];
  if ( !v11 )
    return v7;
  v12 = &v11[*((unsigned int *)v11 - 1)];
  if ( v12 == v11 )
    return v7;
  do
  {
    v13 = *v11++;
    sub_EDBA20(*a2, v13, 0, v15, v16, v17, v18, v19);
  }
  while ( v12 != v11 );
  return v7;
}

