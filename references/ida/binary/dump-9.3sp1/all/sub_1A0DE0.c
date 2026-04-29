void __fastcall sub_1A0DE0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = -1;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  if ( a3 )
  {
    if ( a3[1] || a3[8] )
    {
      v6 = *(unsigned int *)(a3[4] + 72LL);
      v7 = a3[11];
      *(_DWORD *)(a1 + 40) = v6;
      v8 = *(_DWORD *)(v7 + 72);
      if ( v8 == (_DWORD)v6 )
        v8 = -1;
    }
    else
    {
      v6 = 0xFFFFFFFFLL;
      v8 = -1;
    }
    *(_DWORD *)(a1 + 44) = v8;
    sub_1A0C20((_QWORD *)a1, (__int64 *)(a1 + 48), v6, v6, a5, a6);
    sub_1A0C20((_QWORD *)a1, (__int64 *)(a1 + 88), *(_DWORD *)(a1 + 44), v9, v10, v11);
  }
}
