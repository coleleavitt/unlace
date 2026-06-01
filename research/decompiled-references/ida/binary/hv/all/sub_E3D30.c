__int64 __fastcall sub_E3D30(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  int v3; // r14d
  unsigned int v4; // eax
  __int64 v5; // r10
  unsigned int v6; // esi
  int v7; // r9d
  unsigned int v8; // edx
  __int64 v9; // r11
  unsigned int v10; // ebx
  _QWORD *v11; // r8
  char v12; // bp
  unsigned __int64 v13; // rsi
  _DWORD *v14; // rcx
  unsigned __int64 v15; // rax
  unsigned int v18; // [rsp+10h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 264);
  v4 = *(_DWORD *)(a1 + 44);
  v5 = *(_QWORD *)(a1 + 112);
  v6 = (_DWORD)a2 - v2;
  v7 = (1 << *(_DWORD *)(a1 + 260)) - 1;
  v8 = *(_DWORD *)(a1 + 272);
  v9 = *(_QWORD *)(a1 + 128);
  v18 = v6;
  if ( v6 > v4 )
  {
    v10 = v6;
    v11 = (_QWORD *)(v4 + v2);
    v12 = 64 - v3;
    do
    {
      if ( v8 == 6 )
      {
        v13 = (0xCF1BBCDCBF9B0000LL * *v11) >> v12;
      }
      else if ( v8 <= 6 )
      {
        if ( v8 != 5 )
        {
LABEL_13:
          v13 = (unsigned int)(-1640531535 * *(_DWORD *)v11) >> (32 - v3);
          goto LABEL_5;
        }
        v13 = (0xCF1BBCDCBB000000LL * *v11) >> v12;
      }
      else if ( v8 == 7 )
      {
        v13 = (0xCF1BBCDCBFA56300LL * *v11) >> v12;
      }
      else
      {
        if ( v8 != 8 )
          goto LABEL_13;
        v13 = (0xCF1BBCDCB7A56463LL * *v11) >> v12;
      }
LABEL_5:
      v14 = (_DWORD *)(v5 + 4 * v13);
      v11 = (_QWORD *)((char *)v11 + 1);
      *(_DWORD *)(v9 + 4LL * (v4 & v7)) = *v14;
      *v14 = v4++;
    }
    while ( v10 != v4 );
  }
  *(_DWORD *)(a1 + 44) = v18;
  if ( v8 == 6 )
  {
    v15 = 0xCF1BBCDCBF9B0000LL;
    return *(unsigned int *)(v5 + 4 * ((*a2 * v15) >> (64 - (unsigned __int8)v3)));
  }
  if ( v8 <= 6 )
  {
    v15 = 0xCF1BBCDCBB000000LL;
    if ( v8 == 5 )
      return *(unsigned int *)(v5 + 4 * ((*a2 * v15) >> (64 - (unsigned __int8)v3)));
  }
  else
  {
    if ( v8 == 7 )
    {
      v15 = 0xCF1BBCDCBFA56300LL;
      return *(unsigned int *)(v5 + 4 * ((*a2 * v15) >> (64 - (unsigned __int8)v3)));
    }
    v15 = 0xCF1BBCDCB7A56463LL;
    if ( v8 == 8 )
      return *(unsigned int *)(v5 + 4 * ((*a2 * v15) >> (64 - (unsigned __int8)v3)));
  }
  return *(unsigned int *)(v5 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)a2) >> (32 - v3)));
}

