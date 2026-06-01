/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E370
// Address: 0x0040E370

//----- (0040E370) --------------------------------------------------------
int __userpurge sub_40E370@<eax>(
        int a1@<ebp>,
        __m128i a2@<xmm0>,
        int a3,
        int a4,
        LPVOID lpBaseAddress,
        LPCVOID lpBuffer,
        SIZE_T nSize)
{
  void *v7; // ebx
  SIZE_T v8; // esi
  void *v9; // ebp
  int v10; // edx
  _BYTE *v11; // ecx
  bool v12; // cf
  unsigned int v13; // esi
  SIZE_T v14; // esi
  BOOL v15; // ebx
  int v17; // ebx
  double v18; // [esp-Ch] [ebp-20h]
  _BYTE Buffer[8]; // [esp+8h] [ebp-Ch] BYREF

  v7 = (void *)lpBuffer;
  if ( !*(_DWORD *)(a3 + 200) && (*(_DWORD *)(a3 + 336) & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  if ( v7 )
  {
    HIDWORD(v18) = a1;
    sub_4107A0((int *)(a3 + 216), (unsigned int *)&lpBaseAddress);
    sub_416D20((int **)a3, 0);
    v8 = *(_DWORD *)(a3 + 208);
    v9 = lpBaseAddress;
    if ( sub_40C190(a3, a2, lpBaseAddress, Buffer, v8, 0, 0) == v8 )
    {
      v10 = *(_DWORD *)(a3 + 204);
      v11 = Buffer;
      v12 = v8 < 4;
      v13 = v8 - 4;
      if ( v12 )
      {
LABEL_9:
        if ( v13 == -4 )
        {
LABEL_17:
          v14 = nSize;
          v15 = sub_40C190(a3, a2, v9, v7, nSize, 1u, 0) == v14;
          sub_4161F0((int **)a3, 0);
          return v15;
        }
      }
      else
      {
        while ( *(_DWORD *)v11 == *(_DWORD *)v10 )
        {
          v11 += 4;
          v10 += 4;
          v12 = v13 < 4;
          v13 -= 4;
          if ( v12 )
            goto LABEL_9;
        }
      }
      if ( *v11 == *(_BYTE *)v10
        && (v13 == -3
         || v11[1] == *(_BYTE *)(v10 + 1)
         && (v13 == -2 || v11[2] == *(_BYTE *)(v10 + 2) && (v13 == -1 || v11[3] == *(_BYTE *)(v10 + 3)))) )
      {
        goto LABEL_17;
      }
    }
    if ( !*(_BYTE *)(a3 + 661) )
    {
      LODWORD(v18) = v9;
      sub_4104E0(a3, (int)"%a: breakpoint vanished from memory\n", v18);
    }
    sub_4161F0((int **)a3, 0);
    return 1;
  }
  else
  {
    v17 = (int)lpBaseAddress;
    if ( sub_43CD50(a3, (unsigned int)lpBaseAddress, a4) )
      return 1;
    else
      return (unsigned __int8)sub_44B260((int *)a3, v17, a4);
  }
}
// 40E370: could not find valid save-restore pair for ebp
// 4B70F0: using guessed type char byte_4B70F0;
