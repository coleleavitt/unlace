__int64 __fastcall sub_8227E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 i; // r12
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rsi
  void *v9; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rdx
  _QWORD v21[2]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v22; // [rsp+10h] [rbp-58h]
  __int64 v23; // [rsp+18h] [rbp-50h]
  _QWORD v24[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a1;
  v3 = *(unsigned int *)(a1 + 320);
  v4 = *(_QWORD *)(a1 + 312);
  *(_QWORD *)a1 = &off_47DA958;
  for ( i = v4 + 32 * v3; i != v4; v4 += 32 )
  {
    a1 = *(_QWORD *)(v4 + 24);
    if ( (unsigned int)sub_B19900(a1) )
    {
      **(_BYTE **)(v2 + 24) = 1;
      if ( *(_DWORD *)(v2 + 964) <= 2u && !*(_BYTE *)(v2 + 962) && !*(_BYTE *)(v2 + 963) )
        break;
    }
  }
  v6 = *(_QWORD *)(v2 + 912);
  *(_DWORD *)(v2 + 320) = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      sub_822210(*(_QWORD **)(v6 + 24));
      v7 = *(_QWORD *)(v6 + 16);
      if ( *(_DWORD *)(v6 + 40) > 1u )
        sub_69F740(v6 + 40);
      a2 = 104;
      a1 = v6;
      operator delete((void *)v6, 0x68u);
      if ( !v7 )
        break;
      v6 = v7;
    }
  }
  if ( !*(_DWORD *)(v2 + 888) )
  {
    v8 = 0;
    goto LABEL_15;
  }
  v22 = nullptr;
  v21[0] = sub_69F620();
  v21[1] = v11;
  v23 = 0;
  v12 = sub_69F630(a1, a2);
  v13 = *(_QWORD **)(v2 + 872);
  v24[2] = 0;
  v24[0] = v12;
  v14 = *(unsigned int *)(v2 + 888);
  v24[1] = v15;
  v24[3] = 0;
  v16 = &v13[5 * v14];
  if ( v13 != v16 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v13, v21) )
      {
        v17 = v13[3];
        if ( v17 == v23 )
        {
          v18 = (_QWORD *)v13[2];
          v19 = &v18[v17];
          v20 = v22;
          if ( v18 == v19 )
            goto LABEL_21;
          while ( *v18 == *v20 )
          {
            ++v18;
            ++v20;
            if ( v19 == v18 )
              goto LABEL_21;
          }
        }
      }
      sub_69F550(v13, v24);
LABEL_21:
      v13 += 5;
      if ( v16 == v13 )
      {
        v8 = 40LL * *(unsigned int *)(v2 + 888);
        goto LABEL_15;
      }
    }
  }
  v8 = 0;
LABEL_15:
  operator delete();
  v9 = *(void **)(v2 + 312);
  if ( v9 != (void *)(v2 + 328) )
    free(v9);
  sub_822100(v2 + 56);
  return sub_A2CAF0(v2, v8);
}

