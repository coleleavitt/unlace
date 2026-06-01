__int64 __fastcall sub_DEF4F0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  char *v7; // rbp
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  char *v12; // rdx

  v6 = ((unsigned __int64)a2 + 63) >> 6;
  v7 = nullptr;
  if ( v6 != 1 )
  {
    v10 = a1[71];
    v11 = 8 * v6;
    a1[81] += 8 * v6;
    v7 = (char *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v12 = &v7[8 * v6];
    if ( a1[72] >= (unsigned __int64)v12 && v10 )
      a1[71] = v12;
    else
      v7 = (char *)sub_986170((__int64)(a1 + 71), v11, v11, 3, a5, a6);
    memset(v7, 0, v11);
  }
  v8 = sub_E216C0(a1[22], 16);
  *(_QWORD *)v8 = v7;
  *(_DWORD *)(v8 + 8) = a2;
  return 1;
}
