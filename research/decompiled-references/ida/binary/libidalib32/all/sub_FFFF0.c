__int64 __fastcall sub_FFFF0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  int v8; // r13d
  int v9; // eax
  int v10; // edx
  int v11; // eax
  _DWORD v12[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( !a2 || (unsigned int)(a4 - 1) > 1 )
    return 0xFFFFFFFFLL;
  if ( a4 == 2 )
  {
    result = 0xFFFFFFFFLL;
    if ( *(_BYTE *)(a1 + 28) )
    {
      if ( *(_DWORD *)(a1 + 20) <= 1u )
      {
        sub_FFDA0(a1, v12, *(unsigned int *)(a2 + 12), 2, a5, a6);
        return (unsigned int)(v12[2] + a3 * *(_DWORD *)(a1 + 8));
      }
    }
  }
  else
  {
    sub_FFDA0(a1, v12, *(unsigned int *)(a2 + 12), a4, a5, a6);
    v8 = v12[1];
    v9 = sub_FF570((_DWORD *)a1);
    v10 = *(_DWORD *)(a1 + 12);
    v11 = a3 * (v9 + 1);
    if ( *(_DWORD *)(a1 + 8) == 1 )
      v11 += a3 >= v10 / 2;
    return (unsigned int)(v10 == a3) + v8 + v11;
  }
  return result;
}

