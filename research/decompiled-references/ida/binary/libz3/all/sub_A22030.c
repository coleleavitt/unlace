__int64 __fastcall sub_A22030(_QWORD *a1, __int64 *a2, unsigned int a3, char a4)
{
  _DWORD *v5; // r14
  _DWORD *v6; // r15
  unsigned int v7; // r12d
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rsi
  unsigned int v14; // eax
  int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rdi
  _DWORD *v23; // [rsp+28h] [rbp-98h]
  _QWORD v24[4]; // [rsp+30h] [rbp-90h] BYREF
  _QWORD v25[4]; // [rsp+50h] [rbp-70h] BYREF
  _QWORD v26[10]; // [rsp+70h] [rbp-50h] BYREF

  v5 = (_DWORD *)*a2;
  v6 = (_DWORD *)(*a2 + 40LL * a3);
  v7 = *(_DWORD *)(a1[96] + 4LL * (unsigned int)v6[8]);
  if ( v7 )
  {
    v24[0] = 0;
    v24[1] = 0;
    v24[2] = 1;
    v24[3] = 0;
    v25[0] = 0;
    v25[1] = 0;
    v25[2] = 1;
    v25[3] = 0;
    v26[0] = 0;
    v26[1] = 0;
    v26[2] = 1;
    v26[3] = 0;
    if ( v5 )
    {
      v23 = &v5[10 * *(v5 - 1)];
      if ( v23 != v5 )
      {
        if ( a4 )
        {
          v16 = 0;
          do
          {
            v17 = (unsigned int)v5[8];
            if ( a3 != v16 && (_DWORD)v17 != -1 )
            {
              v18 = *(_QWORD *)(a1[(*v5 > 0) + 93] + 8 * v17);
              sub_9AEDC0((__int64)v24, (__int64)v5, v18 + 16);
              sub_9AEDC0((__int64)v25, (__int64)v5, v18 + 48);
              sub_9AEDC0((__int64)v26, (__int64)v5, v18 + 80);
            }
            v5 += 10;
            ++v16;
          }
          while ( v23 != v5 );
        }
        else
        {
          v8 = 0;
          do
          {
            v9 = (unsigned int)v5[8];
            if ( (_DWORD)v9 != -1 && a3 != v8 )
            {
              v10 = *(_QWORD *)(a1[(*v5 >> 31) + 93] + 8 * v9);
              sub_9AEDC0((__int64)v24, (__int64)v5, v10 + 16);
              sub_9AEDC0((__int64)v25, (__int64)v5, v10 + 48);
              sub_9AEDC0((__int64)v26, (__int64)v5, v10 + 80);
            }
            v5 += 10;
            ++v8;
          }
          while ( v23 != v5 );
        }
      }
    }
    sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v24, (__int64)v6, (__int64)v24);
    sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v25, (__int64)v6, (__int64)v25);
    sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v26, (__int64)v6, (__int64)v26);
    v11 = (unsigned int)v6[8];
    v12 = v6[8];
    if ( a4 != *v6 > 0 )
    {
      v13 = *(_QWORD *)(a1[94] + 8 * v11);
      if ( !v13 )
      {
LABEL_14:
        v14 = sub_A21980(a1, a2, a3, a4, v12, 1, (int *)v24);
LABEL_15:
        v7 = v14;
LABEL_16:
        sub_2A6060((__int64)v24);
        return v7;
      }
      if ( sub_33D280((__int64)v24, v13 + 16) )
      {
        v12 = v6[8];
        goto LABEL_14;
      }
LABEL_25:
      v7 = 0;
      goto LABEL_16;
    }
    v19 = *(_QWORD *)(a1[93] + 8 * v11);
    if ( v19 )
    {
      if ( !sub_33D280(v19 + 16, (__int64)v24) )
        goto LABEL_25;
      v12 = v6[8];
    }
    v14 = sub_A21980(a1, a2, a3, a4, v12, 0, (int *)v24);
    goto LABEL_15;
  }
  return v7;
}

