bool __fastcall sub_8EACB0(_QWORD *a1)
{
  __int64 v3; // rbp
  unsigned int v4; // eax
  __int64 v5; // rdx
  const void *v6; // rdi
  __int64 v7; // rbp
  _DWORD *v8; // r12
  _BYTE v10[32]; // [rsp+0h] [rbp-20h] BYREF

  if ( !*(_BYTE *)(a1[14] + 576LL) )
    return 0;
  v3 = a1[13];
  sub_180C5A0(v10, "sls");
  v4 = sub_15D1320(v3 + 560, v10);
  if ( v4 == -1 )
    return 0;
  v5 = a1[1084];
  if ( !v5 )
    return 0;
  if ( v4 >= *(_DWORD *)(v5 - 4) )
    return 0;
  v6 = *(const void **)(v5 + 8LL * v4);
  if ( !v6 )
    return 0;
  v7 = *((_QWORD *)__dynamic_cast(
                     v6,
                     (const struct __class_type_info *)&`typeinfo for'smt::theory,
                     (const struct __class_type_info *)&`typeinfo for'smt::theory_sls,
                     0)
       + 9);
  if ( v7 )
    ++*(_DWORD *)(v7 + 16);
  v8 = (_DWORD *)a1[1165];
  if ( v8 )
  {
    if ( v8[4]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v8)(v8);
      sub_186B220(v8);
    }
  }
  a1[1165] = v7;
  return v7 != 0;
}

