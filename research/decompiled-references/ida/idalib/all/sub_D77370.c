__int64 __fastcall sub_D77370(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _WORD *a5)
{
  unsigned int v9; // ebp
  unsigned int v10; // eax
  char v11; // cl
  unsigned __int64 v12; // rsi
  unsigned int v13; // eax
  void *v14; // rdx
  unsigned int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // r14d
  _DWORD *v19; // rbp
  void *v20; // rdi
  __int16 v21; // dx
  __int64 v22; // rcx
  bool v24; // cc
  char v26; // [rsp+8h] [rbp-60h]
  void *v27; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+18h] [rbp-50h]
  void *v29; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-40h]
  char v31; // [rsp+2Ch] [rbp-3Ch]

  v9 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(_BYTE *)(a4 + 12);
  v12 = v9 - 1;
  v28 = v10;
  if ( v10 <= 0x40 )
  {
    v27 = (void *)(v9 - 1);
    v30 = v10;
    v29 = v27;
    v28 = 0;
    v31 = v11;
LABEL_4:
    *(_QWORD *)a4 &= v12;
    goto LABEL_5;
  }
  v26 = v11;
  sub_2205470(&v27, v12, 0);
  v10 = v28;
  v12 = (unsigned __int64)v27;
  v28 = 0;
  v24 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v30 = v10;
  v29 = v27;
  v31 = v26;
  if ( v24 )
    goto LABEL_4;
  sub_2205B60(a4, &v29);
  v10 = v30;
LABEL_5:
  if ( v10 > 0x40 && v29 )
    operator delete[](v29);
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
LABEL_11:
  if ( !*(_BYTE *)(a4 + 12) && sub_CF0820((__int64 *)a4) )
  {
    v27 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v29 = (void *)sub_E33D20(a1, &v27, 2444, 0);
    if ( v29 )
      sub_CF8A40((unsigned __int8 ***)&v29, a4);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v18 )
    {
      sub_C16960((__int64)&v29, a4);
      v18 = sub_D77020(a1, a2, a3, (__int64)&v29, a5);
      if ( v30 > 0x40 )
      {
        if ( v29 )
          operator delete[](v29);
      }
    }
  }
  else
  {
    v13 = *(_DWORD *)(a4 + 8);
    v14 = *(void **)a4;
    v30 = v13;
    if ( v13 <= 0x40 )
    {
      v22 = 0;
      if ( v13 )
        v22 = (__int64)((_QWORD)v14 << (64 - (unsigned __int8)v13)) >> (64 - (unsigned __int8)v13);
      v29 = (void *)v22;
    }
    else
    {
      v29 = v14;
    }
    v15 = *(_DWORD *)(a3 + 8);
    v16 = *(_QWORD *)a3;
    if ( *(_BYTE *)(a3 + 12) )
    {
      v17 = *(_QWORD *)a3;
      if ( v15 > 0x40 )
        v17 = *(_QWORD *)v16;
    }
    else if ( v15 > 0x40 )
    {
      LOWORD(v17) = *(_WORD *)v16;
    }
    else
    {
      LOWORD(v17) = 0;
      if ( v15 )
        v17 = v16 << (64 - (unsigned __int8)v15) >> (64 - (unsigned __int8)v15);
    }
    LOWORD(v27) = v17;
    v18 = sub_D76B60(a1, a2, (__int64)&v27, (__int64 *)&v29, v9);
    if ( (_BYTE)v18 )
    {
      LODWORD(v19) = v9 - 1;
      if ( !sub_9EC640(a4, (unsigned int)v19) )
      {
        v19 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v19) = *v19;
      }
      sub_CF8770((__int64)&v29, a3, (unsigned int)v19);
      if ( v31 )
      {
        v20 = v29;
        if ( v30 <= 0x40 )
        {
          *a5 = (_WORD)v29;
          goto LABEL_42;
        }
        *a5 = *(_QWORD *)v29;
        if ( !v20 )
        {
LABEL_42:
          *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = *a5;
          return v18;
        }
      }
      else
      {
        v20 = v29;
        if ( v30 <= 0x40 )
        {
          v21 = 0;
          if ( v30 )
            v21 = (__int64)((_QWORD)v29 << (64 - (unsigned __int8)v30)) >> (64 - (unsigned __int8)v30);
          *a5 = v21;
          goto LABEL_42;
        }
        *a5 = *(_QWORD *)v29;
      }
      operator delete[](v20);
      goto LABEL_42;
    }
  }
  return v18;
}
