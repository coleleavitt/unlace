__int64 __fastcall sub_2095140(_QWORD *a1, const void *a2, const void *a3, size_t a4, const void *a5, size_t a6)
{
  _QWORD *v6; // rbp
  __int64 v7; // r15
  bool v8; // zf
  size_t v9; // r14
  const void *v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r13
  int v14; // eax
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 result; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-E8h]
  __int16 v23; // [rsp+Ch] [rbp-DCh]
  int v24; // [rsp+1Ch] [rbp-CCh] BYREF
  __m128i v25[3]; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v26[2]; // [rsp+50h] [rbp-98h] BYREF
  __int16 v27; // [rsp+70h] [rbp-78h]
  __m128i v28; // [rsp+80h] [rbp-68h] BYREF
  const void *v29; // [rsp+90h] [rbp-58h]
  size_t v30; // [rsp+98h] [rbp-50h]
  __int16 v31; // [rsp+A0h] [rbp-48h]

  v6 = a1;
  v7 = *((unsigned int *)a1 + 42);
  v23 = (__int16)a2;
  v8 = *(_QWORD *)(a1[19] + 24LL) == 0;
  v24 = 0;
  if ( !v8 )
  {
    a4 = a6;
    a3 = a5;
  }
  v9 = a4;
  v10 = a3;
  if ( v7 )
  {
    v11 = a1[20];
    if ( a4 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = v11;
        if ( *(_QWORD *)(v11 + 8) == v9 )
        {
          a1 = *(_QWORD **)v11;
          a2 = v10;
          v22 = v12;
          v14 = memcmp(*(const void **)v11, v10, v9);
          v12 = v22;
          if ( !v14 )
            break;
        }
        ++v12;
        v11 += 48;
        if ( v7 == v12 )
          goto LABEL_9;
      }
    }
    else
    {
      v21 = 0;
      while ( 1 )
      {
        v13 = v11;
        if ( !*(_QWORD *)(v11 + 8) )
          break;
        ++v21;
        v11 += 48;
        if ( v7 == v21 )
          goto LABEL_9;
      }
    }
    v20 = *(_DWORD *)(v13 + 40);
    v24 = v20;
  }
  else
  {
LABEL_9:
    v15 = sub_227D6D0(a1, a2);
    v31 = 1283;
    v26[0].m128i_i64[0] = (__int64)"'!";
    v27 = 259;
    v28.m128i_i64[0] = (__int64)"Cannot find option named '";
    v29 = v10;
    v30 = v9;
    sub_A41580(v25, &v28, v26, v16, v17, v18);
    result = sub_22116C0(v6, v25, 0, 0, v15);
    if ( (_BYTE)result )
      return result;
    v20 = v24;
  }
  *((_DWORD *)v6 + 30) = v20;
  v8 = v6[72] == 0;
  *((_WORD *)v6 + 6) = v23;
  if ( v8 )
    std::__throw_bad_function_call();
  ((void (__fastcall *)(_QWORD *, int *))v6[73])(v6 + 70, &v24);
  return 0;
}
