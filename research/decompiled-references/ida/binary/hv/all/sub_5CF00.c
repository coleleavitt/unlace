__int64 __fastcall sub_5CF00(__int64 a1, const char *a2)
{
  char *v2; // rbp
  __int64 v3; // r14
  size_t v4; // r13
  void *v5; // r12
  char *v6; // rbp
  char *v7; // rcx
  char v8; // al
  char *v9; // r13
  char *p_haystack; // rax
  char v11; // dl
  bool v12; // r14
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  _BYTE *v17; // rsi
  __int64 v18; // r13
  unsigned __int64 v19; // rbp
  _BYTE *v20; // rsi
  char v21; // al
  char *v22; // rax
  char v23; // dl
  __int64 v24; // [rsp+10h] [rbp-50D8h]
  size_t v25; // [rsp+20h] [rbp-50C8h]
  char *v26; // [rsp+30h] [rbp-50B8h]
  char v27; // [rsp+3Fh] [rbp-50A9h]
  void *ptr; // [rsp+40h] [rbp-50A8h] BYREF
  __int128 v29; // [rsp+48h] [rbp-50A0h]
  char v30[4]; // [rsp+60h] [rbp-5088h] BYREF
  char haystack; // [rsp+64h] [rbp-5084h] BYREF
  char v32; // [rsp+65h] [rbp-5083h]
  __int64 v33; // [rsp+2088h] [rbp-3060h]
  int v34; // [rsp+2094h] [rbp-3054h]
  char s[4095]; // [rsp+40A0h] [rbp-1048h] BYREF
  char v36; // [rsp+509Fh] [rbp-49h] BYREF
  char v37; // [rsp+50A0h] [rbp-48h] BYREF
  unsigned __int64 v38; // [rsp+50A8h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( a2 && (v2 = (char *)a2, *a2) )
  {
    ptr = nullptr;
    v29 = 0;
    v4 = strlen(a2);
    v3 = v4 + 1;
  }
  else
  {
    v3 = 2;
    ptr = nullptr;
    v4 = 1;
    v29 = 0;
    v2 = "/";
  }
  ptr = (void *)sub_96080(&ptr, 0, v3, 1);
  *(_QWORD *)&v29 = v3;
  memmove(ptr, v2, v4);
  *((_BYTE *)ptr + v4) = 0;
  if ( (unsigned __int64)v29 > 1 )
  {
    v20 = ptr;
    v21 = *((char *)ptr + v29 - 2);
    if ( v21 == 47 || v21 == 92 )
    {
      v18 = v29 - 1;
      v19 = v29 + 1;
      goto LABEL_44;
    }
  }
  v27 = sub_95600(v2);
  if ( !v27 )
    goto LABEL_6;
  v15 = v29;
  v16 = 2;
  if ( (_QWORD)v29 )
  {
    v16 = v29 + 1;
    v15 = v29 - 1;
  }
  v17 = ptr;
  if ( *((_QWORD *)&v29 + 1) < v16 )
  {
    ptr = (void *)sub_96080(&ptr, ptr, v16, 1);
    v17 = ptr;
  }
  *(_QWORD *)&v29 = v16;
  v17[v15] = 47;
  *((_BYTE *)ptr + v15 + 1) = 0;
  v18 = v29;
  v19 = 2;
  v20 = ptr;
  if ( (_QWORD)v29 )
  {
    v18 = v29 - 1;
    v19 = v29 + 1;
LABEL_44:
    if ( *((_QWORD *)&v29 + 1) < v19 )
      goto LABEL_45;
    goto LABEL_40;
  }
  if ( *((_QWORD *)&v29 + 1) < 2u )
  {
LABEL_45:
    ptr = (void *)sub_96080(&ptr, v20, v19, 1);
    v20 = ptr;
  }
LABEL_40:
  *(_QWORD *)&v29 = v19;
  v20[v18] = 42;
  v27 = 1;
  *((_BYTE *)ptr + v18 + 1) = 0;
LABEL_6:
  v5 = ptr;
  v33 = 0;
  v34 = 0;
  sub_94D70(s);
  v25 = strlen(s);
  v6 = &s[v25];
  if ( !(unsigned int)sub_94630(v5, v30, 0x4000) )
  {
    v7 = v6 + 1;
    if ( v6 + 1 >= &v37 )
      v7 = &v36;
    v26 = v7;
    do
    {
      if ( haystack == 46 && (v32 == 46 || !v32) || (unsigned __int8)sub_64260(&haystack) )
        continue;
      if ( v25 )
      {
        v8 = *(v6 - 1);
        if ( v8 == 47 || v8 == 92 )
        {
          if ( v6 >= &v37 )
          {
            if ( !byte_1671A1 )
              sub_96F80(520);
LABEL_66:
            BUG();
          }
          v9 = &s[v25];
          goto LABEL_20;
        }
        if ( v6 >= &v37 )
        {
          if ( !byte_1671A1 )
            sub_96F80(518);
          goto LABEL_66;
        }
      }
      *v6 = 47;
      if ( v6 + 1 >= &v37 )
        goto LABEL_46;
      v9 = v26;
LABEL_20:
      if ( v9 != &v36 )
      {
        p_haystack = &haystack;
        do
        {
          v11 = *p_haystack++;
          *v9 = v11;
          if ( !v11 )
            goto LABEL_24;
        }
        while ( ++v9 != &v36 );
      }
LABEL_46:
      v36 = 0;
      v9 = &v36;
LABEL_24:
      v12 = (v30[1] & 0x40) != 0;
      v13 = (**(__int64 (__fastcall ***)(__int64, char *, bool))a1)(a1, s, v12);
      if ( v13 )
        goto LABEL_30;
      if ( *(_BYTE *)(a1 + 8) )
      {
        *(_BYTE *)(a1 + 8) = 0;
      }
      else if ( v12 && v27 )
      {
        if ( v9 >= &v37 )
        {
          if ( !byte_1671A1 )
            sub_96F80(520);
          goto LABEL_66;
        }
        v22 = "/";
        if ( v9 == &v36 )
        {
LABEL_58:
          v36 = 0;
        }
        else
        {
          while ( 1 )
          {
            v23 = *v22++;
            *v9 = v23;
            if ( !v23 )
              break;
            if ( ++v9 == &v36 )
              goto LABEL_58;
          }
        }
        v13 = sub_5CF00(a1, s);
        if ( v13 )
          goto LABEL_30;
      }
      *v6 = 0;
    }
    while ( !(unsigned int)sub_945A0(v30) );
  }
  v13 = 0;
LABEL_30:
  v24 = v13;
  sub_94680(v30);
  result = v24;
  if ( ptr )
  {
    *(_QWORD *)&v29 = 0;
    j__free(ptr);
    return v24;
  }
  return result;
}

