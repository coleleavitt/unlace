__int64 __fastcall sub_37DA70(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // [rsp+28h] [rbp-60h] BYREF
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+38h] [rbp-50h]
  unsigned __int64 v11; // [rsp+48h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v8 = 0;
  copy_tinfo_t(&v8, a2 + 40);
  v9 = 0;
  copy_tinfo_t(&v9, a2 + 48);
  v5 = *(_QWORD *)(a1 + 48);
  v10 = *(_DWORD *)(a2 + 56);
  v6 = 0;
  if ( !(unsigned int)lexcompare_tinfo(v5, v9, 0) )
  {
    v6 = a3;
    if ( !(_BYTE)a3 )
      LOBYTE(v6) = *(_DWORD *)(a1 + 56) == v10;
  }
  clear_tinfo_t(&v9);
  clear_tinfo_t(&v8);
  return v6;
}
