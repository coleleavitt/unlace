_QWORD *__fastcall sub_114DEB0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // r12
  __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // al
  char *v13; // rbx
  size_t v14; // rax
  _BYTE *v15; // rax
  size_t v16; // rdx
  _BYTE *v17; // rax
  unsigned __int64 v18; // rbx
  size_t v19; // r12
  __int64 v20; // r12
  unsigned __int64 v21; // rdi
  __int64 v22; // [rsp+8h] [rbp-90h]
  _BYTE *v23; // [rsp+8h] [rbp-90h]
  int v24; // [rsp+1Ch] [rbp-7Ch] BYREF
  void *dest; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-70h]
  _QWORD v27[2]; // [rsp+30h] [rbp-68h] BYREF
  void *src; // [rsp+40h] [rbp-58h] BYREF
  size_t n; // [rsp+48h] [rbp-50h]
  _BYTE v30[72]; // [rsp+50h] [rbp-48h] BYREF

  v26 = 0;
  LOBYTE(v27[0]) = 0;
  dest = v27;
  src = v30;
  n = 0;
  v30[0] = 0;
  v24 = 2260;
  v5 = sub_21B6DA0(a2, &v24, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 != v8 )
  {
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2260) )
    {
      if ( v8 == ++v7 )
        goto LABEL_5;
    }
    if ( v8 != v7 )
    {
      do
      {
        v10 = *v7;
        v11 = *(_QWORD *)(*v7 + 16LL);
        if ( !v11 )
          v11 = *v7;
        ++v7;
        *(_BYTE *)(v11 + 44) |= 1u;
        if ( v7 == v8 )
          break;
        while ( 1 )
        {
          if ( *v7 )
          {
            v22 = v10;
            v12 = sub_21B9810(*v7, 2260);
            v10 = v22;
            if ( v12 )
              break;
          }
          if ( v8 == ++v7 )
            goto LABEL_17;
        }
      }
      while ( v8 != v7 );
LABEL_17:
      v13 = **(char ***)(v10 + 48);
      v14 = strlen(v13);
      sub_99BDC0(&src, 0, n, v13, v14);
      if ( sub_9B4AA0((__int64)&src, "la64v1.0") && sub_9B4AA0((__int64)&src, "la64v1.1") )
      {
        v17 = dest;
        v18 = n;
        if ( dest == v27 )
          v19 = 15;
        else
          v19 = v27[0];
        if ( n > v19 )
        {
          if ( (n & 0x8000000000000000LL) != 0LL )
            std::__throw_length_error("basic_string::_M_create");
          v20 = 2 * v19;
          if ( n < v20 )
          {
            v21 = v20 + 1;
            if ( v20 < 0 )
            {
              v21 = 0x8000000000000000LL;
              v20 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v21 = n + 1;
            v20 = n;
          }
          v17 = (_BYTE *)operator new(v21);
          if ( dest != v27 )
          {
            v23 = v17;
            operator delete(dest);
            v17 = v23;
          }
          dest = v17;
          v27[0] = v20;
        }
        if ( v18 )
        {
          if ( v18 == 1 )
            *v17 = *(_BYTE *)src;
          else
            memcpy(v17, src, v18);
          v17 = dest;
        }
        v26 = v18;
        v17[v18] = 0;
      }
      else
      {
        v15 = (_BYTE *)sub_22A6F40(*(_DWORD *)(a3 + 32) == 14);
        sub_99BDC0(&dest, 0, v26, v15, v16);
      }
    }
  }
LABEL_5:
  sub_114DD40(a1, (__int64)&dest, a3);
  if ( src != v30 )
    operator delete(src);
  if ( dest != v27 )
    operator delete(dest);
  return a1;
}
