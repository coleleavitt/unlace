/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456B50
// Address: 0x00456B50

//----- (00456B50) --------------------------------------------------------
void sub_456B50(int a1, char a2, char *a3, ...)
{
  _BYTE *v3; // ecx
  unsigned int v4; // kr00_4
  const char **v5; // esi
  signed int v6; // edx
  void *v7; // edi
  int v8; // eax
  const char **v9; // ebx
  const char *v10; // ecx
  const char *v11; // eax
  int v12; // eax
  LPVOID v13; // esi
  unsigned int v14; // edi
  unsigned int v15; // ebx
  LPVOID v16; // eax
  int *v17; // edx
  unsigned int v18; // eax
  LPVOID v19; // eax
  int v20; // ecx
  int v21; // eax
  _BYTE *v22; // [esp+20h] [ebp-1Ch] BYREF
  unsigned int v23; // [esp+24h] [ebp-18h]
  int v24; // [esp+28h] [ebp-14h]
  unsigned int v25; // [esp+2Ch] [ebp-10h]
  int v26; // [esp+38h] [ebp-4h]
  CHAR MultiByteStr[260]; // [esp+3Ch] [ebp+0h] BYREF
  va_list va; // [esp+158h] [ebp+11Ch] BYREF

  va_start(va, a3);
  sub_4569E0(MultiByteStr, 260, a3, (int)va);
  if ( (a2 & 4) == 0 || sub_457BA0(MultiByteStr) )
  {
    v3 = nullptr;
    v22 = nullptr;
    v23 = 0;
    v24 = 0;
    v26 = 0;
    v4 = strlen(MultiByteStr);
    if ( v4 != -1 )
    {
      v3 = sub_453B00((int)&v22, nullptr, v4 + 1, 1u);
      v22 = v3;
    }
    v23 = v4 + 1;
    sub_464310((unsigned int)v3, (unsigned int)MultiByteStr, v4);
    v22[v4] = 0;
    v5 = *(const char ***)a1;
    v6 = v23;
    v7 = v22;
    v8 = 3 * *(_DWORD *)(a1 + 4);
    v26 = 1;
    v9 = &v5[v8];
    v25 = v23;
    if ( v5 == v9 )
      goto LABEL_15;
    do
    {
      v10 = ::MultiByteStr;
      if ( v5[1] )
        v10 = *v5;
      v11 = ::MultiByteStr;
      if ( v6 )
        v11 = v22;
      v12 = strcmp(v11, v10);
      if ( v12 )
        v12 = v12 < 0 ? -1 : 1;
      if ( !v12 )
        break;
      v6 = v25;
      v5 += 3;
    }
    while ( v5 != v9 );
    v6 = v25;
    if ( v5 == v9 )
    {
LABEL_15:
      v13 = nullptr;
      v14 = 0;
      v15 = 0;
      if ( v6 )
      {
        v16 = sub_4539E0(v6);
        v14 = v25;
        v13 = v16;
        v15 = v25;
        sub_464310((unsigned int)v16, (unsigned int)v22, v25);
      }
      v17 = (int *)a1;
      LOBYTE(v26) = 2;
      v18 = *(_DWORD *)(a1 + 4) + 1;
      if ( v18 > *(_DWORD *)(a1 + 8) )
      {
        v19 = sub_453B00(a1, *(void **)a1, v18, 0xCu);
        v17 = (int *)a1;
        *(_DWORD *)a1 = v19;
      }
      v20 = 3 * v17[1];
      v21 = *v17;
      *(_DWORD *)(v21 + 4 * v20) = v13;
      *(_DWORD *)(v21 + 4 * v20 + 4) = v14;
      *(_DWORD *)(v21 + 4 * v20 + 8) = v15;
      ++v17[1];
      v7 = v22;
    }
    v26 = 5;
    if ( v7 )
    {
      v23 = 0;
      sub_453A20(v7);
    }
  }
}
