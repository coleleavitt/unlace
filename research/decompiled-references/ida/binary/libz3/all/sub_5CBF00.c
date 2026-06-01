__int64 __fastcall sub_5CBF00(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 *v4; // rbx
  __int64 v5; // r13
  unsigned int v6; // r14d
  __int64 v7; // r12
  char v8; // al
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rax
  _QWORD *v16; // [rsp+0h] [rbp-68h]
  __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 *v18; // [rsp+10h] [rbp-58h]
  __int64 v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+28h] [rbp-40h]

  v4 = *(__int64 **)(a2 + 24);
  v16 = a1;
  if ( v4 )
  {
    v5 = a1[4] + 656LL;
    v6 = 0;
    v17 = (__int64)&v4[*((unsigned int *)v4 - 1)];
    if ( (__int64 *)v17 != v4 )
    {
      v18 = &v20;
      do
      {
        v7 = *v4;
        v20 = 0;
        v21 = v5;
        v8 = sub_5CB220(v16, v7, v18);
        v12 = v20;
        v13 = v21;
        if ( v8 )
        {
          v14 = sub_62F7F0(v5, v7, v20, v9, v10, v11, (__int64)v16, v17, (__int64)v18);
          LOBYTE(v14) = v7 != v12;
          v6 |= v14;
          sub_63DAD0(a3, v12, a4);
        }
        else
        {
          v6 = 1;
        }
        if ( v12 )
          sub_62A410(v13, v12);
        ++v4;
      }
      while ( (__int64 *)v17 != v4 );
    }
  }
  else
  {
    return 0;
  }
  return v6;
}

