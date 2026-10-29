void __fastcall sub_E235F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _BYTE *v4; // rax
  unsigned __int8 v5; // al
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  _BYTE *v9; // rax
  __int64 v10; // rdx
  void *v11; // [rsp+0h] [rbp-38h] BYREF
  int v12; // [rsp+8h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_BYTE **)(v3 + 32);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(v3 + 24) )
  {
    v3 = sub_2257CD0(*(_QWORD *)(a1 + 8), 65);
  }
  else
  {
    *(_QWORD *)(v3 + 32) = v4 + 1;
    *v4 = 65;
  }
  v5 = *(_BYTE *)(a2 + 19);
  v6 = *(_QWORD *)(a2 + 40);
  if ( (v5 & 2) != 0 )
  {
    v12 = *(_DWORD *)(v6 + 8);
    if ( (unsigned int)v12 > 0x40 )
      sub_21E17D0(&v11);
    else
      v11 = *(void **)v6;
  }
  else
  {
    v12 = 8 * ((v5 >> 2) & 0x1F);
    if ( v12 > 64 )
      sub_21E1730(&v11, v6, 0);
    else
      v11 = (void *)v6;
  }
  sub_21E8630(&v11, v3, 1);
  v9 = *(_BYTE **)(v3 + 32);
  if ( (unsigned __int64)v9 >= *(_QWORD *)(v3 + 24) )
  {
    sub_2257CD0(v3, 95);
  }
  else
  {
    v10 = (__int64)(v9 + 1);
    *(_QWORD *)(v3 + 32) = v9 + 1;
    *v9 = 95;
  }
  if ( (unsigned int)v12 > 0x40 && v11 )
    operator delete[](v11);
  sub_E1BE40(a1, *(_QWORD *)(a2 + 32), v10, v7, v8);
}

