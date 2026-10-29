__int64 __fastcall sub_57E0B0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, int a6)
{
  int v8; // edx
  unsigned __int64 v9; // rax
  int v10; // ecx
  int v11; // edx
  int v12; // ebp
  char dtype_by_size; // al
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64, unsigned __int8 *, unsigned int); // rax
  __int64 v17; // rcx
  __int64 v19; // rax
  bool v20; // zf
  _OWORD v21[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+20h] [rbp-38h]
  unsigned __int64 v23; // [rsp+28h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  memset(v21, 0, sizeof(v21));
  v22 = 0;
  if ( !a4 )
    a4 = *(int *)(*(_QWORD *)(a1 + 8) + 24LL);
  v8 = *(_DWORD *)(a2 + 948);
  v9 = 8;
  if ( a4 <= 8 )
    v9 = a4;
  v10 = v8 + 14;
  v11 = v8 + 7;
  if ( v11 >= 0 )
    v10 = v11;
  v12 = a5 & 0xFFFDFFFF;
  dtype_by_size = get_dtype_by_size(v9 / (v10 >> 3), a2, v9 % (v10 >> 3), v10 >> 3, a5);
  *(_DWORD *)(a1 + 60) = v12;
  v14 = a6 | 8u;
  BYTE5(v21[0]) = dtype_by_size;
  v15 = *(_QWORD *)a1;
  *((_QWORD *)&v21[0] + 1) = a3;
  v16 = *(__int64 (__fastcall **)(__int64, unsigned __int8 *, unsigned int))(v15 + 24);
  if ( v16 != sub_57E080 )
    return v16(a1, (unsigned __int8 *)v21, v14);
  v17 = 0;
  if ( (*(_BYTE *)(a1 + 146) & 1) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 608);
    if ( v17 )
    {
      v19 = v17 + 8;
      v20 = (*(_BYTE *)(v17 + 280) & 1) == 0;
      v17 = 0;
      if ( !v20 )
        v17 = v19;
    }
  }
  return sub_57C280(a1, (unsigned __int8 *)v21, v14, v17);
}
