__int64 __fastcall sub_57E220(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // r12
  __int64 v10; // r14
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  _QWORD *v15; // rsi
  __int64 v16; // rax
  int v17; // r12d
  int v18; // eax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rbx
  unsigned int v24; // r8d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rsi
  _DWORD *v28; // rdi
  __int64 v29; // rax
  __int64 (__fastcall *v30)(__int64, __int64, __int64, unsigned int); // r8
  __int64 (__fastcall *v31)(__int64); // rcx
  __int64 v32; // rax
  void *v33; // r13
  __int64 v34; // r12
  __int64 (__fastcall *v35)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 (__fastcall *v36)(__int64, __int64, __int64); // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  char **exception; // rbp
  unsigned int v41; // [rsp+Ch] [rbp-7Ch]
  __int64 v42; // [rsp+18h] [rbp-70h] BYREF
  _DWORD *v43; // [rsp+20h] [rbp-68h] BYREF
  int v44; // [rsp+28h] [rbp-60h]
  __int64 v45[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 24);
  v43 = nullptr;
  v44 = 0;
  if ( (unsigned __int8)sub_4C64F0(v6, a2, &v43) )
  {
    v28 = (_DWORD *)sub_4C50F0(v6, (__int64)&v43);
    v29 = *(_QWORD *)v28;
    v30 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int))(*(_QWORD *)v28 + 72LL);
    if ( v30 == sub_4FEA70 )
    {
      if ( v28[2] != a4 && a4 != -1 )
      {
        v31 = *(__int64 (__fastcall **)(__int64))(v29 + 48);
        if ( v31 != sub_4FE550 )
        {
          v32 = ((__int64 (__fastcall *)(_DWORD *, _DWORD **, _QWORD))v31)(v28, &v43, a4);
LABEL_26:
          v33 = (void *)v32;
          v34 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v32 + 128LL))(v32, a3, 0);
          v35 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v33 + 16LL);
          if ( v35 == sub_4C9C30 )
          {
            (**(void (__fastcall ***)(void *))v33)(v33);
            sub_186B220(v33);
          }
          else
          {
            v35((void (__fastcall ***)(_QWORD))v33);
          }
          goto LABEL_28;
        }
LABEL_25:
        v32 = (*(__int64 (__fastcall **)(_DWORD *, _DWORD **))(v29 + 40))(v28, &v43);
        goto LABEL_26;
      }
      v36 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v29 + 64);
      if ( v36 == sub_4FE820 )
        goto LABEL_25;
      v37 = v36((__int64)v28, a3, (__int64)&v43);
    }
    else
    {
      v37 = v30((__int64)v28, a3, (__int64)&v43, a4);
    }
    v34 = v37;
LABEL_28:
    v21 = sub_4C40F0(v6, (__int64)a2, v34);
    goto LABEL_15;
  }
  v7 = *a2;
  if ( *a2 )
  {
    v8 = *(unsigned int *)(v7 - 4);
    if ( v43 )
      *(v43 - 1) = 0;
    if ( (_DWORD)v8 )
    {
      v9 = 8 * v8;
      v10 = 0;
      while ( 1 )
      {
        if ( (unsigned __int8)sub_4C4270(v6, (_QWORD *)(v10 + v7), (__int64)&v42) )
        {
          v11 = v43;
          if ( v43 )
          {
            v12 = *(v43 - 1);
            if ( v12 == *(v43 - 2) )
            {
              v24 = (3 * v12 + 1) >> 1;
              v25 = 8 * v24 + 8;
              if ( 8 * v12 + 8 >= (unsigned int)v25 || v12 >= v24 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v45, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v45);
                sub_233E40((__int64)v45);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v41 = (3 * v12 + 1) >> 1;
              v26 = (unsigned int *)sub_186B300(v43 - 2, v25);
              v27 = v26[1];
              v11 = v26 + 2;
              v43 = v26 + 2;
              *v26 = v41;
              LODWORD(v26) = v27;
              v15 = &v11[v27];
              v14 = (_DWORD)v26 + 1;
            }
            else
            {
              v13 = v12;
              v14 = v12 + 1;
              v15 = &v43[2 * v13];
            }
          }
          else
          {
            v38 = (_QWORD *)sub_186B270(0x18u);
            v11 = v38 + 1;
            *v38 = 2;
            v14 = 1;
            v43 = v11;
            v15 = v11;
          }
          v10 += 8;
          *v15 = v42;
          *((_DWORD *)v11 - 1) = v14;
          if ( v9 == v10 )
            break;
        }
        else
        {
          v10 += 8;
          if ( v9 == v10 )
            break;
        }
        v7 = *a2;
      }
    }
  }
  else if ( v43 )
  {
    *(v43 - 1) = 0;
  }
  v16 = sub_4C50F0(v6, (__int64)&v43);
  v17 = sub_4C3EF0(v6, v16);
  v18 = sub_596CF0(v6);
  v21 = sub_59AAB0(v18, a3, (_DWORD)a2, v17, v19, v20, a3);
LABEL_15:
  v22 = v21;
  if ( v43 )
    sub_186B220(v43 - 2);
  return v22;
}

