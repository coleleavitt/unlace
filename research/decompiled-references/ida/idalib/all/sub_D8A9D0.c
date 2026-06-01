__int64 __fastcall sub_D8A9D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdx
  void *v7; // rax
  __int64 v8; // rax
  void *v9; // rax
  int v10; // eax
  bool v11; // cc
  unsigned __int64 v13; // rdx
  void *v14; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-50h]
  void *v16; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-40h]
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  int v19; // [rsp+28h] [rbp-30h]

  v3 = *((unsigned int *)a2 + 2);
  v4 = *a2;
  v5 = v3;
  v6 = (unsigned __int64)(v3 + 63) >> 6;
  if ( v6 == 1 )
  {
    v15 = v5;
    if ( v5 <= 0x40 )
    {
      v17 = v5;
      v7 = (void *)(v4 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v5));
      if ( !v5 )
        v7 = nullptr;
      v14 = v7;
      v8 = v4;
      LODWORD(v4) = v5;
      goto LABEL_6;
    }
    sub_2205470(&v14, v4, 1);
  }
  else
  {
    sub_2205610(&v14, v5, v6, v4);
  }
  v4 = *((unsigned int *)a2 + 2);
  v13 = (unsigned __int64)(v4 + 63) >> 6;
  if ( v13 != 1 )
  {
    sub_2205610(&v16, v4, v13, *a2);
    goto LABEL_9;
  }
  v8 = *a2;
  v17 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)v4 > 0x40 )
  {
    sub_2205470(&v16, v8, 1);
    goto LABEL_9;
  }
LABEL_6:
  v9 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v4) & v8);
  if ( !(_DWORD)v4 )
    v9 = nullptr;
  v16 = v9;
LABEL_9:
  sub_2206B70(&v18, &v16, v5);
  v10 = v19;
  v11 = v17 <= 0x40;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = v10;
  *(_QWORD *)a1 = v18;
  if ( !v11 && v16 )
    operator delete[](v16);
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  return a1;
}
