__int64 __fastcall sub_2CA620(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  __int64 result; // rax
  int v7; // r13d
  int v8; // eax
  int v9; // edx
  int v10; // eax
  _DWORD v11[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !a2 || (unsigned int)(a4 - 1) > 1 )
    return 0xFFFFFFFFLL;
  if ( a4 == 2 )
  {
    result = 0xFFFFFFFFLL;
    if ( *(_BYTE *)(a1 + 28) )
    {
      if ( *(_DWORD *)(a1 + 20) <= 1u )
      {
        sub_2CA3D0(a1, v11, *(_QWORD *)(a2 + 16), a5);
        return (unsigned int)(v11[2] + a3 * *(_DWORD *)(a1 + 8));
      }
    }
  }
  else
  {
    sub_2CA3D0(a1, v11, *(_QWORD *)(a2 + 16), a5);
    v7 = v11[1];
    v8 = sub_2C9780((_DWORD *)a1, *(_QWORD *)(a2 + 16));
    v9 = *(_DWORD *)(a1 + 12);
    v10 = a3 * (v8 + 1);
    if ( *(_DWORD *)(a1 + 8) == 1 )
      v10 += a3 >= v9 / 2;
    return (unsigned int)(v9 == a3) + v7 + v10;
  }
  return result;
}
