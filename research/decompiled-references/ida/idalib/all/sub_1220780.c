__int64 __fastcall sub_1220780(__int64 a1, _BYTE *a2, size_t a3, _DWORD *a4, _QWORD *a5)
{
  size_t v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // r15
  _BYTE *v10; // r14
  unsigned __int64 v11; // rbx
  int v12; // eax
  size_t v14; // rcx
  size_t v15; // r8
  _BYTE *v16; // [rsp+0h] [rbp-58h] BYREF
  size_t v17; // [rsp+8h] [rbp-50h]
  __int64 v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v16 = a2;
  v17 = a3;
  v7 = j__strlen("0123456789");
  v8 = sub_2246FB0(&v16, "0123456789", v7, 0);
  if ( !v8 )
    return 0;
  v9 = v8;
  v10 = v16;
  v11 = v8;
  if ( v17 <= v8 )
    v9 = v17;
  if ( (unsigned __int8)sub_2247A50(v16, v9, 10, v18) )
    return 0;
  v12 = v18[0];
  if ( v18[0] != SLODWORD(v18[0]) )
    return 0;
  *a4 = v18[0];
  if ( v12 < 0 )
    return 0;
  sub_99BDC0(a5, 0, a5[1], v10, v9);
  v14 = v17;
  v15 = 0;
  if ( v11 <= v17 )
  {
    v15 = v17 - v11;
    v14 = v11;
  }
  sub_99BDC0((_QWORD *)(*(_QWORD *)a1 + 112LL), 0, *(_QWORD *)(*(_QWORD *)a1 + 120LL), &v16[v14], v15);
  return 1;
}
