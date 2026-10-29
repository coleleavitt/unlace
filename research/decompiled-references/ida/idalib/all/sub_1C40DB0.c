void __fastcall sub_1C40DB0(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // r13
  unsigned int v6; // eax
  __int64 v7; // rax
  _BYTE *v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r12
  __int64 v29; // rax
  _QWORD *v30; // rax
  size_t v31; // rdx
  unsigned int v32; // [rsp+0h] [rbp-108h]
  __int64 v33; // [rsp+0h] [rbp-108h]
  double v34[2]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v35; // [rsp+18h] [rbp-F0h] BYREF
  void *dest; // [rsp+20h] [rbp-E8h]
  __m128 v37; // [rsp+28h] [rbp-E0h] BYREF
  void *src; // [rsp+40h] [rbp-C8h] BYREF
  size_t n; // [rsp+48h] [rbp-C0h]
  _QWORD v40[2]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int8 *v41[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v42; // [rsp+B8h] [rbp-50h]
  unsigned int v43; // [rsp+C0h] [rbp-48h]
  char v44; // [rsp+C4h] [rbp-44h]

  if ( ((*(_WORD *)a2 + 423) & 0x1FFu) <= 4 )
  {
    v5 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 34 <= 5 )
    {
      v6 = *(_DWORD *)(v5 + 24);
      v37.m128_u64[0] = 0;
      v37.m128_i8[8] = 0;
      v32 = v6;
      dest = &v37.m128_u16[4];
      *(_QWORD *)&v34[0] = sub_B77AF0(v5);
      if ( !*(_QWORD *)&v34[0] )
      {
        v10 = 0;
        goto LABEL_12;
      }
      v7 = sub_B77B50(v5);
      sub_1CB6030(&src, a1, *(_QWORD *)(*(_QWORD *)&v34[0] + 56LL), v7);
      v8 = dest;
      if ( src == v40 )
      {
        v31 = n;
        if ( n )
        {
          if ( n == 1 )
            *(_BYTE *)dest = v40[0];
          else
            memcpy(dest, src, n);
          v31 = n;
          v8 = dest;
        }
        v37.m128_u64[0] = v31;
        v8[v31] = 0;
        v8 = src;
        goto LABEL_8;
      }
      if ( dest == &v37.m128_u16[4] )
      {
        v34[0] = *(double *)v40;
        dest = src;
        v37 = _mm_loadh_ps(v34);
      }
      else
      {
        v34[0] = *(double *)v40;
        v9 = v37.m128_u64[1];
        dest = src;
        v37 = _mm_loadh_ps(v34);
        if ( v8 )
        {
          src = v8;
          v40[0] = v9;
LABEL_8:
          n = 0;
          *v8 = 0;
          if ( src != v40 )
            operator delete(src);
          v10 = 1;
LABEL_12:
          sub_168B9F0((__int64)&src, (__int64 *)(a1 + 8), v32, 0x1762u, 0);
          if ( v42 )
          {
            sub_1C2FE50(v41, a3);
          }
          else
          {
            if ( !v44 )
              goto LABEL_14;
            v11 = sub_168B9E0(&src);
            v15 = v40[0];
            if ( v40[0] )
            {
              v33 = v11;
              v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v40[0] + 32LL))(v40[0]);
              v11 = v33;
            }
            v35 = v15;
            v16 = sub_1587BC0(v11, &v35, v11, v12, v13, v14);
            sub_1C2FE50((unsigned __int8 **)(*v16 + 32LL * v43 + 8), a3);
          }
          if ( v42 )
          {
            sub_1C2FE50(v41, v10);
          }
          else
          {
            if ( !v44 )
            {
LABEL_14:
              v35 = *(_QWORD *)(a2 + 8);
              sub_162B6D0((__int64)&src, &v35);
              sub_15F7200(&src);
              if ( dest != &v37.m128_u16[4] )
                operator delete(dest);
              return;
            }
            v28 = sub_168B9E0(&src);
            v29 = v40[0];
            if ( v40[0] )
              v29 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v40[0] + 32LL))(v40[0]);
            v35 = v29;
            v30 = sub_1587BC0(v28, &v35, v24, v25, v26, v27);
            sub_1C2FE50((unsigned __int8 **)(*v30 + 32LL * v43 + 8), v10);
          }
          if ( v42 )
          {
            sub_AEC220(v41, dest, v37.m128_i64[0]);
          }
          else if ( v44 )
          {
            v21 = sub_168B9E0(&src);
            v22 = v40[0];
            if ( v40[0] )
              v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v40[0] + 32LL))(v40[0]);
            v35 = v22;
            v23 = sub_1587BC0(v21, &v35, v17, v18, v19, v20);
            sub_AEC220((unsigned __int8 **)(*v23 + 32LL * v43 + 8), dest, v37.m128_i64[0]);
          }
          goto LABEL_14;
        }
      }
      v8 = v40;
      src = v40;
      goto LABEL_8;
    }
  }
}
