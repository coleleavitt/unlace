__int16 __fastcall sub_1F198C0(__int64 *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int16 result; // ax

  v4 = sub_1EE7490(*a1);
  v8 = *(unsigned __int16 *)(a2 + 18);
  LOWORD(v8) = (unsigned __int16)v8 >> 3;
  if ( (_BYTE)v8 != 6 || *(_QWORD *)(a2 + 32) )
    *(_DWORD *)a3 = v4;
  sub_1F194E0(*a1, a2, v8, v5, v6, v7);
  result = *(_WORD *)(a2 + 18) >> 3;
  if ( (_BYTE)result != 6 || *(_QWORD *)(a2 + 32) )
    *(_QWORD *)(a3 + 8) = v9;
  return result;
}
