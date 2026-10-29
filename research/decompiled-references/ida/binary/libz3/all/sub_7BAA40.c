__int64 __fastcall sub_7BAA40(int a1, __int64 a2, void *ptr, __int64 a4, __int64 a5, int a6)
{
  char **exception; // r12
  __int64 v7; // rdx
  unsigned int *v11; // r14
  unsigned int v12; // r13d
  __int64 v13; // rax
  unsigned int v14; // ebx
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // eax
  __int64 v18; // rax
  int *v19; // rax
  unsigned int v20; // ebp
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int *v24; // r14
  unsigned int v26; // edx
  size_t v27; // rsi
  unsigned int *v28; // rax
  _QWORD *v29; // rax
  int v30; // [rsp+0h] [rbp-B8h]
  int v31; // [rsp+0h] [rbp-B8h]
  int v32; // [rsp+8h] [rbp-B0h]
  int v33; // [rsp+8h] [rbp-B0h]
  void *ptra; // [rsp+10h] [rbp-A8h]
  void *ptrb; // [rsp+10h] [rbp-A8h]
  int v36[2]; // [rsp+18h] [rbp-A0h]
  int v37; // [rsp+18h] [rbp-A0h]
  int v38; // [rsp+20h] [rbp-98h]
  int v39; // [rsp+20h] [rbp-98h]
  unsigned int v40; // [rsp+24h] [rbp-94h]
  unsigned int v41; // [rsp+24h] [rbp-94h]
  int v42; // [rsp+28h] [rbp-90h]
  int v43; // [rsp+28h] [rbp-90h]
  int v44; // [rsp+30h] [rbp-88h]
  int v45; // [rsp+30h] [rbp-88h]
  int v46; // [rsp+34h] [rbp-84h] BYREF
  unsigned int *v47; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v48; // [rsp+40h] [rbp-78h] BYREF
  __int64 v49; // [rsp+48h] [rbp-70h]
  __int64 v50; // [rsp+50h] [rbp-68h] BYREF
  __int64 v51; // [rsp+58h] [rbp-60h]
  __int64 v52; // [rsp+60h] [rbp-58h] BYREF
  __int64 v53; // [rsp+68h] [rbp-50h]

  v32 = a1;
  *(_QWORD *)v36 = *(_QWORD *)(a4 + 8);
  ptra = ptr;
  if ( (unsigned __int64)(*(_QWORD *)v36 - 1LL) <= 1 )
  {
    v20 = -2;
    *(_QWORD *)(a5 + 8) = *(_QWORD *)v36;
    return v20;
  }
  v11 = nullptr;
  v12 = 1;
  v13 = 1;
  do
  {
    *(_QWORD *)(a4 + 8) = v13;
    *(_QWORD *)(a5 + 8) = *(_QWORD *)v36 - v13;
    v14 = sub_7BAD30(
            v32,
            a2,
            (int)ptra,
            a4,
            a5,
            a6,
            v30,
            v32,
            ptra,
            v36[0],
            v38,
            v42,
            v44,
            (int)v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53);
    v17 = sub_7BAD30(
            v33,
            a2,
            (int)ptrb,
            a5,
            v15,
            v16,
            v31,
            v33,
            ptrb,
            v37,
            v39,
            v43,
            v45,
            (int)v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53);
    if ( v14 != -2 )
    {
      v40 = v17;
      if ( v17 != -2 )
      {
        v42 = 2 * sub_11CA540(a2, 0, 1);
        v48 = 0xFFFFFFFF00000001LL;
        v49 = 0;
        sub_11C4C70(a2, v42 ^ 1u, v14, &v48);
        v51 = 0;
        v50 = 0xFFFFFFFF00000001LL;
        sub_11C4C70(a2, v42 ^ 1u, v40, &v50);
        if ( v11 )
        {
          v18 = *(v11 - 1);
          if ( (_DWORD)v18 == *(v11 - 2) )
          {
            v26 = (unsigned int)(3 * v18 + 1) >> 1;
            v27 = 4 * v26 + 8;
            if ( 4 * (int)v18 + 8 >= (unsigned int)v27 || (unsigned int)v18 >= v26 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_113C8C(&v52, "Overflow encountered when expanding vector", v7);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v52);
              sub_233E40((__int64)&v52);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v41 = (unsigned int)(3 * v18 + 1) >> 1;
            v28 = (unsigned int *)sub_186B300(v11 - 2, v27);
            v11 = v28 + 2;
            *v28 = v41;
            v19 = (int *)&v28[v28[1] + 2];
          }
          else
          {
            v19 = (int *)&v11[v18];
          }
        }
        else
        {
          v29 = (_QWORD *)sub_186B270(0x10u);
          v11 = (unsigned int *)(v29 + 1);
          *v29 = 2;
          v19 = (int *)(v29 + 1);
        }
        *v19 = v42;
        ++*(v11 - 1);
      }
    }
    v13 = ++v12;
  }
  while ( v12 < (unsigned __int64)(*(_QWORD *)(a4 + 8) - 1LL) );
  *(_QWORD *)(a4 + 8) = *(_QWORD *)v36;
  v20 = -2;
  *(_QWORD *)(a5 + 8) = *(_QWORD *)v36;
  if ( v11 )
  {
    v21 = *(v11 - 1);
    if ( v21 )
    {
      if ( v21 != 1 )
      {
        v20 = 2 * sub_11CA540(a2, 0, 1);
        v47 = v11;
        v46 = v20 ^ 1;
        sub_7B5E20(&v47, (unsigned int *)&v46);
        v24 = v47;
        v53 = 0;
        v52 = 0xFFFFFFFF00000001LL;
        if ( v47 )
        {
          sub_11C4C20(a2, *(v47 - 1), v47, &v52, v22, v23);
          sub_186B220(v24 - 2);
        }
        else
        {
          sub_11C4C20(a2, 0, 0, &v52, v22, v23);
        }
        return v20;
      }
      v20 = *v11;
    }
    else
    {
      v20 = -2;
    }
    sub_186B220(v11 - 2);
  }
  return v20;
}

