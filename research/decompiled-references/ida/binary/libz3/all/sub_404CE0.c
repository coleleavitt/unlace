__int64 __fastcall sub_404CE0(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  char **exception; // rbp
  char **v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 result; // rax
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 *v13; // rsi
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r13
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // r8d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rsi
  _DWORD *v25; // rdx
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 v28; // rcx
  __int64 *v29; // rcx
  int v30; // eax
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // r13
  _QWORD *v35; // rdx
  unsigned int v36; // eax
  unsigned int v37; // ecx
  size_t v38; // rsi
  unsigned int *v39; // rax
  _DWORD *v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  int v44; // [rsp+0h] [rbp-68h]
  unsigned int v45; // [rsp+4h] [rbp-64h]
  unsigned int v46; // [rsp+4h] [rbp-64h]
  unsigned int v47; // [rsp+4h] [rbp-64h]
  __int64 *v48; // [rsp+8h] [rbp-60h]
  __int64 v49; // [rsp+10h] [rbp-58h] BYREF
  int v50; // [rsp+18h] [rbp-50h]
  int v51; // [rsp+20h] [rbp-48h]
  char v52; // [rsp+28h] [rbp-40h]
  int v53; // [rsp+30h] [rbp-38h]
  int v54; // [rsp+38h] [rbp-30h]
  int v55; // [rsp+40h] [rbp-28h]
  void *v56; // [rsp+48h] [rbp-20h]

  v6 = 0;
  v48 = a4;
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v8 = **(_QWORD **)a1 + 8LL;
  v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 32LL);
  *(_BYTE *)(a1 + 32) = a3;
  v45 = v9;
  sub_43D1D0(v8, a2, 0, (unsigned int)(*(_DWORD *)(a1 + 8) + 1), a1 + 16, 1);
  sub_41D160(a1 + 40);
  result = v45;
  v11 = 8LL * v45;
  if ( v45 )
  {
    while ( 1 )
    {
      v14 = sub_439010(
              v8,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + v6),
              1,
              (unsigned int)(*(_DWORD *)(a1 + 8) + 1));
      v17 = sub_15DC610(v7, v14, 0, 0, v15, v16, v44, (int)v48, v49, v50, v51, v52, v53, v54, v55, v56);
      v18 = v17;
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      v19 = *(_QWORD **)(a1 + 48);
      if ( !v19 )
        break;
      v20 = *((_DWORD *)v19 - 1);
      if ( v20 == *((_DWORD *)v19 - 2) )
      {
        v21 = (3 * v20 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v22 || v20 >= v21 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_3FCFD0(&v49, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v49);
          sub_233E40((__int64)&v49);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v46 = (3 * v20 + 1) >> 1;
        v6 += 8;
        v23 = (unsigned int *)sub_186B300(v19 - 1, v22);
        v24 = v23[1];
        v25 = v23 + 2;
        *v23 = v46;
        *(_QWORD *)(a1 + 48) = v23 + 2;
        result = (unsigned int)(v24 + 1);
        *(_QWORD *)&v25[2 * v24] = v18;
        *(v25 - 1) = result;
        if ( v11 == v6 )
          goto LABEL_12;
      }
      else
      {
        v12 = v20;
        result = v20 + 1;
        v13 = &v19[v12];
LABEL_4:
        v6 += 8;
        *v13 = v18;
        *((_DWORD *)v19 - 1) = result;
        if ( v11 == v6 )
          goto LABEL_12;
      }
    }
    v42 = (_QWORD *)sub_186B270(0x18u);
    v19 = v42 + 1;
    *v42 = 2;
    result = 1;
    *(_QWORD *)(a1 + 48) = v19;
    v13 = v19;
    goto LABEL_4;
  }
LABEL_12:
  if ( v48 )
  {
    result = (__int64)v48;
    v26 = *v48;
    if ( *v48 )
    {
      result = *(unsigned int *)(v26 - 4);
      v27 = v26 + 8 * result;
      if ( v27 != v26 )
      {
        while ( 1 )
        {
          v30 = sub_439010(v8, *(_QWORD *)(*(_QWORD *)v26 + 16LL), 0, (unsigned int)(*(_DWORD *)(a1 + 8) + 1));
          v33 = sub_15DC610(v7, v30, 0, 0, v31, v32, v44, (int)v48, v49, v50, v51, v52, v53, v54, v55, v56);
          v34 = v33;
          if ( v33 )
            ++*(_DWORD *)(v33 + 8);
          v35 = *(_QWORD **)(a1 + 48);
          if ( !v35 )
            break;
          v36 = *((_DWORD *)v35 - 1);
          if ( v36 == *((_DWORD *)v35 - 2) )
          {
            v37 = (3 * v36 + 1) >> 1;
            v38 = 8 * v37 + 8;
            if ( 8 * v36 + 8 >= (unsigned int)v38 || v36 >= v37 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_3FCFD0(&v49, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, &v49);
              sub_233E40((__int64)&v49);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v47 = (3 * v36 + 1) >> 1;
            v26 += 8;
            v39 = (unsigned int *)sub_186B300(v35 - 1, v38);
            v40 = v39 + 2;
            *v39 = v47;
            v41 = v39[1];
            *(_QWORD *)(a1 + 48) = v39 + 2;
            result = (unsigned int)(v41 + 1);
            *(_QWORD *)&v40[2 * v41] = v34;
            *(v40 - 1) = result;
            if ( v27 == v26 )
              return result;
          }
          else
          {
            v28 = v36;
            result = v36 + 1;
            v29 = &v35[v28];
LABEL_17:
            v26 += 8;
            *v29 = v34;
            *((_DWORD *)v35 - 1) = result;
            if ( v27 == v26 )
              return result;
          }
        }
        v43 = (_QWORD *)sub_186B270(0x18u);
        v35 = v43 + 1;
        *v43 = 2;
        result = 1;
        *(_QWORD *)(a1 + 48) = v35;
        v29 = v35;
        goto LABEL_17;
      }
    }
  }
  return result;
}

