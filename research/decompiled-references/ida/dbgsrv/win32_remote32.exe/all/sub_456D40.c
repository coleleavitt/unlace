/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456D40
// Address: 0x00456D40

//----- (00456D40) --------------------------------------------------------
char __cdecl sub_456D40(int a1)
{
  unsigned int v1; // esi
  _DWORD *v2; // esi
  const char *v3; // eax
  unsigned int v4; // kr00_4
  LPVOID v5; // eax
  char v6; // bl
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v10; // [esp-8h] [ebp-38h]
  _DWORD v11[3]; // [esp+10h] [ebp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [esp+1Ch] [ebp-14h] BYREF
  int v13; // [esp+20h] [ebp-10h]
  int v14; // [esp+2Ch] [ebp-4h]
  CHAR MultiByteStr[260]; // [esp+30h] [ebp+0h] BYREF

  sub_4543E0(&lpCriticalSection);
  v1 = dword_4B7344;
  v14 = 0;
  if ( (unsigned int)dword_4B7344 <= 1 )
  {
    v11[0] = "Hex-Rays";
    v11[1] = "IDA Pro";
    v11[2] = 0;
    if ( sub_457390((unsigned int)MultiByteStr, 0x104u, 26) && MultiByteStr[0] )
    {
      v2 = v11;
      v3 = "Hex-Rays";
      do
      {
        sub_4569C0(MultiByteStr, 260, MultiByteStr, v3, 0);
        if ( !sub_457B00(MultiByteStr) )
          sub_457C40(MultiByteStr, 511);
        v3 = (const char *)v2[1];
        ++v2;
      }
      while ( v3 );
      v4 = strlen(MultiByteStr);
      if ( !v4 )
      {
        v1 = 0;
        dword_4B7344 = 0;
        goto LABEL_14;
      }
      if ( v4 + 1 <= dword_4B7348 )
      {
        v5 = (LPVOID)dword_4B7340;
      }
      else
      {
        v5 = sub_453B00((int)&dword_4B7340, (void *)dword_4B7340, v4 + 1, 1u);
        dword_4B7340 = (int)v5;
      }
      dword_4B7344 = v4 + 1;
      sub_464310((unsigned int)v5, (unsigned int)MultiByteStr, v4);
      *(_BYTE *)(dword_4B7340 + v4) = 0;
    }
    v1 = dword_4B7344;
  }
LABEL_14:
  v6 = 0;
  if ( v1 > 1 )
  {
    v6 = 1;
    if ( (int *)a1 != &dword_4B7340 )
    {
      v7 = v1 != 0 ? v1 - 1 : 0;
      if ( v7 )
      {
        v13 = dword_4B7340;
        v8 = v7 + 1;
        if ( v7 + 1 > *(_DWORD *)(a1 + 8) )
        {
          *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v7 + 1, 1u);
          v8 = v7 + 1;
        }
        v10 = v13;
        *(_DWORD *)(a1 + 4) = v8;
        sub_464310(*(_DWORD *)a1, v10, v7);
        *(_BYTE *)(v7 + *(_DWORD *)a1) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 0;
      }
    }
  }
  v14 = 1;
  sub_4562F0(lpCriticalSection);
  return v6;
}
// 4B7340: using guessed type int dword_4B7340;
// 4B7344: using guessed type int dword_4B7344;
// 4B7348: using guessed type int dword_4B7348;
