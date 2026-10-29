__int64 __fastcall sub_767230(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  _DWORD *v5; // rbx
  unsigned int v6; // ebp
  char v7; // dl

  v4 = *(_QWORD *)(a1 + 344);
  v5 = *(_DWORD **)(*(_QWORD *)(a1 + 336) + 8 * v4 - 8);
  if ( v4 )
    *(_QWORD *)(a1 + 344) = v4 - 1;
  if ( !a3 || (v6 = 58, (*v5 & 0xFFFFFFFB) == 1) )
  {
    v7 = a2;
    a2 = (__int64)v5;
    v6 = sub_766E50(a1, (__int64)v5, v7, a3);
  }
  if ( v5 )
  {
    sub_766150((__int64)v5);
    a2 = 32;
    operator delete(v5, 0x20u);
  }
  return set_qerrno(v6, a2);
}

