__int64 __fastcall sub_1C32B90(__int64 *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 a5)
{
  __int64 *v6; // r12
  __int64 *v7; // rbp
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int64 v16; // r12
  __int64 v17; // rax

  v6 = a1;
  v7 = a3;
  if ( a4 != a3 && a2 != a1 )
  {
    do
    {
      if ( *((_BYTE *)v7 + 12) )
        v9 = (unsigned int)sub_2205DB0(v7, v6) >> 31;
      else
        v9 = (unsigned int)sub_2205E20(v7, v6) >> 31;
      if ( !(_BYTE)v9
        && (!*((_BYTE *)v6 + 12)
          ? (v10 = (unsigned int)sub_2205E20(v6, v7) >> 31)
          : (v10 = (unsigned int)sub_2205DB0(v6, v7) >> 31),
            (_BYTE)v10 || v7[2] >= (unsigned __int64)v6[2]) )
      {
        if ( *(_DWORD *)(a5 + 8) > 0x40u && *(_QWORD *)a5 )
          operator delete[](*(void **)a5);
        v12 = *v6;
        v6 += 3;
        a5 += 24;
        *(_QWORD *)(a5 - 24) = v12;
        *(_DWORD *)(a5 - 16) = *((_DWORD *)v6 - 4);
        LOBYTE(v12) = *((_BYTE *)v6 - 12);
        *((_DWORD *)v6 - 4) = 0;
        *(_BYTE *)(a5 - 12) = v12;
        *(_QWORD *)(a5 - 8) = *(v6 - 1);
        if ( a2 == v6 )
          break;
      }
      else
      {
        if ( *(_DWORD *)(a5 + 8) > 0x40u && *(_QWORD *)a5 )
          operator delete[](*(void **)a5);
        v11 = *v7;
        a5 += 24;
        v7 += 3;
        *(_QWORD *)(a5 - 24) = v11;
        *(_DWORD *)(a5 - 16) = *((_DWORD *)v7 - 4);
        LOBYTE(v11) = *((_BYTE *)v7 - 12);
        *((_DWORD *)v7 - 4) = 0;
        *(_BYTE *)(a5 - 12) = v11;
        *(_QWORD *)(a5 - 8) = *(v7 - 1);
        if ( a2 == v6 )
          break;
      }
    }
    while ( a4 != v7 );
  }
  v13 = 0xAAAAAAAAAAAAAAABLL * (a2 - v6);
  if ( (char *)a2 - (char *)v6 > 0 )
  {
    do
    {
      if ( *(_DWORD *)(a5 + 8) > 0x40u && *(_QWORD *)a5 )
        operator delete[](*(void **)a5);
      v14 = *v6;
      a5 += 24;
      v6 += 3;
      *(_QWORD *)(a5 - 24) = v14;
      *(_DWORD *)(a5 - 16) = *((_DWORD *)v6 - 4);
      LOBYTE(v14) = *((_BYTE *)v6 - 12);
      *((_DWORD *)v6 - 4) = 0;
      *(_BYTE *)(a5 - 12) = v14;
      *(_QWORD *)(a5 - 8) = *(v6 - 1);
      --v13;
    }
    while ( v13 );
  }
  v15 = (char *)a4 - (char *)v7;
  v16 = 0xAAAAAAAAAAAAAAABLL * (v15 >> 3);
  if ( v15 > 0 )
  {
    do
    {
      if ( *(_DWORD *)(a5 + 8) > 0x40u && *(_QWORD *)a5 )
        operator delete[](*(void **)a5);
      v17 = *v7;
      a5 += 24;
      v7 += 3;
      *(_QWORD *)(a5 - 24) = v17;
      *(_DWORD *)(a5 - 16) = *((_DWORD *)v7 - 4);
      LOBYTE(v17) = *((_BYTE *)v7 - 12);
      *((_DWORD *)v7 - 4) = 0;
      *(_BYTE *)(a5 - 12) = v17;
      *(_QWORD *)(a5 - 8) = *(v7 - 1);
      --v16;
    }
    while ( v16 );
  }
  return a5;
}
