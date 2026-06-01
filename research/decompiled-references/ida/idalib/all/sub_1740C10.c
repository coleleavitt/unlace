__int64 __fastcall sub_1740C10(__int64 *a1, __int64 a2, __int64 a3)
{
  char v3; // cl
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  _QWORD *v9; // r14
  void *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int8 v15; // [rsp+0h] [rbp-198h]
  unsigned __int8 v16; // [rsp+0h] [rbp-198h]
  __int64 v18; // [rsp+18h] [rbp-180h]
  __m128i v19[2]; // [rsp+20h] [rbp-178h] BYREF
  void *v20; // [rsp+40h] [rbp-158h] BYREF
  __int64 v21; // [rsp+48h] [rbp-150h]
  _BYTE v22[128]; // [rsp+50h] [rbp-148h] BYREF
  void *ptr; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-C0h]
  _BYTE v25[184]; // [rsp+E0h] [rbp-B8h] BYREF

  v3 = *(_BYTE *)(a2 + 32);
  result = 0;
  if ( v3 == *(_BYTE *)(a3 + 32) )
  {
    if ( !v3 )
      goto LABEL_11;
    v7 = *(_QWORD *)(a2 + 24);
    if ( v7 != *(_QWORD *)(a3 + 24) )
      return result;
    if ( (_DWORD)v7 )
    {
      v8 = 0;
      v9 = *(_QWORD **)(*a1 + 248);
      v18 = 32 * ((unsigned int)(v7 - 1) + 1LL);
      while ( 1 )
      {
        v20 = v22;
        v21 = 0x2000000000LL;
        v24 = 0x2000000000LL;
        ptr = v25;
        sub_AB6BB0(v19, v9, (const __m128i *)(v8 + *(_QWORD *)(a2 + 16)));
        sub_F1D660((__int64)v19, (__int64)&v20, (__int64)v9);
        sub_AB6BB0(v19, v9, (const __m128i *)(v8 + *(_QWORD *)(a3 + 16)));
        sub_F1D660((__int64)v19, (__int64)&ptr, (__int64)v9);
        result = sub_2222ED0(&v20, &ptr);
        v10 = ptr;
        if ( !(_BYTE)result )
          break;
        if ( ptr != v25 )
          free(ptr);
        if ( v20 == v22 )
        {
          v8 += 32;
          if ( v18 == v8 )
            goto LABEL_11;
        }
        else
        {
          free(v20);
          v8 += 32;
          if ( v8 == v18 )
            goto LABEL_11;
        }
      }
      if ( ptr == v25 )
        goto LABEL_16;
    }
    else
    {
LABEL_11:
      v11 = *(_QWORD *)a2;
      v12 = *(_QWORD *)a3;
      result = 1;
      if ( *(_QWORD *)a2 == *(_QWORD *)a3 )
        return result;
      v13 = *(_QWORD *)a2;
      v20 = v22;
      v21 = 0x2000000000LL;
      v24 = 0x2000000000LL;
      v14 = *a1;
      ptr = v25;
      sub_F1A490(v13, (__int64)&v20, *(_QWORD *)(v14 + 248), 1, 0);
      sub_F1A490(v12, (__int64)&ptr, *(_QWORD *)(*a1 + 248), 1, 0);
      result = sub_2222ED0(&v20, &ptr);
      if ( (_BYTE)result )
      {
        *(_QWORD *)a1[1] = v11;
        *(_QWORD *)a1[2] = v12;
      }
      v10 = ptr;
      if ( ptr == v25 )
        goto LABEL_16;
    }
    v15 = result;
    free(v10);
    result = v15;
LABEL_16:
    if ( v20 != v22 )
    {
      v16 = result;
      free(v20);
      return v16;
    }
  }
  return result;
}
