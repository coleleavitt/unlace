bool __fastcall sub_20C32A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  _BYTE *v7; // rax
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v12; // rcx
  _QWORD *v13; // rdx

  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_BYTE *)a2;
  v8 = *(unsigned __int8 *)(v6 + 8);
  v9 = (unsigned int)(v8 - 17);
  v10 = *(unsigned __int8 *)(v6 + 8);
  if ( (unsigned int)v9 <= 1 )
  {
    v6 = **(_QWORD **)(v6 + 16);
    v10 = *(unsigned __int8 *)(v6 + 8);
  }
  if ( (_BYTE)v10 != 12 )
    return 0;
  if ( *(_DWORD *)(v6 + 8) >> 8 != 32 )
    return 0;
  if ( (_BYTE)v8 == 18 )
    return 0;
  v12 = (unsigned __int8)*v7;
  if ( (unsigned __int8)v12 > 0x15u )
    return 0;
  if ( (unsigned int)v9 <= 1 )
  {
    v7 = sub_205FD90((__int64)v7, 0, v9, v12, v10, a6);
    if ( !v7 )
      return 0;
    LOBYTE(v12) = *v7;
  }
  if ( (_BYTE)v12 != 5 )
    return 0;
  v13 = *((_QWORD **)v7 + 3);
  if ( *((_DWORD *)v7 + 8) > 0x40u )
    v13 = (_QWORD *)*v13;
  return *(unsigned int *)(a1 + 12) > (unsigned __int64)v13;
}
