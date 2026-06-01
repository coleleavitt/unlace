__int64 __fastcall sub_228D6F0(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // r12
  size_t v4; // rax
  __int64 v5; // rdi
  size_t v6; // rbp
  __int64 result; // rax
  unsigned __int8 v8; // [rsp+Fh] [rbp-D9h]
  const char *v9; // [rsp+10h] [rbp-D8h] BYREF
  __int16 v10; // [rsp+30h] [rbp-B8h]
  _BYTE v11[32]; // [rsp+40h] [rbp-A8h] BYREF
  __int16 v12; // [rsp+60h] [rbp-88h]
  _BYTE v13[32]; // [rsp+70h] [rbp-78h] BYREF
  __int16 v14; // [rsp+90h] [rbp-58h]
  _BYTE v15[32]; // [rsp+A0h] [rbp-48h] BYREF
  __int16 v16; // [rsp+C0h] [rbp-28h]

  v2 = getenv("XDG_CACHE_HOME");
  if ( v2 )
  {
    a1[1] = 0;
    v3 = v2;
    v4 = strlen(v2);
    v5 = 0;
    v6 = v4;
    if ( v4 > a1[2] )
    {
      sub_2236E10((__int64)a1, a1 + 3, v4, 1);
      v5 = a1[1];
      if ( !v6 )
        goto LABEL_5;
    }
    else if ( !v4 )
    {
LABEL_5:
      result = 1;
      a1[1] = v5 + v6;
      return result;
    }
    memcpy((void *)(*a1 + v5), v3, v6);
    v5 = a1[1];
    goto LABEL_5;
  }
  result = sub_228D5A0(a1);
  if ( (_BYTE)result )
  {
    v8 = result;
    v16 = 257;
    v14 = 257;
    v12 = 257;
    v10 = 259;
    v9 = ".cache";
    sub_2288C30(a1, (__int64)&v9, (__int64)v11, (__int64)v13, (__int64)v15);
    return v8;
  }
  return result;
}
