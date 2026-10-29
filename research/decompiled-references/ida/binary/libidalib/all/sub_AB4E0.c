_BYTE *__fastcall sub_AB4E0(__int64 a1, _BYTE *a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  _BYTE *v4; // rbx
  int v5; // edx
  char *v6; // rax
  char v7; // dl
  _BYTE *v8; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r14
  char *v12; // rax
  char v13; // dl
  __int64 i; // r15
  __int64 v15; // rbx
  _QWORD *v16; // rdi
  __int64 v17; // rdi
  const char *v18; // rax
  char v19; // dl
  __m128i v20; // xmm0
  __int64 v21; // [rsp+10h] [rbp-488h]
  __m128i v22; // [rsp+18h] [rbp-480h]
  const char *v23; // [rsp+30h] [rbp-468h] BYREF
  __m128i v24; // [rsp+38h] [rbp-460h] BYREF
  unsigned __int64 v25; // [rsp+458h] [rbp-40h]

  v3 = (unsigned __int64)&a2[a3];
  v25 = __readfsqword(0x28u);
  v22 = 0;
  v21 = 0;
  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 0:
      v4 = a2;
      v6 = "none";
      goto LABEL_6;
    case 1:
      v16 = *(_QWORD **)(a1 + 24);
      if ( !v16 )
        goto LABEL_42;
      v23 = nullptr;
      v24 = 0;
      sub_AA740(v16, (__int64 *)&v23, 0);
      if ( (unsigned __int64)a2 >= v3 )
      {
        if ( !under_debugger )
          interr();
LABEL_57:
        BUG();
      }
      v17 = (__int64)v23;
      v18 = v23;
      if ( !v24.m128i_i64[0] )
        v18 = s1;
      v4 = a2;
      if ( a2 == (_BYTE *)(v3 - 1) )
      {
LABEL_49:
        *(_BYTE *)(v3 - 1) = 0;
        v4 = (_BYTE *)(v3 - 1);
      }
      else
      {
        while ( 1 )
        {
          v19 = *v18++;
          *v4 = v19;
          if ( !v19 )
            break;
          if ( ++v4 == (_BYTE *)(v3 - 1) )
            goto LABEL_49;
        }
      }
      if ( v17 )
      {
        v24.m128i_i64[0] = 0;
        qfree();
      }
      goto LABEL_26;
    case 2:
    case 3:
      if ( (unsigned __int8)is_mapped() && get_func() )
      {
        v24 = 0;
        get_ea_name();
        v20 = _mm_loadu_si128(&v24);
        v24 = 0;
        v23 = nullptr;
        v21 = 0;
        v22 = v20;
        v4 = &a2[(int)qsnprintf()];
      }
      else
      {
        v4 = a2;
      }
      v5 = *(_DWORD *)(a1 + 8);
      if ( v5 == 2 )
      {
        v6 = "";
        if ( !*(_QWORD *)(a1 + 24) )
          goto LABEL_6;
        goto LABEL_44;
      }
      v6 = "";
      if ( v5 == 3 && *(_QWORD *)(a1 + 24) )
      {
LABEL_44:
        get_nice_colored_name();
        v4 += (int)qsnprintf();
        v6 = "";
        goto LABEL_6;
      }
      goto LABEL_6;
    case 4:
      v10 = *(_QWORD **)(a1 + 24);
      if ( !v10 )
        goto LABEL_42;
      v4 = a2;
      if ( *v10 != -1 && *v10 != *(_QWORD *)(a1 + 16) )
      {
        get_nice_colored_name();
        v4 = (_BYTE *)qstpncpy();
        v10 = *(_QWORD **)(a1 + 24);
      }
      v11 = v10[2];
      if ( v11 <= 0 )
        goto LABEL_26;
      if ( (unsigned __int64)v4 >= v3 )
      {
        if ( under_debugger )
          goto LABEL_57;
        interr();
        goto LABEL_53;
      }
      v12 = ":";
      if ( v4 == (_BYTE *)(v3 - 1) )
      {
LABEL_50:
        *(_BYTE *)(v3 - 1) = 0;
        v4 = (_BYTE *)(v3 - 1);
      }
      else
      {
        while ( 1 )
        {
          v13 = *v12++;
          *v4 = v13;
          if ( !v13 )
            break;
          if ( ++v4 == (_BYTE *)(v3 - 1) )
            goto LABEL_50;
        }
      }
      for ( i = 0; i != v11; ++i )
        v4 += (int)qsnprintf();
LABEL_26:
      v6 = "";
LABEL_6:
      if ( (unsigned __int64)v4 >= v3 )
      {
LABEL_53:
        if ( !under_debugger )
          interr();
        goto LABEL_57;
      }
      if ( v4 == (_BYTE *)(v3 - 1) )
      {
LABEL_41:
        *(_BYTE *)(v3 - 1) = 0;
        v4 = (_BYTE *)(v3 - 1);
      }
      else
      {
        while ( 1 )
        {
          v7 = *v6++;
          *v4 = v7;
          if ( !v7 )
            break;
          if ( ++v4 == (_BYTE *)(v3 - 1) )
            goto LABEL_41;
        }
      }
      v8 = (_BYTE *)(v4 - a2);
      if ( v21 )
      {
        v22.m128i_i64[0] = 0;
        qfree();
      }
      return v8;
    case 5:
      if ( *(_QWORD *)(a1 + 24) )
        goto LABEL_28;
LABEL_42:
      v4 = a2;
      v6 = "";
      goto LABEL_6;
    case 6:
      sub_9F8A0(*(_QWORD *)(a1 + 24));
LABEL_28:
      v15 = (int)qsnprintf();
      v6 = "";
      v4 = &a2[v15];
      goto LABEL_6;
    default:
      v4 = a2;
      v6 = "";
      goto LABEL_6;
  }
}

