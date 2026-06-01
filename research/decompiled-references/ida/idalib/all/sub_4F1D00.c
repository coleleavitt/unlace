unsigned __int64 __fastcall sub_4F1D00(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rsi
  _QWORD *v8; // r12
  int v9; // eax
  _QWORD *v11; // rdx
  int v12; // r14d
  unsigned __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v18; // eax
  _QWORD *v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rdx
  unsigned __int64 v22; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 *v23; // [rsp+8h] [rbp-50h] BYREF
  __m128i v24; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v25 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(a1 + 1752);
  v6 = v3 + v4;
  v24 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v6);
  if ( v3 < v6 )
  {
    v8 = v5 + 2;
    while ( 1 )
    {
      v22 = unpack_dq(&v24);
      if ( v24.m128i_i64[0] >= (unsigned __int64)v24.m128i_i64[1] )
        break;
      if ( *(_BYTE *)v24.m128i_i64[0]++ )
      {
        v12 = unpack_dd(&v24);
        v18 = unpack_dd(&v24);
        v11 = (_QWORD *)v5[3];
        v19 = v11;
        if ( a3 )
        {
          v12 = v18;
LABEL_9:
          if ( !v11 )
            goto LABEL_27;
          v13 = v22;
          v14 = v5 + 2;
          do
          {
            while ( 1 )
            {
              v15 = v11[2];
              v16 = v11[3];
              if ( v11[4] < v22 )
                break;
              v14 = v11;
              v11 = (_QWORD *)v11[2];
              if ( !v15 )
                goto LABEL_14;
            }
            v11 = (_QWORD *)v11[3];
          }
          while ( v16 );
LABEL_14:
          if ( v14 == v8 )
            goto LABEL_16;
          goto LABEL_15;
        }
        if ( !v11 )
        {
LABEL_27:
          v14 = v5 + 2;
LABEL_16:
          v23 = &v22;
          v14 = sub_4F17D0(v5 + 1, v14, &v23);
          goto LABEL_17;
        }
        v13 = v22;
        v14 = v5 + 2;
        do
        {
          while ( 1 )
          {
            v20 = v19[2];
            v21 = v19[3];
            if ( v19[4] < v22 )
              break;
            v14 = v19;
            v19 = (_QWORD *)v19[2];
            if ( !v20 )
              goto LABEL_25;
          }
          v19 = (_QWORD *)v19[3];
        }
        while ( v21 );
LABEL_25:
        if ( v8 == v14 )
          goto LABEL_16;
LABEL_15:
        if ( v13 < v14[4] )
          goto LABEL_16;
LABEL_17:
        *((_DWORD *)v14 + 10) = v12;
        if ( v24.m128i_i64[0] >= (unsigned __int64)v24.m128i_i64[1] )
          return v25 - __readfsqword(0x28u);
      }
      else
      {
        v9 = unpack_dd(&v24);
        if ( a3 )
        {
LABEL_8:
          v11 = (_QWORD *)v5[3];
          v12 = v9;
          goto LABEL_9;
        }
LABEL_4:
        sub_4F1A60(v5 + 1, v22);
        if ( v24.m128i_i64[0] >= (unsigned __int64)v24.m128i_i64[1] )
          return v25 - __readfsqword(0x28u);
      }
    }
    v9 = unpack_dd(&v24);
    if ( a3 )
      goto LABEL_8;
    goto LABEL_4;
  }
  return v25 - __readfsqword(0x28u);
}
