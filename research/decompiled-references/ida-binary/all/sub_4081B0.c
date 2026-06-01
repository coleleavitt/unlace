void __fastcall sub_4081B0(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v6 = *(_QWORD *)(a2 + 16);
      if ( *(_BYTE *)(v6 + 448) )
      {
        *(_BYTE *)(v6 + 448) = 0;
        sub_3F3550(v6);
      }
      if ( *(_BYTE *)(a2 + 40) )
        sub_407EE0(*(_QWORD *)(a2 + 16), a2, a3, a4, a5, a6);
    }
  }
  else if ( a2 )
  {
    v7 = *(_DWORD **)(a2 + 32);
    if ( v7 )
      --*v7;
    v8 = *(_DWORD **)(a2 + 24);
    if ( v8 )
      --*v8;
    operator delete((void *)a2, 0x30u);
  }
}
