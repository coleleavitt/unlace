__int64 __fastcall sub_457CA0(_QWORD **a1, unsigned int *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v5; // r12
  unsigned int v6; // ebx
  _DWORD *func; // rax

  v2 = (__int64)*a1;
  v3 = *a2;
  sub_457AB0(*a1, *a2);
  if ( (*(_BYTE *)(v2 + 36) & 0x20) == 0 )
  {
    v5 = *(_QWORD *)v2;
    v6 = *(_DWORD *)(v2 + 32);
    func = (_DWORD *)get_func(v3);
    if ( func )
    {
      if ( v3 == *func )
        sub_445720(v5, 3u, v6, 0xFFFFFFFF, func);
    }
  }
  return 1;
}

