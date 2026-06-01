void __fastcall sub_2027F0(_QWORD *a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // rdi

  if ( *(_DWORD *)(a2 + 44) != -1 )
  {
    *(_BYTE *)(a2 + 48) &= ~2u;
    *(_DWORD *)(a2 + 44) = -1;
    v3 = a1[7];
    v4 = (_QWORD *)a1[9];
    v5 = (_QWORD *)a1[10];
    if ( a3 )
      sub_107060(v3, a2, (__int64)v4, v5);
    else
      sub_107060(v3, a2, (__int64)v5, v4);
  }
}
