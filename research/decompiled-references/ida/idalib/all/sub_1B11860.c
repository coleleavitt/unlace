unsigned __int64 __fastcall sub_1B11860(__int64 *a1, _DWORD *a2, int a3, int a4, int a5, __m128 a6, __m128 a7)
{
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  unsigned __int64 result; // rax

  if ( !a2 )
    return 0;
  if ( (*a2 & 0x3C000) != 0 )
    v10 = (__int64)a2;
  else
    v10 = sub_1B10FC0(a1, (unsigned __int64)a2, 0x60u, 1, 0, a6, a7);
  if ( v10 == 1 )
    return 0;
  v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
  v12 = (_QWORD *)sub_168B6C0((__int64)a1);
  v14 = v12[294];
  v12[304] += 24LL;
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v12[295] >= v15 + 24 && v14 )
  {
    v12[294] = v15 + 24;
    result = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    result = sub_986170((__int64)(v12 + 294), 24, 24, 3, v13, v15);
  }
  *(_DWORD *)result = a3;
  *(_DWORD *)(result + 4) = a5;
  *(_DWORD *)(result + 8) = 96;
  *(_DWORD *)(result + 12) = a4;
  *(_QWORD *)(result + 16) = v11;
  return result;
}
