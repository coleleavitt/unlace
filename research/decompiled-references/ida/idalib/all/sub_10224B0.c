__int64 __fastcall sub_10224B0(__int64 *a1, int a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int32 v13; // r15d
  unsigned int *v14; // rdx
  __int64 v15; // rdx
  int v16; // r15d
  __int64 v17; // rsi
  char v18; // dl
  __int64 v19; // rdx
  char v20; // cl
  int v21; // r9d
  __int64 v22; // rax
  char v23; // [rsp+1h] [rbp-69h] BYREF
  __m128i v24; // [rsp+2h] [rbp-68h] BYREF
  char v25; // [rsp+22h] [rbp-48h]

  if ( !a2 )
    return 0;
  v23 = 0;
  v7 = sub_101FA50((__int64)a1, a2, &v23);
  if ( v23 || *(char *)(v7 + 3) < 0 )
    return 0;
  v8 = *(_DWORD *)v7 & 0x7FFFFFFF;
  if ( a3 == 1 && a4 == 1 )
    return v8;
  v9 = (__int64 *)(*(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  sub_101D9A0(&v24, v9, a1[1], a1[2], 0);
  v13 = v24.m128i_i32[2];
  if ( !v25 )
    return 0;
  v14 = (unsigned int *)v9[5];
  if ( !v14 )
  {
    v22 = sub_1022230(a1 + 3, (__int64)v9, 0, v10, v11, v12, v24.m128i_u64[0], v24.m128i_u64[1]);
    v9[5] = v22;
    v14 = (unsigned int *)v22;
  }
  if ( a3 <= *v14 )
  {
    v15 = v14[a3 - 1 + 1];
    result = v8 + (unsigned int)v15;
    v16 = v13 - v15;
    if ( v16 )
    {
      if ( v16 == 1
        || a4 == 1
        || (v17 = v24.m128i_i64[0] + v15, v18 = *(_BYTE *)(v24.m128i_i64[0] + v15), v18 == 10)
        || v18 == 13 )
      {
        v21 = 0;
      }
      else
      {
        v19 = 1;
        do
        {
          v21 = v19;
          if ( v19 == (unsigned int)(v16 - 2) + 1LL )
            break;
          if ( v19 == (unsigned int)(a4 - 2) + 1LL )
            break;
          v20 = *(_BYTE *)(v17 + v19++);
          if ( v20 == 13 )
            break;
        }
        while ( v20 != 10 );
      }
      return (unsigned int)(v21 + result);
    }
  }
  else
  {
    if ( v13 )
      return v8 + v13 - 1;
    return v8;
  }
  return result;
}
