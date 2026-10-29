__int64 __fastcall bookmarks_t_get_dirtree_id(__int64 a1, double a2)
{
  int v2; // ebp
  int v3; // ebp
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-58h] BYREF
  int v6[2]; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+2Ch] [rbp-2Ch]
  __int64 v8; // [rsp+30h] [rbp-28h]
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v5 = off_2B25850;
  v2 = idaplace_t((int)&v5, a2);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 112LL))(*(_QWORD *)(a1 + 40)) == v2 )
    return 4;
  v7 = 0;
  v8 = -2;
  *(_QWORD *)v6 = &off_2B2E3D0;
  v3 = tiplace_t((int)v6, a2);
  return (unsigned int)(v3 != (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 112LL))(*(_QWORD *)(a1 + 40)))
       + 6;
}
