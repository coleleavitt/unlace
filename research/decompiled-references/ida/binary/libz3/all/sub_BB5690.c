__int64 __fastcall sub_BB5690(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // r13
  unsigned int v7; // ebx
  __int64 v8; // rbp
  bool v9; // zf
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-50h]
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+28h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 24);
  if ( *a4 )
    *(_DWORD *)(*a4 - 4LL) = 0;
  v16 = v6;
  v15 = 0;
  v7 = sub_BB49E0(a1, a2, &v15, a4);
  v8 = v15;
  v14 = v16;
  if ( (_BYTE)v7 )
  {
    v17 = 0;
    v18 = v6;
    v11 = sub_BB49E0(a1, a3, &v17, a4);
    v12 = v17;
    v13 = v18;
    LOBYTE(v7) = v8 == v17;
    v7 &= v11;
    if ( v17 )
    {
      v9 = (*(_DWORD *)(v17 + 8))-- == 1;
      if ( v9 )
        sub_15D7BC0(v13, v12);
    }
  }
  if ( v8 )
  {
    v9 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v14, v8);
  }
  return v7;
}

