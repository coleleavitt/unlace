__int64 __fastcall sub_E08F70(
        __int64 a1,
        const __m128i *a2,
        unsigned int a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  void *exception; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned int v15; // r12d
  __int64 v16; // r13
  __int64 v17; // r14
  char *v18; // rbp
  int v19; // r9d
  _BYTE *v20; // rsi
  int v21; // ecx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  bool v25; // zf
  char *v26; // rbx
  char *v27; // r15
  __int64 v28; // rsi
  __int64 v30; // [rsp+0h] [rbp-88h]
  int v31; // [rsp+8h] [rbp-80h]
  int v32[2]; // [rsp+10h] [rbp-78h]
  int v33[2]; // [rsp+10h] [rbp-78h]
  _BYTE *v34; // [rsp+18h] [rbp-70h]
  void *v35; // [rsp+18h] [rbp-70h]
  int v36[2]; // [rsp+20h] [rbp-68h] BYREF
  int v37[2]; // [rsp+28h] [rbp-60h]
  __int64 v38; // [rsp+30h] [rbp-58h] BYREF
  void *ptr; // [rsp+38h] [rbp-50h]
  int v40[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v41; // [rsp+48h] [rbp-40h]

  sub_DFBCB0(a1);
  v13 = *(_QWORD *)(a1 + 296);
  sub_DFBCB0(a1);
  v14 = *(_QWORD *)(a1 + 296);
  ptr = nullptr;
  v38 = v14;
  *(_QWORD *)v37 = v13;
  *(_QWORD *)v36 = 0;
  v15 = sub_E08760(a1, a2, a3, a4, &v38, (__int64 *)v36);
  v16 = *(_QWORD *)v36;
  v17 = *(_QWORD *)v37;
  v18 = (char *)ptr;
  v30 = v38;
  if ( (_BYTE)v15 )
  {
    sub_DFBCB0(a1);
    *(_QWORD *)v32 = *(_QWORD *)(a1 + 296);
    sub_1829790(*(_QWORD *)v32, 0);
    v20 = *(_BYTE **)(a1 + 808);
    if ( !v20 )
    {
      v34 = (_BYTE *)sub_186B270(0x228u);
      sub_DFBCB0(a1);
      sub_633760((__int64)v34, *(_QWORD *)(a1 + 296), 0, (__int64)(v34 + 536));
      v20 = *(_BYTE **)(a1 + 808);
      *(_QWORD *)v34 = &off_1C4CA80;
      v34[544] = 0;
      if ( v34 != v20 )
      {
        sub_E0F960(v20);
        *(_QWORD *)(a1 + 808) = v34;
        LODWORD(v20) = (_DWORD)v34;
      }
    }
    if ( v18 )
      v21 = *((_DWORD *)v18 - 1);
    else
      v21 = 0;
    sub_157BE40(
      (int)v40,
      (int)v20,
      v16,
      v21,
      (int)v18,
      v19,
      v30,
      (__int64)&v38,
      v32[0],
      (int)v34,
      v36[0],
      v37[0],
      v38,
      ptr);
    v23 = *(_QWORD *)v40;
    *(_QWORD *)v40 = *a8;
    v22 = *(_QWORD *)v40;
    *a8 = v23;
    if ( v22 )
    {
      v24 = v41;
      v25 = (*(_DWORD *)(v22 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v24, v22);
    }
    if ( *(_BYTE *)(a1 + 188) )
    {
      v35 = (void *)*a8;
      sub_DFBCB0(a1);
      if ( !(unsigned __int8)sub_1664530(*(_QWORD *)(a1 + 296), v30, v31, v33[0], v35) )
      {
        exception = __cxa_allocate_exception(0x30u);
        sub_E0F430(exception, "invalid macro application, sort mismatch ", a2);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
    }
    sub_1829100(*(_QWORD *)v33);
  }
  if ( v18 )
  {
    v26 = v18;
    v27 = &v18[8 * *((unsigned int *)v18 - 1)];
    if ( v18 < v27 )
    {
      do
      {
        while ( 1 )
        {
          v28 = *(_QWORD *)v26;
          if ( *(_QWORD *)v26 )
          {
            v25 = (*(_DWORD *)(v28 + 8))-- == 1;
            if ( v25 )
              break;
          }
          v26 += 8;
          if ( v26 >= v27 )
            goto LABEL_18;
        }
        v26 += 8;
        sub_15D7BC0(v30, v28);
      }
      while ( v26 < v27 );
    }
LABEL_18:
    sub_186B220(v18 - 8);
  }
  if ( v16 )
  {
    v25 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v17, v16);
  }
  return v15;
}

