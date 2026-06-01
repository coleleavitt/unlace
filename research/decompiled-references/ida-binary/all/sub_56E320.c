_QWORD *__fastcall sub_56E320(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v3; // rbx
  void *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  bool v7; // cc
  void *v8; // rdi
  void *v9; // rax
  void *v10; // rdi
  void *v11; // rax
  void *v12; // rdi
  void *v13; // rax
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  _DWORD *v17; // rdx

  v1 = 80;
  v3 = off_8C52B0(1u, 0x50u);
  v3[1] = 0;
  *v3 = 0;
  v3[3] = 0;
  v3[2] = 0;
  v3[5] = 0;
  v3[4] = 0;
  v3[7] = 0;
  v3[6] = 0;
  v4 = off_8C52B8(0xC0u);
  v7 = *((_DWORD *)v3 + 7) <= 3u;
  *((_DWORD *)v3 + 3) = 4;
  *v3 = v4;
  if ( v7 )
  {
    v8 = (void *)v3[2];
    if ( v8 )
    {
      v1 = 96;
      v9 = off_8C52A8(v8, 0x60u);
    }
    else
    {
      v9 = off_8C52B8(0x60u);
    }
    v3[2] = v9;
    *((_DWORD *)v3 + 7) = 4;
  }
  if ( *((_DWORD *)v3 + 11) <= 3u )
  {
    v10 = (void *)v3[4];
    if ( v10 )
    {
      v1 = 128;
      v11 = off_8C52A8(v10, 0x80u);
    }
    else
    {
      v11 = off_8C52B8(0x80u);
    }
    v3[4] = v11;
    *((_DWORD *)v3 + 11) = 4;
  }
  if ( *((_DWORD *)v3 + 15) <= 0x31u )
  {
    v12 = (void *)v3[6];
    if ( v12 )
    {
      v1 = 400;
      v13 = off_8C52A8(v12, 0x190u);
    }
    else
    {
      v13 = off_8C52B8(0x190u);
    }
    v3[6] = v13;
    *((_DWORD *)v3 + 15) = 50;
  }
  v14 = *((_DWORD *)v3 + 14);
  v3[9] = a1;
  if ( v14 )
  {
    v15 = v14 - 1;
    v16 = v3[6];
    *((_DWORD *)v3 + 14) = v15;
    v17 = *(_DWORD **)(v16 + 8LL * v15);
  }
  else
  {
    v17 = off_8C52B8(0xE8u);
  }
  memset(v17, 0, 0xE8u);
  v17[53] = 1;
  *(_WORD *)v17 = 1;
  v3[8] = v17;
  sub_56E170((__int64)v3, v1, (__int64)v17, 0, v5, v6);
  return v3;
}
