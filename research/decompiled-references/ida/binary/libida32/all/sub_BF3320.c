__int64 __fastcall sub_BF3320(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // r12
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdi
  _BYTE v17[32]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v18[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v19; // [rsp+28h] [rbp-70h]
  _BYTE v20[8]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+48h] [rbp-50h]

  v7 = *a2;
  if ( sub_21D5390() != v7 )
  {
    sub_21D5A60(v17, a2);
    sub_21DBB90(v18, v17, a3, a4);
    sub_21D5A90(v20, v18);
    sub_21DE690(a1, v20, v7);
    sub_21D5AF0(v20);
    sub_21D5AF0(v18);
    sub_21D5AF0(v17);
    return a1;
  }
  sub_21DE830(v18, a2, a3, a4);
  sub_21DC190(v20, v18);
  sub_21DC190(a1, v20);
  v9 = v21;
  if ( !v21 )
    goto LABEL_7;
  v10 = 24LL * *(_QWORD *)(v21 - 8);
  v11 = v21 + v10;
  if ( v21 == v21 + v10 )
    goto LABEL_6;
  while ( 1 )
  {
    v9 = v11 - 24;
    v14 = v11 - 24;
    if ( v7 == *(_QWORD *)(v11 - 24) )
      break;
    sub_21D5AF0(v14);
    if ( v21 == v9 )
      goto LABEL_14;
LABEL_11:
    v11 -= 24;
  }
  sub_A2B2D0(v14);
  if ( v21 != v9 )
    goto LABEL_11;
LABEL_14:
  v10 = 24LL * *(_QWORD *)(v11 - 32);
LABEL_6:
  operator delete[]((void *)(v9 - 8), v10 + 8);
LABEL_7:
  if ( v19 )
  {
    v12 = 24LL * *(_QWORD *)(v19 - 8);
    v13 = v19 + v12;
    if ( v19 != v19 + v12 )
    {
      while ( 1 )
      {
        v15 = v13 - 24;
        v16 = v13 - 24;
        if ( v7 == *(_QWORD *)(v13 - 24) )
        {
          sub_A2B2D0(v16);
          if ( v19 == v15 )
          {
LABEL_19:
            operator delete[]((void *)(v13 - 32), 24LL * *(_QWORD *)(v13 - 32) + 8);
            return a1;
          }
        }
        else
        {
          sub_21D5AF0(v16);
          if ( v15 == v19 )
            goto LABEL_19;
        }
        v13 -= 24;
      }
    }
    operator delete[]((void *)(v19 - 8), v12 + 8);
  }
  return a1;
}

