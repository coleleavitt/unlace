__int64 __fastcall sub_B48E80(__int64 a1, __int64 *a2, __int64 a3)
{
  char **exception; // r12
  __int64 v4; // r13
  _QWORD *v5; // r8
  int v6; // r9d
  _QWORD *v7; // r12
  _QWORD *v8; // r15
  _QWORD *v9; // rbx
  __int64 i; // rax
  __int64 v11; // rax
  int v12; // edx
  __int64 *v13; // rax
  __int64 v14; // r14
  unsigned int v15; // edx
  unsigned int v16; // r9d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  _DWORD *v21; // rax
  _DWORD *v22; // r13
  __int64 result; // rax
  _QWORD *v25; // rax
  __int64 *v26; // [rsp+0h] [rbp-88h]
  int v27; // [rsp+8h] [rbp-80h]
  _DWORD **v28; // [rsp+8h] [rbp-80h]
  int v29; // [rsp+10h] [rbp-78h]
  unsigned int v30; // [rsp+18h] [rbp-70h]
  unsigned int v31; // [rsp+1Ch] [rbp-6Ch]
  int v32; // [rsp+20h] [rbp-68h]
  char v33; // [rsp+28h] [rbp-60h]
  int v34[2]; // [rsp+30h] [rbp-58h] BYREF
  int v35; // [rsp+38h] [rbp-50h]
  int v36; // [rsp+40h] [rbp-48h]
  void *v37; // [rsp+48h] [rbp-40h]

  v4 = *a2;
  ++*(_DWORD *)(a1 + 368);
  v27 = (int)a2;
  v29 = a3;
  v5 = *(_QWORD **)sub_15FB1F0(a1 + 56, a3);
  if ( v5 )
  {
    v7 = &v5[*((unsigned int *)v5 - 1)];
    if ( v7 != v5 )
    {
      v8 = v5;
      v9 = nullptr;
      for ( i = sub_15DC610(
                  *(_QWORD *)(a1 + 24),
                  *v5,
                  1,
                  (int)v34,
                  (int)v5,
                  v6,
                  (int)v34,
                  (int)a2,
                  v29,
                  v30,
                  v32,
                  v33,
                  v4,
                  v35,
                  v36,
                  v37);
            ;
            i = sub_15DC610(
                  *(_QWORD *)(a1 + 24),
                  *v8,
                  1,
                  (int)v26,
                  (int)v5,
                  v6,
                  (int)v26,
                  v27,
                  v29,
                  v30,
                  v32,
                  v33,
                  v4,
                  v35,
                  v36,
                  v37) )
      {
        v14 = i;
        if ( !v9 )
          break;
        v15 = *((_DWORD *)v9 - 1);
        if ( v15 != *((_DWORD *)v9 - 2) )
        {
          v11 = v15;
          v12 = v15 + 1;
          v13 = &v9[v11];
          goto LABEL_5;
        }
        v16 = (3 * v15 + 1) >> 1;
        v17 = 8 * v16 + 8;
        if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v26, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v26);
          sub_233E40((__int64)v26);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v30 = (3 * v15 + 1) >> 1;
        v18 = (unsigned int *)sub_186B300(v9 - 1, v17);
        v6 = v30;
        v9 = v18 + 2;
        ++v8;
        *v18 = v30;
        v19 = v18[1];
        v12 = v19 + 1;
        v9[v19] = v14;
        *((_DWORD *)v9 - 1) = v19 + 1;
        if ( v7 == v8 )
        {
LABEL_12:
          v20 = *(_QWORD *)(a1 + 24);
          goto LABEL_13;
        }
LABEL_6:
        ;
      }
      v25 = (_QWORD *)sub_186B270(0x18u);
      v12 = 1;
      v9 = v25 + 1;
      *v25 = 2;
      v13 = v25 + 1;
LABEL_5:
      ++v8;
      *v13 = v14;
      *((_DWORD *)v9 - 1) = v12;
      if ( v7 == v8 )
        goto LABEL_12;
      goto LABEL_6;
    }
  }
  v20 = *(_QWORD *)(a1 + 24);
  v9 = nullptr;
  v12 = 0;
LABEL_13:
  v21 = (_DWORD *)sub_15DC610(
                    v20,
                    v29,
                    v12,
                    (int)v9,
                    (int)v5,
                    v6,
                    (int)v26,
                    v27,
                    v29,
                    v30,
                    v32,
                    v33,
                    v34[0],
                    v35,
                    v36,
                    v37);
  v22 = v21;
  if ( v21 )
  {
    ++v21[2];
    result = sub_B48640(a1, v28, v21, v31);
    if ( v22[2]-- == 1 )
      result = sub_15D7BC0(v20, v22);
  }
  else
  {
    result = sub_B48640(a1, v28, nullptr, v31);
  }
  if ( v9 )
    return sub_186B220(v9 - 1);
  return result;
}

