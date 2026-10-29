__int64 __fastcall sub_722080(unsigned __int64 *a1, __int64 *a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  __int64 (__fastcall *v7)(__int64, __int64 *, __int64, __int64 *, __int64 *); // rax
  int v8; // r8d
  int v9; // r9d
  __int64 *v10; // r15
  __int64 v11; // r12
  unsigned __int64 v12; // r14
  _QWORD *v13; // rbx
  __int64 v14; // r12
  __int64 v15; // r15
  int v16; // eax
  _DWORD *v17; // rsi
  int v18; // eax
  _DWORD *v19; // rsi
  __int64 *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 *v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rbx
  _DWORD *v28; // rdx
  unsigned int v30; // eax
  __int64 v31; // rsi
  int v32; // eax
  _QWORD *v33; // rsi
  unsigned int v34; // r15d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rsi
  _QWORD *v38; // rax
  char **exception; // r12
  __int64 v40; // [rsp+8h] [rbp-C0h]
  __int64 v41; // [rsp+8h] [rbp-C0h]
  unsigned __int64 *v42; // [rsp+10h] [rbp-B8h]
  __int64 v46; // [rsp+30h] [rbp-98h]
  __int64 v47; // [rsp+38h] [rbp-90h]
  __m128i v48; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v49; // [rsp+60h] [rbp-68h]
  __int64 v50[11]; // [rsp+70h] [rbp-58h] BYREF

  v42 = a1 + 4;
  if ( (unsigned __int8)sub_15FD0A0(a1 + 4, *(_QWORD *)(*(_QWORD *)(*a2 + 16) + 40LL), a3, a4) )
    return sub_721200((__int64)a1, a2, a3, a4, a5);
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *, __int64 *))(*a1 + 96);
  if ( v7 == sub_720220 )
  {
    v47 = *a2;
    v46 = *(_QWORD *)(*(_QWORD *)(*a2 + 16) + 40LL);
    sub_6AA8D0(&v48, a1[1], *a4);
    v10 = v49;
    if ( v49 )
    {
      v11 = *((unsigned int *)v49 - 1);
      v12 = 0;
      v13 = nullptr;
      v40 = 8 * v11;
      if ( (_DWORD)v11 )
      {
        do
        {
          while ( 1 )
          {
            v14 = v10[v12 / 8];
            if ( !*(_WORD *)(v14 + 4) )
              break;
            v12 += 8LL;
            if ( v40 == v12 )
              goto LABEL_13;
          }
          v15 = *(_QWORD *)(v14 + 16);
          v16 = sub_15F0200(v42);
          v17 = *(_DWORD **)(v15 + 24);
          if ( v17 && v16 == *v17 && v17[1] == 1
            || (v18 = sub_15F0200(v42), (v19 = *(_DWORD **)(v15 + 24)) != nullptr) && v18 == *v19 && v19[1] == 2 )
          {
            if ( v13 )
            {
              v30 = *((_DWORD *)v13 - 1);
              if ( v30 == *((_DWORD *)v13 - 2) )
              {
                v34 = (3 * v30 + 1) >> 1;
                v35 = 8 * v34 + 8;
                if ( 8 * v30 + 8 >= (unsigned int)v35 || v30 >= v34 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v50, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v50);
                  sub_233E40((__int64)v50);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v36 = (unsigned int *)sub_186B300(v13 - 1, v35);
                v37 = v36[1];
                v13 = v36 + 2;
                *v36 = v34;
                LODWORD(v36) = v37;
                v33 = &v13[v37];
                v32 = (_DWORD)v36 + 1;
              }
              else
              {
                v31 = v30;
                v32 = v30 + 1;
                v33 = &v13[v31];
              }
            }
            else
            {
              v38 = (_QWORD *)sub_186B270(0x18u);
              v13 = v38 + 1;
              *v38 = 2;
              v32 = 1;
              v33 = v13;
            }
            *v33 = v14;
            *((_DWORD *)v13 - 1) = v32;
          }
          v10 = v49;
          v12 += 8LL;
        }
        while ( v40 != v12 );
LABEL_13:
        if ( v10 )
        {
          v20 = &v10[*((unsigned int *)v10 - 1)];
          if ( v10 >= v20 )
            goto LABEL_21;
          do
          {
            while ( 1 )
            {
              v21 = *v10;
              if ( *v10 )
              {
                v22 = v48.m128i_i64[1];
                if ( (*(_DWORD *)(v21 + 8))-- == 1 )
                  break;
              }
              if ( ++v10 >= v20 )
                goto LABEL_20;
            }
            sub_15D7BC0(v22, v21);
            ++v10;
          }
          while ( v10 < v20 );
LABEL_20:
          v10 = v49;
          if ( v49 )
LABEL_21:
            sub_186B220(v10 - 1);
        }
        if ( v13 )
        {
          v24 = v13;
          v25 = &v13[*((unsigned int *)v13 - 1)];
          do
          {
            if ( v24 == v25 )
            {
              sub_186B220(v13 - 1);
              goto LABEL_27;
            }
            v26 = *v24++;
          }
          while ( v47 != *(_QWORD *)(v26 + 32) );
          v41 = sub_15F0BB0((_DWORD)v42, *(_QWORD *)(v26 + 16), v26, (_DWORD)v25, v8, v9);
          sub_186B220(v13 - 1);
          v28 = (_DWORD *)v41;
          return sub_71F3C0((__int64)a1, a2, v28, (__int64)a4, a5);
        }
      }
      else
      {
        sub_186B220(v49 - 1);
      }
    }
LABEL_27:
    v27 = (_QWORD *)sub_15F6BE0(v42, v46);
    v28 = *(_DWORD **)(*v27 + 8LL * (unsigned int)sub_182D020(qword_1C7F2C0, a3));
    return sub_71F3C0((__int64)a1, a2, v28, (__int64)a4, a5);
  }
  return v7((__int64)a1, a2, a3, a4, a5);
}

