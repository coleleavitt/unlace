unsigned __int64 __fastcall sub_1EE4660(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _DWORD *v3; // rbp
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx

  v3 = (_DWORD *)a2;
  if ( *(_QWORD *)(a2 + 856) )
    sub_1EDF870(a1, a2);
  v5 = (unsigned int)a3;
  v6 = HIDWORD(a3);
  if ( v6 )
    v3 = *(_DWORD **)(*(_QWORD *)(a2 + 3320) + 8LL * (unsigned int)(v6 - 1));
  else
    v5 -= 4104;
  return v5 | ((unsigned __int64)(unsigned int)(*v3 + 1) << 32);
}
