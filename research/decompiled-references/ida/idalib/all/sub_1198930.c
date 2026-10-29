_BYTE *__fastcall sub_1198930(__int64 a1, char a2)
{
  int **v3; // r12
  _BYTE *v4; // rdi
  _BYTE *v5; // rcx
  int *v6; // rax
  int v7; // edx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _BYTE *result; // rax
  int *v11; // rax
  int *v12; // rax
  __m128i v13; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v14[16]; // [rsp+10h] [rbp-58h] BYREF
  __m128i v15; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v16[56]; // [rsp+30h] [rbp-38h] BYREF

  v3 = *(int ***)(a1 + 16);
  v4 = *(_BYTE **)a1;
  v5 = *(_BYTE **)(a1 + 8);
  v6 = *v3;
  v7 = **v3;
  if ( a2 )
  {
    *v4 = 0;
    *v5 = 0;
    if ( v7 != 3 )
    {
      sub_11BBBE0(&v15);
      sub_E7ED70(&v13, "-fcomplex-arithmetic=", &v15);
      if ( (_BYTE *)v15.m128i_i64[0] != v16 )
        operator delete((void *)v15.m128i_i64[0]);
      v12 = v3[2];
      if ( *((_QWORD *)v12 + 1) )
      {
        v15.m128i_i64[0] = (__int64)v16;
        sub_1189220(&v15, *(_BYTE **)v12, *(_QWORD *)v12 + *((_QWORD *)v12 + 1));
      }
      else
      {
        sub_11979A0(&v15, **v3);
      }
      sub_1189F50((__int64 *)v3[1], (const void **)&v15, (const void **)&v13);
      if ( (_BYTE *)v15.m128i_i64[0] != v16 )
        operator delete((void *)v15.m128i_i64[0]);
      if ( (_BYTE *)v13.m128i_i64[0] != v14 )
        operator delete((void *)v13.m128i_i64[0]);
      v6 = *v3;
    }
    *v6 = 3;
  }
  else
  {
    *v4 = 1;
    *v5 = 1;
    if ( v7 == 2 )
    {
      *v6 = 2;
    }
    else
    {
      sub_11BBBE0(&v15);
      sub_E7ED70(&v13, "-fcomplex-arithmetic=", &v15);
      if ( (_BYTE *)v15.m128i_i64[0] != v16 )
        operator delete((void *)v15.m128i_i64[0]);
      v11 = v3[2];
      if ( *((_QWORD *)v11 + 1) )
      {
        v15.m128i_i64[0] = (__int64)v16;
        sub_1189220(&v15, *(_BYTE **)v11, *(_QWORD *)v11 + *((_QWORD *)v11 + 1));
      }
      else
      {
        sub_11979A0(&v15, **v3);
      }
      sub_1189F50((__int64 *)v3[1], (const void **)&v15, (const void **)&v13);
      if ( (_BYTE *)v15.m128i_i64[0] != v16 )
        operator delete((void *)v15.m128i_i64[0]);
      if ( (_BYTE *)v13.m128i_i64[0] != v14 )
        operator delete((void *)v13.m128i_i64[0]);
      **v3 = 2;
    }
  }
  **(_BYTE **)(a1 + 24) = 0;
  **(_BYTE **)(a1 + 32) = 1;
  **(_BYTE **)(a1 + 40) = 1;
  **(_BYTE **)(a1 + 48) = 1;
  **(_BYTE **)(a1 + 56) = 0;
  **(_BYTE **)(a1 + 64) = 0;
  **(_BYTE **)(a1 + 72) = 0;
  v8 = *(_QWORD **)(a1 + 80);
  *v8 = &byte_22F0C30;
  v8[1] = 0;
  v9 = *(_QWORD **)(a1 + 88);
  *v9 = "fast";
  v9[1] = 4;
  result = *(_BYTE **)(a1 + 96);
  *result = 1;
  return result;
}
