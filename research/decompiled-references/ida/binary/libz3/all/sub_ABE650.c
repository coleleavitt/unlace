void __fastcall sub_ABE650(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r12
  _QWORD *v9; // r13
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned int v12; // ebp
  __int64 *v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 *v17; // rbx
  unsigned __int64 v18; // r13
  __int64 v19; // rsi
  bool v20; // zf
  __int64 *v21; // rbx
  unsigned __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v25; // [rsp+8h] [rbp-50h]
  __int64 v26; // [rsp+10h] [rbp-48h] BYREF
  __int64 *v27; // [rsp+18h] [rbp-40h]

  sub_B6E740(*(_QWORD *)(a1 + 16));
  v7 = sub_AB3F30(a1, a2, v3, v4, v5, v6);
  v8 = *(_QWORD *)(a1 + 24);
  v27 = nullptr;
  v9 = (_QWORD *)v7;
  v10 = *(_QWORD *)(a1 + 16);
  v26 = v8;
  if ( *(_BYTE *)(*(_QWORD *)(v10 + 112) + 429LL) )
    v11 = v9[14];
  else
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8656) + 8LL * **(unsigned int **)(*v9 + 32LL));
  v12 = sub_B39350(v11, *(unsigned int *)(a1 + 8));
  if ( v12 == -1 )
  {
    v12 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v11);
    sub_AB6BC0((__int64 *)a1, v12);
  }
  v24 = v8;
  v25 = nullptr;
  sub_AB6A00(a1, v12, (__int64)&v24);
  v13 = v25;
  v14 = v24;
  v15 = a1 + 120;
  if ( v25 )
    v16 = *((unsigned int *)v25 - 1);
  else
    v16 = 0;
  sub_FD8CF0(v15, v16, v25);
  sub_ABDB30(a1, (__int64)v9, (__int64)&v26);
  v17 = v27;
  if ( v27 )
  {
    v18 = (unsigned __int64)&v27[*((unsigned int *)v27 - 1)];
    if ( (unsigned __int64)v27 >= v18 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v20 )
            break;
        }
        if ( (unsigned __int64)++v17 >= v18 )
          goto LABEL_14;
      }
      sub_15D7BC0(v26, v19);
      ++v17;
    }
    while ( (unsigned __int64)v17 < v18 );
LABEL_14:
    v17 = v27;
    if ( v27 )
LABEL_15:
      sub_186B220(v17 - 1);
  }
  if ( v13 )
  {
    v21 = v13;
    v22 = (unsigned __int64)&v13[*((unsigned int *)v13 - 1)];
    if ( (unsigned __int64)v13 < v22 )
    {
      do
      {
        while ( 1 )
        {
          v23 = *v21;
          if ( *v21 )
          {
            v20 = (*(_DWORD *)(v23 + 8))-- == 1;
            if ( v20 )
              break;
          }
          if ( (unsigned __int64)++v21 >= v22 )
            goto LABEL_23;
        }
        ++v21;
        sub_15D7BC0(v14, v23);
      }
      while ( (unsigned __int64)v21 < v22 );
    }
LABEL_23:
    sub_186B220(v13 - 1);
  }
}

