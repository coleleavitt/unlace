__int64 __fastcall sub_1C32DB0(__int64 *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 a5)
{
  __int64 *v6; // rbp
  __int64 *v8; // r12
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  unsigned __int64 v17; // r15
  __int64 v18; // rax

  v6 = a3;
  if ( a1 == a2 )
  {
LABEL_21:
    v13 = (char *)a4 - (char *)v6;
    v14 = 0xAAAAAAAAAAAAAAABLL * (v13 >> 3);
    if ( v13 > 0 )
    {
      do
      {
        if ( *(_DWORD *)(a5 + 8) > 0x40u && *(_QWORD *)a5 )
          operator delete[](*(void **)a5);
        v15 = *v6;
        a5 += 24;
        v6 += 3;
        *(_QWORD *)(a5 - 24) = v15;
        *(_DWORD *)(a5 - 16) = *((_DWORD *)v6 - 4);
        LOBYTE(v15) = *((_BYTE *)v6 - 12);
        *((_DWORD *)v6 - 4) = 0;
        *(_BYTE *)(a5 - 12) = v15;
        *(_QWORD *)(a5 - 8) = *(v6 - 1);
        --v14;
      }
      while ( v14 );
    }
    return a5;
  }
  v8 = a1;
  if ( a3 != a4 )
  {
    do
    {
      if ( *((_BYTE *)v6 + 12) )
        v9 = (unsigned int)sub_2205DB0(v6, v8) >> 31;
      else
        v9 = (unsigned int)sub_2205E20(v6, v8) >> 31;
      if ( !(_BYTE)v9
        && (!*((_BYTE *)v8 + 12)
          ? (v10 = (unsigned int)sub_2205E20(v8, v6) >> 31)
          : (v10 = (unsigned int)sub_2205DB0(v8, v6) >> 31),
            (_BYTE)v10 || v6[2] >= (unsigned __int64)v8[2]) )
      {
        if ( *(_DWORD *)(a5 + 8) > 0x40u && *(_QWORD *)a5 )
          operator delete[](*(void **)a5);
        v12 = *v8;
        v8 += 3;
        a5 += 24;
        *(_QWORD *)(a5 - 24) = v12;
        *(_DWORD *)(a5 - 16) = *((_DWORD *)v8 - 4);
        LOBYTE(v12) = *((_BYTE *)v8 - 12);
        *((_DWORD *)v8 - 4) = 0;
        *(_BYTE *)(a5 - 12) = v12;
        *(_QWORD *)(a5 - 8) = *(v8 - 1);
        if ( v8 == a2 )
          goto LABEL_21;
      }
      else
      {
        if ( *(_DWORD *)(a5 + 8) > 0x40u && *(_QWORD *)a5 )
          operator delete[](*(void **)a5);
        v11 = *v6;
        a5 += 24;
        v6 += 3;
        *(_QWORD *)(a5 - 24) = v11;
        *(_DWORD *)(a5 - 16) = *((_DWORD *)v6 - 4);
        LOBYTE(v11) = *((_BYTE *)v6 - 12);
        *((_DWORD *)v6 - 4) = 0;
        *(_BYTE *)(a5 - 12) = v11;
        *(_QWORD *)(a5 - 8) = *(v6 - 1);
        if ( v8 == a2 )
          goto LABEL_21;
      }
    }
    while ( a4 != v6 );
  }
  v17 = 0xAAAAAAAAAAAAAAABLL * (a2 - v8);
  if ( (char *)a2 - (char *)v8 > 0 )
  {
    do
    {
      if ( *(_DWORD *)(a5 + 8) > 0x40u && *(_QWORD *)a5 )
        operator delete[](*(void **)a5);
      v18 = *v8;
      a5 += 24;
      v8 += 3;
      *(_QWORD *)(a5 - 24) = v18;
      *(_DWORD *)(a5 - 16) = *((_DWORD *)v8 - 4);
      LOBYTE(v18) = *((_BYTE *)v8 - 12);
      *((_DWORD *)v8 - 4) = 0;
      *(_BYTE *)(a5 - 12) = v18;
      *(_QWORD *)(a5 - 8) = *(v8 - 1);
      --v17;
    }
    while ( v17 );
    goto LABEL_21;
  }
  return a5;
}
