__int64 __fastcall idcv_object(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // r12

  if ( !a1 )
    return set_qerrno(1532, a2);
  free_idcv(a1);
  *(_BYTE *)a1 = 5;
  v3 = operator new(0x38u);
  v4 = 0;
  v5 = v3;
  if ( a2 )
    v4 = *(_DWORD *)(a2 + 52);
  sub_76BDA0(v3, v4);
  *(_QWORD *)(a1 + 8) = v5;
  return 0;
}

