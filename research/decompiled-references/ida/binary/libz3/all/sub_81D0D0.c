char __fastcall sub_81D0D0(__int64 a1, __int64 *a2, __int64 a3)
{
  char **exception; // rbx
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  _QWORD *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  _QWORD *v11; // r8
  int v12; // r9d
  _QWORD *v13; // r14
  _QWORD *v14; // rbx
  __int64 v15; // rsi
  int v16; // eax
  __int64 *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r13
  _QWORD *v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // r10d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rbx
  int v27; // edx
  unsigned int *v28; // rax
  unsigned int *v29; // rbp
  char result; // al
  _QWORD *v31; // rax
  int v32; // [rsp+0h] [rbp-88h]
  int v33[2]; // [rsp+8h] [rbp-80h]
  int v34; // [rsp+10h] [rbp-78h]
  _DWORD **v35; // [rsp+10h] [rbp-78h]
  unsigned int v36; // [rsp+18h] [rbp-70h]
  unsigned int v37; // [rsp+1Ch] [rbp-6Ch]
  int v38; // [rsp+20h] [rbp-68h]
  char v39; // [rsp+28h] [rbp-60h]
  int v40[2]; // [rsp+30h] [rbp-58h] BYREF
  int v41; // [rsp+38h] [rbp-50h]
  int v42; // [rsp+40h] [rbp-48h]
  void *v43; // [rsp+48h] [rbp-40h]

  v5 = *(_QWORD **)(a1 + 384);
  ++*(_DWORD *)(a1 + 296);
  v34 = (int)a2;
  v6 = *a2;
  *(_QWORD *)v33 = a3;
  if ( v5 )
  {
    v7 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v7 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v8 = *v5;
        if ( *v5 )
        {
          v9 = *(_QWORD *)(a1 + 376);
          v10 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v5 >= v7 )
          goto LABEL_8;
      }
      sub_15D7BC0(v9, v8);
      ++v5;
    }
    while ( v5 < v7 );
LABEL_8:
    v5 = *(_QWORD **)(a1 + 384);
    if ( v5 )
LABEL_9:
      *((_DWORD *)v5 - 1) = 0;
  }
  v11 = *(_QWORD **)sub_15FB1F0(a1 + 112, *(_QWORD *)v33);
  if ( v11 )
  {
    v13 = v11;
    v14 = &v11[*((unsigned int *)v11 - 1)];
    if ( v14 != v11 )
    {
      while ( 1 )
      {
        v18 = sub_15DC610(
                *(_QWORD *)(a1 + 72),
                *v13,
                1,
                (int)v40,
                (int)v11,
                v12,
                v32,
                v33[0],
                v34,
                v36,
                v38,
                v39,
                v6,
                v41,
                v42,
                v43);
        v19 = v18;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        v20 = *(_QWORD **)(a1 + 384);
        if ( !v20 )
          break;
        v21 = *((_DWORD *)v20 - 1);
        if ( v21 == *((_DWORD *)v20 - 2) )
        {
          v22 = (3 * v21 + 1) >> 1;
          v23 = 8 * v22 + 8;
          if ( 8 * v21 + 8 >= (unsigned int)v23 || v21 >= v22 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v40, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v40);
            sub_233E40((__int64)v40);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v36 = (3 * v21 + 1) >> 1;
          ++v13;
          v24 = (unsigned int *)sub_186B300(v20 - 1, v23);
          v25 = v24[1];
          v20 = v24 + 2;
          *v24 = v36;
          *(_QWORD *)(a1 + 384) = v24 + 2;
          *(_QWORD *)&v24[2 * v25 + 2] = v19;
          v24[1] = v25 + 1;
          if ( v14 == v13 )
          {
LABEL_22:
            v26 = *(_QWORD *)(a1 + 72);
            goto LABEL_23;
          }
        }
        else
        {
          v15 = v21;
          v16 = v21 + 1;
          v17 = &v20[v15];
LABEL_14:
          ++v13;
          *v17 = v19;
          *((_DWORD *)v20 - 1) = v16;
          if ( v14 == v13 )
            goto LABEL_22;
        }
      }
      v31 = (_QWORD *)sub_186B270(0x18u);
      v20 = v31 + 1;
      *v31 = 2;
      v16 = 1;
      *(_QWORD *)(a1 + 384) = v20;
      v17 = v20;
      goto LABEL_14;
    }
  }
  v20 = *(_QWORD **)(a1 + 384);
  v26 = *(_QWORD *)(a1 + 72);
  if ( v20 )
LABEL_23:
    v27 = *((_DWORD *)v20 - 1);
  else
    v27 = 0;
  v28 = (unsigned int *)sub_15DC610(
                          v26,
                          v33[0],
                          v27,
                          (int)v20,
                          (int)v11,
                          v12,
                          v32,
                          v33[0],
                          v34,
                          v36,
                          v38,
                          v39,
                          v40[0],
                          v41,
                          v42,
                          v43);
  v29 = v28;
  if ( !v28 )
    return sub_81C160((unsigned __int64 *)a1, v35, nullptr, v37);
  ++v28[2];
  result = sub_81C160((unsigned __int64 *)a1, v35, v28, v37);
  v10 = v29[2]-- == 1;
  if ( v10 )
    return sub_15D7BC0(v26, v29);
  return result;
}

