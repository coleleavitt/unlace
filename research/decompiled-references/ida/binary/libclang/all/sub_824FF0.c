__int64 __fastcall sub_824FF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  unsigned int v7; // eax
  char v8; // r12
  unsigned int v9; // ebp
  void *v10; // r13
  void *v11; // rdi
  bool v12; // cc
  void *v13; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-40h]
  char v15; // [rsp+Ch] [rbp-3Ch]
  void *v16; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-30h]

  if ( *(_DWORD *)a3 == 2 )
  {
    v5 = *(_DWORD *)(a3 + 16);
    v7 = sub_781830(a4);
    if ( v7 < v5 )
    {
      v8 = *(_BYTE *)(a3 + 20);
      sub_25877E0(&v16, a3 + 8, v7);
      v15 = v8;
      v14 = v17;
      v13 = v16;
      if ( v8 )
        sub_2587D60(&v16, &v13);
      else
        sub_2587BE0(&v16, &v13, v5);
      v9 = v17;
      v10 = v16;
      if ( *(_DWORD *)(a3 + 16) > 0x40u )
      {
        v11 = *(void **)(a3 + 8);
        if ( v11 )
          operator delete[](v11);
      }
      v12 = v14 <= 0x40;
      *(_QWORD *)(a3 + 8) = v10;
      *(_DWORD *)(a3 + 16) = v9;
      *(_BYTE *)(a3 + 20) = v8;
      if ( !v12 )
      {
        if ( v13 )
          operator delete[](v13);
      }
    }
    return 1;
  }
  else
  {
    sub_A2E130(a1, a2, 110, 0);
    return 0;
  }
}

