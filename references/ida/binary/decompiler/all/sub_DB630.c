unsigned __int64 __fastcall sub_DB630(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  char v7; // al
  __int64 v8; // rdx
  int v9; // ebp
  __int64 v10; // rax
  char i; // r12
  __int64 v12; // rbx
  int tinfo_size; // eax
  int v14; // r9d
  unsigned __int64 v16; // [rsp+30h] [rbp-40h]

  v5 = *(_DWORD *)(a1 + 72);
  v16 = __readfsqword(0x28u);
  get_stkarg_area_info();
  *(_QWORD *)a2 = 0;
  v7 = sub_36BD00(*(_QWORD *)(a3 + 1504), v5);
  v8 = 0;
  if ( !v7 )
    v8 = -1;
  *(_QWORD *)(a2 + 16) = v8;
  v9 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  v10 = 0;
  *(_DWORD *)(a2 + 24) = 0;
  for ( i = (*(_BYTE *)(a4 + 25) & 2) == 0; (unsigned __int64)v9 < *(_QWORD *)(a4 + 8); v10 = v9 )
  {
    v12 = *(_QWORD *)a4 + 80 * v10;
    tinfo_size = get_tinfo_size();
    v14 = v9++;
    sub_DA6C0(a1, (unsigned int *)a2, v12, tinfo_size, 32, v14, 1, i);
  }
  return v16 - __readfsqword(0x28u);
}
