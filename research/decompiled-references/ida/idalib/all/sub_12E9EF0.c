__int64 __fastcall sub_12E9EF0(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r14
  _DWORD *v6; // rbp
  _DWORD *v7; // r12
  __int64 v9; // rdi
  __int64 v11; // rax
  volatile signed __int32 *v12; // rdi
  __int64 v13; // rax
  volatile signed __int32 *v14; // rdi
  __int64 v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *a2;
  if ( !*a2 )
  {
    v13 = a1[8];
    if ( v13 )
    {
      v3 = *(_QWORD *)(v13 + 8);
      v15[0] = v3;
      if ( !v3 )
        goto LABEL_2;
      _InterlockedAdd((volatile signed __int32 *)(v3 + 8), 1u);
      v3 = v15[0];
      v14 = (volatile signed __int32 *)*a2;
    }
    else
    {
      sub_1304840(v15, a1[2], a1[4]);
      v3 = v15[0];
      v14 = (volatile signed __int32 *)*a2;
    }
    v15[0] = (__int64)v14;
    *a2 = v3;
    if ( v14 )
    {
      if ( !_InterlockedSub(v14 + 2, 1u) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      v3 = *a2;
    }
  }
LABEL_2:
  v4 = a1[2];
  if ( (**(_BYTE **)(v4 + 160) & 8) != 0 )
  {
    *a2 = 0;
    v11 = operator new(0x48u);
    *(_DWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 16) = v3;
    *(_QWORD *)v11 = &off_2BEBA88;
    *(_OWORD *)(v11 + 24) = 0;
    *(_OWORD *)(v11 + 40) = 0;
    *(_OWORD *)(v11 + 56) = 0;
    _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
    v12 = (volatile signed __int32 *)*a2;
    v3 = v11;
    *a2 = v11;
    if ( v12 )
    {
      if ( !_InterlockedSub(v12 + 2, 1u) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      v3 = *a2;
    }
    v4 = a1[2];
  }
  *a2 = 0;
  v5 = *(_QWORD *)(v4 + 144);
  v15[0] = v3;
  v6 = (_DWORD *)operator new(0x328u);
  sub_FD68E0((__int64)v6, v5, v15);
  v7 = (_DWORD *)a1[8];
  ++*v6;
  a1[8] = v6;
  if ( v7 )
  {
    if ( (*v7)-- == 1 )
    {
      sub_FD6C20((__int64)v7);
      operator delete(v7, 0x328u);
    }
  }
  v9 = v15[0];
  if ( v15[0] && !_InterlockedSub((volatile signed __int32 *)(v15[0] + 8), 1u) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  return a1[8];
}
