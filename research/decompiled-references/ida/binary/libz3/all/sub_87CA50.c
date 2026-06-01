__int64 __fastcall sub_87CA50(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r12
  __m128i v3; // kr00_16
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 *v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rdi
  bool v11; // zf
  __int64 *v12; // rbp
  unsigned __int64 v13; // r13
  __int64 v14; // rsi
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // [rsp+0h] [rbp-78h]
  __int64 v21; // [rsp+10h] [rbp-68h] BYREF
  __int64 *v22; // [rsp+18h] [rbp-60h]
  __m128i v23; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v24[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 72);
  v20 = *(_QWORD *)a2;
  sub_87A220(&v23, a1, (__int64)a2);
  v21 = v2;
  v3 = v23;
  v22 = nullptr;
  sub_87AA10((int)v24, a1, a2, (__int64)&v21, v4, v5);
  v6 = v24[0];
  v7 = v21;
  v8 = v22;
  if ( v24[0] == v3.m128i_i64[0] )
  {
    v9 = 1;
  }
  else
  {
    v9 = *(unsigned __int8 *)(a1 + 760);
    if ( !(_BYTE)v9 )
    {
      sub_87C060(a1, v20, 1);
      sub_870E70(a1, v20, v16, v17, v18, v19);
      v6 = v24[0];
    }
  }
  if ( v6 )
  {
    v10 = v24[1];
    v11 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v10, v6);
  }
  if ( v3.m128i_i64[0] )
  {
    v11 = (*(_DWORD *)(v3.m128i_i64[0] + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v3.m128i_i64[1], v3.m128i_i64[0]);
  }
  if ( v8 )
  {
    v12 = v8;
    v13 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
    if ( (unsigned __int64)v8 < v13 )
    {
      do
      {
        while ( 1 )
        {
          v14 = *v12;
          if ( *v12 )
          {
            v11 = (*(_DWORD *)(v14 + 8))-- == 1;
            if ( v11 )
              break;
          }
          if ( (unsigned __int64)++v12 >= v13 )
            goto LABEL_17;
        }
        ++v12;
        sub_15D7BC0(v7, v14);
      }
      while ( (unsigned __int64)v12 < v13 );
    }
LABEL_17:
    sub_186B220(v8 - 1);
  }
  return v9;
}

