__int64 __fastcall sub_3E5770(__m128i *a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbx
  const char *v5; // rdx
  char *v6; // rbp
  __int64 v8; // r15
  const char *v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rax
  char *v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const char *v18; // rbx
  __int64 v19; // rax
  const char *v20; // rsi
  char *v21; // r14
  char *s1; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+8h] [rbp-B0h]
  __int64 v24; // [rsp+18h] [rbp-A0h]
  _QWORD v25[4]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v26[4]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v27[11]; // [rsp+60h] [rbp-58h] BYREF

  v27[3] = __readfsqword(0x28u);
  if ( a2 >= a1[16].m128i_i64[0] )
    return -1;
  v2 = a2;
  v3 = a1[15].m128i_i64[1] + 32 * a2;
  v4 = v3;
  if ( !v3 )
    return -1;
  s1 = nullptr;
  v5 = ::s1;
  v23 = 0;
  if ( *(_QWORD *)(v3 + 16) )
    v5 = *(const char **)(v3 + 8);
  if ( !(unsigned __int8)sub_382FA0((__int64)&s1, 1023, (__int64)v5, (__int64)"Please enter the new stock comment") )
  {
    v6 = s1;
    v2 = -1;
    goto LABEL_7;
  }
  sub_3E3D30((__int64 *)&s1, 32);
  v8 = v23;
  if ( *(_QWORD *)(v4 + 16) )
  {
    v9 = *(const char **)(v4 + 8);
    if ( !(_QWORD)v23 )
    {
      if ( *v9 )
      {
LABEL_14:
        v10 = (*(__int64 (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 56))(a1, v2);
        v6 = s1;
        v2 = v10;
        goto LABEL_7;
      }
      goto LABEL_28;
    }
  }
  else
  {
    if ( !(_QWORD)v23 )
    {
LABEL_28:
      v6 = s1;
      goto LABEL_29;
    }
    v9 = ::s1;
  }
  v6 = s1;
  if ( strcmp(s1, v9) )
  {
    if ( v8 == 1 )
      goto LABEL_14;
    v11 = *(_QWORD *)v4;
    if ( *(_QWORD *)v4 == -1 )
    {
      sub_3E5670((__int64)v27, (__int64)"check_index: idx == BADNODE");
      v18 = (const char *)v27[0];
      v19 = v27[1];
    }
    else
    {
      v12 = netnode_suplast(a1[18].m128i_i64[1], 83);
      if ( v12 == -1 )
      {
        sub_3E5670((__int64)v26, (__int64)"check_index: last == BADNODE");
        v18 = (const char *)v26[0];
        v19 = v26[1];
      }
      else
      {
        if ( v12 >= v11 )
        {
          v13 = (char *)::s1;
          if ( (_QWORD)v23 )
            v13 = s1;
          netnode_supset(a1[18].m128i_i64[1], v11, v13, 0, 83);
          if ( (char **)(v4 + 8) != &s1 )
          {
            v14 = v23;
            if ( (unsigned __int64)v23 > 1 )
            {
              v21 = s1;
              if ( *(_QWORD *)(v4 + 24) < (unsigned __int64)v23 )
                *(_QWORD *)(v4 + 8) = qvector_reserve(v4 + 8, *(_QWORD *)(v4 + 8), v23, 1);
              *(_QWORD *)(v4 + 16) = v14;
              memmove(*(void **)(v4 + 8), v21, v14 - 1);
              *(_BYTE *)(*(_QWORD *)(v4 + 8) + v14 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v4 + 16) = 0;
            }
          }
LABEL_27:
          v6 = s1;
          goto LABEL_7;
        }
        sub_3E5670((__int64)v25, (__int64)"check_index: idx(%llX) > last(%llX)", v11, v12);
        v18 = (const char *)v25[0];
        v19 = v25[1];
      }
    }
    v20 = ::s1;
    if ( v19 )
      v20 = v18;
    sub_3E50A0(a1, (__int64)v20, "editing", v15, v16, v17, (__int64)s1, v23, *((__int64 *)&v23 + 1), v24);
    if ( v18 )
      qfree(v18);
    goto LABEL_27;
  }
LABEL_29:
  v2 = -1;
LABEL_7:
  if ( v6 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v6);
  }
  return v2;
}
