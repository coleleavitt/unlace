void __fastcall sub_A9C550(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  int v4; // edx
  _DWORD *v5; // rbp
  __int64 v6; // rbx
  void *v7; // rdi
  void *v8; // rdi

  v2 = *(_DWORD **)a1;
  v3 = *(_QWORD *)a1 + 168LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    do
    {
      v4 = *v2;
      v2 += 42;
      a2 += 168;
      *(_DWORD *)(a2 - 168) = v4;
      *(_DWORD *)(a2 - 164) = *(v2 - 41);
      *(_DWORD *)(a2 - 160) = *(v2 - 40);
      *(_DWORD *)(a2 - 156) = *(v2 - 39);
      *(_QWORD *)(a2 - 152) = *((_QWORD *)v2 - 19);
      *(_QWORD *)(a2 - 144) = *((_QWORD *)v2 - 18);
      *(_DWORD *)(a2 - 128) = *(v2 - 32);
      *(_QWORD *)(a2 - 136) = *((_QWORD *)v2 - 17);
      LOBYTE(v4) = *((_BYTE *)v2 - 124);
      *(v2 - 32) = 0;
      *(_BYTE *)(a2 - 124) = v4;
      *(_BYTE *)(a2 - 120) = *((_BYTE *)v2 - 120);
      *(_QWORD *)(a2 - 112) = *((_QWORD *)v2 - 14);
      *(_QWORD *)(a2 - 104) = *((_QWORD *)v2 - 13);
      *(_QWORD *)(a2 - 96) = *((_QWORD *)v2 - 12);
      *(_BYTE *)(a2 - 88) = *((_BYTE *)v2 - 88);
      *(_BYTE *)(a2 - 87) = *((_BYTE *)v2 - 87);
      *(_BYTE *)(a2 - 86) = *((_BYTE *)v2 - 86);
      *(_QWORD *)(a2 - 80) = *((_QWORD *)v2 - 10);
      *(_QWORD *)(a2 - 72) = *((_QWORD *)v2 - 9);
      *(_DWORD *)(a2 - 56) = *(v2 - 14);
      *(_QWORD *)(a2 - 64) = *((_QWORD *)v2 - 8);
      LOBYTE(v4) = *((_BYTE *)v2 - 52);
      *(v2 - 14) = 0;
      *(_BYTE *)(a2 - 52) = v4;
      *(_BYTE *)(a2 - 48) = *((_BYTE *)v2 - 48);
      *(_QWORD *)(a2 - 40) = *((_QWORD *)v2 - 5);
      *(_QWORD *)(a2 - 32) = *((_QWORD *)v2 - 4);
      *(_QWORD *)(a2 - 24) = *((_QWORD *)v2 - 3);
      *(_BYTE *)(a2 - 16) = *((_BYTE *)v2 - 16);
      *(_BYTE *)(a2 - 15) = *((_BYTE *)v2 - 15);
      *(_BYTE *)(a2 - 14) = *((_BYTE *)v2 - 14);
      *(_BYTE *)(a2 - 8) = *((_BYTE *)v2 - 8);
    }
    while ( (_DWORD *)v3 != v2 );
    v5 = *(_DWORD **)a1;
    v6 = *(_QWORD *)a1 + 168LL * *(unsigned int *)(a1 + 8);
    while ( v5 != (_DWORD *)v6 )
    {
      while ( 1 )
      {
        v6 -= 168;
        if ( *(_DWORD *)(v6 + 112) > 0x40u )
        {
          v7 = *(void **)(v6 + 104);
          if ( v7 )
            operator delete[](v7);
        }
        if ( *(_DWORD *)(v6 + 40) <= 0x40u )
          break;
        v8 = *(void **)(v6 + 32);
        if ( !v8 )
          break;
        operator delete[](v8);
        if ( v5 == (_DWORD *)v6 )
          return;
      }
    }
  }
}

