__int64 __fastcall sub_213C380(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebp
  unsigned __int8 v8; // al
  unsigned __int64 v9; // r15
  __int64 v10; // r14
  unsigned int v11; // eax
  int v12; // eax
  _QWORD *v13; // r15
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r14
  __int64 v17; // rbx
  unsigned int v18; // eax
  int v19; // eax
  _QWORD *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // r13
  void **v26; // r12
  void **v27; // rbx
  __int64 v28; // r14
  unsigned __int64 v29; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v30; // [rsp+8h] [rbp-F0h]
  __int64 v31; // [rsp+18h] [rbp-E0h] BYREF
  __m128i v32; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v33[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int16 v34; // [rsp+50h] [rbp-A8h]
  __m128i v35[2]; // [rsp+60h] [rbp-98h] BYREF
  __int16 v36; // [rsp+80h] [rbp-78h]
  __m128i v37[2]; // [rsp+90h] [rbp-68h] BYREF
  __int16 v38; // [rsp+B0h] [rbp-48h]

  v32 = 0u;
  v31 = 0;
  if ( (unsigned __int8)sub_2153C10(a1, &v31) )
    return 1;
  v38 = 259;
  v37[0].m128i_i64[0] = (__int64)"expected identifier in '.purgem' directive";
  v8 = sub_213B1B0(a1, (__m128 *)&v32, v2, v3, v4, v5);
  if ( (unsigned __int8)sub_2154450(a1, v8, v31, v37) )
    return 1;
  v6 = sub_21544B0(a1);
  if ( (_BYTE)v6 )
  {
    return 1;
  }
  else
  {
    v9 = v32.m128i_u64[1];
    v10 = *(_QWORD *)(a1 + 16);
    v29 = v32.m128i_i64[0];
    v11 = sub_2244B30(v32.m128i_i64[0], v32.m128i_i64[1]);
    v12 = sub_2244E60(v10 + 2360, v29, v9, v11);
    if ( v12 == -1 )
      sub_212FCE0((__int64 **)v37, (__int64 *)(*(_QWORD *)(v10 + 2360) + 8LL * *(unsigned int *)(v10 + 2368)), 1);
    else
      sub_212FCE0((__int64 **)v37, (__int64 *)(*(_QWORD *)(v10 + 2360) + 8LL * v12), 1);
    v13 = (_QWORD *)v37[0].m128i_i64[0];
    sub_212FCE0((__int64 **)v37, (__int64 *)(*(_QWORD *)(v10 + 2360) + 8LL * *(unsigned int *)(v10 + 2368)), 1);
    v16 = v32.m128i_u64[1];
    if ( (_QWORD *)v37[0].m128i_i64[0] == v13 || *v13 == -8 )
    {
      v33[1] = v32;
      v35[0].m128i_i64[0] = (__int64)"' is not defined";
      v36 = 259;
      v34 = 1283;
      v33[0].m128i_i64[0] = (__int64)"macro '";
      sub_A41580(v37, v33, v35, 1283, v14, v15);
      return (unsigned int)sub_2153E90(a1, a2, v37, 0, 0);
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 16);
      v30 = v32.m128i_i64[0];
      v18 = sub_2244B30(v32.m128i_i64[0], v32.m128i_i64[1]);
      v19 = sub_2244E60(v17 + 2360, v30, v16, v18);
      if ( v19 == -1 )
        sub_212FCE0((__int64 **)v37, (__int64 *)(*(_QWORD *)(v17 + 2360) + 8LL * *(unsigned int *)(v17 + 2368)), 1);
      else
        sub_212FCE0((__int64 **)v37, (__int64 *)(*(_QWORD *)(v17 + 2360) + 8LL * v19), 1);
      v20 = (_QWORD *)v37[0].m128i_i64[0];
      sub_212FCE0((__int64 **)v37, (__int64 *)(*(_QWORD *)(v17 + 2360) + 8LL * *(unsigned int *)(v17 + 2368)), 1);
      if ( (_QWORD *)v37[0].m128i_i64[0] != v20 )
      {
        v25 = (_QWORD *)*v20;
        sub_2244F90(v17 + 2360, *v20, v21, v22, v23, v24);
        v26 = (void **)v25[9];
        v27 = (void **)v25[8];
        v28 = *v25 + 97LL;
        if ( v26 != v27 )
        {
          do
          {
            while ( *v27 != v27 + 2 )
            {
              operator delete(*v27);
              v27 += 4;
              if ( v26 == v27 )
                goto LABEL_16;
            }
            v27 += 4;
          }
          while ( v26 != v27 );
LABEL_16:
          v27 = (void **)v25[8];
        }
        if ( v27 )
          operator delete(v27);
        sub_212DB80((__int64)(v25 + 5));
        operator delete(v25, v28, 8);
      }
    }
  }
  return v6;
}
