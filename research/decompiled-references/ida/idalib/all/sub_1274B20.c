__int64 __fastcall sub_1274B20(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  bool v3; // zf
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  _BYTE *v10; // rax
  __int64 v11; // rdx
  unsigned __int8 v12; // [rsp+Fh] [rbp-E9h]
  void *v13[2]; // [rsp+10h] [rbp-E8h] BYREF
  _BYTE v14[16]; // [rsp+20h] [rbp-D8h] BYREF
  void *v15[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v17; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v18[16]; // [rsp+60h] [rbp-98h] BYREF
  char v19; // [rsp+70h] [rbp-88h]
  void *v20[2]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v21; // [rsp+90h] [rbp-68h] BYREF

  v2 = 1;
  v3 = a1[62] == 0;
  v14[0] = 0;
  v13[1] = nullptr;
  v13[0] = v14;
  if ( v3 )
  {
    v6 = (_BYTE *)a1[118];
    v7 = (__int64)&v6[a1[119]];
    v17.m128i_i64[0] = (__int64)v18;
    sub_1270B70(&v17, v6, v7);
    sub_22B9ED0(v20, &v17);
    if ( (_BYTE *)v17.m128i_i64[0] != v18 )
      operator delete((void *)v17.m128i_i64[0]);
    v8 = sub_22B7480(a2);
    sub_22BAF00(v20, v8, v9);
    v10 = (_BYTE *)sub_228A4B0(a1[13], a1[14], 0);
    v15[0] = v16;
    sub_1270C30(v15, v10, (__int64)&v10[v11]);
    sub_1274160(&v17, (__int64)a1, (__int64)v20, a2, v13);
    v12 = v19 & 1;
    if ( (v19 & 1) != 0 )
    {
      v2 = sub_1270CF0((__int64)v15);
      if ( (_BYTE)v2 )
      {
        v2 = 0;
      }
      else
      {
        sub_1273940(&v17, (__int64)v20, a2);
        if ( (v19 & 1) == 0 )
        {
          if ( (_BYTE *)v17.m128i_i64[0] != v18 )
            operator delete((void *)v17.m128i_i64[0]);
          v2 = v12;
        }
      }
    }
    else
    {
      if ( (_BYTE *)v17.m128i_i64[0] != v18 )
        operator delete((void *)v17.m128i_i64[0]);
      v2 = 1;
    }
    if ( v15[0] != v16 )
      operator delete(v15[0]);
    if ( v20[0] != &v21 )
      operator delete(v20[0]);
    if ( v13[0] != v14 )
      operator delete(v13[0]);
  }
  return v2;
}
