unsigned __int64 __fastcall sub_F821D0(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // r13
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // r15
  __int64 v14; // rcx
  unsigned __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-40h]

  v7 = a4;
  v9 = sub_EDE580(*(_QWORD *)(a1 + 24), a2, a3, a4, a5, a6)[9];
  v12 = *(_QWORD *)(v9 + 48);
  v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v12 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v14 = (v12 >> 2) & 1;
    if ( (_DWORD)v14 )
    {
      v24 = (unsigned int)v14;
      v18 = sub_EDE580(*(_QWORD *)(a1 + 24), *(char **)(a1 + 8), a3, v14, v10, v11);
      v23 = sub_F81DB0(v18 + 9, v13, v19, v20, v21, v22);
      sub_F821D0(a1, v13, v23, v24, a5);
    }
    else
    {
      sub_F821D0(a1, *(_QWORD *)(v9 + 48) & 0xFFFFFFFFFFFFFFF8LL, a3, v14, a5);
    }
  }
  result = sub_F81F50(a1, (__int64)a2, a5, v12, v10, v11);
  if ( v7 )
    return sub_F81620(a1, (__int64)a2, a3, a5, v16, v17);
  return result;
}
