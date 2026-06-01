__int64 __fastcall sub_BE53E0(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 *v6; // r12
  __int64 v7; // rax
  bool v8; // zf
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 (*v12)(); // rax
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned __int8 v19; // [rsp+1h] [rbp-49h]
  char v20; // [rsp+10h] [rbp-3Ah] BYREF
  char v21; // [rsp+11h] [rbp-39h] BYREF
  __int64 v22; // [rsp+12h] [rbp-38h] BYREF
  __int64 v23; // [rsp+1Ah] [rbp-30h]

  v3 = *(_QWORD *)(*a1 + 8656LL);
  if ( !v3 )
    return 0;
  v5 = *a2;
  if ( (unsigned int)v5 >= *(_DWORD *)(v3 - 4) )
    return 0;
  v6 = *(__int64 **)(v3 + 8 * v5);
  if ( !v6 )
    return 0;
  v7 = a1[1];
  v8 = a1[10] == 0;
  v22 = 0;
  v23 = v7;
  if ( v8 || (v10 = sub_15D1F10(a2), !(unsigned __int8)sub_1673B10(a1 + 4, v10)) )
  {
    v14 = a1[7];
    if ( v14
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v14 + 352LL))(v14, v6, &v22)
      && (unsigned __int8)sub_1666AE0(a1 + 2, v22, a3, &v20)
      || (v15 = a1[8]) != 0
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v15 + 352LL))(v15, v6, &v22)
      && (unsigned __int8)sub_1666AE0(a1 + 2, v22, a3, &v21) )
    {
      result = 1;
    }
    else
    {
      v16 = a1[9];
      if ( !v16 )
        goto LABEL_7;
      result = sub_A736E0(v16, v6, a3);
    }
  }
  else
  {
    v11 = a1[10];
    v12 = *(__int64 (**)())(*(_QWORD *)v11 + 352LL);
    if ( v12 == sub_893E80 )
    {
LABEL_7:
      result = 0;
      goto LABEL_14;
    }
    result = ((__int64 (__fastcall *)(__int64, __int64 *, __int64 *))v12)(v11, v6, &v22);
  }
LABEL_14:
  v17 = v22;
  if ( v22 )
  {
    v18 = v23;
    v8 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v8 )
    {
      v19 = result;
      sub_15D7BC0(v18, v17);
      return v19;
    }
  }
  return result;
}

