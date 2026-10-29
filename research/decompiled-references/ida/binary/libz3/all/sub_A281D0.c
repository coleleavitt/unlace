__int64 __fastcall sub_A281D0(_QWORD *a1, __int64 *a2, unsigned int a3, char a4)
{
  _DWORD *v4; // rbx
  _DWORD *v5; // r15
  __int64 result; // rax
  _DWORD *v7; // r14
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  unsigned int v13; // eax
  void *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  int v18; // [rsp+14h] [rbp-5Ch]
  int v19; // [rsp+14h] [rbp-5Ch]
  unsigned int v22; // [rsp+1Ch] [rbp-54h]
  _QWORD v23[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v24[8]; // [rsp+30h] [rbp-40h] BYREF

  v4 = (_DWORD *)*a2;
  v5 = (_DWORD *)(*a2 + 40LL * a3);
  result = *(unsigned int *)(a1[80] + 4LL * (unsigned int)v5[8]);
  if ( (_DWORD)result )
  {
    v23[0] = 0;
    v23[1] = 0;
    v24[0] = 1;
    v24[1] = 0;
    if ( v4 )
    {
      v7 = &v4[10 * *(v4 - 1)];
      if ( v7 != v4 )
      {
        v8 = 0;
        if ( a4 )
        {
          do
          {
            v15 = (unsigned int)v4[8];
            if ( a3 != v8 && (_DWORD)v15 != -1 )
            {
              v19 = v8;
              sub_9AEDC0((__int64)v23, (__int64)v4, *(_QWORD *)(a1[(*v4 > 0) + 77] + 8 * v15) + 16LL);
              v8 = v19;
            }
            v4 += 10;
            ++v8;
          }
          while ( v7 != v4 );
        }
        else
        {
          do
          {
            v9 = (unsigned int)v4[8];
            if ( (_DWORD)v9 != -1 && a3 != v8 )
            {
              v18 = v8;
              sub_9AEDC0((__int64)v23, (__int64)v4, *(_QWORD *)(a1[(*v4 >> 31) + 77] + 8 * v9) + 16LL);
              v8 = v18;
            }
            v4 += 10;
            ++v8;
          }
          while ( v4 != v7 );
        }
      }
    }
    sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v23, (__int64)v5, (__int64)v23);
    v10 = (unsigned int)v5[8];
    v11 = v5[8];
    if ( a4 != *v5 > 0 )
    {
      v12 = *(_QWORD *)(a1[78] + 8 * v10);
      if ( !v12 )
      {
LABEL_13:
        v13 = sub_A27D00(a1, a2, a3, a4, v11, 1, (int *)v23);
LABEL_14:
        v14 = qword_1C7F2C0;
        v22 = v13;
        sub_182CBA0(qword_1C7F2C0, v23);
        sub_182CBA0(v14, v24);
        return v22;
      }
      if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v23, v12 + 16) )
      {
        v11 = v5[8];
        goto LABEL_13;
      }
LABEL_21:
      v13 = 0;
      goto LABEL_14;
    }
    v16 = *(_QWORD *)(a1[77] + 8 * v10);
    if ( v16 )
    {
      if ( !sub_3ED700((__int64)qword_1C7F2C0, v16 + 16, (__int64)v23) )
        goto LABEL_21;
      v11 = v5[8];
    }
    v13 = sub_A27D00(a1, a2, a3, a4, v11, 0, (int *)v23);
    goto LABEL_14;
  }
  return result;
}

