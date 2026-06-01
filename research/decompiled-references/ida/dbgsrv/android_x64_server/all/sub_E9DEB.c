/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E9DEB
// Address: 0x00000000000E9DEB

//----- (00000000000E9DEB) ----------------------------------------------------
__int64 __fastcall sub_E9DEB(__int64 a1, char *a2)
{
  char *v2; // rdx
  int v3; // r15d
  char *v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rax
  char *v8; // rbx
  int v9; // eax
  __int64 v11; // rax
  int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = nullptr;
  LOBYTE(v3) = 0;
  v5 = nullptr;
  v6 = 0;
  while ( *(_DWORD *)a2 )
  {
    v7 = *((int *)a2 + 1);
    if ( (_DWORD)v7 )
    {
      v8 = &a2[-v7 + 4];
      if ( v8 == v2 )
      {
        v8 = v2;
      }
      else
      {
        v9 = sub_E9763((__int64)&a2[-v7 + 4]);
        v3 = v9;
        if ( v9 == 255 )
          return -1;
        v11 = sub_E959E(v9, a1);
        v12 = *(_DWORD *)(a1 + 32);
        v5 = (char *)v11;
        if ( (v12 & 0x7F8) == 0x7F8 )
        {
          *(_WORD *)(a1 + 32) = (8 * (unsigned __int8)v3) | v12 & 0xF807;
        }
        else if ( (unsigned __int8)((unsigned __int16)v12 >> 3) != v3 )
        {
          *(_BYTE *)(a1 + 32) |= 4u;
        }
      }
      sub_E961A(v3, v5, a2 + 8, v15);
      v13 = sub_E955D(v3);
      v14 = -1;
      if ( v13 <= 7uLL )
        v14 = (1LL << (8 * (unsigned __int8)v13)) - 1;
      if ( (v15[0] & v14) != 0 )
      {
        ++v6;
        if ( v15[0] < *(_QWORD *)a1 )
          *(_QWORD *)a1 = v15[0];
      }
    }
    else
    {
      v8 = v2;
    }
    v2 = v8;
    a2 += *(unsigned int *)a2 + 4;
  }
  return v6;
}
