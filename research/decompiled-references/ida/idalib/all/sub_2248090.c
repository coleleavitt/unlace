__int64 __fastcall sub_2248090(__int64 a1, double *a2, unsigned int a3)
{
  void *v4; // r15
  unsigned int v5; // ebx
  _QWORD *v6; // rax
  __int64 v8; // rsi
  __int64 v9; // r12
  _QWORD *v10; // [rsp+10h] [rbp-88h] BYREF
  __int64 v11; // [rsp+18h] [rbp-80h] BYREF
  __m128i v12[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+40h] [rbp-58h] BYREF
  char v14; // [rsp+48h] [rbp-50h]

  v4 = sub_21F90B0();
  sub_21FBFD0((__int64)&v13, 0.0);
  sub_22023D0((__int64)v12, &v13, v4);
  sub_21F9830(&v13);
  sub_2203E70((__int64)&v13, v12, *(char **)a1, *(_QWORD *)(a1 + 8), 1);
  v5 = v14 & 1;
  if ( (v14 & 1) == 0 )
  {
    if ( (_DWORD)v13 )
    {
      v5 = 1;
      if ( !(_BYTE)a3 )
        goto LABEL_5;
      v5 = a3;
      if ( (v13 & 0x10) == 0 )
        goto LABEL_5;
    }
LABEL_11:
    v5 = 0;
    *a2 = sub_2202D40(v12);
    goto LABEL_5;
  }
  v6 = (_QWORD *)v13;
  v13 = 0;
  if ( !v6 )
    goto LABEL_11;
  v10 = v6;
  sub_A05760(&v11, &v10);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
LABEL_5:
  sub_13E4420(&v13);
  if ( (void *)v12[0].m128i_i64[0] == sub_21F90D0() )
  {
    if ( v12[0].m128i_i64[1] )
    {
      v8 = 24LL * *(_QWORD *)(v12[0].m128i_i64[1] - 8);
      v9 = v12[0].m128i_i64[1] + v8;
      if ( v12[0].m128i_i64[1] == v12[0].m128i_i64[1] + v8 )
      {
        operator delete[]((void *)(v12[0].m128i_i64[1] - 8), v8 + 8);
      }
      else
      {
        while ( 1 )
        {
          sub_9955A0((_QWORD *)(v9 - 24));
          if ( v12[0].m128i_i64[1] == v9 - 24 )
            break;
          v9 -= 24;
        }
        operator delete[]((void *)(v9 - 32), 24LL * *(_QWORD *)(v9 - 32) + 8);
      }
    }
  }
  else
  {
    sub_21F9830(v12);
  }
  return v5;
}
