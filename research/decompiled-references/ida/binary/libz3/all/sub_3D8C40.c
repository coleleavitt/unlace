__int64 __fastcall sub_3D8C40(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v5; // rbp
  bool v6; // zf
  __int64 *v7; // rcx
  __int64 *v8; // r14
  __int64 *v9; // r15
  __int64 v10; // rbp
  __int64 v11; // r12
  unsigned int v12; // r9d
  __int64 v13; // rdi
  __int64 *v14; // rbp
  __int64 v15; // rsi
  unsigned __int64 v16; // r13
  __int64 *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v22; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+10h] [rbp-58h]
  unsigned __int8 v24; // [rsp+1Bh] [rbp-4Dh]
  unsigned int v25; // [rsp+1Ch] [rbp-4Ch]
  __int64 v26[9]; // [rsp+20h] [rbp-48h] BYREF

  v23 = a3[1];
  v22 = a1 + 128;
  v24 = sub_13608A0(a1 + 128);
  sub_1360B80(a1 + 128, 0);
  sub_1374250(v26, a1, *a3);
  v5 = v26[0];
  if ( v26[0] )
  {
    v6 = (*(_DWORD *)(v26[0] + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v23, v5);
  }
  v7 = (__int64 *)a2[1];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v8 == v7 )
    {
      LODWORD(v10) = 0;
LABEL_23:
      *((_DWORD *)v7 - 1) = v10;
      return sub_1360B80(v22, v24);
    }
    v9 = (__int64 *)a2[1];
    v10 = 0;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( !(unsigned __int8)sub_3D8920(a1, *v9, a3) )
          break;
        if ( v8 == ++v9 )
          goto LABEL_15;
      }
      v12 = v10 + 1;
      v13 = *a2;
      v14 = (__int64 *)(a2[1] + 8 * v10);
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
      v15 = *v14;
      if ( *v14 )
      {
        v6 = (*(_DWORD *)(v15 + 8))-- == 1;
        if ( v6 )
        {
          v25 = v12;
          sub_15D7BC0(v13, v15);
          v12 = v25;
        }
      }
      ++v9;
      *v14 = v11;
      v10 = v12;
    }
    while ( v8 != v9 );
LABEL_15:
    v7 = (__int64 *)a2[1];
    if ( v7 )
    {
      v16 = (unsigned __int64)&v7[*((unsigned int *)v7 - 1)];
      v17 = &v7[(unsigned int)v10];
      if ( (unsigned __int64)v17 >= v16 )
        goto LABEL_23;
      do
      {
        while ( 1 )
        {
          v18 = *v17;
          if ( *v17 )
          {
            v19 = *a2;
            v6 = (*(_DWORD *)(v18 + 8))-- == 1;
            if ( v6 )
              break;
          }
          if ( (unsigned __int64)++v17 >= v16 )
            goto LABEL_22;
        }
        sub_15D7BC0(v19, v18);
        ++v17;
      }
      while ( (unsigned __int64)v17 < v16 );
LABEL_22:
      v7 = (__int64 *)a2[1];
      if ( v7 )
        goto LABEL_23;
    }
  }
  return sub_1360B80(v22, v24);
}

