__int64 __fastcall sub_7AF3D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rbp
  _QWORD *v5; // rax

  v2 = sub_7AE370(a1);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = *(int *)(a1 + 72);
  v4 = v2;
  v5 = (_QWORD *)sub_7AF050(a1 + 32, *(_DWORD *)(a1 + 72));
  if ( !v5 )
    return 0xFFFFFFFFLL;
  *(_DWORD *)(a2 + 8) = qlread(v4, *v5, v3);
  return 0;
}

