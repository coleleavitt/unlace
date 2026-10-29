__int64 __fastcall sub_87C810(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r14
  unsigned int *v3; // rbp
  unsigned int v4; // r12d
  __m128i v6; // kr00_16
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r14
  __int64 *v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  unsigned __int64 v14; // r13
  __int64 *v15; // rbx
  __int64 v16; // rsi
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // [rsp+10h] [rbp-68h] BYREF
  __int64 *v22; // [rsp+18h] [rbp-60h]
  __m128i v23; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v24[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 72);
  v3 = (unsigned int *)sub_7E4F00(a1, a2);
  v4 = *(unsigned __int8 *)(sub_7E4EB0(a1) + 429);
  if ( (_BYTE)v4 )
  {
    sub_87A220(&v23, a1, (__int64)v3);
    v21 = v2;
    v6 = v23;
    v22 = nullptr;
    sub_87AA10((int)v24, a1, v3, (__int64)&v21, v7, v8);
    v9 = v21;
    v10 = v22;
    if ( v24[0] == v6.m128i_i64[0] )
    {
      v11 = v6.m128i_i64[0];
    }
    else
    {
      sub_1674290(a1 + 128, v24[0]);
      sub_1674290(a1 + 128, v6.m128i_i64[0]);
      v4 = sub_87C680(a1, a2, &v21, v6.m128i_i64[0], v24[0]);
      if ( (_BYTE)v4 )
      {
        v4 = sub_87A350((_QWORD *)a1, (__int64)a2, (__int64)&v21, v6.m128i_i64[0]);
        if ( (_BYTE)v4 )
        {
          v4 = *(unsigned __int8 *)(a1 + 760);
          if ( !(_BYTE)v4 )
          {
            sub_87C060(a1, (__int64)a2, 1);
            sub_870E70(a1, (__int64)a2, v17, v18, v19, v20);
          }
        }
      }
      v11 = v24[0];
    }
    if ( v11 )
    {
      v12 = v24[1];
      v13 = (*(_DWORD *)(v11 + 8))-- == 1;
      if ( v13 )
        sub_15D7BC0(v12, v11);
    }
    if ( v6.m128i_i64[0] )
    {
      v13 = (*(_DWORD *)(v6.m128i_i64[0] + 8))-- == 1;
      if ( v13 )
        sub_15D7BC0(v6.m128i_i64[1], v6.m128i_i64[0]);
    }
    if ( v10 )
    {
      v14 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
      if ( (unsigned __int64)v10 < v14 )
      {
        v15 = v10;
        do
        {
          while ( 1 )
          {
            v16 = *v15;
            if ( *v15 )
            {
              v13 = (*(_DWORD *)(v16 + 8))-- == 1;
              if ( v13 )
                break;
            }
            if ( (unsigned __int64)++v15 >= v14 )
              goto LABEL_19;
          }
          ++v15;
          sub_15D7BC0(v9, v16);
        }
        while ( (unsigned __int64)v15 < v14 );
      }
LABEL_19:
      sub_186B220(v10 - 1);
    }
  }
  return v4;
}

