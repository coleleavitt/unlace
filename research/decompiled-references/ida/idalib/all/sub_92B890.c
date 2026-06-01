_DWORD *__fastcall sub_92B890(__int64 a1, int a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // r8d
  __int64 v5; // r11
  unsigned int v6; // esi
  _DWORD *result; // rax
  int v8; // r10d
  __int64 v9; // rbx
  _QWORD *v10; // r9
  char v11; // r12
  unsigned __int64 v12; // rax
  int *v13; // rcx
  int v14; // eax
  int v15; // r15d
  char v16; // [rsp+0h] [rbp-34h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 44);
  v5 = *(_QWORD *)(a1 + 112);
  v6 = a2 - v3;
  result = (_DWORD *)*(unsigned int *)(a1 + 264);
  v8 = (1 << (*(_BYTE *)(a1 + 260) - 1)) - 1;
  v9 = *(_QWORD *)(a1 + 128);
  if ( v6 > v4 )
  {
    v10 = (_QWORD *)(v4 + v3);
    v11 = 64 - (_BYTE)result;
    v16 = 32 - (_BYTE)result;
    do
    {
      if ( a3 == 5 )
      {
        v12 = (0xCF1BBCDCBB000000LL * *v10) >> v11;
      }
      else if ( a3 == 6 )
      {
        v12 = (0xCF1BBCDCBF9B0000LL * *v10) >> v11;
      }
      else
      {
        v12 = (unsigned int)(-1640531535 * *(_DWORD *)v10) >> v16;
      }
      v13 = (int *)(v5 + 4 * v12);
      v10 = (_QWORD *)((char *)v10 + 1);
      v14 = v4 & v8;
      v15 = *v13;
      *v13 = v4++;
      result = (_DWORD *)(v9 + 4LL * (unsigned int)(2 * v14));
      *result = v15;
      result[1] = 1;
    }
    while ( v6 != v4 );
  }
  *(_DWORD *)(a1 + 44) = v6;
  return result;
}
