unsigned __int64 __fastcall navstack_t_stack_clear(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned int v4; // r14d
  unsigned int i; // ebx
  unsigned int v6; // r15d
  int v7; // [rsp+10h] [rbp-48h] BYREF
  int v8; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    return v9 - __readfsqword(0x28u);
  v3 = qword_2CA1698;
  v8 = *(_DWORD *)a1;
  v4 = sub_79B3A0(&v8, qword_2CA1698, 1, 65);
  if ( v4 > 1 )
  {
    for ( i = 1; i != v4; ++i )
    {
      v8 = *(_DWORD *)a1;
      v6 = v8;
      sub_79B4D0(&v8, v3, i, 83);
      netnode_supdel(v6, i, 82);
    }
  }
  v7 = *(_DWORD *)a1;
  v8 = 1;
  sub_79B440(&v7, v3, 1, &v8, 4, 65);
  v7 = *(_DWORD *)a1;
  v8 = 0;
  sub_79B440(&v7, v3, 0, &v8, 4, 65);
  if ( !*(_QWORD *)(a2 + 40) )
    return v9 - __readfsqword(0x28u);
  else
    return sub_4A1920(qword_2CA1698, *(_DWORD *)a1, 0, a2, 0);
}

