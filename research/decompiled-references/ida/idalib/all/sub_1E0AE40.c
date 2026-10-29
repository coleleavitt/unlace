__int64 __fastcall sub_1E0AE40(_QWORD *a1, __int64 *a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 *v4; // r13
  int v5; // edx
  __int64 v6; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = a1[6];
  v4 = (__int64 *)a1[9];
  if ( v3 == a1[8] - 16LL )
  {
    if ( (unsigned __int64)(a1[1] - (((__int64)v4 - *a1) >> 3)) <= 1 )
    {
      sub_160A9F0((__int64)a1, 1u, 0);
      v4 = (__int64 *)a1[9];
    }
    v9 = operator new(0x200u);
    v10 = *a2;
    v4[1] = v9;
    v11 = a1[6];
    *(_QWORD *)v11 = v10;
    *(_DWORD *)(v11 + 8) = *a3;
    v4 = (__int64 *)(a1[9] + 8LL);
    v12 = *v4;
    a1[9] = v4;
    a1[7] = v12;
    a1[8] = v12 + 512;
    a1[6] = v12;
  }
  else
  {
    v5 = *a3;
    v6 = v3 + 16;
    *(_QWORD *)(v6 - 16) = *a2;
    *(_DWORD *)(v6 - 8) = v5;
    a1[6] = v6;
    if ( v6 != a1[7] )
      return v6 - 16;
  }
  return *(v4 - 1) + 496;
}
