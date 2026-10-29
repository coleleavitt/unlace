_BYTE *__fastcall sub_21CDA0(__int64 a1, const char *a2, const char *a3, unsigned __int64 a4)
{
  __m128i v4; // xmm0
  const char *v5; // r13
  char *v6; // r12
  const char *v7; // r14
  char *v8; // rbx
  const char *v9; // rax
  char v10; // dl
  _BYTE *v11; // rbx
  const char **v13; // rax
  __int64 v14; // r14
  char *v15; // rax
  char v16; // dl
  __int64 i; // r15
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rbx
  _QWORD *v22; // rdi
  __int64 v23; // rcx
  const char *v24; // rdi
  const char *v25; // rax
  const char *v26; // rcx
  int v27; // eax
  __int64 *func; // rax
  __int64 v29; // rsi
  const char *v30; // r15
  const char *v31; // rcx
  const char *v32; // rcx
  const char *v33; // [rsp+10h] [rbp-488h] BYREF
  __m128i v34; // [rsp+18h] [rbp-480h]
  const char *v35; // [rsp+30h] [rbp-468h] BYREF
  __m128i v36; // [rsp+38h] [rbp-460h] BYREF
  char v37[1032]; // [rsp+50h] [rbp-448h] BYREF
  unsigned __int64 v38; // [rsp+458h] [rbp-40h]

  v4.m128i_i64[0] = 0;
  v5 = &a3[(_QWORD)a2];
  v38 = __readfsqword(0x28u);
  v6 = (char *)a2;
  v34 = 0;
  v33 = nullptr;
  v7 = a3;
  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 0:
      v8 = (char *)a2;
      v9 = "none";
      goto LABEL_6;
    case 1:
      v22 = *(_QWORD **)(a1 + 24);
      if ( !v22 )
        goto LABEL_43;
      v4.m128i_i64[0] = 0;
      a2 = (const char *)&v35;
      v35 = nullptr;
      v36 = 0;
      sub_21C000(v22, (const char *)&v35, 0, a4);
      if ( v6 >= v5 )
      {
        if ( !under_debugger )
          interr(520, &v35, a3, v23, 0.0);
LABEL_69:
        BUG();
      }
      v24 = v35;
      v25 = v35;
      if ( !v36.m128i_i64[0] )
        v25 = &s1;
      a4 = (unsigned __int64)(v5 - 1);
      v8 = v6;
      if ( v6 == v5 - 1 )
      {
LABEL_61:
        *((_BYTE *)v5 - 1) = 0;
        v8 = (char *)(v5 - 1);
      }
      else
      {
        while ( 1 )
        {
          a3 = (const char *)*(unsigned __int8 *)v25++;
          *v8 = (char)a3;
          if ( !(_BYTE)a3 )
            break;
          if ( ++v8 == (char *)a4 )
            goto LABEL_61;
        }
      }
      if ( v24 )
      {
        v36.m128i_i64[0] = 0;
        *(double *)v4.m128i_i64 = qfree(v24, (const char *)&v35);
      }
      goto LABEL_25;
    case 2:
    case 3:
      if ( (unsigned __int8)is_mapped(*(_QWORD *)(a1 + 16))
        && (func = (__int64 *)get_func(*(_QWORD *)(a1 + 16))) != nullptr )
      {
        v29 = *func;
        v36 = 0;
        v35 = nullptr;
        get_ea_name(&v35, v29, 0, 0);
        v4 = _mm_loadu_si128(&v36);
        v30 = v35;
        v36 = 0;
        v35 = nullptr;
        v33 = v30;
        v34 = v4;
        v31 = &s1;
        if ( v4.m128i_i64[0] )
          v31 = v33;
        a2 = v7;
        v8 = &v6[(int)qsnprintf(v6, v7, "%s ", v31)];
      }
      else
      {
        v8 = (char *)a2;
      }
      a3 = (const char *)*(unsigned int *)(a1 + 8);
      if ( (_DWORD)a3 == 2 )
      {
        a2 = *(const char **)(a1 + 24);
        v9 = (const char *)&unk_5C2F25;
        if ( !a2 )
          goto LABEL_6;
        get_nice_colored_name(&v33, a2, a3);
        v26 = &s1;
        if ( v34.m128i_i64[0] )
          v26 = v33;
        a2 = (const char *)(v5 - v8);
        v27 = qsnprintf(v8, v5 - v8, "call %s", v26);
        goto LABEL_52;
      }
      v9 = (const char *)&unk_5C2F25;
      if ( (_DWORD)a3 == 3 )
      {
        a2 = *(const char **)(a1 + 24);
        if ( a2 )
        {
          get_nice_colored_name(&v33, a2, 2);
          v32 = &s1;
          if ( v34.m128i_i64[0] )
            v32 = v33;
          a2 = (const char *)(v5 - v8);
          v27 = qsnprintf(v8, v5 - v8, "returned to %s", v32);
LABEL_52:
          v8 += v27;
          v9 = (const char *)&unk_5C2F25;
          goto LABEL_6;
        }
      }
      goto LABEL_6;
    case 4:
      v13 = *(const char ***)(a1 + 24);
      if ( !v13 )
        goto LABEL_43;
      a2 = *v13;
      v8 = v6;
      if ( *v13 != (const char *)-1LL && a2 != *(const char **)(a1 + 16) )
      {
        get_nice_colored_name(&v33, a2, 2);
        a2 = &s1;
        if ( v34.m128i_i64[0] )
          a2 = v33;
        v8 = (char *)qstpncpy(v6, a2, v7);
        v13 = *(const char ***)(a1 + 24);
      }
      v14 = (__int64)v13[2];
      if ( v14 <= 0 )
        goto LABEL_25;
      if ( v8 >= v5 )
      {
        if ( under_debugger )
          goto LABEL_69;
        interr(520, a2, a3, a4, 0.0);
        goto LABEL_65;
      }
      v15 = ":";
      if ( v8 == v5 - 1 )
      {
LABEL_62:
        *((_BYTE *)v5 - 1) = 0;
        v8 = (char *)(v5 - 1);
      }
      else
      {
        while ( 1 )
        {
          v16 = *v15++;
          *v8 = v16;
          if ( !v16 )
            break;
          if ( ++v8 == v5 - 1 )
            goto LABEL_62;
        }
      }
      for ( i = 0; i != v14; ++i )
      {
        a2 = (const char *)(v5 - v8);
        v18 = qsnprintf(v8, v5 - v8, " %02X", *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + i));
        v8 += v18;
      }
