__int64 __fastcall sub_D9B400(__int64 a1, char **a2)
{
  char *v2; // r15
  unsigned int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // r13d
  unsigned int v6; // eax
  bool v7; // dl
  void *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rbx
  unsigned int v12; // eax
  bool v13; // cc
  void *v14; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-60h]
  void *v16; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-50h]
  void *v18; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-40h]

  v2 = *a2;
  v3 = sub_21CA140(*(unsigned int *)*a2);
  v4 = (unsigned __int16)v3;
  v5 = v3;
  v15 = (unsigned __int16)v3;
  if ( (unsigned __int16)v3 > 0x40u )
    sub_21E1730(&v14, 0, ((unsigned int)(HIBYTE(v3) ^ 0x20) >> 5) & 1);
  else
    v14 = nullptr;
  sub_21E7D40(&v14, v2 + 4, v4 >> 3);
  v6 = v15;
  v17 = v15;
  if ( v15 <= 0x40 )
  {
    v16 = v14;
    v7 = (v5 & 0x20000000) == 0;
LABEL_5:
    *(_DWORD *)(a1 + 8) = v6;
    v8 = v16;
    *(_BYTE *)(a1 + 12) = v7;
    *(_QWORD *)a1 = v8;
    *(_DWORD *)(a1 + 16) = v5;
    goto LABEL_6;
  }
  sub_21E17D0(&v16);
  v6 = v17;
  v7 = (v5 & 0x20000000) == 0;
  v19 = v17;
  if ( v17 <= 0x40 )
    goto LABEL_5;
  sub_21E17D0(&v18);
  v12 = v19;
  v13 = v17 <= 0x40;
  *(_BYTE *)(a1 + 12) = (v5 & 0x20000000) == 0;
  *(_DWORD *)(a1 + 16) = v5;
  *(_DWORD *)(a1 + 8) = v12;
  *(_QWORD *)a1 = v18;
  if ( !v13 && v16 )
    operator delete[](v16);
LABEL_6:
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  v9 = *(_DWORD *)(a1 + 8);
  v19 = v9;
  if ( v9 > 0x40 )
  {
    sub_21E17D0(&v18);
    v10 = v19 >> 3;
    if ( v19 > 0x40 && v18 )
      operator delete[](v18);
  }
  else
  {
    v10 = v9 >> 3;
  }
  *a2 += (v10 + 11) & 0xFFFFFFFFFFFFFFF8LL;
  return a1;
}

