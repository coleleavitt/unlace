__int64 __fastcall sub_1EEE710(__int64 *a1, __int64 a2, _DWORD *a3)
{
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 result; // rax
  _DWORD *v11; // rbx
  __int64 v12; // r13
  _QWORD *v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  v5 = sub_1EE7490(*a1);
  v6 = *a1;
  *a3 = v5;
  v7 = sub_1EE7490(v6);
  v8 = *a1;
  a3[1] = v7;
  a3[2] = sub_1EE7490(v8);
  v9 = sub_1EEDED0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16), (_QWORD *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  if ( *(_BYTE *)(a2 + 16) == 26 && (*(_BYTE *)(a2 + 19) & 0x1E) != 0 )
    *(_QWORD *)&a3[2 * *(unsigned __int16 *)(a2 + 22) + 4] = v9;
  result = sub_1EE7490(*a1);
  a3[3] = result;
  if ( *(_BYTE *)(a2 + 16) != 25 )
  {
    result = *(unsigned __int16 *)(a2 + 22);
    if ( *(_WORD *)(a2 + 22) )
    {
      v11 = a3 + 4;
      v12 = (__int64)&a3[2 * (unsigned int)(result - 1) + 6];
      do
      {
        v11 += 2;
        v13 = *(_QWORD **)(*a1 + 8);
        v14 = sub_1EE13A0((__int64)v13, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
        result = sub_1EDB980(v13, v14, v15, v16, v17, v18);
        *((_QWORD *)v11 - 1) = result;
      }
      while ( (_DWORD *)v12 != v11 );
    }
  }
  return result;
}
