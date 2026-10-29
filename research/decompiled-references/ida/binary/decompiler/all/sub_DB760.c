unsigned __int64 __fastcall sub_DB760(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // ebp
  char v7; // al
  __int64 v8; // rdx
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rbx
  int tinfo_size; // eax
  int v13; // r9d
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v5 = *(_DWORD *)(a1 + 72);
  v15 = __readfsqword(0x28u);
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
  for ( *(_DWORD *)(a2 + 24) = 0; (unsigned __int64)v9 < a4[1]; v10 = v9 )
  {
    v11 = *a4 + 80 * v10;
    tinfo_size = get_tinfo_size();
    v13 = v9++;
    sub_DA6C0(a1, (unsigned int *)a2, v11 + 56, tinfo_size, 32, v13, 1, 1);
  }
  return v15 - __readfsqword(0x28u);
}
