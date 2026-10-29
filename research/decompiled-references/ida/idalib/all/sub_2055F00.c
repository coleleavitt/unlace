void __fastcall sub_2055F00(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // r12
  __int64 v9; // r15
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // r14
  _QWORD *v17; // rdi
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // r12
  _QWORD *v23; // rdi
  int v24; // eax
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rdi
  char v28; // al
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 i; // rbx
  __int64 v37; // r8
  _QWORD *v38; // r13
  __int64 v39; // r14
  _QWORD *v40; // rdi
  __int64 v41; // [rsp+8h] [rbp-E0h]
  __int64 v42; // [rsp+18h] [rbp-D0h]
  __int64 v43; // [rsp+20h] [rbp-C8h]
  __int64 v44; // [rsp+28h] [rbp-C0h]
  __int64 v45; // [rsp+40h] [rbp-A8h]
  __int64 v46[4]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v47; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v48[3]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v49; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v50[10]; // [rsp+98h] [rbp-50h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)a1;
  v41 = *(_QWORD *)a1;
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
  v11 = 40LL * v10;
  *(_QWORD *)a1 = sub_22300B0(v11, 8, 64, a4, a5, a6);
  v12 = sub_21F90F0();
  v14 = sub_21F90D0(v11, 8, v13);
  v15 = v14;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v44 = 40 * v8;
    v42 = 40 * v8 + v41;
    if ( v14 == v12 )
      sub_21FFCB0(&v47, v14, 1);
    else
      sub_21FAF40(&v47, v12, 1);
    BYTE4(v49) = 1;
    LODWORD(v49) = -1;
    if ( v15 == v47 )
      sub_21FFED0(v50, &v47);
    else
      sub_21F97D0(v50, &v47);
    sub_9955A0(&v47);
    v16 = *(_QWORD **)a1;
    v43 = *(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 16);
    if ( *(_QWORD *)a1 != v43 )
    {
      do
      {
        while ( 1 )
        {
          v17 = v16 + 1;
          *v16 = v49;
          if ( v15 == v50[0] )
            break;
          sub_21F97A0(v17, v50);
          v16 += 5;
          if ( (_QWORD *)v43 == v16 )
            goto LABEL_13;
        }
        sub_21FFE60(v17, v50);
        v16 += 5;
      }
      while ( (_QWORD *)v43 != v16 );
    }
LABEL_13:
    sub_9955A0(v50);
    if ( v15 == v12 )
      sub_21FFCB0(&v49, v15, 1);
    else
      sub_21FAF40(&v49, v12, 1);
    LODWORD(v47) = -1;
    BYTE4(v47) = 1;
    if ( v15 == v49 )
      sub_21FFED0(v48, &v49);
    else
      sub_21F97D0(v48, &v49);
    sub_9955A0(&v49);
    if ( v15 == v12 )
      sub_21FFCB0(v46, v15, 2);
    else
      sub_21FAF40(v46, v12, 2);
    LODWORD(v49) = -2;
    BYTE4(v49) = 0;
    if ( v15 == v46[0] )
      sub_21FFED0(v50, v46);
    else
      sub_21F97D0(v50, v46);
    sub_9955A0(v46);
    v18 = v41;
    if ( v42 != v41 )
    {
      while ( 1 )
      {
        v24 = *(_DWORD *)v18;
        v25 = v18 + 8;
        if ( *(_DWORD *)v18 == (_DWORD)v47 && *(_BYTE *)(v18 + 4) == BYTE4(v47) )
        {
          v26 = *(_QWORD *)(v18 + 8);
          if ( v26 == v48[0] )
          {
            v27 = v18 + 8;
            if ( v15 == v26 )
              v28 = sub_2201080(v27, v48);
            else
              v28 = sub_21F96E0(v27, v48);
            if ( v28 )
              goto LABEL_29;
            v24 = *(_DWORD *)v18;
          }
        }
        if ( (_DWORD)v49 != v24 )
          break;
        if ( *(_BYTE *)(v18 + 4) != BYTE4(v49) )
          break;
        v29 = *(_QWORD *)(v18 + 8);
        if ( v29 != v50[0] )
          break;
        v30 = v18 + 8;
        if ( !(v15 == v29 ? sub_2201080(v30, v50) : (unsigned __int8)sub_21F96E0(v30, v50)) )
          break;
LABEL_29:
        v23 = (_QWORD *)(v18 + 8);
        v18 += 40;
        sub_9955A0(v23);
        if ( v42 == v18 )
          goto LABEL_48;
      }
      sub_2052D20((__int64 *)a1, (int *)v18, v46);
      v19 = v46[0];
      *(_DWORD *)v46[0] = *(_DWORD *)v18;
      v20 = v19 + 8;
      *(_BYTE *)(v19 + 4) = *(_BYTE *)(v18 + 4);
      if ( v15 == *(_QWORD *)(v19 + 8) )
      {
        if ( v15 == *(_QWORD *)(v18 + 8) )
        {
          if ( v20 != v25 )
          {
            v34 = *(_QWORD *)(v19 + 16);
            if ( v34 )
            {
              v35 = 24LL * *(_QWORD *)(v34 - 8);
              if ( v34 != v34 + v35 )
              {
                v45 = v15;
                for ( i = v34 + v35; ; i -= 24 )
                {
                  sub_9955A0((_QWORD *)(i - 24));
                  if ( *(_QWORD *)(v19 + 16) == i - 24 )
                    break;
                }
                v37 = i;
                v34 = i - 24;
                v15 = v45;
                v35 = 24LL * *(_QWORD *)(v37 - 32);
              }
              operator delete[]((void *)(v34 - 8), v35 + 8);
            }
            sub_21FFED0(v19 + 8, v18 + 8);
            v19 = v46[0];
          }
          goto LABEL_27;
        }
      }
      else if ( v15 != *(_QWORD *)(v18 + 8) )
      {
        sub_21F9590(v19 + 8, v18 + 8);
        v19 = v46[0];
LABEL_27:
        v21 = *(_QWORD *)(v18 + 32);
        *(_QWORD *)(v18 + 32) = 0;
        *(_QWORD *)(v19 + 32) = v21;
        v22 = *(_QWORD *)(v18 + 32);
        ++*(_DWORD *)(a1 + 8);
        if ( v22 )
        {
          sub_9955A0((_QWORD *)(v22 + 24));
          sub_20CC0C0(v22);
          sub_20C9BF0(v22);
        }
        goto LABEL_29;
      }
      if ( v20 != v25 )
      {
        sub_9955A0((_QWORD *)(v19 + 8));
        v32 = v18 + 8;
        v33 = v19 + 8;
        if ( v15 == *(_QWORD *)(v18 + 8) )
          sub_21FFED0(v33, v32);
        else
          sub_21F97D0(v33, v32);
        v19 = v46[0];
      }
      goto LABEL_27;
    }
LABEL_48:
    sub_9955A0(v50);
    sub_9955A0(v48);
    operator delete(v41, v44, 8);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    if ( v14 == v12 )
      sub_21FFCB0(&v47, v14, 1);
    else
      sub_21FAF40(&v47, v12, 1);
    BYTE4(v49) = 1;
    LODWORD(v49) = -1;
    if ( v15 == v47 )
      sub_21FFED0(v50, &v47);
    else
      sub_21F97D0(v50, &v47);
    sub_9955A0(&v47);
    v38 = *(_QWORD **)a1;
    v39 = *(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 16);
    if ( *(_QWORD *)a1 != v39 )
    {
      do
      {
        while ( 1 )
        {
          v40 = v38 + 1;
          *v38 = v49;
          if ( v15 == v50[0] )
            break;
          sub_21F97A0(v40, v50);
          v38 += 5;
          if ( (_QWORD *)v39 == v38 )
            goto LABEL_74;
        }
        sub_21FFE60(v40, v50);
        v38 += 5;
      }
      while ( (_QWORD *)v39 != v38 );
    }
LABEL_74:
    sub_9955A0(v50);
  }
}
