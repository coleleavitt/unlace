/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B190
// Address: 0x0041B190

//----- (0041B190) --------------------------------------------------------
int __userpurge sub_41B190@<eax>(int a1@<ebx>, int a2@<edi>, __m128i a3@<xmm0>, _DWORD *a4, int a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // esi
  char *v6; // ecx
  const CHAR *v7; // eax
  int v8; // ebx
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  LPVOID v12; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  char v16; // [esp+14h] [ebp-10h] BYREF
  int v17; // [esp+20h] [ebp-4h]

  v5 = dword_4B6B40;
  sub_4562D0(dword_4B6B40);
  v6 = (char *)MultiByteStr;
  v17 = 0;
  if ( a4[9] )
    v6 = (char *)a4[8];
  if ( a4[3] )
    v7 = (const CHAR *)a4[2];
  else
    v7 = MultiByteStr;
  v8 = sub_45CE90(a1, a2, a3, v7, v6);
  if ( v8 )
  {
    v9 = dword_4B6B24;
    if ( !dword_4B6B24 )
    {
      v10 = dword_4B6B20;
      v11 = dword_4B6B28;
      if ( (unsigned int)&v16 >= dword_4B6B20 )
        v11 = dword_4B6B28;
      if ( !v11 )
      {
        v12 = sub_453B00((int)&dword_4B6B20, (void *)dword_4B6B20, 1u, 4u);
        v9 = dword_4B6B24;
        v10 = (int)v12;
        dword_4B6B20 = (int)v12;
      }
      *(_DWORD *)(v10 + 4 * v9) = 0;
      v9 = ++dword_4B6B24;
    }
    *(_DWORD *)(a5 + 8) = v9;
    v13 = dword_4B6B24;
    if ( dword_4B6B24 + 1 <= (unsigned int)dword_4B6B28 )
    {
      v14 = (_DWORD *)dword_4B6B20;
    }
    else
    {
      v14 = sub_453B00((int)&dword_4B6B20, (void *)dword_4B6B20, dword_4B6B24 + 1, 4u);
      v13 = dword_4B6B24;
      dword_4B6B20 = (int)v14;
    }
    v14[v13] = v8;
    ++dword_4B6B24;
  }
  v17 = 1;
  sub_4562F0(v5);
  return 0;
}
// 4B6B20: using guessed type int dword_4B6B20;
// 4B6B24: using guessed type int dword_4B6B24;
// 4B6B28: using guessed type int dword_4B6B28;
