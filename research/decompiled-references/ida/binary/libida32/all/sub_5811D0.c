__int64 __fastcall sub_5811D0(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned __int64 (__fastcall *v4)(__int64, __int64, unsigned int); // rax
  __int64 v6; // rax
  _QWORD *v7; // r14
  int v8; // r13d
  unsigned int v9; // eax
  __int64 v10; // r14
  _QWORD *v11; // rbp
  unsigned int v12; // eax
  _QWORD *v13; // rdi
  __int64 v14; // r14
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-30h]

  v3 = *a1;
  v17 = __readfsqword(0x28u);
  v4 = *(unsigned __int64 (__fastcall **)(__int64, __int64, unsigned int))(v3 + 80);
  if ( v4 != sub_5810D0 )
    return ((__int64 (__fastcall *)(__int64 *))v4)(a1);
  v6 = switch_dbctx(*(int *)(a2 + 8));
  v7 = *(_QWORD **)(v6 + 1480);
  v8 = sub_79B3A0(v7 + 289, v6, a3, 65);
  v9 = sub_3B9110(v7, a3);
  sub_3BA160(v7, &v16, v9);
  v10 = v16;
  v11 = *(_QWORD **)(switch_dbctx(*((int *)a1 + 2)) + 1480);
  v12 = sub_3B9110(v11, a3);
  v13 = v11;
  v11 += 289;
  sub_580EF0(v13, v12, v10);
  v14 = *(v11 - 289);
  LOBYTE(v16) = 1;
  sub_79B440(v11, v14, a3, &v16, 1, 80);
  LODWORD(v16) = v8;
  sub_79B440(v11, v14, a3, &v16, 4, 65);
  return v17 - __readfsqword(0x28u);
}

