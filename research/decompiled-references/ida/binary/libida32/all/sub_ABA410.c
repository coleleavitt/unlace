char __fastcall sub_ABA410(__int64 a1)
{
  _WORD *v2; // rbx
  __int64 v3; // rdi
  __int16 v4; // cx
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  __int64 v7; // r12
  __int64 v8; // r13
  __m128i v10; // [rsp+0h] [rbp-78h] BYREF
  __int64 v11; // [rsp+10h] [rbp-68h]
  __m128i v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h]

  v2 = *(_WORD **)a1;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( ((*v2 + 509) & 0x1FFu) <= 0x7E && *(_DWORD *)(v3 + 4) == 1 )
    {
      v2 = (_WORD *)sub_BD9DB0(v2);
      LOBYTE(v5) = sub_E49030(*(_QWORD *)(a1 + 8) + 8LL, v2);
      if ( !v2 )
        return v5;
    }
    else
    {
      sub_E49030(v3 + 8, v2);
    }
    sub_AB9F70(*(_QWORD *)(a1 + 8), (__int64)v2);
    v4 = *v2 & 0x1FF;
    LOBYTE(v5) = v4 == 140 || v4 == 15 || v4 == 57 || v4 == 245;
    if ( !(_BYTE)v5 && v4 != 134 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(v5 + 4) != 1 )
        goto LABEL_14;
      LOBYTE(v5) = v4 == 252;
      v6 = (v4 + 461) & 0x1FF;
      if ( v6 <= 0x32u )
        LODWORD(v5) = (0x407C000000001uLL >> v6) & 1 | v5;
      if ( !(_BYTE)v5 )
      {
LABEL_14:
        sub_AA8800((__int64)&v12, (__int64)v2);
        v7 = v14;
        v8 = v15;
        v10 = _mm_load_si128(&v12);
        v11 = v13;
        while ( 1 )
        {
          v5 = v10.m128i_i64[0];
          if ( v10.m128i_i64[0] != v7 )
            break;
          if ( v8 == v10.m128i_i64[1] )
            return v5;
          if ( (v10.m128i_i8[8] & 3) != 0 )
            goto LABEL_20;
LABEL_16:
          sub_ABA5B0(*(_QWORD *)(a1 + 8) + 8LL, 0, 0, *(_QWORD *)v5, *(_QWORD *)(a1 + 8));
          sub_AA88F0(&v10);
        }
        if ( (v10.m128i_i8[8] & 3) == 0 )
          goto LABEL_16;
LABEL_20:
        v5 = sub_ECEDF0(&v10);
        goto LABEL_16;
      }
    }
  }
  else
  {
    LOBYTE(v5) = sub_E49030(v3 + 8, 0);
  }
  return v5;
}

