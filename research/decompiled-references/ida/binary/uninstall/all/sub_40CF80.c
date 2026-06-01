__int64 __fastcall sub_40CF80(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v7; // rsi
  int v8; // ebx
  int v9; // r12d
  double v10; // xmm0_8
  double v11; // xmm1_8
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  _BYTE v17[8]; // [rsp+10h] [rbp-58h] BYREF
  double iptr; // [rsp+18h] [rbp-50h] BYREF
  double *v19; // [rsp+20h] [rbp-48h] BYREF
  int v20; // [rsp+2Ch] [rbp-3Ch] BYREF
  _BYTE v21[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( a3 != 2 )
  {
    sub_409E40(a2, 2, a3, a4);
    return 1;
  }
  if ( (unsigned int)sub_47CE30(a2, a4[1], &v19, &v20) )
    return 1;
  if ( v20 == 4 )
  {
    v8 = -1;
    v9 = 0;
    v10 = modf(*v19, &iptr);
    if ( v10 > -0.5 )
    {
      if ( v10 >= 0.5 )
        v8 = -2;
    }
    else
    {
      v9 = 1;
    }
    v11 = iptr;
    if ( iptr < (double)v8 && (double)v9 < iptr )
    {
      v16 = (unsigned int)(int)iptr;
      if ( v10 > -0.5 )
      {
        if ( v10 >= 0.5 )
          ++v16;
        v15 = sub_47BE30(v16);
      }
      else
      {
        v15 = sub_47BE30(v16 - 1);
      }
    }
    else
    {
      v12 = (__int64)v21;
      v13 = sub_493E90(a2, v21, iptr);
      v14 = 1;
      if ( v13 )
        return 1;
      if ( v10 <= -0.5 )
      {
        v12 = 1;
        sub_4B2A30(v21, 1, v21, -0.5, v11, v10);
      }
      else if ( v10 >= 0.5 )
      {
        v12 = 1;
        sub_4B0260(v21, 1, v21, -0.5, v11, v10);
      }
      v15 = sub_47CCC0(v21, v12, v14);
    }
    v7 = v15;
  }
  else
  {
    if ( v20 == 5 )
    {
      sub_47BA50(a2, a4[1], v17);
      return 1;
    }
    v7 = a4[1];
  }
  sub_48AFD0(a2, v7);
  return 0;
}

