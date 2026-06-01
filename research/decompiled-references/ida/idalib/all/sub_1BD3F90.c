__int64 __fastcall sub_1BD3F90(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, char a5)
{
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int8 v20; // [rsp+Fh] [rbp-39h]

  v8 = sub_B771F0(a2, a2, a3, (__int64)a4);
  v11 = sub_B771F0(a3, a2, v9, v10);
  v13 = 0;
  if ( v8 == v11 )
  {
    v20 = sub_B771C0(a2, a2, 0, v12);
    v17 = (unsigned __int8)sub_B771C0(a3, a2, v15, v16);
    v18 = sub_B8DC30(a2, 1);
    v19 = sub_B8DC30(a3, 1);
    return (unsigned int)sub_1BD3E10(
                           a1,
                           (__int64 *)(v18 + 8LL * v20 + 48),
                           *(unsigned __int16 *)(v18 + 22) - (unsigned __int64)v20,
                           v19 + 8 * v17 + 48,
                           *(unsigned __int16 *)(v19 + 22) - v17,
                           a4,
                           a5);
  }
  return v13;
}
