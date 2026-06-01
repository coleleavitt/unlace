__int64 __fastcall sub_22AD2E0(__int64 a1, __int32 a2, char ***a3)
{
  __m128i *v4; // rax
  __m128i *v5; // r13
  char **v6; // rbx
  char **v7; // rax
  void *v8; // rdi
  char *v9; // rax
  char *v10; // rdx
  size_t v11; // r13
  char *v12; // r12
  __int64 v13; // rcx
  const char **v14; // rdi
  const char **v15; // r15
  const char **v16; // rax
  const char **v17; // rbp
  __int64 v18; // rbx
  void *v19; // rdi
  __int64 v20; // rbp
  __m128i *v22; // r12
  __m128i *v23; // r15
  char v24; // [rsp+7h] [rbp-B1h]
  char **v25; // [rsp+8h] [rbp-B0h]
  const char *s1; // [rsp+18h] [rbp-A0h]
  __m128i *v27; // [rsp+20h] [rbp-98h]
  __m128i *v29; // [rsp+30h] [rbp-88h]
  __m128i *v30; // [rsp+48h] [rbp-70h] BYREF
  char *v31; // [rsp+50h] [rbp-68h] BYREF
  char *v32; // [rsp+58h] [rbp-60h]
  void *v33; // [rsp+60h] [rbp-58h] BYREF
  __int64 v34; // [rsp+68h] [rbp-50h]
  _BYTE v35[72]; // [rsp+70h] [rbp-48h] BYREF

  v4 = (__m128i *)operator new(0x48u);
  v4->m128i_i32[0] = a2;
  v5 = v4;
  v4 += 2;
  v6 = *a3;
  *(__int64 *)((char *)v4[-2].m128i_i64 + 4) = 0;
  *(__int64 *)((char *)&v4[-2].m128i_i64[1] + 4) = 0;
  v4->m128i_i32[0] = 0;
  v4->m128i_i64[1] = 0;
  v29 = v4;
  v5[3].m128i_i64[0] = (__int64)v4;
  v5[3].m128i_i64[1] = (__int64)v4;
  v7 = a3[1];
  v5[4].m128i_i64[0] = 0;
  v25 = v7;
  if ( v6 != v7 )
  {
    v27 = v5;
    while ( 1 )
    {
      v9 = *v6;
      v10 = v6[1];
      v24 = **v6;
      if ( !v10 )
        break;
      v11 = (size_t)(v10 - 1);
      v12 = v9 + 1;
      v31 = v9 + 1;
      v32 = v10 - 1;
      if ( (unsigned __int64)(v10 - 1) <= 0xC
        || *(_QWORD *)(v9 + 1) != 0x656D697265707865LL
        || *(_DWORD *)(v9 + 9) != 1818326126
        || v9[13] != 45 )
      {
        goto LABEL_14;
      }
      v11 = (size_t)(v10 - 14);
      v12 = v9 + 14;
      v13 = 66;
      v31 = v9 + 14;
      v14 = (const char **)&off_2BF3DE0;
      v32 = v10 - 14;
LABEL_15:
      v15 = &v14[v13];
      v16 = sub_22A8660(v14, (__int64)&v14[v13], (__int64)&v31);
      v17 = v16;
      if ( v15 == v16 )
        goto LABEL_10;
      if ( *v16 )
      {
        s1 = *v16;
        if ( strlen(*v16) != v11 )
          goto LABEL_10;
        if ( v11 )
        {
          if ( memcmp(s1, v12, v11) )
            goto LABEL_10;
          if ( v24 == 43 )
            goto LABEL_34;
LABEL_7:
          v33 = v35;
          sub_22A8AD0(&v33, v12, (__int64)&v12[v11]);
          goto LABEL_8;
        }
      }
      else if ( v11 )
      {
        goto LABEL_10;
      }
      if ( v24 == 43 )
      {
        if ( v12 )
        {
LABEL_34:
          v33 = v35;
          sub_22A8AD0(&v33, v12, (__int64)&v12[v11]);
        }
        else
        {
          v35[0] = 0;
          v33 = v35;
          v34 = 0;
        }
        v22 = v29;
        v23 = (__m128i *)v27[2].m128i_i64[1];
        if ( !v23 )
          goto LABEL_42;
        do
        {
          while ( !sub_2234B00((__int64)v23[2].m128i_i64, (__int64)&v33) )
          {
            v22 = v23;
            v23 = (__m128i *)v23[1].m128i_i64[0];
            if ( !v23 )
              goto LABEL_40;
          }
          v23 = (__m128i *)v23[1].m128i_i64[1];
        }
        while ( v23 );
LABEL_40:
        if ( v29 == v22 || sub_2234B00((__int64)&v33, (__int64)v22[2].m128i_i64) )
        {
LABEL_42:
          v30 = (__m128i *)&v33;
          v22 = sub_22ABC80(&v27[1].m128i_i64[1], v22, &v30);
        }
        v22[4].m128i_i64[0] = (__int64)v17[1];
        v8 = v33;
        if ( v33 == v35 )
          goto LABEL_10;
LABEL_9:
        operator delete(v8);
        goto LABEL_10;
      }
      if ( v12 )
        goto LABEL_7;
      v35[0] = 0;
      v33 = v35;
      v34 = 0;
LABEL_8:
      sub_22AB990(&v27[1].m128i_i64[1], (__int64)&v33);
      v8 = v33;
      if ( v33 != v35 )
        goto LABEL_9;
LABEL_10:
      v6 += 4;
      if ( v25 == v6 )
      {
        v5 = v27;
        goto LABEL_23;
      }
    }
    v31 = *v6;
    v12 = v9;
    v11 = 0;
    v32 = nullptr;
LABEL_14:
    v13 = 402;
    v14 = (const char **)&off_2BF4000;
    goto LABEL_15;
  }
LABEL_23:
  sub_22ABE30((__int64)v5);
  sub_22AC760(v5);
  sub_22A9910((__int64)v5);
  sub_22AA030((std::_V2 *)&v33, v5);
  if ( v33 )
  {
    v18 = v5[2].m128i_i64[1];
    *(_QWORD *)a1 = v33;
    *(_BYTE *)(a1 + 8) |= 1u;
    if ( v18 )
    {
      while ( 1 )
      {
        sub_1050CC0((__int64)&v5[1].m128i_i64[1], *(_QWORD **)(v18 + 24));
        v19 = *(void **)(v18 + 32);
        v20 = *(_QWORD *)(v18 + 16);
        if ( v19 == (void *)(v18 + 48) )
        {
          operator delete((void *)v18);
          if ( !v20 )
            break;
        }
        else
        {
          operator delete(v19);
          operator delete((void *)v18);
          if ( !v20 )
            break;
        }
        v18 = v20;
      }
    }
    operator delete(v5, 0x48u);
  }
  else
  {
    *(_QWORD *)a1 = v5;
    *(_BYTE *)(a1 + 8) &= ~1u;
  }
  return a1;
}
