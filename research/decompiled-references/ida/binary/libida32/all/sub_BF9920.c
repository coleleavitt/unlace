__int64 __fastcall sub_BF9920(__int64 a1, __int64 a2, __int64 a3, char *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int8 **v12; // rax
  unsigned __int8 **v13; // r13
  __int64 result; // rax
  bool v15; // al
  __int64 v16; // rdi
  unsigned __int8 **v17; // rbx
  unsigned __int64 v18; // rax
  unsigned int *v19; // rdi
  size_t v20; // r12
  const void *v21; // r14
  unsigned __int64 *v22; // rax
  __int64 *v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 *i; // rax
  __int64 v27; // rcx
  __int64 v28; // [rsp+8h] [rbp-30h]

  v8 = a3;
  if ( !*(_BYTE *)(a1 + 914) || a4 || (result = 0, (*(_BYTE *)(a3 + 84) & 3) == 0) )
  {
    if ( *(char *)(a3 + 28) < 0 )
      goto LABEL_25;
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2320LL) + 1LL) >= 0 && (*(_BYTE *)(a3 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v28 = a5;
      v15 = sub_AC9870(a3);
      a5 = v28;
      if ( v15 )
      {
        a2 = (unsigned int)a2;
        sub_E0FDF0(a1, (unsigned int)a2, 2505, 0);
        a5 = v28;
      }
    }
    if ( !a4 )
    {
LABEL_13:
      if ( (int)a2 >= 0 || (v9 = *(_QWORD *)(v8 + 40), (v9 & 7) != 0) || (v10 = v9 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
LABEL_16:
        if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x10) != 0 )
        {
          if ( (*(_BYTE *)(v8 + 28) & 0x7F) == 0x26 )
          {
            v11 = v8;
            if ( (*(_BYTE *)(v8 + 87) & 0x20) != 0 )
            {
              v11 = *(_QWORD *)(v8 + 184);
              if ( (*(_BYTE *)(v11 + 84) & 3) != 0 )
                v11 = v8;
            }
            v8 = v11;
            if ( (*(_BYTE *)(v11 + 87) & 0x20) != 0 )
            {
              v16 = 0;
              v17 = (unsigned __int8 **)sub_E0FF40(a1, (unsigned int)a2, 2420, 1);
              if ( (*(_BYTE *)(v11 + 87) & 0x20) != 0 )
                v16 = *(_QWORD *)(v11 + 184);
              v18 = sub_B4E950(v16 + 72);
              if ( v18 )
                v18 -= 64LL;
              if ( v17 )
                sub_AC60B0(v17, v18, 0xAu);
              v8 = v11;
              goto LABEL_24;
            }
          }
          else
          {
            v11 = 0;
          }
          v12 = (unsigned __int8 **)sub_E0FF40(a1, (unsigned int)a2, 2419, 1);
          v13 = v12;
          if ( v12 )
          {
            sub_BED5E0(v12, (*(_BYTE *)(v8 + 84) & 3) != 0);
            sub_BED5E0(v13, v11 != 0);
            sub_AC60B0(v13, v8, 0xAu);
          }
LABEL_24:
          sub_E10070(a1, *(unsigned int *)(v8 + 24), 103);
          return 0;
        }
LABEL_25:
        sub_E0FF40(a1, (unsigned int)a2, 108, 0);
        return 0;
      }
      v19 = *(unsigned int **)(v10 + 16);
      v20 = *v19;
      v21 = v19 + 4;
      if ( j__strlen("__assert_rtn") == v20 )
      {
        if ( !v20 || !memcmp(v21, "__assert_rtn", v20) )
          goto LABEL_43;
        if ( j__strlen("__assert_fail") != v20 )
        {
          if ( v20 != j__strlen("_wassert") )
            goto LABEL_16;
          goto LABEL_42;
        }
      }
      else
      {
        if ( j__strlen("__assert_fail") != v20 )
        {
          if ( j__strlen("_wassert") != v20 )
            goto LABEL_16;
          if ( !v20 )
          {
LABEL_43:
            sub_E0FF40(a1, (unsigned int)a2, 5842, 0);
            return 0;
          }
LABEL_42:
          if ( memcmp(v21, "_wassert", v20) )
            goto LABEL_16;
          goto LABEL_43;
        }
        if ( !v20 )
          goto LABEL_43;
      }
      if ( !memcmp(v21, "__assert_fail", v20) )
        goto LABEL_43;
      if ( j__strlen("_wassert") != v20 )
        goto LABEL_16;
      goto LABEL_42;
    }
    if ( a4[28] < 0 )
      goto LABEL_25;
    if ( a5 )
    {
      if ( (a4[84] & 3) != 0 )
        return 1;
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 32) + 200LL) || (a4[29] & 1) == 0 )
        goto LABEL_12;
      v22 = sub_B68690((__int64)a4, a2, a3, (__int64)a4, a5, a6);
      v23 = (__int64 *)*v22;
      v24 = *v22 + 8LL * *((unsigned int *)v22 + 2);
      if ( *v22 < v24 )
      {
        v25 = *v22;
        while ( *(_WORD *)(*(_QWORD *)v25 + 36LL) != 247 )
        {
          v25 += 8LL;
          if ( v24 == v25 )
            goto LABEL_12;
        }
        if ( v24 == v25 )
          goto LABEL_12;
        return 1;
      }
      if ( v23 != (__int64 *)v24 )
      {
        if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 247 )
        {
          for ( i = (__int64 *)(v24 + 8); v23 != i; ++i )
          {
            v27 = *i;
            if ( *(_WORD *)(v27 + 36) == 247 )
              return 1;
          }
          goto LABEL_12;
        }
        return 1;
      }
    }
LABEL_12:
    v8 = (__int64)a4;
    goto LABEL_13;
  }
  return result;
}

