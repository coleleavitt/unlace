__int64 __fastcall dwarfstring_append_printf_u(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  __int64 v6; // rbx
  char v7; // al
  _BYTE *v8; // r14
  const char *v9; // r14
  char v10; // al
  __int64 v11; // rax
  char *v12; // r15
  unsigned __int64 v13; // rcx
  char v14; // al
  char *v15; // rdx
  int v16; // r8d
  int v17; // esi
  int v18; // edi
  int v19; // r9d
  int v20; // eax
  unsigned __int64 v21; // rdi
  unsigned int v22; // esi
  char *v23; // rbx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r12
  __int64 *v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r12
  char *v33; // rbx
  unsigned __int64 v34; // rax
  int v35; // [rsp+Ch] [rbp-7Ch]
  char *endptr; // [rsp+18h] [rbp-70h] BYREF
  char v37; // [rsp+42h] [rbp-46h] BYREF
  char v38; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  endptr = nullptr;
  if ( !a2 )
    goto LABEL_37;
  if ( !*a2 || (v6 = 0, *a2 == 37) )
  {
    v8 = a2;
    v6 = 0;
  }
  else
  {
    do
      v7 = a2[++v6];
    while ( v7 && v7 != 37 );
    v8 = &a2[v6];
  }
  dwarfstring_append_length();
  if ( *v8 != 37 || (v9 = &a2[v6 + 1], v10 = *v9, (*v9 & 0xDF) == 0) || v10 == 45 )
  {
LABEL_37:
    dwarfstring_append_length();
    return 0;
  }
  v35 = 0;
  if ( v10 == 48 )
  {
    v35 = 1;
    v9 = &a2[v6 + 2];
  }
  v11 = strtol(v9, &endptr, 10);
  v12 = endptr;
  v13 = v11;
  if ( endptr == v9 )
    v13 = 0;
  v14 = *endptr;
  v15 = (char *)(endptr - a2);
  v16 = 0;
  if ( *endptr == 108 )
  {
    v12 = endptr + 1;
    v14 = endptr[1];
    if ( v14 == 108 )
    {
      v12 = endptr + 2;
      v14 = endptr[2];
      if ( v14 == 108 )
      {
        v15 += 3;
        v16 = 3;
        v12 = &v15[(_QWORD)a2];
        v14 = v15[(_QWORD)a2];
      }
      else
      {
        v15 += 2;
        v16 = 2;
      }
    }
    else
    {
      ++v15;
      v16 = 1;
    }
  }
  v17 = 0;
  if ( v14 == 117 )
  {
    ++v15;
    v17 = 1;
    v12 = &v15[(_QWORD)a2];
    v14 = v15[(_QWORD)a2];
  }
  v18 = 0;
  if ( v14 == 100 )
  {
    ++v15;
    v18 = 1;
    v12 = &v15[(_QWORD)a2];
    v14 = v15[(_QWORD)a2];
  }
  v19 = 0;
  if ( v14 == 120 )
  {
    ++v15;
    v19 = 1;
    v12 = &v15[(_QWORD)a2];
    v14 = v15[(_QWORD)a2];
  }
  if ( v14 == 88 )
  {
    v12 = &v15[(_QWORD)a2 + 1];
    if ( *v12 != 115 && !(v19 + v18 + v17) && v16 != 3 )
      goto LABEL_54;
LABEL_48:
    dwarfstring_append_length();
    return 0;
  }
  if ( v14 == 115 )
    goto LABEL_48;
  v20 = v19 + v17 + v18;
  if ( v20 > 1 || !v20 || v16 == 3 || v18 == 1 )
    goto LABEL_48;
  if ( v17 )
  {
    v38 = 0;
    v21 = a3 / 0xA;
    v37 = *((_BYTE *)&qword_B8CB0 + a3 % 0xA);
    if ( a3 > 9 )
    {
      v22 = 1;
      v23 = &v37;
      do
      {
        --v23;
        ++v22;
        v24 = v21 % 0xA;
        v25 = v21;
        v21 /= 0xAu;
        *v23 = *((_BYTE *)&qword_B8CB0 + v24);
      }
      while ( v25 > 9 );
LABEL_31:
      v26 = v22;
      goto LABEL_32;
    }
    v26 = 1;
    goto LABEL_32;
  }
  if ( v19 )
  {
    v30 = qword_B8CA0;
    goto LABEL_55;
  }
LABEL_54:
  v30 = qword_B8C90;
LABEL_55:
  v31 = a3 & 0xF;
  v32 = a3 >> 4;
  v38 = *((_BYTE *)v30 + v31);
  if ( v32 )
  {
    v22 = 1;
    v33 = &v38;
    do
    {
      --v33;
      ++v22;
      v34 = v32 & 0xF;
      v32 >>= 4;
      *v33 = *((_BYTE *)v30 + v34);
    }
    while ( v32 );
    goto LABEL_31;
  }
  v26 = 1;
LABEL_32:
  if ( v26 < v13 )
  {
    v27 = v13 - v26;
    v28 = v27;
    if ( !v35 )
    {
      sub_57A60(a1, v27);
      dwarfstring_append_length();
      goto LABEL_35;
    }
    while ( v28 > 0x28 )
    {
      v28 -= 40LL;
      if ( (unsigned int)dwarfstring_append_length() != 1 )
        goto LABEL_43;
    }
    dwarfstring_append_length();
  }
LABEL_43:
  dwarfstring_append_length();
LABEL_35:
  if ( *v12 )
  {
    strlen(v12);
    dwarfstring_append_length();
  }
  return 0;
}

