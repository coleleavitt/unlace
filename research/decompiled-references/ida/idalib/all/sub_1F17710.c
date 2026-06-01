unsigned __int64 __fastcall sub_1F17710(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v6; // rbx
  char v7; // r13
  _QWORD *v9; // rdi
  _QWORD *v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v16[6]; // [rsp+8h] [rbp-30h] BYREF

  v7 = 0;
  v9 = (_QWORD *)*a1;
  v10 = (_QWORD *)*v9;
  v16[0] = sub_1F17110((__int64)v9, a2, a3, a4, a5, a6);
  if ( !sub_F22B30(v16) )
  {
    v6 = v16[0];
    v7 = 1;
  }
  v11 = sub_1F16500(*(_QWORD **)(*a1 + 8), *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v12 = *a1;
  v13 = 0;
  v14 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(*a1 + 24) = v14 + 1;
  if ( v7 )
    v13 = v6;
  return sub_AB7C40(v10, v13, v11, *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8 * v14) != 0);
}
