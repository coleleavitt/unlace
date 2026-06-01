__int64 __fastcall sub_46C130(_QWORD **a1, unsigned __int64 *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rbp
  __int64 v5; // r12
  unsigned int v6; // ebx
  _QWORD *func; // rax

  v2 = (__int64)*a1;
  v3 = *a2;
  sub_46BF30(*a1, *a2);
  if ( (*(_BYTE *)(v2 + 36) & 0x20) == 0 )
  {
    v5 = *(_QWORD *)v2;
    v6 = *(_DWORD *)(v2 + 32);
    func = (_QWORD *)get_func(v3);
    if ( func )
    {
      if ( v3 == *func )
        sub_459560(v5, 3u, v6, 0xFFFFFFFF, func);
    }
  }
  return 1;
}
