bool __fastcall sub_6059A0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int tinfo_size; // ebp
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // edx

  tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 64), 0);
  v7 = get_tinfo_size(0, *(_QWORD *)(a2 + 64), 0);
  v8 = get_tinfo_size(0, *(_QWORD *)(a3 + 64), 0);
  v9 = a4 - 1;
  v10 = -a4;
  if ( *(_DWORD *)a1 == 1 && *(_DWORD *)a3 == 1 )
    return (v10 & ((v8 + *(_QWORD *)(a3 + 8) + v9) ^ (tinfo_size + v9 + *(_QWORD *)(a1 + 8)))) == 0;
  else
    return (v10 & (v9 + v7)) + (v10 & (v9 + v8)) == (v10 & (tinfo_size + v9));
}
