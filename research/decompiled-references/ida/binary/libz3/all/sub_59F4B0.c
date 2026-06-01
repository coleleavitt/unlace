__int64 __fastcall sub_59F4B0(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v2)(_QWORD *); // rax
  _QWORD *v3; // rbp
  __int64 (__fastcall *v4)(_QWORD); // rdx
  _QWORD *v5; // r12
  __int64 (__fastcall *v6)(_QWORD); // rax
  __int64 v7; // r14
  __int64 (__fastcall *v8)(_QWORD); // rcx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // r9
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // r9
  __int64 v16; // r13
  char *v17; // r15
  __int64 v18; // r12
  __int64 v19; // r9
  __int64 v20; // r13
  char *v21; // r14
  __int64 v22; // rbp
  __int64 v23; // r9
  char *v25; // [rsp+0h] [rbp-48h]
  char *v26; // [rsp+0h] [rbp-48h]
  __int64 v27; // [rsp+8h] [rbp-40h]

  v2 = *(__int64 (__fastcall **)(_QWORD *))(*a2 + 72LL);
  if ( v2 != sub_59B210 )
    return v2(a2);
  v3 = (_QWORD *)a2[8];
  v4 = *(__int64 (__fastcall **)(_QWORD))(*v3 + 72LL);
  if ( (char *)v4 == (char *)v2 )
  {
    v5 = (_QWORD *)v3[8];
    v6 = *(__int64 (__fastcall **)(_QWORD))(*v5 + 72LL);
    if ( v6 == v4 )
    {
      v7 = v5[8];
      v8 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 72LL);
      if ( v8 == v6 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 64) + 72LL))(*(_QWORD *)(v7 + 64));
        v10 = *(_QWORD *)(v7 + 8);
        v27 = v9;
        v25 = *(char **)(v7 + 32);
        v11 = sub_186B270(0x48u);
        sub_59A080(v11, v10, (_QWORD *)(v7 + 16), v25, v27, v12);
      }
      else
      {
        v11 = v8(v5[8]);
      }
      v13 = v5[1];
      v26 = (char *)v5[4];
      v14 = sub_186B270(0x48u);
      sub_59A080(v14, v13, v5 + 2, v26, v11, v15);
    }
    else
    {
      v14 = v6(v3[8]);
    }
    v16 = v3[1];
    v17 = (char *)v3[4];
    v18 = sub_186B270(0x48u);
    sub_59A080(v18, v16, v3 + 2, v17, v14, v19);
  }
  else
  {
    v18 = v4(a2[8]);
  }
  v20 = a2[1];
  v21 = (char *)a2[4];
  v22 = sub_186B270(0x48u);
  sub_59A080(v22, v20, a2 + 2, v21, v18, v23);
  return v22;
}

