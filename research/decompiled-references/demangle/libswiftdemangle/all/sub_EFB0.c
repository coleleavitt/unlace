unsigned __int64 __fastcall sub_EFB0(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v2; // rdx
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // r8
  __int16 v12; // cx

  v1 = sub_D180((_QWORD *)a1);
  v2 = 0;
  if ( v1 >= 0 )
  {
    v3 = v1;
    v2 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 8) = v2;
    if ( !v2 || (v4 = v2 + 24, v2 + 24 > *(_QWORD *)(a1 + 16)) )
    {
      v5 = 2LL * *(_QWORD *)(a1 + 32);
      if ( v5 < 0x20 )
        v5 = 32;
      *(_QWORD *)(a1 + 32) = v5;
      v6 = v5 + 8;
      v7 = malloc(v5 + 8);
      v8 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v7;
      *v7 = v8;
      v2 = ((unsigned __int64)v7 + 15) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)(a1 + 16) = (char *)v7 + v6;
      v4 = v2 + 24;
    }
    *(_QWORD *)(a1 + 8) = v4;
    *(_WORD *)(v2 + 16) = 151;
    *(_BYTE *)(v2 + 18) = 2;
    *(_QWORD *)v2 = v3;
  }
  v9 = *(_DWORD *)(a1 + 96);
  if ( v9
    && ((v10 = (unsigned int)(v9 - 1),
         v11 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v10),
         v12 = *(_WORD *)(v11 + 16),
         v12 == 24)
     || (unsigned __int16)(v12 - 44) <= 2u) )
  {
    *(_DWORD *)(a1 + 96) = v10;
  }
  else
  {
    v11 = 0;
  }
  return sub_CE00((_QWORD *)a1, 195, v2, v11);
}
