__int64 __fastcall Z3_global_param_get(__int64 a1, _QWORD *a2)
{
  char v2; // r12
  __int64 v3; // rbx
  _BYTE *v4; // rdi
  size_t v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  void *v8; // [rsp+0h] [rbp-58h] BYREF
  size_t n; // [rsp+8h] [rbp-50h]
  _QWORD src[9]; // [rsp+10h] [rbp-48h] BYREF

  sub_186AE80(0xFFFFFFFFLL);
  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_294A70(a1, a2);
  *a2 = 0;
  sub_17FBD10(&v8, a1);
  v3 = sub_17FA970();
  v4 = *(_BYTE **)v3;
  v5 = n;
  if ( *(_QWORD *)v3 == v3 + 16 )
  {
    if ( v8 != src )
    {
      *(_QWORD *)v3 = v8;
      *(_QWORD *)(v3 + 8) = v5;
      *(_QWORD *)(v3 + 16) = src[0];
LABEL_13:
      v8 = src;
      v4 = src;
      goto LABEL_7;
    }
  }
  else if ( v8 != src )
  {
    *(_QWORD *)v3 = v8;
    v6 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 8) = v5;
    *(_QWORD *)(v3 + 16) = src[0];
    if ( v4 )
    {
      v8 = v4;
      src[0] = v6;
      goto LABEL_7;
    }
    goto LABEL_13;
  }
  if ( (void **)v3 == &v8 )
  {
    v4 = v8;
  }
  else
  {
    if ( n )
    {
      if ( n == 1 )
        *v4 = src[0];
      else
        memcpy(v4, src, n);
      v5 = n;
      v4 = *(_BYTE **)v3;
    }
    *(_QWORD *)(v3 + 8) = v5;
    v4[v5] = 0;
    v4 = v8;
  }
LABEL_7:
  n = 0;
  *v4 = 0;
  if ( v8 != src )
    operator delete(v8, src[0] + 1LL);
  *a2 = *(_QWORD *)sub_17FA970();
  result = 1;
  if ( v2 )
    byte_1C7EBA0 = 1;
  return result;
}

