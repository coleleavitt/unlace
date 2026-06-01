__int64 __fastcall sub_18F90D0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        double a5,
        double a6)
{
  unsigned __int64 v9; // rsi
  int v10; // ebx
  __int64 v11; // rsi
  bool v12; // bl
  __int64 v13; // r14
  __int64 result; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  __int64 v31; // rax
  _QWORD *v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v35[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v37[11]; // [rsp+30h] [rbp-A8h] BYREF
  char v38; // [rsp+88h] [rbp-50h]
  unsigned int v39; // [rsp+90h] [rbp-48h]
  char v40; // [rsp+94h] [rbp-44h]

  v9 = *(_QWORD *)(a1 + 248);
  v10 = sub_BFE6E0(a2, v9, 2, a5);
  if ( !v10 )
  {
    v9 = *(_QWORD *)(a1 + 248);
    v10 = sub_BFE6E0(a3, v9, 2, a5);
    if ( !v10 )
      return 0;
    v33 = a2;
    a2 = a3;
    a3 = v33;
  }
  if ( v10 == 1 )
    return 0;
  if ( v10 != 2
    || (v15 = sub_BFBAE0(a2),
        LODWORD(v35[0]) = sub_C00A40(v15, v9, v16, v17, v18),
        result = sub_15F1800(a1, (int *)v35, "NULL", 4, a5, a6),
        (_BYTE)result) )
  {
    v11 = a1 + 8;
    v12 = v10 == 3;
    sub_168B9F0((__int64)v35, (__int64 *)(a1 + 8), a4, 0x147Fu, 0);
    v13 = *(_QWORD *)(a3 + 8);
    if ( v38 )
    {
      v11 = *(_QWORD *)(a3 + 8);
      sub_AE9DF0(v37, v11, 8u);
      if ( !v38 )
        goto LABEL_16;
    }
    else
    {
      if ( !v40 )
      {
LABEL_6:
        v34 = sub_EEC8C0(a3, v11, a5);
        sub_1587DB0((__int64)v35, &v34);
        sub_15F7200(v35);
        return 1;
      }
      v23 = sub_168B9E0(v35);
      v24 = v36;
      if ( v36 )
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
      v34 = v24;
      v25 = sub_1587BC0(v23, &v34, v19, v20, v21, v22);
      v11 = v13;
      sub_AE9DF0((unsigned __int8 **)(*v25 + 32LL * v39 + 8), v13, 8u);
      if ( !v38 )
      {
LABEL_16:
        if ( v40 )
        {
          v30 = sub_168B9E0(v35);
          v31 = v36;
          if ( v36 )
            v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
          v34 = v31;
          v32 = sub_1587BC0(v30, &v34, v26, v27, v28, v29);
          v11 = v12;
          sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v39 + 8), v12, 2u);
        }
        goto LABEL_6;
      }
    }
    v11 = v12;
    sub_AE9DF0(v37, v12, 2u);
    goto LABEL_6;
  }
  return result;
}
