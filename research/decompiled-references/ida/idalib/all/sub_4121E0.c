__int64 __fastcall sub_4121E0(unsigned __int64 ***a1, __int64 *a2, unsigned int *a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned __int64 **v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned int v12; // ecx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9

  v6 = *a1;
  v7 = *a2;
  v8 = *a3;
  v9 = **v6;
  v10 = 56 * *a2;
  v11 = (unsigned __int64)v6[2] & *(_QWORD *)(v9 + v10 + 48);
  if ( !v11 || (a5 = v6[1], v9 = *a5, (*a5 & v11) != 0) )
  {
    set_error_data(0, v11, v6, v9, a5, v8);
    return (unsigned int)-17;
  }
  *a5 = v11 | v9;
  v12 = 0;
  if ( (int)v8 <= 1 )
    return v12;
  v13 = (unsigned __int64)v6[2];
  v14 = **v6;
  v15 = v14 + v10;
  v16 = v14 + 56 * (v7 + (unsigned int)(v8 - 2));
  while ( 1 )
  {
    v17 = v13 & *(_QWORD *)(v15 + 104);
    if ( (v17 & ~v11) != 0 )
    {
      set_error_data(1, v11, ~v11, v13, v14, v8);
      set_error_data(0, v17, v18, v19, v20, v21);
      return (unsigned int)-18;
    }
    if ( v15 == v16 )
      break;
    v15 += 56LL;
  }
  return 0;
}
