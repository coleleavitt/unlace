/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DBFC
// Address: 0x0008DBFC

//----- (0008DBFC) --------------------------------------------------------
int __fastcall sub_8DBFC(int a1)
{
  int v1; // r1
  _DWORD *v2; // r5
  int v3; // r1
  int v4; // r3
  int v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r0
  __int64 v10; // [sp+14h] [bp-8h]

  v1 = -102;
  if ( a1 )
  {
    v2 = (_DWORD *)(a1 + 96);
    if ( *(_QWORD *)(a1 + 96) )
    {
      v10 = *(_QWORD *)(a1 + 80) + 1LL;
      v3 = *(_DWORD *)(a1 + 56);
      v4 = *(_DWORD *)(a1 + 60);
      if ( !(v3 ^ 0xFFFF | v4) || (v5 = v4 ^ HIDWORD(v10) | v3 ^ v10, v1 = -100, v5) )
      {
        v6 = *(_DWORD *)(a1 + 168) + *(_DWORD *)(a1 + 172) + *(_DWORD *)(a1 + 176) + 46;
        v7 = *(_DWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 88) = v7 + v6;
        *(_DWORD *)(a1 + 92) += __CFADD__(v7, v6);
        *(_QWORD *)(a1 + 80) = v10;
        sub_8D2D0(a1, (int *)(a1 + 128), (int *)(a1 + 216), 0, 0, 0, 0, 0, 0);
        v1 = v8;
        v2[1] = 0;
        *v2 = v8 == 0;
      }
    }
    else
    {
      return -100;
    }
  }
  return v1;
}
// 8DC8A: variable 'v8' is possibly undefined
