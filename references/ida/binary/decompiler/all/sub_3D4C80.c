__int64 __fastcall sub_3D4C80(__int64 a1, unsigned int a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 result; // rax
  int v9; // ecx
  __int64 v10; // r9
  __int64 (**v11)(); // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+8h] [rbp-20h]
  __int64 v13; // [rsp+10h] [rbp-18h]
  unsigned __int64 v14; // [rsp+18h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 80);
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(v6 + 64);
  result = 0;
  if ( v7 != -1 )
  {
    v9 = *(_DWORD *)(a1 + 56);
    LODWORD(v12) = -1;
    v11 = off_4E59D8;
    v13 = v7;
    result = sub_3D4570(a1, &v11, a2, v9, a3, a4, a5, a6);
    if ( !(_BYTE)result )
      return callui(115, v7, 0xFFFFFFFFLL, 1, &callui, v10, v11, v12, v13, v14);
  }
  return result;
}
