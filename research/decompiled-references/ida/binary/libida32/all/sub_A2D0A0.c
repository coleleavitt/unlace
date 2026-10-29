__int64 __fastcall sub_A2D0A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  void *v6; // rbx
  char v7; // al
  unsigned int v8; // eax
  int v9; // ebx
  void *v10; // r13
  char v11; // bp
  unsigned int v12; // eax
  void *v13; // rbp
  char v14; // al
  unsigned int v15; // eax
  int v16; // ebp
  void *v17; // r14
  char v18; // r13
  __int64 v19; // rdx
  void *v24; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+18h] [rbp-40h]
  char v26; // [rsp+1Ch] [rbp-3Ch]
  void *v27; // [rsp+20h] [rbp-38h] BYREF
  int v28; // [rsp+28h] [rbp-30h]

  if ( *(_DWORD *)a1 != 2 )
  {
    if ( *(_DWORD *)a1 != 7 )
      return 0;
    v4 = *(_BYTE *)(a1 + 36) & 1;
    if ( (*(_BYTE *)(a1 + 36) & 1) != 0 )
    {
      v13 = (void *)sub_A444C0(a4, a3);
      v14 = sub_F41500(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
      v24 = v13;
      v25 = 64;
      v26 = v14 ^ 1;
      v15 = sub_A884B0(a4, a3);
      v16 = 64;
      if ( v15 == 64 )
      {
        v17 = v24;
        v18 = v26;
      }
      else
      {
        v18 = v26;
        if ( v26 )
          sub_21E3050(&v27, &v24, v15);
        else
          sub_21E30A0(&v27, &v24, v15);
        v16 = v28;
        v17 = v27;
        if ( v25 > 0x40 && v24 )
          operator delete[](v24);
      }
      if ( *(_DWORD *)(a2 + 8) > 0x40u && *(_QWORD *)a2 )
        operator delete[](*(void **)a2);
      *(_QWORD *)a2 = v17;
      *(_DWORD *)(a2 + 8) = v16;
      *(_BYTE *)(a2 + 12) = v18;
      return v4;
    }
    if ( (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      return 0;
    }
    else
    {
      v6 = *(void **)(a1 + 24);
      v7 = sub_F41500(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
      v24 = v6;
      v25 = 64;
      v26 = v7 ^ 1;
      v8 = sub_A884B0(a4, a3);
      v9 = 64;
      if ( v8 == 64 )
      {
        v10 = v24;
        v11 = v26;
      }
      else
      {
        v11 = v26;
        if ( v26 )
          sub_21E3050(&v27, &v24, v8);
        else
          sub_21E30A0(&v27, &v24, v8);
        v9 = v28;
        v10 = v27;
        if ( v25 > 0x40 && v24 )
          operator delete[](v24);
      }
      if ( *(_DWORD *)(a2 + 8) > 0x40u )
      {
        if ( *(_QWORD *)a2 )
          operator delete[](*(void **)a2);
      }
      *(_DWORD *)(a2 + 8) = v9;
      v4 = 1;
      *(_QWORD *)a2 = v10;
      *(_BYTE *)(a2 + 12) = v11;
    }
    return v4;
  }
  if ( *(_DWORD *)(a2 + 8) <= 0x40u && (v12 = *(_DWORD *)(a1 + 16), v12 <= 0x40) )
  {
    v19 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a2 + 8) = v12;
    *(_QWORD *)a2 = v19;
  }
  else
  {
    sub_21E1960(a2, a1 + 8);
  }
  *(_BYTE *)(a2 + 12) = *(_BYTE *)(a1 + 20);
  return 1;
}

