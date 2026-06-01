unsigned __int64 __fastcall sub_41B1C0(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rax
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r13
  _QWORD *v11; // rdi
  int v12; // r14d
  unsigned int v13; // eax
  int v14; // r8d
  int v15; // r9d
  char *v16; // rdi
  _QWORD *v17; // rax
  unsigned int v18; // eax
  __int64 v20; // rax
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+8h] [rbp-C0h]
  _QWORD v23[4]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD *v24; // [rsp+40h] [rbp-88h]
  __int64 v25; // [rsp+48h] [rbp-80h] BYREF
  _OWORD v26[4]; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v27; // [rsp+98h] [rbp-30h]

  v4 = *(_QWORD **)(a2 + 1480);
  v27 = __readfsqword(0x28u);
  memset(v26, 0, sizeof(v26));
  v24 = v4;
  v25 = 0;
  sub_6141A0(*v4, 26, &v25, 8);
  v6 = *(_QWORD *)(a2 + 1480);
  ptr = nullptr;
  v22 = 0;
  v7 = v6 + 2312;
  sub_79BD30(v6 + 2312, a2, &ptr);
  v8 = a3[1];
  v9 = *a3;
  if ( a3[2] < (unsigned __int64)(v8 + 1) )
  {
    v20 = qvector_reserve(a3, v9, v8 + 1, 24);
    *a3 = v20;
    v8 = a3[1];
    v9 = v20;
  }
  v10 = v9 + 24 * v8;
  *(_QWORD *)v10 = 0;
  v11 = v24;
  *(_OWORD *)(v10 + 8) = 0;
  ++a3[1];
  v12 = *(_DWORD *)(v6 + 2312);
  v13 = sub_3B9110(v11, v12);
  v16 = (char *)v26;
  if ( v13 >= (unsigned int)v25 && v13 < HIDWORD(v25) )
  {
    LOBYTE(v26[0]) = 43;
    v12 -= v25;
    v16 = (char *)v26 + 1;
  }
  qsnprintf((int)v16, 63, (int)"%a", v12, v14, v15, (char)ptr);
  sub_3573A0((char **)v10);
  v23[3] = a3;
  v23[0] = &off_2AFE598;
  v17 = *(_QWORD **)(a2 + 1480);
  v23[1] = 0;
  v23[2] = v17;
  v18 = sub_614FB0(*v17, 20);
  sub_580B50(v7, a2, 0, v18, v23);
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    qfree(ptr);
  }
  return v27 - __readfsqword(0x28u);
}

