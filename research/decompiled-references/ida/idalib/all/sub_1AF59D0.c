__int64 __fastcall sub_1AF59D0(__int64 *a1, double a2, double a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // rax
  __int64 v7; // r13
  _QWORD *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v6 = (_QWORD *)sub_1E85170(*a1, a5);
  v7 = *v6;
  if ( (*(_BYTE *)(a5 + 720) & 1) != 0 )
    return 0;
  v8 = v6;
  if ( ((**(_DWORD **)a5 >> 12) & 0x7F) == 0x45 )
    return 0;
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) != 0 )
    sub_186C8D0(*a1, a5, a2, v9, v10, v11, v12);
  return sub_1E61050(*a1, v7, v8, a2, a3);
}
