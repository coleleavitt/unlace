__int64 __fastcall sub_777000(__int64 a1, unsigned __int64 a2, char *a3)
{
  char v3; // r13
  const char *v4; // rbx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r14
  const char *v11; // rsi
  unsigned __int64 v12; // r11
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // r10
  __int64 v18; // rax
  const char *v19; // rdi
  __int64 v20; // rax
  __int64 v22; // [rsp+8h] [rbp-90h]
  void *v23; // [rsp+10h] [rbp-88h]
  unsigned __int64 v24; // [rsp+18h] [rbp-80h]
  __int64 v25; // [rsp+37h] [rbp-61h] BYREF
  char v26; // [rsp+3Fh] [rbp-59h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-50h]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v3 = *a3;
  v29 = __readfsqword(0x28u);
  v4 = a3;
  if ( !a2 && !v3 )
  {
    v25 = qword_2CD44F8;
    v26 = byte_2CD4500;
    return v25;
  }
  if ( v3 == 46 && !a3[1] )
  {
    v25 = a2;
    v26 = 1;
    return v25;
  }
  if ( a3[strlen(a3) - 1] != 47 )
  {
    if ( !v3 )
    {
      v25 = qword_2CD44D8;
      v26 = byte_2CD44E0;
      return v25;
    }
    v6 = *(_QWORD *)(a1 + 48);
    v7 = v6 + 176 * a2;
    v8 = *(_QWORD *)(v7 + 24);
    v22 = v7;
    v9 = *(_QWORD *)(v7 + 32);
    v10 = v8 + 9 * v9;
    if ( v10 == v8 )
    {
      v23 = nullptr;
      goto LABEL_14;
    }
    if ( *(_BYTE *)(v8 + 8) )
    {
      v23 = nullptr;
      v24 = 0;
      goto LABEL_31;
    }
    v23 = nullptr;
    if ( (*(_BYTE *)(v22 + 168) & 4) != 0 )
      goto LABEL_14;
    v24 = 0;
    goto LABEL_46;
  }
  sub_775F70((__int64 *)&ptr, v4);
  v4 = (const char *)ptr;
  v23 = ptr;
  v24 = v28;
  if ( !v28 || !*(_BYTE *)ptr )
  {
LABEL_22:
    v25 = qword_2CD44D8;
    v26 = byte_2CD44E0;
    goto LABEL_28;
  }
  v6 = *(_QWORD *)(a1 + 48);
  v18 = v6 + 176 * a2;
  v8 = *(_QWORD *)(v18 + 24);
  v22 = v18;
  v9 = *(_QWORD *)(v18 + 32);
  v10 = v8 + 9 * v9;
  if ( v8 != v10 )
  {
    if ( *(_BYTE *)(v8 + 8) )
    {
      v4 = (const char *)ptr;
      while ( 1 )
      {
LABEL_31:
        v19 = haystack;
        v20 = v6 + 176LL * *(_QWORD *)v8;
        if ( *(_QWORD *)(v20 + 8) )
          v19 = *(const char **)v20;
        if ( !strcmp(v19, v4) )
          break;
        if ( v8 + 9 == v10 )
          goto LABEL_26;
        if ( *(_BYTE *)(v8 + 17) )
        {
          v8 += 9;
        }
        else
        {
          if ( (*(_BYTE *)(v22 + 168) & 4) != 0 )
            goto LABEL_26;
          v8 += 18;
          if ( v8 == v10 )
            goto LABEL_26;
          while ( !*(_BYTE *)(v8 + 8) )
          {
            v8 += 9;
            if ( v8 == v10 )
              goto LABEL_26;
          }
          if ( v8 == v10 )
            goto LABEL_26;
        }
      }
      v25 = *(_QWORD *)v8;
      v26 = *(_BYTE *)(v8 + 8);
      goto LABEL_28;
    }
    v4 = (const char *)ptr;
    if ( (*(_BYTE *)(v22 + 168) & 4) == 0 )
    {
LABEL_46:
      v8 += 9;
      if ( v9 != 1 )
      {
        while ( !*(_BYTE *)(v8 + 8) )
        {
          v8 += 9;
          if ( v8 == v10 )
            goto LABEL_26;
        }
      }
      if ( v8 != v10 )
        goto LABEL_31;
    }
  }
LABEL_26:
  if ( v24 <= 1 )
  {
LABEL_14:
    sub_776CB0((__int64)&ptr, a1, a2, 1);
    v11 = haystack;
    if ( v28 )
      v11 = (const char *)ptr;
    v12 = (*(__int64 (__fastcall **)(_QWORD, const char *, const char *))(**(_QWORD **)(a1 + 40) + 24LL))(
            *(_QWORD *)(a1 + 40),
            v11,
            v4);
    if ( v12 != -1 )
    {
      if ( (*(_BYTE *)(v22 + 168) & 4) != 0 )
      {
        v13 = *(_QWORD *)(v22 + 24);
        v14 = *(_QWORD *)(v22 + 32);
        v25 = v12;
        v26 = 0;
        v15 = sub_773990(v13, v13 + 9 * v14, (__int64)&v25);
        if ( v17 != v15 && v16 == *(_QWORD *)v15 && !*(_BYTE *)(v15 + 8) )
        {
LABEL_54:
          v25 = v16;
          v26 = 0;
          if ( ptr )
          {
            v28 = 0;
            qfree(ptr);
          }
          goto LABEL_28;
        }
      }
      else if ( sub_773E60((_QWORD *)(v22 + 48), v12) )
      {
        goto LABEL_54;
      }
    }
    if ( ptr )
    {
      v28 = 0;
      qfree(ptr);
    }
    goto LABEL_22;
  }
  v25 = qword_2CD44E8;
  v26 = byte_2CD44F0;
LABEL_28:
  if ( v23 )
    qfree(v23);
  return v25;
}
