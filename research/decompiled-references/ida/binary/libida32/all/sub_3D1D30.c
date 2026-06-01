unsigned __int64 __fastcall sub_3D1D30(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  _QWORD *v4; // rdi

  v3 = *(_QWORD *)(a1 + 1480);
  v4 = (_QWORD *)(v3 + 1432);
  if ( *(_DWORD *)a2 == 9 )
    v4 = (_QWORD *)(v3 + 1480);
  return sub_3D1BA0(v4, *(_DWORD *)(a2 + 4), *(_QWORD *)(a2 + 8), a3 == 0);
}

