__int64 __fastcall sub_380540(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+38h] [rbp-40h]
  unsigned __int64 v12; // [rsp+48h] [rbp-30h]

  v3 = a2;
  v12 = __readfsqword(0x28u);
  v9 = 0;
  copy_tinfo_t(&v9, a2 + 40);
  v10 = 0;
  copy_tinfo_t(&v10, a2 + 48);
  v11 = *(_DWORD *)(a2 + 56);
  if ( (*(_QWORD *)(get_ash(&v10, a2 + 48, v5, v6, v7) + 320) || (unsigned __int8)getinf_flag(2, 2)) && a3 )
    LOBYTE(v3) = a3 == get_tinfo_size(0, v10, 0);
  else
    v3 = 0;
  clear_tinfo_t(&v10);
  clear_tinfo_t(&v9);
  return v3;
}
