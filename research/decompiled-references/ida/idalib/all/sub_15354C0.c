void __fastcall sub_15354C0(__int64 a1)
{
  _BYTE *v2; // rax
  char v3; // r13
  char v4; // r14
  bool v5; // r12
  _BYTE *v6; // rbp
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rdi
  unsigned int v10; // eax
  void *v11; // rdi
  _BYTE *v12; // rax
  __int16 v13; // dx
  unsigned int v14; // eax
  char v15; // dl
  unsigned int v16; // eax
  __int64 v17; // rdx

  v2 = *(_BYTE **)a1;
  if ( *(_BYTE *)(a1 + 72) )
  {
    v3 = v2[72];
    v4 = v2[92];
    v5 = (v2[32] & 2) != 0;
  }
  else
  {
    v3 = *(_BYTE *)(a1 + 48);
    v4 = *(_BYTE *)(a1 + 68);
    v5 = (*(_BYTE *)(a1 + 8) & 2) != 0;
  }
  *((_DWORD *)v2 + 8) = *(_DWORD *)(a1 + 8);
  v6 = *(_BYTE **)a1;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_BYTE *)(*(_QWORD *)a1 + 64LL) == 0;
  v9 = *(_QWORD *)a1 + 48LL;
  *(_QWORD *)(*(_QWORD *)a1 + 40LL) = v7;
  if ( v8 )
  {
    if ( !*(_BYTE *)(a1 + 40) )
      goto LABEL_8;
    v14 = *(_DWORD *)(a1 + 32);
    *((_DWORD *)v6 + 14) = v14;
    if ( v14 > 0x40 )
    {
      sub_2205510(v9);
      v12 = *(_BYTE **)a1;
    }
    else
    {
      *((_QWORD *)v6 + 6) = *(_QWORD *)(a1 + 24);
      v12 = v6;
    }
    v15 = *(_BYTE *)(a1 + 36);
    v6[64] = 1;
    v6[60] = v15;
  }
  else
  {
    v10 = *((_DWORD *)v6 + 14);
    if ( !*(_BYTE *)(a1 + 40) )
    {
      v6[64] = 0;
      if ( v10 > 0x40 )
      {
        v11 = *((void **)v6 + 6);
        v12 = v6;
        if ( v11 )
        {
          operator delete[](v11);
          v12 = *(_BYTE **)a1;
        }
        goto LABEL_9;
      }
LABEL_8:
      v12 = v6;
      goto LABEL_9;
    }
    if ( v10 <= 0x40 && (v16 = *(_DWORD *)(a1 + 32), v16 <= 0x40) )
    {
      v17 = *(_QWORD *)(a1 + 24);
      *((_DWORD *)v6 + 14) = v16;
      v12 = v6;
      *((_QWORD *)v6 + 6) = v17;
    }
    else
    {
      sub_22056A0(v9, a1 + 24);
      v12 = *(_BYTE **)a1;
    }
    v6[60] = *(_BYTE *)(a1 + 36);
  }
LABEL_9:
  v6[72] = *(_BYTE *)(a1 + 48);
  v6[73] = *(_BYTE *)(a1 + 49);
  *((_QWORD *)v12 + 10) = *(_QWORD *)(a1 + 56);
  *((_DWORD *)v12 + 22) = *(_DWORD *)(a1 + 64);
  v13 = *(_WORD *)(a1 + 68);
  v12[72] = v3;
  *((_WORD *)v12 + 46) = v13;
  *(_BYTE *)(*(_QWORD *)a1 + 92LL) = v4;
  *(_BYTE *)(*(_QWORD *)a1 + 32LL) = (2 * v5) | *(_BYTE *)(*(_QWORD *)a1 + 32LL) & 0xFD;
  sub_98E4B0(a1 + 24);
}
