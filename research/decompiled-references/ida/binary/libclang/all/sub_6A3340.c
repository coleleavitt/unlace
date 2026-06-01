__int64 __fastcall sub_6A3340(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rbx
  char v7; // al
  unsigned int v8; // eax
  int v9; // ebx
  char v10; // bp
  void *v11; // r13
  __int64 v12; // [rsp+8h] [rbp-50h]
  void *v13; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-40h]
  char v15; // [rsp+1Ch] [rbp-3Ch]
  void *v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+28h] [rbp-30h]

  if ( *(_DWORD *)a1 == 2 )
  {
    if ( *(_DWORD *)(a2 + 8) <= 0x40u && *(_DWORD *)(a1 + 16) <= 0x40u )
    {
      *(_QWORD *)a2 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 16);
    }
    else
    {
      sub_2585EA0(a2, a1 + 8);
    }
    *(_BYTE *)(a2 + 12) = *(_BYTE *)(a1 + 20);
  }
  else
  {
    if ( *(_DWORD *)a1 != 7 )
      return 0;
    if ( (*(_BYTE *)(a1 + 36) & 1) != 0 )
    {
      v12 = a4;
      v6 = (void *)sub_6D4B20(a4, a3);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 8) > 3u )
        return 0;
      v12 = a4;
      v6 = *(void **)(a1 + 24);
    }
    v7 = sub_B10310(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
    v13 = v6;
    v14 = 64;
    v15 = v7 ^ 1;
    v8 = sub_70B280(v12, a3);
    v9 = 64;
    v10 = v15;
    if ( v8 == 64 )
    {
      v11 = v13;
    }
    else
    {
      if ( v15 )
        sub_2587E20(&v16, &v13, v8);
      else
        sub_2587E80(&v16, &v13, v8);
      v9 = v17;
      v11 = v16;
      if ( v14 > 0x40 && v13 )
        operator delete[](v13);
    }
    if ( *(_DWORD *)(a2 + 8) > 0x40u )
    {
      if ( *(_QWORD *)a2 )
        operator delete[](*(void **)a2);
    }
    *(_QWORD *)a2 = v11;
    *(_DWORD *)(a2 + 8) = v9;
    *(_BYTE *)(a2 + 12) = v10;
  }
  return 1;
}

