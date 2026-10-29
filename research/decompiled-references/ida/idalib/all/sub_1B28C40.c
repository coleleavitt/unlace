__int64 __fastcall sub_1B28C40(__int64 a1, unsigned int **a2, __int64 a3, _DWORD *a4)
{
  unsigned int **v4; // r15
  unsigned int **v6; // rbx
  __int64 result; // rax
  unsigned int *v8; // rbp
  _DWORD *v9; // rcx
  unsigned int *v10; // r14
  unsigned int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  _DWORD *v30; // [rsp+8h] [rbp-150h]
  __int64 v31; // [rsp+20h] [rbp-138h]
  __int64 v32; // [rsp+38h] [rbp-120h]
  __int64 v33; // [rsp+38h] [rbp-120h]
  __int64 v34; // [rsp+48h] [rbp-110h] BYREF
  __m128i v35; // [rsp+50h] [rbp-108h] BYREF
  __int64 v36; // [rsp+60h] [rbp-F8h] BYREF
  __m128i v37; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v38[16]; // [rsp+80h] [rbp-D8h] BYREF
  _QWORD v39[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-B8h]
  unsigned __int8 *v41[11]; // [rsp+B0h] [rbp-A8h] BYREF
  char v42; // [rsp+108h] [rbp-50h]
  unsigned int v43; // [rsp+110h] [rbp-48h]
  char v44; // [rsp+114h] [rbp-44h]

  v4 = &a2[a3];
  if ( a2 != v4 )
  {
    v6 = a2;
    v30 = a4 + 2;
    result = 0;
    v8 = nullptr;
    while ( 1 )
    {
      v10 = *v6;
      v11 = (*v6)[2];
      if ( v11 == *a4 )
      {
        v9 = a4;
      }
      else
      {
        v9 = a4 + 1;
        if ( v11 != a4[1] )
          goto LABEL_4;
      }
      if ( v30 == v9 )
        goto LABEL_4;
      if ( !v8 )
      {
        v8 = *v6;
        goto LABEL_4;
      }
      if ( v11 == v8[2] )
      {
LABEL_4:
        if ( v4 == ++v6 )
          return result;
      }
      else
      {
        sub_168B9F0((__int64)v39, (__int64 *)(a1 + 8), *v10, 0x1161u, 0);
        sub_1AF81E0(&v37, v10[2]);
        if ( v42 )
        {
          sub_AEC220(v41, v37.m128i_i64[0], v37.m128i_i64[1]);
        }
        else if ( v44 )
        {
          v12 = sub_168B9E0(v39);
          v16 = v40;
          if ( v40 )
          {
            v32 = v12;
            v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 32LL))(v40);
            v12 = v32;
          }
          v35.m128i_i64[0] = v16;
          v17 = sub_1587BC0(v12, v35.m128i_i64, v12, v13, v14, v15);
          sub_AEC220((unsigned __int8 **)(*v17 + 32LL * v43 + 8), v37.m128i_i64[0], v37.m128i_i64[1]);
        }
        sub_1AF81E0(&v35, v8[2]);
        if ( v42 )
        {
          sub_AEC220(v41, v35.m128i_i64[0], v35.m128i_i64[1]);
        }
        else if ( v44 )
        {
          v24 = sub_168B9E0(v39);
          v28 = v40;
          if ( v40 )
          {
            v33 = v24;
            v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 32LL))(v40);
            v24 = v33;
          }
          v34 = v28;
          v29 = sub_1587BC0(v24, &v34, v24, v25, v26, v27);
          sub_AEC220((unsigned __int8 **)(*v29 + 32LL * v43 + 8), v35.m128i_i64[0], v35.m128i_i64[1]);
        }
        if ( (__int64 *)v35.m128i_i64[0] != &v36 )
          operator delete((void *)v35.m128i_i64[0]);
        if ( (_BYTE *)v37.m128i_i64[0] != v38 )
          operator delete((void *)v37.m128i_i64[0]);
        sub_15F7200(v39);
        sub_168B9F0((__int64)v39, (__int64 *)(a1 + 8), *v8, 0x182Au, 0);
        sub_1AF81E0(&v37, v8[2]);
        if ( v42 )
        {
          sub_AEC220(v41, v37.m128i_i64[0], v37.m128i_i64[1]);
        }
        else if ( v44 )
        {
          v18 = sub_168B9E0(v39);
          v22 = v40;
          if ( v40 )
          {
            v31 = v18;
            v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 32LL))(v40);
            v18 = v31;
          }
          v35.m128i_i64[0] = v22;
          v23 = sub_1587BC0(v18, v35.m128i_i64, v18, v19, v20, v21);
          sub_AEC220((unsigned __int8 **)(*v23 + 32LL * v43 + 8), v37.m128i_i64[0], v37.m128i_i64[1]);
        }
        if ( (_BYTE *)v37.m128i_i64[0] != v38 )
          operator delete((void *)v37.m128i_i64[0]);
        ++v6;
        sub_15F7200(v39);
        result = 1;
        if ( v4 == v6 )
          return result;
      }
    }
  }
  return 0;
}
