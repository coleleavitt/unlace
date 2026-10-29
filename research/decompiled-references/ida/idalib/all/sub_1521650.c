void __fastcall sub_1521650(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // r14d
  bool v7; // zf
  void *v8; // rdi
  __int64 v9; // rdi
  void *v10; // rdx
  __int64 v11; // rcx
  void *v12; // r8
  __int64 v13; // r9
  void *v14; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+8h] [rbp-C0h]
  _BYTE v16[16]; // [rsp+10h] [rbp-B8h] BYREF
  void *v17; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+28h] [rbp-A0h]
  _BYTE v19[16]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int8 *v20[17]; // [rsp+40h] [rbp-88h] BYREF

  v6 = *(_DWORD *)a4;
  sub_14634E0(a2, (int *)a4);
  if ( *(_WORD *)(a4 + 16) != 22 )
  {
    sub_FC70B0((__int64)v20, a2[6], v6, 14);
    sub_AE9DF0(v20, 22, 4u);
    sub_AEA040((__int64)v20);
    return;
  }
  v16[0] = 0;
  v15 = 0;
  v14 = v16;
  sub_14634E0(a2, (int *)a4);
  if ( (unsigned __int8)sub_1464000((__int64)a2, a4, &v14, (__int64)"pragma detect_mismatch", 1) )
  {
    v7 = *(_WORD *)(a4 + 16) == 66;
    v19[0] = 0;
    v18 = 0;
    v17 = v19;
    if ( !v7 )
    {
LABEL_6:
      sub_FC70B0((__int64)v20, a2[6], *(_DWORD *)a4, 1856);
      sub_AEA040((__int64)v20);
      goto LABEL_7;
    }
    sub_14634E0(a2, (int *)a4);
    if ( (unsigned __int8)sub_1464000((__int64)a2, a4, &v17, (__int64)"pragma detect_mismatch", 1) )
    {
      if ( *(_WORD *)(a4 + 16) == 23 )
      {
        sub_14634E0(a2, (int *)a4);
        if ( *(_WORD *)(a4 + 16) == 2 )
        {
          v9 = a2[149];
          v10 = v14;
          v11 = v15;
          v12 = v17;
          v13 = v18;
          if ( v9 )
          {
            (*(void (__fastcall **)(__int64, _QWORD, void *, __int64, void *, __int64))(*(_QWORD *)v9 + 136LL))(
              v9,
              v6,
              v14,
              v15,
              v17,
              v18);
            v10 = v14;
            v11 = v15;
            v12 = v17;
            v13 = v18;
          }
          sub_1668680(*(_QWORD *)(a1 + 40), v6, v10, v11, v12, v13);
          v8 = v17;
          if ( v17 == v19 )
            goto LABEL_9;
LABEL_8:
          operator delete(v8);
          goto LABEL_9;
        }
        goto LABEL_6;
      }
      sub_FC70B0((__int64)v20, a2[6], *(_DWORD *)a4, 14);
      sub_AE9DF0(v20, 23, 4u);
      sub_AEA040((__int64)v20);
    }
LABEL_7:
    v8 = v17;
    if ( v17 == v19 )
      goto LABEL_9;
    goto LABEL_8;
  }
LABEL_9:
  if ( v14 != v16 )
    operator delete(v14);
}
