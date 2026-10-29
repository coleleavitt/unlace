unsigned __int64 __fastcall sub_1C0CC10(_QWORD *a1, char **a2, _DWORD *a3)
{
  char *v6; // rdx
  const char *v7; // rdi
  char v8; // al
  unsigned __int64 result; // rax
  int v10; // eax
  char *v11; // rdx
  char *v12; // rsi
  char v13; // cl
  int v14; // eax
  char v15; // [rsp+3h] [rbp-25h] BYREF
  int v16; // [rsp+4h] [rbp-24h] BYREF
  char *endptr[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = *a2;
  v15 = 0;
  v7 = v6 + 1;
  v16 = 0;
  *a2 = v6 + 1;
  v8 = *v6;
  if ( *v6 == 87 )
  {
    v10 = strtoul(v7, endptr, 10);
    v11 = endptr[0];
    *a2 = endptr[0];
    if ( v10 == 512 )
    {
      result = a1[2511];
    }
    else if ( v10 == 1024 )
    {
      result = a1[2510];
    }
    else
    {
      result = a1[2512];
    }
    while ( 1 )
    {
      v12 = v11 + 1;
      *a2 = v11 + 1;
      v13 = *v11;
      if ( *v11 != 42 )
        break;
LABEL_14:
      result = sub_A70010((__int64)a1, result);
      v11 = *a2;
    }
    while ( v13 == 67 )
    {
      result = result & 7 | 1 | result & 0xFFFFFFFFFFFFFFF8LL;
      v11 = v12++;
      *a2 = v12;
      v13 = *v11;
      if ( *v11 == 42 )
        goto LABEL_14;
    }
    *a2 = v11;
  }
  else if ( v8 == 105 )
  {
    v14 = strtoul(v7, endptr, 10);
    *a2 = endptr[0];
    *a3 = v14;
    return a1[2340];
  }
  else if ( v8 == 86 )
  {
    return sub_A70300((__int64)a1, a1[2344], 0x10u, 1u);
  }
  else
  {
    *a2 = v6;
    return sub_AA8960((__int64)a1, a2, a1, &v16, &v15, 1);
  }
  return result;
}
