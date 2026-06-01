__int64 __fastcall dwarfstring_append_printf_i(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v6; // rbx
  char v7; // al
  _BYTE *v8; // r14
  __int64 v9; // rdx
  const char *v10; // r14
  char v11; // al
  int v12; // ebx
  __int64 v13; // rax
  char *v14; // r15
  unsigned __int64 v15; // rsi
  char v16; // al
  char *v17; // rdx
  int v18; // r9d
  int v19; // ecx
  int v20; // edi
  char *v21; // rdx
  signed __int64 v22; // rcx
  int v23; // r10d
  unsigned __int64 v24; // rbp
  _BYTE *v25; // r13
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  _BYTE *v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // r14
  __int64 result; // rax
  unsigned __int64 v32; // r13
  int v33; // [rsp+8h] [rbp-80h]
  int v34; // [rsp+Ch] [rbp-7Ch]
  char *endptr; // [rsp+18h] [rbp-70h] BYREF
  __m128i v36[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v37[6]; // [rsp+42h] [rbp-46h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  endptr = nullptr;
  if ( !a2 )
    goto LABEL_50;
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
  if ( *v8 != 37 || (v9 = v6 + 1, v10 = &a2[v6 + 1], v11 = *v10, (*v10 & 0xDF) == 0) )
  {
LABEL_50:
    dwarfstring_append_length();
    return 0;
  }
  if ( v11 != 45 )
  {
    if ( v11 != 43 )
    {
      v34 = 0;
      v33 = 0;
      goto LABEL_12;
    }
    v33 = 0;
    goto LABEL_55;
  }
  v9 = v6 + 2;
  v33 = 1;
  v10 = &a2[v6 + 2];
  v34 = 0;
  v11 = *v10;
  if ( *v10 == 43 )
  {
LABEL_55:
    ++v9;
    v34 = 1;
    v10 = &a2[v9];
    v11 = a2[v9];
  }
  if ( v11 == 45 )
  {
    ++v9;
    ++v33;
    v10 = &a2[v9];
    v11 = a2[v9];
  }
LABEL_12:
  v12 = 0;
  if ( v11 == 48 )
  {
    v10 = &a2[v9 + 1];
    v12 = 1;
  }
  v13 = strtol(v10, &endptr, 10);
  v14 = endptr;
  v15 = v13;
  if ( endptr == v10 )
    v15 = 0;
  v16 = *endptr;
  v17 = (char *)(endptr - a2);
  v18 = 0;
  if ( *endptr == 108 )
  {
    v14 = endptr + 1;
    v16 = endptr[1];
    if ( v16 == 108 )
    {
      v14 = endptr + 2;
      v16 = endptr[2];
      if ( v16 == 108 )
      {
        v17 += 3;
        v18 = 3;
        v14 = &v17[(_QWORD)a2];
        v16 = v17[(_QWORD)a2];
      }
      else
      {
        v17 += 2;
        v18 = 2;
      }
    }
    else
    {
      ++v17;
      v18 = 1;
    }
  }
  v19 = 0;
  if ( v16 == 117 )
  {
    ++v17;
    v19 = 1;
    v14 = &v17[(_QWORD)a2];
    v16 = v17[(_QWORD)a2];
  }
  v20 = 0;
  if ( v16 == 100 )
  {
    v21 = v17 + 1;
    v20 = 1;
    v14 = &v21[(_QWORD)a2];
    v16 = v21[(_QWORD)a2];
  }
  if ( v16 == 120 || v16 == 88 || v16 == 115 || !v20 || v18 == 3 || v20 + v19 == 2 || v33 && v34 )
  {
    dwarfstring_append_length();
    return 0;
  }
  v37[1] = 0;
  if ( a3 < 0 )
  {
    if ( a3 == 0x8000000000000000LL )
    {
      v24 = 20;
      v25 = (_BYTE *)v36;
      v36[0] = _mm_load_si128((const __m128i *)&xmmword_A6660);
      *(__int64 *)((char *)&v36[0].m128i_i64[1] + 5) = 0x38303835373734LL;
      goto LABEL_37;
    }
    v32 = -a3;
    v22 = v32 / 0xA;
    v37[0] = *((_BYTE *)&qword_B8CB0 + v32 % 0xA);
    if ( !(v32 / 0xA) )
    {
      v24 = 2;
      v28 = v37;
      goto LABEL_36;
    }
    v23 = 1;
    goto LABEL_32;
  }
  v22 = a3 / 10;
  v37[0] = *((_BYTE *)&qword_B8CB0 + a3 % 10);
  if ( a3 / 10 )
  {
    v23 = 0;
LABEL_32:
    v24 = 1;
    v25 = v37;
    do
    {
      --v25;
      v26 = v22 % 10;
      v22 /= 10LL;
      *v25 = *((_BYTE *)&qword_B8CB0 + v26);
      v27 = v24++;
    }
    while ( v22 );
    if ( v23 )
    {
      v24 = v27 + 2;
      v28 = v25;
LABEL_36:
      *(v28 - 1) = 45;
      v25 = v28 - 1;
      goto LABEL_37;
    }
    goto LABEL_69;
  }
  v24 = 1;
  v25 = v37;
  v27 = 0;
LABEL_69:
  if ( v34 )
  {
    *(v25 - 1) = 43;
    v24 = v27 + 2;
    --v25;
  }
LABEL_37:
  if ( v15 )
  {
    if ( v24 < v15 )
    {
      v29 = v15 - v24;
      v30 = v29;
      if ( !v12 )
      {
        sub_57A60(a1, v29);
        dwarfstring_append_length();
        goto LABEL_47;
      }
      if ( *v25 == 45 )
      {
        dwarfstring_append_length();
        while ( v30 > 0x28 )
        {
          v30 -= 40LL;
          if ( (unsigned int)dwarfstring_append_length() != 1 )
            goto LABEL_46;
        }
      }
      else
      {
        if ( *v25 != 43 )
        {
          while ( v30 > 0x28 )
          {
            v30 -= 40LL;
            if ( (unsigned int)dwarfstring_append_length() != 1 )
              goto LABEL_46;
          }
          dwarfstring_append_length();
          goto LABEL_46;
        }
        dwarfstring_append_length();
        while ( v30 > 0x28 )
        {
          v30 -= 40LL;
          if ( (unsigned int)dwarfstring_append_length() != 1 )
            goto LABEL_46;
        }
      }
      dwarfstring_append_length();
    }
LABEL_46:
    dwarfstring_append_length();
LABEL_47:
    result = 1;
    goto LABEL_48;
  }
  result = dwarfstring_append_length();
LABEL_48:
  if ( *v14 )
  {
    strlen(v14);
    return dwarfstring_append_length();
  }
  return result;
}

