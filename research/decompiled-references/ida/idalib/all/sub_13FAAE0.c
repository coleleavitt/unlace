__int64 __fastcall sub_13FAAE0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rbx
  void ***v4; // r12
  unsigned int v6; // r14d
  __int64 **v7; // rsi
  __int64 *v8; // rax
  _QWORD *v9; // rcx
  bool v10; // zf
  void ***v11; // rbp
  void ***v12; // rdi
  void **v13; // r13
  void **v14; // rbx
  void ***v16; // [rsp+8h] [rbp-88h]
  __int64 v17; // [rsp+18h] [rbp-78h]
  _QWORD *v18; // [rsp+20h] [rbp-70h]
  __int64 *v19; // [rsp+28h] [rbp-68h] BYREF
  void *v20; // [rsp+30h] [rbp-60h] BYREF
  __int64 v21; // [rsp+38h] [rbp-58h]
  _BYTE v22[80]; // [rsp+40h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a2 + 1728);
  v4 = *(void ****)(a2 + 1736);
  *(_QWORD *)(a2 + 1744) = 0;
  v17 = a2 + 1728;
  v16 = (void ***)v3;
  *(_OWORD *)(a2 + 1728) = 0;
  if ( (void ***)v3 == v4 )
  {
    v6 = 0;
    goto LABEL_22;
  }
  v6 = a3;
  do
  {
    while ( 1 )
    {
      v8 = sub_13F8D90(a1, (__int64 **)v3, (__int64 *)a2, v6);
      if ( v8 )
      {
        v20 = v22;
        v21 = 0;
        v22[0] = 0;
        v19 = v8;
        sub_9EE8A0((__int64)&v20, v3 + 96);
        v7 = *(__int64 ***)(a2 + 1760);
        if ( v7 == *(__int64 ***)(a2 + 1768) )
        {
          sub_13F7E70((char **)(a2 + 1752), (__int64)v7, (__int64)&v19);
        }
        else
        {
          *v7 = v19;
          v7[1] = (__int64 *)(v7 + 3);
          sub_13F27F0(v7 + 1, v20, (__int64)v20 + v21);
          *(_QWORD *)(a2 + 1760) += 40LL;
        }
        if ( v20 != v22 )
          operator delete(v20);
        goto LABEL_7;
      }
      v9 = *(_QWORD **)(a2 + 1736);
      if ( v9 != *(_QWORD **)(a2 + 1744) )
        break;
      sub_13FA7D0(v17, *(char **)(a2 + 1736), v3);
LABEL_7:
      v3 += 128;
      if ( v4 == (void ***)v3 )
        goto LABEL_13;
    }
    *v9 = v9 + 2;
    v9[1] = 0x200000000LL;
    if ( *(_DWORD *)(v3 + 8) )
    {
      v18 = v9;
      sub_13FA600((__int64)v9, v3);
      v9 = v18;
    }
    v3 += 128;
    v9[12] = v9 + 14;
    sub_13F27F0(v9 + 12, *(_BYTE **)(v3 - 32), *(_QWORD *)(v3 - 32) + *(_QWORD *)(v3 - 24));
    *(_QWORD *)(a2 + 1736) += 128LL;
  }
  while ( v4 != (void ***)v3 );
LABEL_13:
  v10 = *(_QWORD *)(a2 + 1736) == *(_QWORD *)(a2 + 1728);
  v11 = v16;
  LOBYTE(v6) = !v10;
  do
  {
    while ( 1 )
    {
      v12 = (void ***)v11[12];
      if ( v12 != v11 + 14 )
        operator delete(v12);
      v13 = *v11;
      v14 = &(*v11)[5 * *((unsigned int *)v11 + 2)];
      if ( *v11 != v14 )
      {
        do
        {
          while ( 1 )
          {
            v14 -= 5;
            if ( *v14 == v14 + 2 )
              break;
            operator delete(*v14);
            if ( v13 == v14 )
              goto LABEL_19;
          }
        }
        while ( v13 != v14 );
LABEL_19:
        v14 = *v11;
      }
      if ( v14 == (void **)(v11 + 2) )
        break;
      v11 += 16;
      free(v14);
      if ( v4 == v11 )
        goto LABEL_22;
    }
    v11 += 16;
  }
  while ( v4 != v11 );
LABEL_22:
  if ( v16 )
    operator delete(v16);
  return v6;
}
