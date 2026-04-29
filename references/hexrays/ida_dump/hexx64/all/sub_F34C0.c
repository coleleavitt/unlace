__int64 __fastcall sub_F34C0(__int64 a1, __int64 a2, _QWORD *a3, int a4, __int64 a5, int a6)
{
  __int64 v7; // rdi
  unsigned int v9; // ebp
  __int64 i; // rbx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v7 = *(_QWORD *)(a1 + 1496);
  v14[1] = __readfsqword(0x28u);
  v9 = sub_381E90(v7, a2, (_DWORD)a3, a4, 0, a6);
  if ( (_BYTE)v9 && ((get_tinfo_property(*a3, 2) & 0xF) == 0xC || get_tinfo_property(*a3, 6)) )
  {
    for ( i = *(_QWORD *)(a1 + 520); i; i = *(_QWORD *)(i + 8) )
    {
      v12 = *(_QWORD *)(i + 56);
      if ( v12
        && (unsigned int)(*(_DWORD *)v12 - 56) <= 1
        && !*(_BYTE *)(v12 + 64)
        && (unsigned __int8)sub_E7130(*(_QWORD *)(a1 + 1496), v14, v12, 0)
        && v14[0] == a2 )
      {
        v13 = *(_DWORD *)(i + 24);
        BYTE1(v13) &= ~2u;
        LOBYTE(v13) = v13 | 0x80;
        *(_DWORD *)(i + 24) = v13;
      }
    }
  }
  return v9;
}
