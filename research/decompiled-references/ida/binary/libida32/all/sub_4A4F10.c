__int64 __fastcall sub_4A4F10(__int64 *a1, __int64 a2, char a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rsi
  unsigned int v9; // r13d
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // r15d
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rbx
  const char *v18; // rdx
  __int64 v19; // rsi
  unsigned int v22; // [rsp+8h] [rbp-50h]
  int v24; // [rsp+10h] [rbp-48h] BYREF
  int v25; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v5 = *(_DWORD *)a2;
  v26 = __readfsqword(0x28u);
  v6 = *a1;
  v25 = v5;
  v7 = sub_79B3A0(&v25, v6, 1, 65);
  v8 = *a1;
  v9 = v7;
  v25 = *(_DWORD *)a2;
  v10 = sub_79B3A0(&v25, v8, 0, 65);
  v11 = v9;
  v12 = v10 + 1;
  if ( v12 <= v9 )
    v11 = v12;
  v22 = v11;
  if ( v12 < v9 )
  {
    v13 = v11;
    do
    {
      v15 = *a1;
      v25 = *(_DWORD *)a2;
      v14 = v25;
      sub_79B4D0(&v25, v15, v13, 83);
      netnode_supdel(v14, v13++, 82);
    }
    while ( v13 < v9 );
  }
  v16 = *a1;
  v24 = *(_DWORD *)a2;
  v25 = v22 + 1;
  sub_79B440(&v24, v16, 1, &v25, 4, 65);
  v17 = *a1;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    if ( !under_debugger )
      interr(1308);
    BUG();
  }
  sub_4A1920(*a1, *(_DWORD *)a2, v22, a4, 0);
  v25 = *(_DWORD *)a2;
  sub_79B4D0(&v25, v17, v22, 82);
  sub_4A48F0(a1, a2, nullptr, v22, a3, 1);
  v18 = haystack;
  if ( *(_QWORD *)(a4 + 56) )
    v18 = *(const char **)(a4 + 48);
  sub_4A1A40(*a1, *(_DWORD *)a2, (__int64)v18, a4, 0);
  v19 = (unsigned int)navstack_t_stack_index(a2);
  return navstack_t_set_stack_entry(a2, v19, a4);
}