LABEL_25:
      v9 = (const char *)&unk_5C2F25;
LABEL_6:
      if ( v8 >= v5 )
      {
LABEL_65:
        if ( !under_debugger )
          interr(520, a2, a3, a4, *(double *)v4.m128i_i64);
        goto LABEL_69;
      }
      if ( v8 == v5 - 1 )
      {
LABEL_42:
        *((_BYTE *)v5 - 1) = 0;
        v8 = (char *)(v5 - 1);
      }
      else
      {
        while ( 1 )
        {
          v10 = *v9++;
          *v8 = v10;
          if ( !v10 )
            break;
          if ( ++v8 == v5 - 1 )
            goto LABEL_42;
        }
      }
      v11 = (_BYTE *)(v8 - v6);
      if ( v33 )
      {
        v34.m128i_i64[0] = 0;
        qfree(v33, a2);
      }
      return v11;
    case 5:
      v19 = *(_QWORD *)(a1 + 24);
      if ( v19 )
      {
        a2 = a3;
        v20 = qsnprintf(v6, a3, "Memory layout changed: %d segments", *(_DWORD *)(v19 + 8));
LABEL_28:
        v21 = v20;
        v9 = (const char *)&unk_5C2F25;
        v8 = &v6[v21];
      }
      else
      {
LABEL_43:
        v8 = (char *)a2;
        v9 = (const char *)&unk_5C2F25;
      }
      goto LABEL_6;
    case 6:
      a2 = a3;
      if ( (unsigned __int8)sub_20E3E0(*(_QWORD *)(a1 + 24), (__int64)v37, 1024) )
        v20 = qsnprintf(v6, v7, "Debug event: %s", v37);
      else
        v20 = qsnprintf(v6, v7, "Debug event: code %d", *(_DWORD *)(*(_QWORD *)(a1 + 24) + 20LL) & 0xFFFFFFF);
      goto LABEL_28;
    default:
      v8 = (char *)a2;
      v9 = (const char *)&unk_5C2F25;
      goto LABEL_6;
  }
}
