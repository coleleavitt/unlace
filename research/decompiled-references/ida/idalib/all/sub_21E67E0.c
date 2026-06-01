__int64 __fastcall sub_21E67E0(__int64 *a1, int a2, char *a3, size_t a4, char *a5, size_t a6)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rax
  char v17; // dl
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 result; // rax
  __int64 v21; // [rsp+0h] [rbp-98h] BYREF
  int v22; // [rsp+Ch] [rbp-8Ch] BYREF
  __m128 v23; // [rsp+10h] [rbp-88h] BYREF
  __int64 *v24[4]; // [rsp+20h] [rbp-78h] BYREF
  __m128i v25[5]; // [rsp+40h] [rbp-58h] BYREF

  v8 = *a1;
  v22 = a2;
  *(_BYTE *)(v8 + 937) = 1;
  v24[0] = a1;
  v24[1] = (__int64 *)&v22;
  v24[2] = (__int64 *)(v8 + 808);
  v9 = sub_21E6610(v24, a3, a4, a4, (__int64)a5, a6);
  if ( !v9 )
    return 2;
  *(_QWORD *)(v8 + 928) = v9;
  v14 = v10;
  *(_BYTE *)(v8 + 936) = 0;
  v15 = v9;
  v16 = sub_21E6610(v24, a5, a6, v11, v12, v13);
  if ( !v16 )
    return 3;
  if ( v15 == v16 )
    return 0;
  if ( !v14 || *(_BYTE *)(v8 + 936) )
  {
    result = 1;
    if ( !v17 )
      return result;
    *(_QWORD *)&v21 = v15;
  }
  else
  {
    *(_QWORD *)&v21 = v16;
  }
  v23 = _mm_loadh_ps(&v21);
  sub_21D4CB0(v25, (unsigned int *)(v8 + 944), (__int64 *)&v23, &v23.m128_u64[1], v18, v19);
  return 0;
}
