void __fastcall sub_118AE30(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r12
  size_t v10; // r14
  size_t v11; // rax
  size_t v12; // rbx
  unsigned __int32 v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbp
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int128 v25; // [rsp+8h] [rbp-110h]
  __int64 *v27; // [rsp+20h] [rbp-F8h]
  __int64 v28; // [rsp+20h] [rbp-F8h]
  __int64 v29; // [rsp+28h] [rbp-F0h]
  __m128i v30[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int16 v31; // [rsp+50h] [rbp-C8h]
  __m128i v32[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int16 v33; // [rsp+80h] [rbp-98h]
  __m128i v34[8]; // [rsp+90h] [rbp-88h] BYREF

  v25 = __PAIR128__(a4, a3);
  v7 = **(char ***)(a2 + 48);
  v8 = j__strlen("128");
  v9 = v8;
  if ( v7 )
  {
    v10 = j__strlen(v7);
    v27 = *(__int64 **)(*(_QWORD *)(*a1 + 24LL) + 8LL);
    if ( v10 == v9 )
    {
      if ( !v10 )
        goto LABEL_33;
      if ( !memcmp(v7, "128", v10) )
      {
LABEL_10:
        v9 = v10;
        goto LABEL_11;
      }
      if ( v10 != j__strlen("256") )
      {
LABEL_6:
        if ( v10 != j__strlen("512") )
          goto LABEL_7;
        goto LABEL_25;
      }
    }
    else
    {
      if ( v10 != j__strlen("256") )
      {
        if ( v10 != j__strlen("512") )
        {
LABEL_7:
          if ( v10 == j__strlen("1024") )
          {
            if ( !v10 )
              goto LABEL_33;
LABEL_9:
            if ( !memcmp(v7, "1024", v10) )
              goto LABEL_10;
            if ( v10 != j__strlen("2048") )
            {
LABEL_55:
              if ( j__strlen("128+") == v10 )
              {
                if ( !v10 )
                  goto LABEL_33;
                goto LABEL_57;
              }
              goto LABEL_31;
            }
LABEL_29:
            if ( !memcmp(v7, "2048", v10) )
              goto LABEL_10;
            if ( v10 == j__strlen("128+") )
            {
LABEL_57:
              if ( !memcmp(v7, "128+", v10) )
                goto LABEL_10;
              if ( v10 == j__strlen("256+") )
              {
LABEL_59:
                if ( !memcmp(v7, "256+", v10) )
                  goto LABEL_10;
                if ( v10 == j__strlen("512+") )
                {
LABEL_61:
                  if ( !memcmp(v7, "512+", v10) )
                    goto LABEL_10;
                  if ( j__strlen("1024+") == v10 )
                  {
LABEL_63:
                    if ( !memcmp(v7, "1024+", v10) )
                      goto LABEL_10;
                    if ( j__strlen("2048+") == v10 )
                    {
LABEL_65:
                      if ( !memcmp(v7, "2048+", v10) )
                        goto LABEL_10;
                      if ( j__strlen("scalable") != v10 )
                      {
LABEL_68:
                        sub_FC70B0((__int64)v34, *v27, 0, 497);
                        sub_AEC220((unsigned __int8 **)v34, *(_BYTE **)(a2 + 24), *(_QWORD *)(a2 + 32));
                        sub_AEC220((unsigned __int8 **)v34, v7, v10);
                        sub_AEA040((__int64)v34);
                        return;
                      }
LABEL_67:
                      if ( !memcmp(v7, "scalable", v10) )
                        return;
                      goto LABEL_68;
                    }
LABEL_75:
                    if ( j__strlen("scalable") != v10 )
                      goto LABEL_68;
                    if ( !v10 )
                      return;
                    goto LABEL_67;
                  }
LABEL_72:
                  if ( j__strlen("2048+") != v10 )
                    goto LABEL_75;
                  if ( v10 )
                    goto LABEL_65;
                  goto LABEL_33;
                }
LABEL_69:
                if ( j__strlen("1024+") == v10 )
                {
                  if ( v10 )
                    goto LABEL_63;
                  goto LABEL_33;
                }
                goto LABEL_72;
              }
              goto LABEL_46;
            }
LABEL_31:
            if ( j__strlen("256+") == v10 )
            {
              if ( v10 )
                goto LABEL_59;
LABEL_33:
              v9 = 0;
              goto LABEL_11;
            }
LABEL_46:
            if ( j__strlen("512+") != v10 )
              goto LABEL_69;
            if ( v10 )
              goto LABEL_61;
            goto LABEL_33;
          }
LABEL_27:
          if ( v10 != j__strlen("2048") )
            goto LABEL_55;
          if ( !v10 )
            goto LABEL_33;
          goto LABEL_29;
        }
        if ( !v10 )
          goto LABEL_33;
LABEL_25:
        if ( !memcmp(v7, "512", v10) )
          goto LABEL_10;
        if ( v10 == j__strlen("1024") )
          goto LABEL_9;
        goto LABEL_27;
      }
      if ( !v10 )
        goto LABEL_33;
    }
    if ( !memcmp(v7, "256", v10) )
      goto LABEL_10;
    goto LABEL_6;
  }
  if ( v8 )
  {
    v10 = j__strlen("256");
    if ( !v10 )
      goto LABEL_33;
    v27 = *(__int64 **)(*(_QWORD *)(*a1 + 24LL) + 8LL);
    v10 = j__strlen("512");
    if ( !v10 )
      goto LABEL_33;
    v10 = j__strlen("1024");
    if ( !v10 )
      goto LABEL_33;
    v10 = j__strlen("2048");
    if ( !v10 )
      goto LABEL_33;
    v10 = j__strlen("128+");
    if ( !v10 )
      goto LABEL_33;
    v10 = j__strlen("256+");
    if ( !v10 )
      goto LABEL_33;
    v10 = 0;
    goto LABEL_46;
  }
  v10 = 0;
LABEL_11:
  v11 = j__strlen("+");
  if ( v11 > v10 || (v12 = v10 - v11, v11) && memcmp(&v7[v12], "+", v11) )
  {
    if ( !(unsigned __int8)sub_2247970(v7, v9, 10, v34)
      && (v20 = v34[0].m128i_i64[0], v34[0].m128i_i64[0] == v34[0].m128i_u32[0]) )
    {
      v13 = (unsigned __int32)v34[0].m128i_i32[0] >> 7;
    }
    else
    {
      v13 = 0;
    }
    v22 = a1[1];
    v23 = a1[2];
    v33 = 261;
    v28 = v22;
    v32[0].m128i_i64[0] = a5;
    v29 = v23;
    v32[0].m128i_i64[1] = a6;
    v31 = 265;
    v30[0].m128i_i32[0] = v13;
    sub_A41580(v34, v32, v30, 265, v20, v21);
    v24 = sub_10DA6C0(v29, (__int64)v34);
    sub_10DC5D0(v28, v24);
  }
  else
  {
    if ( v12 <= v10 )
      v10 = v12;
    v9 = v10;
    v13 = 0;
  }
  if ( !(unsigned __int8)sub_2247970(v7, v9, 10, v34) )
  {
    v14 = v34[0].m128i_u32[0];
    if ( v34[0].m128i_i64[0] == v34[0].m128i_u32[0] )
      v13 = (unsigned __int32)v34[0].m128i_i32[0] >> 7;
  }
  v17 = a1[2];
  v18 = a1[1];
  v31 = 265;
  v33 = 261;
  v32[0] = (__m128i)v25;
  v30[0].m128i_i32[0] = v13;
  sub_A41580(v34, v32, v30, v14, v15, v16);
  v19 = sub_10DA6C0(v17, (__int64)v34);
  sub_10DC5D0(v18, v19);
}
