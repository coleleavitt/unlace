__int64 __fastcall Z3_solver_propagate_declare(__int64 a1, void *a2, unsigned int a3, __int64 *a4, __int64 a5)
{
  char v5; // bp
  __int64 v6; // r13
  __int64 v7; // r12
  void **v8; // r9
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v15; // rax
  void *v19; // [rsp+28h] [rbp-60h] BYREF
  void *v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h]
  char v22; // [rsp+41h] [rbp-47h]
  char v23; // [rsp+42h] [rbp-46h]

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29DF80(a1, a2, a3, a4, a5);
  *(_DWORD *)(a1 + 1520) = 0;
  v6 = *(_QWORD *)(a1 + 232);
  sub_180C5A0(&v19, "user_propagator");
  v20 = v19;
  v7 = (unsigned int)sub_15DA4C0(v6 + 560, &v20);
  if ( !sub_15D2690(v6, v7) )
  {
    v15 = sub_186B270(0x18u);
    *(_DWORD *)(v15 + 16) = -1;
    *(_QWORD *)(v15 + 8) = 0;
    *(_QWORD *)v15 = off_1C63DB8;
    sub_15D54B0(v6, (unsigned int)v7);
  }
  sub_15D66C0(&v20, (unsigned int)v7, 0, 0, 0);
  v19 = a2;
  if ( (_DWORD)v20 != -1
    || (v22 & 1) != 0
    || (v22 & 2) != 0
    || (v22 & 8) != 0
    || (v22 & 0x10) != 0
    || (v22 & 0x20) != 0
    || (v22 & 0x40) != 0
    || v22 < 0
    || (v23 & 1) != 0 )
  {
    v8 = &v20;
  }
  else
  {
    v8 = nullptr;
  }
  v9 = sub_15E3510(v6, &v19, a3, a4, a5, v8);
  sub_251FD0(a1, v9);
  if ( v5 )
  {
    sub_2BB620(v9);
    v10 = v21;
    if ( v21 )
    {
      v11 = *(unsigned int *)(v21 - 4);
      if ( (_DWORD)v11 )
        goto LABEL_10;
      sub_186B220((void *)(v21 - 8));
    }
LABEL_26:
    byte_1C7EBA0 = 1;
    return v9;
  }
  v10 = v21;
  if ( !v21 )
    return v9;
  v11 = *(unsigned int *)(v21 - 4);
  if ( !(_DWORD)v11 )
  {
    sub_186B220((void *)(v21 - 8));
    return v9;
  }
LABEL_10:
  v12 = v10 + 16 * v11;
  do
  {
    v13 = v10;
    v10 += 16;
    sub_15D0DF0(v13);
  }
  while ( v12 != v10 );
  sub_186B220((void *)(v21 - 8));
  if ( v5 )
    goto LABEL_26;
  return v9;
}

