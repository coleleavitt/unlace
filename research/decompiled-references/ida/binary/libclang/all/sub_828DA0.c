void __fastcall sub_828DA0(unsigned int *a1, __int64 a2)
{
  unsigned int *v2; // rbp
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 i; // r12
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rsi
  unsigned int *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  _QWORD v20[2]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+18h] [rbp-50h]
  _QWORD v23[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a1;
  v3 = a1[80];
  v4 = *((_QWORD *)a1 + 39);
  *(_QWORD *)a1 = &off_47DA958;
  for ( i = v4 + 32 * v3; i != v4; v4 += 32 )
  {
    a1 = *(unsigned int **)(v4 + 24);
    if ( (unsigned int)sub_B19900(a1) )
    {
      **((_BYTE **)v2 + 3) = 1;
      if ( v2[241] <= 2 && !*((_BYTE *)v2 + 962) && !*((_BYTE *)v2 + 963) )
        break;
    }
  }
  v6 = *((_QWORD *)v2 + 114);
  v2[80] = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      sub_822210(*(_QWORD **)(v6 + 24));
      v7 = *(_QWORD *)(v6 + 16);
      if ( *(_DWORD *)(v6 + 40) > 1u )
        sub_69F740(v6 + 40);
      a2 = 104;
      a1 = (unsigned int *)v6;
      operator delete((void *)v6, 0x68u);
      if ( !v7 )
        break;
      v6 = v7;
    }
  }
  if ( !v2[222] )
  {
    v8 = 0;
    goto LABEL_15;
  }
  v21 = nullptr;
  v20[0] = sub_69F620();
  v20[1] = v10;
  v22 = 0;
  v11 = sub_69F630(a1, a2);
  v12 = *((_QWORD **)v2 + 109);
  v23[2] = 0;
  v23[0] = v11;
  v13 = v2[222];
  v23[1] = v14;
  v23[3] = 0;
  v15 = &v12[5 * v13];
  if ( v12 != v15 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v12, v20) )
      {
        v16 = v12[3];
        if ( v16 == v22 )
        {
          v17 = (_QWORD *)v12[2];
          v18 = &v17[v16];
          v19 = v21;
          if ( v17 == v18 )
            goto LABEL_21;
          while ( *v17 == *v19 )
          {
            ++v17;
            ++v19;
            if ( v18 == v17 )
              goto LABEL_21;
          }
        }
      }
      sub_69F550(v12, v23);
LABEL_21:
      v12 += 5;
      if ( v15 == v12 )
      {
        v8 = 40LL * v2[222];
        goto LABEL_15;
      }
    }
  }
  v8 = 0;
LABEL_15:
  operator delete();
  v9 = *((unsigned int **)v2 + 39);
  if ( v9 != v2 + 82 )
    free(v9);
  sub_822100((__int64)(v2 + 14));
  sub_A2CAF0(v2, v8);
  operator delete(v2, 0x3C8u);
}

