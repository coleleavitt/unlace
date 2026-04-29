__int64 __fastcall sub_2D0D70(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r12d
  unsigned __int64 *v5; // r13
  __m128i v6; // kr00_16
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-C0h]
  __m128i v13; // [rsp+18h] [rbp-A8h] BYREF
  __m128i v14; // [rsp+28h] [rbp-98h] BYREF
  __m128 v15; // [rsp+38h] [rbp-88h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-78h] BYREF
  __int128 v17; // [rsp+50h] [rbp-70h]
  __int64 v18; // [rsp+68h] [rbp-58h] BYREF
  __int128 v19; // [rsp+70h] [rbp-50h]
  unsigned __int64 v20; // [rsp+80h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v17 = 0;
  v16 = 0;
  v2 = sub_2B1930(a1, a2, 0);
  v3 = 0;
  if ( netnode_qgetblob(v2, &v16, 1, 0, 100) > 0 )
  {
    v13 = 0u;
    v14 = 0u;
    v15 = (__m128)_mm_unpacklo_epi64((__m128i)v16, (__m128i)(v16 + (unsigned __int64)v17));
    v3 = sub_2D0140(&v13, (char **)&v15, &v14, v15);
    v5 = (unsigned __int64 *)v13.m128i_i64[0];
    v6 = v14;
    v12 = v13.m128i_i64[1];
    if ( (_BYTE)v3 )
    {
      v18 = 0;
      v19 = 0;
      sub_2B28C0(&v18, (__int64)&v13, (const char **)&v14);
      v11 = sub_2B1930(a1, a2, 1);
      netnode_setblob(v11, v18, v19, 0, 100);
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v18);
      }
      if ( !v6.m128i_i64[0] )
      {
LABEL_10:
        if ( !v5 )
          goto LABEL_2;
        if ( !v12 )
          goto LABEL_18;
        v7 = *v5;
        v8 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v8 & 2) != 0 )
          goto LABEL_18;
        v9 = *(_QWORD **)(v8 + 8);
        if ( (*(_BYTE *)v9 & 2) != 0 )
        {
          v10 = *(_QWORD **)(v8 + 16);
          if ( (*(_BYTE *)v10 & 2) != 0 )
          {
LABEL_26:
            sub_2B08E0((__int64 *)(v8 + 32));
            *(_QWORD *)v8 |= 2uLL;
LABEL_16:
            if ( v7 > 3 )
              qfree(v8);
LABEL_18:
            qfree(v5);
            goto LABEL_2;
          }
        }
        else
        {
          sub_2B1240(v9);
          v10 = *(_QWORD **)(v8 + 16);
          if ( (*(_BYTE *)v10 & 2) != 0 )
            goto LABEL_15;
        }
        sub_2B1240(v10);
LABEL_15:
        if ( (*(_BYTE *)v8 & 2) != 0 )
          goto LABEL_16;
        goto LABEL_26;
      }
      if ( v6.m128i_i64[1] )
        sub_2B3000((_QWORD *)(*(_QWORD *)v6.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL));
      else
        v14.m128i_i64[1] = 0;
    }
    else
    {
      if ( !v14.m128i_i64[0] )
        goto LABEL_10;
      if ( v14.m128i_i64[1] )
        sub_2B3000((_QWORD *)(*(_QWORD *)v14.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL));
    }
    sub_2C1110((unsigned __int64 *)&v14);
    qfree(v6.m128i_i64[0]);
    goto LABEL_10;
  }
LABEL_2:
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  return v3;
}
