__int64 __fastcall sub_2D55F0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned __int64 *v4; // r13
  __m128i v5; // kr00_16
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  __int64 v10; // [rsp+0h] [rbp-C0h]
  __m128i v11; // [rsp+18h] [rbp-A8h] BYREF
  __m128i v12; // [rsp+28h] [rbp-98h] BYREF
  __m128 v13; // [rsp+38h] [rbp-88h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-78h]
  __int128 v15; // [rsp+50h] [rbp-70h]
  __int64 v16; // [rsp+68h] [rbp-58h] BYREF
  __int128 v17; // [rsp+70h] [rbp-50h]
  unsigned __int64 v18; // [rsp+80h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v15 = 0;
  v14 = 0;
  sub_2B61B0(a1, a2, 0);
  v2 = 0;
  if ( netnode_qgetblob() > 0 )
  {
    v11 = 0u;
    v12 = 0u;
    v13 = (__m128)_mm_unpacklo_epi64((__m128i)v14, (__m128i)(v14 + (unsigned __int64)v15));
    v2 = sub_2D49C0(&v11, (char **)&v13, &v12, v13);
    v4 = (unsigned __int64 *)v11.m128i_i64[0];
    v5 = v12;
    v10 = v11.m128i_i64[1];
    if ( (_BYTE)v2 )
    {
      v16 = 0;
      v17 = 0;
      sub_2B7140(&v16, &v11, &v12);
      sub_2B61B0(a1, a2, 1);
      netnode_setblob();
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree();
      }
      if ( !v5.m128i_i64[0] )
      {
LABEL_10:
        if ( !v4 )
          goto LABEL_2;
        if ( !v10 )
          goto LABEL_18;
        v6 = *v4;
        v7 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v7 & 2) != 0 )
          goto LABEL_18;
        v8 = *(_QWORD **)(v7 + 8);
        if ( (*(_BYTE *)v8 & 2) != 0 )
        {
          v9 = *(_QWORD **)(v7 + 16);
          if ( (*(_BYTE *)v9 & 2) != 0 )
          {
LABEL_26:
            sub_2B5160((_QWORD *)(v7 + 32));
            *(_QWORD *)v7 |= 2uLL;
LABEL_16:
            if ( v6 > 3 )
              qfree();
LABEL_18:
            qfree();
            goto LABEL_2;
          }
        }
        else
        {
          sub_2B5AC0(v8);
          v9 = *(_QWORD **)(v7 + 16);
          if ( (*(_BYTE *)v9 & 2) != 0 )
            goto LABEL_15;
        }
        sub_2B5AC0(v9);
LABEL_15:
        if ( (*(_BYTE *)v7 & 2) != 0 )
          goto LABEL_16;
        goto LABEL_26;
      }
      if ( v5.m128i_i64[1] )
        sub_2B7880((_QWORD *)(*(_QWORD *)v5.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL));
      else
        v12.m128i_i64[1] = 0;
    }
    else
    {
      if ( !v12.m128i_i64[0] )
        goto LABEL_10;
      if ( v12.m128i_i64[1] )
        sub_2B7880((_QWORD *)(*(_QWORD *)v12.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL));
    }
    sub_2C5990((unsigned __int64 *)&v12);
    qfree();
    goto LABEL_10;
  }
LABEL_2:
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return v2;
}
