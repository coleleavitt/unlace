__int64 __fastcall sub_3362B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 module_data; // r12
  __int64 v6; // rax
  const char *v7; // rbp
  __int64 v8; // r14
  const char *v9; // rsi
  __int64 v10; // r13
  __int64 v11; // rdx
  const char *v12; // r15
  char *v13; // rax
  signed __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // edi
  size_t v17; // rax
  size_t v18; // r13
  int v19; // eax
  int v20; // r15d
  __int64 v21; // rcx
  unsigned int v22; // edi
  size_t v23; // r14
  char *v24; // rax
  __int64 v25; // [rsp+8h] [rbp-60h]
  const char *v26; // [rsp+10h] [rbp-58h] BYREF
  __int128 v27; // [rsp+18h] [rbp-50h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  result = 2;
  if ( *(_WORD *)(a3 + 24) != 4 )
    return result;
  v26 = nullptr;
  module_data = get_module_data((unsigned int)dword_4C1BB8);
  v6 = *(_QWORD *)(module_data + 112);
  v27 = 0;
  v7 = *(const char **)(v6 + 24);
  if ( *v7 == 72 && v7[1] == 69 && v7[2] == 88 )
  {
    v7 += 3;
  }
  else
  {
    v8 = 0;
    v9 = s1;
    if ( !v7 )
      goto LABEL_5;
  }
  v17 = strlen(v7);
  v18 = v17;
  v8 = v17;
  if ( !v17 )
  {
    v7 = nullptr;
LABEL_18:
    v9 = s1;
    goto LABEL_5;
  }
  v23 = v17 + 1;
  v24 = (char *)qvector_reserve(&v26, 0, v17 + 1, 1);
  *(_QWORD *)&v27 = v23;
  v26 = v24;
  memmove(v24, v7, v18);
  v26[v18] = 0;
  v8 = v27;
  v7 = v26;
  if ( !(_QWORD)v27 )
    goto LABEL_18;
  v9 = v26;
LABEL_5:
  v10 = *(_QWORD *)(a3 + 8);
  v11 = 0;
  v12 = s1;
  if ( v10 )
  {
    v12 = *(const char **)a3;
    v11 = v10 - 1;
  }
  v25 = v11;
  v13 = strstr(v12, v9);
  if ( !v13 )
    goto LABEL_19;
  v14 = v13 - v12;
  if ( v14 == -1 )
    goto LABEL_19;
  v15 = v25;
  if ( v14 )
  {
    v20 = v14;
    v21 = (int)v14 - 1;
    if ( v10 )
    {
      if ( v21 == v25 || (v22 = *(char *)(*(_QWORD *)a3 + v21), *(_BYTE *)(*(_QWORD *)a3 + v21) == 44) )
      {
        if ( v8 )
          v8 = (int)v8 + (int)v14 - 1;
        else
          v8 = (int)v14;
LABEL_42:
        if ( v15 == v8 )
          goto LABEL_34;
LABEL_31:
        if ( *(_BYTE *)(*(_QWORD *)a3 + v8) != 44 )
        {
          v16 = *(char *)(*(_QWORD *)a3 + v8);
          if ( v16 > 0x7F )
            goto LABEL_19;
          goto LABEL_33;
        }
LABEL_34:
        v19 = *(_DWORD *)(module_data + 1416);
        BYTE1(v19) |= 1u;
        goto LABEL_20;
      }
    }
    else
    {
      if ( v21 == v25 )
      {
        if ( !v8 )
        {
          v8 = (int)v14;
          if ( (int)v14 == v25 )
            goto LABEL_34;
          goto LABEL_31;
        }
        goto LABEL_56;
      }
      if ( (_DWORD)v14 == 1 )
      {
        if ( !isspace(0) )
          goto LABEL_19;
        v15 = v25;
        if ( !v8 )
        {
          v8 = 1;
          goto LABEL_29;
        }
        v20 = 1;
        goto LABEL_40;
      }
      v22 = *(char *)(*(_QWORD *)a3 + v21);
      if ( *(_BYTE *)(*(_QWORD *)a3 + v21) == 44 )
      {
        if ( !v8 )
        {
          v8 = (int)v14;
          goto LABEL_29;
        }
LABEL_56:
        v8 = (int)v8 + (int)v14 - 1;
        goto LABEL_29;
      }
    }
    if ( v22 > 0x7F || !isspace(v22) )
      goto LABEL_19;
    v15 = v25;
    if ( !v8 )
    {
LABEL_41:
      v8 = v20;
      if ( v10 )
        goto LABEL_42;
LABEL_29:
      if ( v15 == v8 )
        goto LABEL_34;
      if ( !v8 )
        goto LABEL_13;
      goto LABEL_31;
    }
LABEL_40:
    v20 = v20 + v8 - 1;
    goto LABEL_41;
  }
  if ( v8 )
  {
    v20 = 0;
    goto LABEL_40;
  }
  if ( v10 )
    goto LABEL_42;
  if ( !v25 )
    goto LABEL_34;
LABEL_13:
  v16 = 0;
LABEL_33:
  if ( isspace(v16) )
    goto LABEL_34;
LABEL_19:
  v19 = *(_DWORD *)(module_data + 1416);
  BYTE1(v19) &= ~1u;
LABEL_20:
  *(_DWORD *)(module_data + 1416) = v19;
  if ( v7 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v7);
  }
  return 0;
}
