void __fastcall sub_86CF90(__int64 a1, unsigned int a2, unsigned int a3)
{
  char **exception; // r13
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD *v11; // r12
  int i; // r14d
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rdx
  int v18; // ecx
  unsigned int v19; // r8d
  size_t v20; // rsi
  unsigned int *v21; // rax
  const __m128i *v22; // rdi
  unsigned int v23; // edx
  __m128 *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // [rsp+18h] [rbp-A8h]
  __int64 v33; // [rsp+20h] [rbp-A0h]
  unsigned int v34; // [rsp+28h] [rbp-98h]
  int v35; // [rsp+2Ch] [rbp-94h]
  __int64 v36; // [rsp+30h] [rbp-90h]
  int v37; // [rsp+38h] [rbp-88h]
  unsigned int v38; // [rsp+3Ch] [rbp-84h]
  int ptr; // [rsp+40h] [rbp-80h]
  __int64 v40; // [rsp+48h] [rbp-78h]
  __int64 v41; // [rsp+50h] [rbp-70h] BYREF
  __int64 v42; // [rsp+58h] [rbp-68h] BYREF
  __m128i v43; // [rsp+60h] [rbp-60h] BYREF
  __int64 v44; // [rsp+70h] [rbp-50h] BYREF
  __m128 *v45; // [rsp+78h] [rbp-48h]

  if ( a2 != a3 )
  {
    if ( (int)a2 <= (int)a3 )
    {
      v31 = a3;
      a3 = a2;
      a2 = v31;
    }
    v5 = *(_QWORD *)(a1 + 88);
    v6 = a3;
    ++*(_DWORD *)(a1 + 196);
    v7 = *(__int64 **)(v5 + 8LL * a3);
    v8 = *(__int64 **)(v5 + 8LL * a2);
    v32 = *v7;
    v33 = *v8;
    sub_7E58A0(&v43, a1, *v7, *v8);
    v37 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 472LL))(
            *(_QWORD *)(a1 + 80),
            v43.m128i_i64[0],
            0,
            0);
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8 * v6);
    if ( v9 )
      v35 = *(_DWORD *)(v9 - 4);
    else
      v35 = 0;
    v10 = sub_186B270(0x10u);
    v11 = (_DWORD *)(v10 + 8);
    *(_DWORD *)(v10 + 8) = v37;
    *(_QWORD *)v10 = 0x100000002LL;
    if ( v35 )
    {
      for ( i = 0; i != v35; ++i )
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(a1 + 72);
          LODWORD(v44) = i;
          LOBYTE(v45) = 0;
          v36 = v14;
          v15 = *(_QWORD *)(a1 + 136);
          v41 = v32;
          v40 = sub_15DCAD0(v15, (int)&v41, 0);
          sub_15D0DF0(&v44);
          if ( v40 )
            ++*(_DWORD *)(v40 + 8);
          LODWORD(v44) = i;
          LOBYTE(v45) = 0;
          v42 = v33;
          v16 = sub_15DCAD0(*(_QWORD *)(a1 + 136), (int)&v42, 0);
          sub_15D0DF0(&v44);
          if ( v16 )
            ++*(_DWORD *)(v16 + 8);
          v38 = sub_7E58D0(a1, v40, v16);
          sub_7E5400(a1, v38, v37 ^ 1, nullptr);
          v17 = (unsigned int)*(v11 - 1);
          v18 = v38 ^ 1;
          if ( (_DWORD)v17 == *(v11 - 2) )
          {
            v19 = (unsigned int)(3 * v17 + 1) >> 1;
            v20 = 4 * v19 + 8;
            if ( 4 * (int)v17 + 8 >= (unsigned int)v20 || (unsigned int)v17 >= v19 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v44, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v44);
              sub_233E40((__int64)&v44);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v34 = (unsigned int)(3 * v17 + 1) >> 1;
            v21 = (unsigned int *)sub_186B300(v11 - 2, v20);
            v17 = v21[1];
            v11 = v21 + 2;
            v18 = v38 ^ 1;
            *v21 = v34;
          }
          v11[v17] = v18;
          ++*(v11 - 1);
          if ( v16 )
          {
            v13 = (*(_DWORD *)(v16 + 8))-- == 1;
            if ( v13 )
              sub_15D7BC0(v36, v16);
          }
          if ( v40 )
          {
            ptr = *(_DWORD *)(v40 + 8);
            *(_DWORD *)(v40 + 8) = ptr - 1;
            if ( ptr == 1 )
              break;
          }
          if ( ++i == v35 )
            goto LABEL_23;
        }
        sub_15D7BC0(v36, v40);
      }
LABEL_23:
      v22 = *(const __m128i **)(a1 + 80);
      v23 = *(v11 - 1);
    }
    else
    {
      v22 = *(const __m128i **)(a1 + 80);
      v23 = 1;
    }
    v24 = sub_7A55C0(v22, (unsigned __int64 *)(a1 + 16), v23, v11);
    v25 = *(_QWORD *)(a1 + 24);
    v26 = (unsigned int)*(v11 - 1);
    v44 = 2;
    v45 = v24;
    sub_11C4C20(v25, v26, v11, &v44, v27, v28);
    sub_186B220(v11 - 2);
    v29 = v43.m128i_i64[0];
    if ( v43.m128i_i64[0] )
    {
      v30 = v43.m128i_i64[1];
      v13 = (*(_DWORD *)(v43.m128i_i64[0] + 8))-- == 1;
      if ( v13 )
        sub_15D7BC0(v30, v29);
    }
  }
}

