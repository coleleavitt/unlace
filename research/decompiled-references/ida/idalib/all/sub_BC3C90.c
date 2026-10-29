_QWORD *__fastcall sub_BC3C90(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *result; // rax
  __int64 v21; // r8
  __int64 v22; // rsi
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  _QWORD *v31; // [rsp+0h] [rbp-E8h]
  __int64 v32; // [rsp+8h] [rbp-E0h]
  _QWORD *v33; // [rsp+8h] [rbp-E0h]
  __int64 v34; // [rsp+10h] [rbp-D8h]
  __int64 v35; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+28h] [rbp-C0h]
  _QWORD v38[23]; // [rsp+30h] [rbp-B8h] BYREF

  v9 = *(_QWORD *)(sub_B8C330((__int64)a1) + 18360);
  if ( v9 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v9 + 80LL))(v9, a1[9], 1);
  v10 = a1[10];
  if ( !v10 )
    v10 = sub_BC3500(a1);
  ptr = v38;
  v11 = sub_B8C330((__int64)a1);
  v38[0] = a3;
  v12 = a2;
  v13 = a2 + 24 * a3;
  v37 = 0x2000000002LL;
  if ( v13 != a2 )
  {
    do
    {
      v35 = v13;
      v34 = v11;
      v32 = v12;
      sub_F1D660(v12, &ptr, v11);
      v13 = v35;
      v11 = v34;
      v12 = v32 + 24;
    }
    while ( v35 != v32 + 24 );
  }
  v14 = v10 + 104;
  sub_BC0290(a4, (__int64)&ptr, v11);
  v15 = sub_2223360(v14, &ptr, a5, &off_2B4B3E0);
  if ( !v15 || v15 == 104 )
  {
    if ( ptr != v38 )
      free(ptr);
    goto LABEL_15;
  }
  result = sub_705340((__int64 *)(*(_QWORD *)(v15 - 24) + 72LL), *(_QWORD *)(v15 - 24), v16, v17, v18, v19);
  if ( ptr != v38 )
  {
    v33 = result;
    free(ptr);
    result = v33;
  }
  if ( !result )
  {
LABEL_15:
    result = *(_QWORD **)(sub_B8C330((__int64)a1) + 18360);
    if ( result )
    {
      v21 = *result;
      v22 = a1[9];
      if ( a4 )
        v23 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(v21 + 80))(result, v22, 0);
      else
        v23 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(v21 + 88))(result, v22, a2, a3);
      if ( v23 )
      {
        ptr = v38;
        v37 = 0x2000000000LL;
        v24 = sub_B8C330((__int64)a1);
        sub_BC0710((__int64)&ptr, a2, a3, a4, v24);
        v25 = sub_2223360(v14, &ptr, a5, &off_2B4B3E0);
        v29 = v25;
        if ( v25 )
        {
          result = (_QWORD *)(v25 - 104);
          if ( result )
            result = sub_705340((__int64 *)(*(_QWORD *)(v29 - 24) + 72LL), *(_QWORD *)(v29 - 24), v29, v26, v27, v28);
        }
        else
        {
          result = nullptr;
        }
        if ( ptr != v38 )
        {
          v31 = result;
          free(ptr);
          return v31;
        }
      }
      else
      {
        return nullptr;
      }
    }
  }
  return result;
}
