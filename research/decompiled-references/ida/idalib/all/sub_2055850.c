void __fastcall sub_2055850(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 v9; // r13
  unsigned int v10; // edi
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 *j; // r14
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 *v23; // rdi
  __int64 v25; // r13
  __int64 i; // rbx
  __int64 *v27; // [rsp+0h] [rbp-A8h]
  __int64 v28; // [rsp+8h] [rbp-A0h]
  __int64 v29; // [rsp+18h] [rbp-90h]
  __int64 *v30; // [rsp+18h] [rbp-90h]
  __int64 *v31; // [rsp+18h] [rbp-90h]
  __int64 *v32; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v33[4]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v34[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  v11 = 32LL * v10;
  *(_QWORD *)a1 = sub_22300B0(v11, 8, a3, a4, a5, a6);
  v12 = sub_21F90F0();
  v14 = sub_21F90D0(v11, 8, v13);
  v15 = v14;
  if ( !v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    if ( v14 == v12 )
      sub_21FFCB0(v34, v14, 1);
    else
      sub_21FAF40(v34, v12, 1);
    v25 = *(_QWORD *)a1;
    for ( i = *(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 16); i != v25; v25 += 32 )
    {
      while ( v34[0] != v15 )
      {
        sub_21F97A0(v25, v34);
        v25 += 32;
        if ( i == v25 )
          goto LABEL_47;
      }
      sub_21FFE60(v25, v34);
    }
LABEL_47:
    sub_9955A0(v34);
    return;
  }
  *(_QWORD *)(a1 + 8) = 0;
  v27 = (__int64 *)(v9 + 32 * v8);
  if ( v14 == v12 )
  {
    sub_21FFCB0(v34, v14, 1);
    v16 = *(_QWORD *)a1;
    v17 = *(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 16);
    if ( *(_QWORD *)a1 == v17 )
    {
      sub_9955A0(v34);
    }
    else
    {
      do
      {
LABEL_8:
        while ( 1 )
        {
          v28 = v16;
          if ( v15 == v34[0] )
            break;
          sub_21F97A0(v16, v34);
          v16 = v28 + 32;
          if ( v28 + 32 == v17 )
            goto LABEL_10;
        }
        sub_21FFE60(v16, v34);
        v16 = v28 + 32;
      }
      while ( v28 + 32 != v17 );
LABEL_10:
      sub_9955A0(v34);
      if ( v15 != v12 )
        goto LABEL_11;
    }
    sub_21FFCB0(v33, v12, 1);
    sub_21FFCB0(v34, v12, 2);
    goto LABEL_12;
  }
  sub_21FAF40(v34, v12, 1);
  v16 = *(_QWORD *)a1;
  v17 = *(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 16);
  if ( v17 != *(_QWORD *)a1 )
    goto LABEL_8;
  sub_9955A0(v34);
LABEL_11:
  sub_21FAF40(v33, v12, 1);
  sub_21FAF40(v34, v12, 2);
LABEL_12:
  for ( j = (__int64 *)v9; v27 != j; j += 4 )
  {
    v19 = *j;
    if ( *j != v33[0] )
      goto LABEL_14;
    if ( v15 == v19 )
    {
      if ( !(unsigned __int8)sub_2201080(j, v33) )
      {
LABEL_29:
        v19 = *j;
LABEL_14:
        if ( v19 == v34[0] )
        {
          if ( v19 == v15 ? sub_2201080(j, v34) : (unsigned __int8)sub_21F96E0(j, v34) )
            goto LABEL_22;
        }
        sub_2052B70((__int64 *)a1, j, &v32);
        v20 = v32;
        if ( v15 == *v32 )
        {
          if ( v15 == *j )
          {
            if ( v32 != j )
            {
              v31 = v32;
              sub_A4F010((__int64)v32);
              sub_21FFED0(v31, j);
              v20 = v32;
            }
            goto LABEL_18;
          }
        }
        else if ( v15 != *j )
        {
          sub_21F9590(v32, j);
          v20 = v32;
LABEL_18:
          v21 = j[3];
          j[3] = 0;
          v20[3] = v21;
          v22 = j[3];
          ++*(_DWORD *)(a1 + 8);
          if ( v22 )
          {
            v29 = v22;
            sub_9955A0((_QWORD *)(v22 + 24));
            sub_20CC0C0(v29);
            sub_20C9BF0(v29);
          }
          goto LABEL_22;
        }
        if ( v32 != j )
        {
          v30 = v32;
          sub_9955A0(v32);
          if ( v15 == *j )
            sub_21FFED0(v30, j);
          else
            sub_21F97D0(v30, j);
          v20 = v32;
        }
        goto LABEL_18;
      }
    }
    else if ( !(unsigned __int8)sub_21F96E0(j, v33) )
    {
      goto LABEL_29;
    }
LABEL_22:
    v23 = j;
    sub_9955A0(v23);
  }
  sub_9955A0(v34);
  sub_9955A0(v33);
  operator delete(v9, 32 * v8, 8);
}
