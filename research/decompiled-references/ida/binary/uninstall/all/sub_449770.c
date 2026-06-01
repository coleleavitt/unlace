__int64 __fastcall sub_449770(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  _UNKNOWN **v8; // rdx
  _UNKNOWN **v10; // rdx
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 *v17; // rdi
  __int64 v18; // rax
  void (__fastcall *v19)(__int64, __int64); // rax
  _QWORD *v20; // [rsp+0h] [rbp-88h] BYREF
  int v21; // [rsp+Ch] [rbp-7Ch] BYREF
  _QWORD *v22; // [rsp+10h] [rbp-78h] BYREF
  int v23; // [rsp+1Ch] [rbp-6Ch] BYREF
  _BYTE v24[32]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v25[32]; // [rsp+40h] [rbp-48h] BYREF

  if ( *(int *)a2 <= 1 )
  {
    v8 = *(_UNKNOWN ***)(a2 + 24);
    if ( v8 != &off_6560E0 )
      goto LABEL_3;
LABEL_20:
    v23 = 1;
LABEL_21:
    v22 = (_QWORD *)(a2 + 32);
    goto LABEL_9;
  }
  sub_47D740((unsigned int)"%s called with shared object", (unsigned int)"TclIncrObj", a3, a4, a5, a6);
  v8 = *(_UNKNOWN ***)(a2 + 24);
  if ( v8 == &off_6560E0 )
    goto LABEL_20;
LABEL_3:
  if ( v8 == &off_656120 )
  {
    v23 = 5 - (isnan(*(double *)(a2 + 32)) == 0);
    goto LABEL_21;
  }
  if ( v8 )
  {
    if ( !*(_QWORD *)(a2 + 8) )
      goto LABEL_8;
  }
  else if ( !*(_QWORD *)(a2 + 8) )
  {
    return sub_47C180(a1, a2, &v23);
  }
  if ( !*(_DWORD *)(a2 + 16) )
    return sub_47C180(a1, a2, &v23);
LABEL_8:
  if ( (unsigned int)sub_47CE30(0, a2, &v22, &v23) )
    return sub_47C180(a1, a2, &v23);
LABEL_9:
  v10 = *(_UNKNOWN ***)(a3 + 24);
  if ( v10 == &off_6560E0 )
  {
    v21 = 1;
LABEL_28:
    v20 = (_QWORD *)(a3 + 32);
    goto LABEL_15;
  }
  if ( v10 == &off_656120 )
  {
    v21 = 5 - (isnan(*(double *)(a3 + 32)) == 0);
    goto LABEL_28;
  }
  if ( !v10 )
  {
    if ( !*(_QWORD *)(a3 + 8) )
      goto LABEL_18;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(a3 + 8) )
  {
LABEL_13:
    if ( !*(_DWORD *)(a3 + 16) )
      goto LABEL_18;
  }
  if ( (unsigned int)sub_47CE30(0, a3, &v20, &v21) )
    goto LABEL_18;
LABEL_15:
  if ( v23 != 1 || v21 != 1 || (v15 = *v22 + *v20, v16 = v15 ^ *v22, v16 < 0) && (__int64)(*v20 ^ *v22) >= 0 )
  {
    if ( (unsigned int)(v23 - 4) <= 1 )
      return sub_47C180(a1, a2, &v23);
    if ( (unsigned int)(v21 - 4) > 1 )
    {
      sub_47C9F0(a1, a2, v25);
      sub_47C9E0(a1, a3, v24);
      sub_4B00F0(v25, v24, v25);
      sub_4B0400(v24);
      sub_47CAD0(a2, v25);
      return 0;
    }
LABEL_18:
    sub_47C180(a1, a3, &v23);
    sub_40BD40(a1, (__int64)"\n    (reading increment)", v11, v12, v13, v14);
    return 1;
  }
  v17 = *(__int64 **)(a2 + 8);
  if ( v17 )
  {
    if ( v17 != off_656088 )
      Tcl_Free((__int64)v17);
    *(_QWORD *)(a2 + 8) = 0;
  }
  v18 = *(_QWORD *)(a2 + 24);
  if ( v18 )
  {
    v19 = *(void (__fastcall **)(__int64, __int64))(v18 + 8);
    if ( v19 )
      v19(a2, v16);
  }
  *(_QWORD *)(a2 + 32) = v15;
  *(_QWORD *)(a2 + 24) = &off_6560E0;
  return 0;
}

