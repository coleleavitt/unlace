__int64 __fastcall sub_945870(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // r11
  __int64 v4; // r14
  __int64 v5; // r13
  int v6; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // esi
  __int64 result; // rax
  _QWORD *v10; // r11
  int v11; // r8d
  char v12; // r15
  unsigned int v13; // edx
  unsigned __int64 v14; // r10
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  char v19; // [rsp+0h] [rbp-34h]

  v2 = *(unsigned int *)(a1 + 44);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 112);
  v6 = 6;
  v7 = 6;
  if ( *(_DWORD *)(a1 + 268) <= 6u )
    v7 = *(_DWORD *)(a1 + 268);
  if ( v7 < 4 )
    LOBYTE(v7) = 4;
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v6 = *(_DWORD *)(a1 + 272);
  v8 = a2 - v3;
  result = (unsigned int)(*(_DWORD *)(a1 + 52) + 8);
  v10 = (_QWORD *)(v2 + v3);
  if ( (unsigned int)v2 < v8 )
  {
    v11 = *(_DWORD *)(a1 + 44);
    v12 = 64 - (*(_BYTE *)(a1 + 52) + 8);
    v19 = 32 - (*(_BYTE *)(a1 + 52) + 8);
    while ( 1 )
    {
      v14 = *(_QWORD *)(a1 + 96);
      if ( v6 == 5 )
        break;
      if ( v6 == 6 )
      {
        v18 = 0xCF1BBCDCBF9B0000LL;
LABEL_16:
        v14 = ((*v10 * v18) ^ v14) >> v12;
        v13 = v14;
        goto LABEL_10;
      }
      v13 = ((unsigned int)v14 ^ (-1640531535 * *(_DWORD *)v10)) >> v19;
      LOBYTE(v14) = v13;
LABEL_10:
      v15 = v13 >> 8 << v7;
      v16 = (_BYTE *)(v4 + v15);
      v17 = ((1 << v7) - 1) & (*(unsigned __int8 *)(v4 + v15) - 1);
      if ( !v17 )
        v17 = (1 << v7) - 1;
      v10 = (_QWORD *)((char *)v10 + 1);
      *v16 = v17;
      v16[v17] = v14;
      result = v15 + v17;
      *(_DWORD *)(v5 + 4 * result) = v11++;
      if ( v8 == v11 )
        goto LABEL_18;
    }
    v18 = 0xCF1BBCDCBB000000LL;
    goto LABEL_16;
  }
LABEL_18:
  *(_DWORD *)(a1 + 44) = v8;
  return result;
}
