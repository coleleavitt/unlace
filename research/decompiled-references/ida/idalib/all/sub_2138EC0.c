__int64 __fastcall sub_2138EC0(__int64 a1, __m128 *a2, void **a3)
{
  _QWORD *m128_u64; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned int v8; // ebp
  void *v9; // rax
  bool v10; // zf
  __int64 result; // rax
  unsigned int v12; // ecx
  void *v13; // rdi
  void *v14; // rdi
  void **v15; // rax
  unsigned __int8 v16; // [rsp+Fh] [rbp-79h]
  void *v17; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-70h]
  void *v19; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-60h]
  __int16 v21; // [rsp+40h] [rbp-48h]

  m128_u64 = a2->m128_u64;
  if ( *(_DWORD *)sub_2153C00(a1) != 4 && *(_DWORD *)sub_2153C00(a1) != 5 )
  {
    v21 = 259;
    v19 = "unknown token in expression";
    return sub_21543E0(a1, &v19, 0, 0);
  }
  v5 = sub_2153C00(a1);
  v6 = sub_2124B50(v5);
  v7 = sub_2153C00(a1);
  v18 = *(_DWORD *)(v7 + 32);
  if ( v18 > 0x40 )
  {
    a2 = (__m128 *)(v7 + 24);
    sub_2205510(&v17);
  }
  else
  {
    v17 = *(void **)(v7 + 24);
  }
  sub_2132C70(a1, a2);
  v8 = v18;
  if ( v18 <= 0x40 )
  {
    v9 = nullptr;
    v10 = v17 == nullptr;
    *m128_u64 = 0;
    if ( !v10 )
      v9 = v17;
LABEL_8:
    *a3 = v9;
    result = 0;
    goto LABEL_9;
  }
  v12 = v8 - sub_2206780(&v17);
  if ( v12 <= 0x80 )
  {
    if ( v12 > 0x40 )
    {
      sub_220AD70(&v19, &v17, v8 - 64);
      if ( v20 <= 0x40 )
      {
        *m128_u64 = v19;
      }
      else
      {
        v13 = v19;
        *m128_u64 = *(_QWORD *)v19;
        operator delete[](v13);
      }
      sub_2206590(&v19, &v17, 64);
      if ( v20 <= 0x40 )
      {
        *a3 = v19;
      }
      else
      {
        v14 = v19;
        *a3 = *(void **)v19;
        operator delete[](v14);
      }
      v8 = v18;
      result = 0;
      goto LABEL_9;
    }
    v15 = (void **)v17;
    *m128_u64 = 0;
    v9 = *v15;
    goto LABEL_8;
  }
  v19 = "out of range literal value";
  v21 = 259;
  result = sub_2153E90(a1, v6, &v19, 0, 0);
  v8 = v18;
LABEL_9:
  if ( v8 > 0x40 )
  {
    if ( v17 )
    {
      v16 = result;
      operator delete[](v17);
      return v16;
    }
  }
  return result;
}
