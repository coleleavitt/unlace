__int64 __fastcall sub_286860(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx

  v2 = a2[3];
  if ( *(_DWORD *)(v2 + 8) != 18
    || *(_QWORD *)(v2 + 72)
    || !(unsigned __int8)sub_285160(*(_QWORD *)(v2 + 32), 1, 1)
    && !(unsigned __int8)sub_285160(v2, 1, 1)
    && !(unsigned __int8)sub_285160(v2, 66, 1)
    && !(unsigned __int8)sub_285230(v2) )
  {
    return 0;
  }
  v5 = *(_QWORD *)(v2 + 24);
  v6 = *(_QWORD *)(v2 + 32);
  sub_255850((__int64 *)v2, v5);
  v7 = a2[3];
  v8 = sub_2418B0(v7);
  if ( v8 != -1 )
    *a2 = v8;
  v11 = *(_QWORD *)(v2 + 64);
  v12 = sub_241330(v7, v5, v9, v10);
  *(_QWORD *)(v2 + 64) = v12;
  *(_QWORD *)(sub_241920((__int64)v12, v6, v13, v14) + 64) = v11;
  return 1;
}
