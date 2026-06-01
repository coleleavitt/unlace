__int64 __fastcall sub_213B4E0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // ebp
  size_t v13; // rax
  size_t v14; // r12
  const void *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r13
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdi
  const char *v29; // rax
  unsigned __int64 v30; // [rsp+8h] [rbp-70h] BYREF
  __m128 s1; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v32[4]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v33; // [rsp+40h] [rbp-38h]

  v2 = *a1;
  s1 = 0u;
  v3 = sub_2153C00(v2);
  v4 = sub_2124B50(v3);
  v9 = sub_213B1B0(*a1, &s1, v5, v6, v7, v8);
  if ( (_BYTE)v9 )
  {
    v10 = *a1;
    v33 = 259;
    v32[0] = "unexpected token in '.loc' directive";
    return (unsigned int)sub_21543E0(v10, v32, 0, 0);
  }
  v11 = v9;
  v13 = j__strlen("basic_block");
  v14 = s1.m128_u64[1];
  v15 = (const void *)s1.m128_u64[0];
  if ( v13 == s1.m128_u64[1] )
  {
    if ( !s1.m128_u64[1] || !memcmp((const void *)s1.m128_u64[0], "basic_block", s1.m128_u64[1]) )
    {
      *(_DWORD *)a1[1] |= 2u;
      return v11;
    }
    if ( v14 != j__strlen("prologue_end") )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( v14 != j__strlen("prologue_end") )
  {
    if ( v14 != j__strlen("epilogue_begin") )
    {
LABEL_13:
      if ( v14 == j__strlen("is_stmt") )
      {
        if ( !v14 )
        {
LABEL_15:
          v16 = sub_2153C00(*a1);
          v17 = sub_2124B50(v16);
          v18 = *a1;
          v32[0] = 0;
          v19 = v17;
          LOBYTE(v20) = sub_2133530(v18, &v30, (__int64)v32);
          v11 = v20;
          if ( (_BYTE)v20 )
            return v11;
          if ( *(_BYTE *)v30 == 1 )
          {
            v21 = *(_QWORD *)(v30 + 16);
            if ( !(_DWORD)v21 )
            {
              *(_DWORD *)a1[1] &= ~1u;
              return v11;
            }
            if ( (_DWORD)v21 == 1 )
            {
              *(_DWORD *)a1[1] |= 1u;
              return v11;
            }
            v28 = *a1;
            v29 = "is_stmt value not 0 or 1";
          }
          else
          {
            v28 = *a1;
            v29 = "is_stmt value not the constant value of 0 or 1";
          }
LABEL_42:
          v33 = 259;
          v32[0] = v29;
          return (unsigned int)sub_2153E90(v28, v19, v32, 0, 0);
        }
LABEL_25:
        if ( !memcmp(v15, "is_stmt", v14) )
          goto LABEL_15;
        if ( v14 != j__strlen("isa") )
          goto LABEL_27;
        goto LABEL_34;
      }
LABEL_32:
      if ( v14 != j__strlen("isa") )
      {
LABEL_27:
        if ( v14 != j__strlen("discriminator") )
          goto LABEL_36;
        if ( !v14 )
          return (unsigned int)sub_21335C0(*a1, (_QWORD *)a1[3]);
LABEL_29:
        if ( !memcmp(v15, "discriminator", v14) )
          return (unsigned int)sub_21335C0(*a1, (_QWORD *)a1[3]);
LABEL_36:
        v22 = *a1;
        v32[0] = "unknown sub-directive in '.loc' directive";
        v33 = 259;
        return (unsigned int)sub_2153E90(v22, v4, v32, 0, 0);
      }
      if ( !v14 )
      {
LABEL_37:
        v23 = sub_2153C00(*a1);
        v24 = sub_2124B50(v23);
        v25 = *a1;
        v32[0] = 0;
        v19 = v24;
        LOBYTE(v26) = sub_2133530(v25, &v30, (__int64)v32);
        v11 = v26;
        if ( (_BYTE)v26 )
          return v11;
        if ( *(_BYTE *)v30 == 1 )
        {
          v27 = *(_QWORD *)(v30 + 16);
          if ( (int)v27 >= 0 )
          {
            *(_DWORD *)a1[2] = v27;
            return v11;
          }
          v28 = *a1;
          v29 = "isa number less than zero";
        }
        else
        {
          v28 = *a1;
          v29 = "isa number not a constant value";
        }
        goto LABEL_42;
      }
LABEL_34:
      if ( memcmp(v15, "isa", v14) )
      {
        if ( v14 != j__strlen("discriminator") )
          goto LABEL_36;
        goto LABEL_29;
      }
      goto LABEL_37;
    }
    if ( !v14 )
    {
LABEL_21:
      *(_DWORD *)a1[1] |= 8u;
      return v11;
    }
LABEL_23:
    if ( memcmp(v15, "epilogue_begin", v14) )
    {
      if ( v14 == j__strlen("is_stmt") )
        goto LABEL_25;
      goto LABEL_32;
    }
    goto LABEL_21;
  }
  if ( v14 )
  {
LABEL_11:
    if ( memcmp(v15, "prologue_end", v14) )
    {
LABEL_12:
      if ( v14 != j__strlen("epilogue_begin") )
        goto LABEL_13;
      goto LABEL_23;
    }
  }
  *(_DWORD *)a1[1] |= 4u;
  return v11;
}
