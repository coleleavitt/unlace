__int64 __fastcall sub_11382E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbp
  __int64 *v5; // r14
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  void **v9; // rbx
  unsigned __int64 v10; // rax
  void **v11; // r15
  void **v12; // r12
  void **v13; // rdi
  void **v14; // rdi
  void **v15; // r15
  void **v16; // r12
  __int64 v17; // rdx
  unsigned __int8 v19; // [rsp+8h] [rbp-140h]
  _QWORD v21[2]; // [rsp+20h] [rbp-128h] BYREF
  void *v22; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-110h]
  __int64 v24; // [rsp+40h] [rbp-108h]
  void *v25; // [rsp+50h] [rbp-F8h]
  __int64 v26; // [rsp+60h] [rbp-E8h] BYREF
  __int16 v27; // [rsp+70h] [rbp-D8h]
  __int64 *v28; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+88h] [rbp-C0h]
  _BYTE v30[184]; // [rsp+90h] [rbp-B8h] BYREF

  v21[0] = a2;
  v21[1] = a3;
  v28 = (__int64 *)v30;
  v29 = 0x800000000LL;
  sub_22471D0(v21, &v28, "+", 1, 0xFFFFFFFFLL, 0);
  v4 = &v28[2 * (unsigned int)v29];
  if ( v28 == v4 )
  {
LABEL_30:
    result = 1;
    goto LABEL_31;
  }
  v5 = v28;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = v5[1];
      v8 = *v5;
      if ( v7 == 4 )
        break;
      if ( v7 != 6 || *(_DWORD *)v8 != 1701736302 || *(_WORD *)(v8 + 4) != 28271 )
        goto LABEL_4;
LABEL_10:
      sub_FC70B0((__int64)&v22, *a1, 0, 441);
      if ( (_BYTE)v27 )
      {
        sub_FC7790(v24, (__int64 *)&v22, SHIBYTE(v27));
        v24 = 0;
        v27 = 0;
      }
      if ( v25 != &v26 )
        operator delete(v25);
      v9 = (void **)v22;
      if ( !v22 )
        goto LABEL_5;
      v10 = v23;
      if ( !v23 )
        goto LABEL_5;
      if ( (unsigned __int64)v22 >= v23 && (unsigned __int64)v22 <= v23 + 14848 )
      {
        v17 = *(unsigned int *)(v23 + 14976);
        *(_DWORD *)(v23 + 14976) = v17 + 1;
        *(_QWORD *)(v10 + 8 * v17 + 14848) = v9;
        goto LABEL_5;
      }
      v11 = *((void ***)v22 + 66);
      v12 = &v11[8 * (unsigned __int64)*((unsigned int *)v22 + 134)];
      if ( v11 != v12 )
      {
        do
        {
          while ( 1 )
          {
            v12 -= 8;
            v13 = (void **)v12[3];
            if ( v13 == v12 + 5 )
              break;
            operator delete(v13);
            if ( v11 == v12 )
              goto LABEL_20;
          }
        }
        while ( v11 != v12 );
LABEL_20:
        v12 = (void **)v9[66];
      }
      if ( v12 != v9 + 68 )
        free(v12);
      v14 = (void **)v9[52];
      if ( v14 != v9 + 54 )
        free(v14);
      v15 = v9 + 48;
      v16 = v9 + 8;
      do
      {
        while ( *v15 != v15 + 2 )
        {
          operator delete(*v15);
          v15 -= 4;
          if ( v16 == v15 )
            goto LABEL_28;
        }
        v15 -= 4;
      }
      while ( v16 != v15 );
LABEL_28:
      operator delete(v9, 0x3A0u);
      v5 += 2;
      if ( v4 == v5 )
      {
LABEL_29:
        v4 = v28;
        goto LABEL_30;
      }
    }
    if ( *(_DWORD *)v8 == 1852794222 )
      goto LABEL_10;
LABEL_4:
    result = sub_2299470(a4, v8, v7, 0);
    if ( !(_BYTE)result )
      break;
LABEL_5:
    v5 += 2;
    if ( v4 == v5 )
      goto LABEL_29;
  }
  v4 = v28;
LABEL_31:
  if ( v4 != (__int64 *)v30 )
  {
    v19 = result;
    free(v4);
    return v19;
  }
  return result;
}
