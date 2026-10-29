__int64 __fastcall sub_118C8C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  const char *v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rcx
  bool v12; // cf
  bool v13; // zf
  __int64 v14; // rdx
  const char *v15; // rsi
  unsigned __int8 *v16; // rdx
  __int64 v17; // rax
  char v18; // r14
  char v19; // r12
  __int64 result; // rax
  int v21; // ebp
  __int64 v22; // [rsp+8h] [rbp-80h]
  unsigned __int8 *v23[4]; // [rsp+10h] [rbp-78h] BYREF
  __int16 v24; // [rsp+30h] [rbp-58h]

  v6 = sub_10DCD30(a2, 0xB64u);
  if ( v6 )
  {
    v8 = *(unsigned int *)(a3 + 8);
    if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v22 = v6;
      sub_2237220(a3, a3 + 16, v8 + 1, 8);
      v8 = *(unsigned int *)(a3 + 8);
      v6 = v22;
    }
    v9 = "native";
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v8) = "-tune-cpu";
    v10 = *(__int64 **)(v6 + 48);
    v11 = 7;
    v12 = __CFADD__(*(_DWORD *)(a3 + 8), 1);
    v13 = (*(_DWORD *)(a3 + 8))++ == -1;
    v14 = *v10;
    v15 = (const char *)*v10;
    do
    {
      if ( !v11 )
        break;
      v12 = *v15 < (unsigned int)*v9;
      v13 = *v15++ == *v9++;
      --v11;
    }
    while ( v13 );
    if ( (!v12 && !v13) == v12 )
    {
      v24 = 261;
      v23[0] = (unsigned __int8 *)sub_22A33B0(v9, v15, v14, v11, v7);
      v23[1] = v16;
      v17 = sub_10DA6C0(a2, (__int64)v23);
      sub_10DC5D0(a3, v17);
    }
    else
    {
      sub_10DC5D0(a3, v14);
    }
  }
  v18 = sub_21B7850(a2, 2294, 2554, 0);
  v19 = sub_21B7850(a2, 2793, 2669, 0);
  result = sub_115EF00(*(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  v21 = result;
  if ( v18 )
  {
    if ( v19 )
    {
      if ( (_DWORD)result )
      {
        sub_FC70B0((__int64)v23, **(_QWORD **)(*(_QWORD *)(a1 + 24) + 8LL), 0, 493);
        sub_1188FA0(v23, (__int64)"-mpacked-stack -mbackchain -mhard-float");
        sub_AEA040((__int64)v23);
      }
    }
    result = sub_10DC5D0(a3, (__int64)"-mbackchain");
  }
  if ( !v19 )
  {
    if ( v21 )
      return result;
LABEL_19:
    sub_10DC5D0(a3, (__int64)"-msoft-float");
    sub_10DC5D0(a3, (__int64)"-mfloat-abi");
    return sub_10DC5D0(a3, (__int64)"soft");
  }
  result = sub_10DC5D0(a3, (__int64)"-mpacked-stack");
  if ( !v21 )
    goto LABEL_19;
  return result;
}
