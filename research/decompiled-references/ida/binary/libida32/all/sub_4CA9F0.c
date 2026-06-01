__int64 __fastcall sub_4CA9F0(_BYTE *a1, __int64 a2, unsigned int *a3)
{
  _BYTE *v3; // r14
  _BYTE *v6; // rbx
  __int64 v7; // rdi
  char v8; // r13
  unsigned int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // edx
  _BYTE *v14; // rcx
  unsigned int v16; // eax

  v3 = &a1[a2];
  v6 = a1 + 1;
  v7 = *a3;
  v8 = a3[3] & 0x8F;
  if ( (_DWORD)v7 != -1 )
  {
    v9 = ea2node(v7);
    v8 |= 0x10u;
    v6 = (_BYTE *)pack_dd(v6, v3, v9);
  }
  v10 = a3[1];
  if ( (_DWORD)v10 && (a3[3] & 0x1010) == 0 )
  {
    v16 = ea2node(v10);
    v8 |= 0x20u;
    v6 = (_BYTE *)pack_dd(v6, v3, v16);
  }
  v11 = a3[2];
  if ( (_DWORD)v11 )
  {
    v8 |= 0x40u;
    v6 = (_BYTE *)pack_dd(v6, v3, v11);
  }
  *a1 = v8;
  v12 = a3[3] >> 4;
  if ( (v12 & 0x3F7) == 0 || v6 >= v3 )
    return v6 - a1;
  v13 = ((a3[3] >> 4) & 0x3F7) >> 8;
  v14 = v6 + 1;
  *v6 = v12 & 0xF7;
  if ( v13 && v14 < v3 )
  {
    v6[1] = v13;
    v6 += 2;
    return v6 - a1;
  }
  return v14 - a1;
}

