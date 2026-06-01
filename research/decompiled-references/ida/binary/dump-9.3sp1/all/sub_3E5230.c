__int64 __fastcall sub_3E5230(__m128i *a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 *v4; // rbx
  const char *v5; // rdx
  char *v6; // rbp
  __int64 v8; // r15
  const char *v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rax
  const char *v19; // rsi
  char *v20; // r14
  char *s1; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v22; // [rsp+8h] [rbp-B0h]
  __int64 v23; // [rsp+18h] [rbp-A0h]
  _QWORD v24[4]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v25[4]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v26[11]; // [rsp+60h] [rbp-58h] BYREF

  v26[3] = __readfsqword(0x28u);
  if ( a2 >= a1[16].m128i_i64[0] )
    return -1;
  v2 = a2;
  v3 = a1[15].m128i_i64[1] + 32 * a2;
  v4 = (unsigned __int64 *)v3;
  if ( !v3 )
    return -1;
  s1 = nullptr;
  v5 = ::s1;
  v22 = 0;
  if ( *(_QWORD *)(v3 + 16) )
    v5 = *(const char **)(v3 + 8);
  if ( !(unsigned __int8)sub_382A60((__int64)&s1, 1023, (__int64)v5, (__int64)"Please enter the new stock comment") )
  {
    v6 = s1;
    v2 = -1;
    goto LABEL_7;
  }
  sub_3E37F0((__int64 *)&s1, 32);
  v8 = v22;
  if ( v4[2] )
  {
    v9 = (const char *)v4[1];
    if ( !(_QWORD)v22 )
    {
      if ( *v9 )
      {
LABEL_14:
        v10 = (*(__int64 (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 56))(a1, v2);
        v6 = s1;
        v2 = v10;
        goto LABEL_7;
      }
      goto LABEL_26;
    }
  }
  else
  {
    if ( !(_QWORD)v22 )
    {
LABEL_26:
      v6 = s1;
      goto LABEL_27;
    }
    v9 = ::s1;
  }
  v6 = s1;
  if ( strcmp(s1, v9) )
  {
    if ( v8 == 1 )
      goto LABEL_14;
    v11 = *v4;
    if ( *v4 == -1 )
    {
      sub_3E5130((__int64)v26);
      v17 = v26[0];
      v18 = v26[1];
    }
    else
    {
      v12 = netnode_suplast();
      if ( v12 == -1 )
      {
        sub_3E5130((__int64)v25);
        v17 = v25[0];
        v18 = v25[1];
      }
      else
      {
        if ( v12 >= v11 )
        {
          netnode_supset();
          if ( v4 + 1 != (unsigned __int64 *)&s1 )
          {
            v13 = v22;
            if ( (unsigned __int64)v22 > 1 )
            {
              v20 = s1;
              if ( v4[3] < (unsigned __int64)v22 )
                v4[1] = qvector_reserve((__int64)(v4 + 1), v4[1], v22, 1);
              v4[2] = v13;
              memmove((void *)v4[1], v20, v13 - 1);
              *(_BYTE *)(v4[1] + v13 - 1) = 0;
            }
            else
            {
              v4[2] = 0;
            }
          }
LABEL_25:
          v6 = s1;
          goto LABEL_7;
        }
        sub_3E5130((__int64)v24);
        v17 = v24[0];
        v18 = v24[1];
      }
    }
    v19 = ::s1;
    if ( v18 )
      v19 = (const char *)v17;
    sub_3E4B60(a1, (__int64)v19, "editing", v14, v15, v16, (__int64)s1, v22, *((__int64 *)&v22 + 1), v23);
    if ( v17 )
      qfree(v17);
    goto LABEL_25;
  }
LABEL_27:
  v2 = -1;
LABEL_7:
  if ( v6 )
  {
    *(_QWORD *)&v22 = 0;
    qfree((__int64)v6);
  }
  return v2;
}
