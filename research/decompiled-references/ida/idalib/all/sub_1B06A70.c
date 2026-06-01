void __fastcall sub_1B06A70(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // r13
  unsigned int v7; // eax
  int v8; // eax
  __int64 *v9; // r14
  __int64 *v10; // r12
  _QWORD *v11; // r15
  unsigned int v12; // ebx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rsi
  __int64 v18; // rax
  _QWORD v20[2]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD *v21; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-D0h]
  __int64 *v23[25]; // [rsp+40h] [rbp-C8h] BYREF

  v20[0] = a3;
  v20[1] = a4;
  sub_105CB60(v23, &qword_2CFC8C0[dword_2CFC8C8[0]], 1);
  v6 = v23[0];
  v7 = sub_2244B30(a3, a4);
  v8 = sub_2244E60(&qword_2CFC8C0, a3, a4, v7);
  if ( v8 == -1 )
    sub_105CB60(v23, &qword_2CFC8C0[dword_2CFC8C8[0]], 1);
  else
    sub_105CB60(v23, &qword_2CFC8C0[v8], 1);
  if ( v23[0] == v6 )
  {
    v21 = nullptr;
    v22 = 0;
    sub_A45C10(v23, qword_2CFC8C0, dword_2CFC8C8[0] == 0);
    v9 = v23[0];
    sub_A45C10(v23, &qword_2CFC8C0[dword_2CFC8C8[0]], 1);
    v10 = v23[0];
    if ( v9 != v23[0] )
    {
      v11 = (_QWORD *)*v9;
      v12 = 3;
      do
      {
        while ( 1 )
        {
          v13 = sub_2246430(v20, v11 + 1, *v11, 1, 0);
          if ( v13 < v12 )
          {
            v14 = *v11;
            v21 = v11 + 1;
            v12 = v13;
            v22 = v14;
          }
          v11 = (_QWORD *)v9[1];
          v15 = v9 + 1;
          if ( v11 == (_QWORD *)-8LL || !v11 )
            break;
          ++v9;
          if ( v10 == v15 )
            goto LABEL_14;
        }
        v16 = v9 + 2;
        do
        {
          do
          {
            v11 = (_QWORD *)*v16;
            v9 = v16++;
          }
          while ( v11 == (_QWORD *)-8LL );
        }
        while ( !v11 );
      }
      while ( v10 != v9 );
    }
LABEL_14:
    v17 = (__int64 *)(a1 + 8);
    if ( v22 )
    {
      sub_168B9F0((__int64)v23, v17, a2, 0x1C2Du, 0);
      v18 = sub_1682BA0((__int64)v23, (__int64)v20);
      sub_1682BA0(v18, (__int64)&v21);
      sub_15F7200(v23);
    }
    else
    {
      sub_168B9F0((__int64)v23, v17, a2, 0x1C2Cu, 0);
      sub_1682BA0((__int64)v23, (__int64)v20);
      sub_15F7200(v23);
    }
  }
}
