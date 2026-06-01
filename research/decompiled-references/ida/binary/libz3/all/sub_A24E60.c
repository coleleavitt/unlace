__int64 __fastcall sub_A24E60(_QWORD *a1, __int64 *a2, unsigned int a3, char a4)
{
  _DWORD *v5; // r15
  _DWORD *v6; // r14
  __int64 result; // rax
  _DWORD *v8; // r12
  int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rsi
  unsigned int v14; // eax
  void *v15; // rbx
  void *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v20; // [rsp+8h] [rbp-98h]
  __int64 v21; // [rsp+8h] [rbp-98h]
  unsigned int v24; // [rsp+20h] [rbp-80h]
  _QWORD v25[2]; // [rsp+30h] [rbp-70h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-60h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-50h] BYREF
  _QWORD v28[8]; // [rsp+60h] [rbp-40h] BYREF

  v5 = (_DWORD *)*a2;
  v6 = (_DWORD *)(*a2 + 40LL * a3);
  result = *(unsigned int *)(a1[88] + 4LL * (unsigned int)v6[8]);
  if ( (_DWORD)result )
  {
    v25[0] = 0;
    v25[1] = 0;
    v26[0] = 1;
    v26[1] = 0;
    v27[0] = 0;
    v27[1] = 0;
    v28[0] = 1;
    v28[1] = 0;
    if ( v5 )
    {
      v8 = &v5[10 * *(v5 - 1)];
      if ( v8 != v5 )
      {
        v9 = 0;
        if ( a4 )
        {
          do
          {
            v17 = (unsigned int)v5[8];
            if ( a3 != v9 && (_DWORD)v17 != -1 )
            {
              v21 = *(_QWORD *)(a1[(*v5 > 0) + 85] + 8 * v17);
              sub_9AEDC0((__int64)v25, (__int64)v5, v21 + 16);
              sub_9AEDC0((__int64)v27, (__int64)v5, v21 + 48);
            }
            v5 += 10;
            ++v9;
          }
          while ( v8 != v5 );
        }
        else
        {
          do
          {
            v10 = (unsigned int)v5[8];
            if ( (_DWORD)v10 != -1 && a3 != v9 )
            {
              v20 = *(_QWORD *)(a1[(*v5 >> 31) + 85] + 8 * v10);
              sub_9AEDC0((__int64)v25, (__int64)v5, v20 + 16);
              sub_9AEDC0((__int64)v27, (__int64)v5, v20 + 48);
            }
            v5 += 10;
            ++v9;
          }
          while ( v8 != v5 );
        }
      }
    }
    sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v25, (__int64)v6, (__int64)v25);
    sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v27, (__int64)v6, (__int64)v27);
    v11 = (unsigned int)v6[8];
    v12 = v6[8];
    if ( a4 != *v6 > 0 )
    {
      v13 = *(_QWORD *)(a1[86] + 8 * v11);
      if ( !v13 )
      {
LABEL_13:
        v14 = sub_A24800(a1, a2, a3, a4, v12, 1, (int *)v25);
LABEL_14:
        v15 = qword_1C7F2C0;
        v24 = v14;
        sub_182CBA0(qword_1C7F2C0, v27);
        sub_182CBA0(v15, v28);
        v16 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v25);
        sub_182CBA0(v16, v26);
        return v24;
      }
      if ( sub_927C80((__int64)v25, v13 + 16) )
      {
        v12 = v6[8];
        goto LABEL_13;
      }
LABEL_21:
      v14 = 0;
      goto LABEL_14;
    }
    v18 = *(_QWORD *)(a1[85] + 8 * v11);
    if ( v18 )
    {
      if ( !sub_927C80(v18 + 16, (__int64)v25) )
        goto LABEL_21;
      v12 = v6[8];
    }
    v14 = sub_A24800(a1, a2, a3, a4, v12, 0, (int *)v25);
    goto LABEL_14;
  }
  return result;
}

