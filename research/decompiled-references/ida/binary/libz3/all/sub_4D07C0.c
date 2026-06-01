__int64 *__fastcall sub_4D07C0(__int64 *a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 *v8; // r15
  __int64 *v9; // r13
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v17; // [rsp+10h] [rbp-68h] BYREF
  __int64 v18; // [rsp+18h] [rbp-60h]
  void *v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-50h]

  v3 = sub_186B270(0xA0u);
  sub_1373200(v3, a2[7]);
  v4 = *a2;
  *a1 = v3;
  ++*(_DWORD *)(v3 + 16);
  v5 = *(__int64 (__fastcall **)(__int64))(v4 + 192);
  if ( v5 == sub_4D0080 )
    v6 = (__int64)(a2 + 8);
  else
    v6 = v5((__int64)a2);
  sub_4C3490((char **)&v19, v6);
  v7 = a2[7];
  v8 = (__int64 *)v19;
  v17 = 0;
  v18 = v7;
  v9 = (__int64 *)((char *)v19 + 8 * v20);
  if ( v19 != v9 )
  {
    while ( (unsigned __int64)*v8 <= 1 )
    {
      if ( v9 == ++v8 )
        goto LABEL_14;
    }
    if ( v9 != v8 )
    {
      v10 = *v8;
      do
      {
        v11 = sub_4C7190(v6, v10);
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 144LL))(v11, &v17);
        sub_135F9B0(*a1, v10, v17);
        v12 = v8 + 1;
        if ( v9 == v8 + 1 )
          break;
        while ( 1 )
        {
          v10 = *v12;
          v8 = v12;
          if ( (unsigned __int64)*v12 > 1 )
            break;
          if ( v9 == ++v12 )
            goto LABEL_14;
        }
      }
      while ( v9 != v12 );
    }
  }
LABEL_14:
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a2[6] + 2952) + 32LL))(*(_QWORD *)(a2[6] + 2952), a1);
  v13 = v17;
  if ( v17 )
  {
    v14 = v18;
    if ( (*(_DWORD *)(v17 + 8))-- == 1 )
      sub_15D7BC0(v14, v13);
  }
  if ( v19 )
    sub_186B220(v19);
  return a1;
}

