__int64 __fastcall sub_D78D60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  unsigned int v9; // r12d
  unsigned int v10; // eax
  char v11; // cl
  unsigned __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rdx
  bool v15; // zf
  _BYTE *v16; // rsi
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // r14d
  _DWORD *v20; // r12
  char v21; // bl
  void *v22; // rdi
  char v23; // dl
  __int64 v25; // rcx
  bool v26; // cc
  char v28; // [rsp+8h] [rbp-60h]
  void *v29; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+18h] [rbp-50h]
  void *v31; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+28h] [rbp-40h]
  char v33; // [rsp+2Ch] [rbp-3Ch]

  v9 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(_BYTE *)(a4 + 12);
  v12 = v9 - 1;
  v30 = v10;
  if ( v10 <= 0x40 )
  {
    v29 = (void *)(v9 - 1);
    v32 = v10;
    v31 = v29;
    v30 = 0;
    v33 = v11;
LABEL_4:
    *(_QWORD *)a4 &= v12;
    goto LABEL_5;
  }
  v28 = v11;
  sub_2205470(&v29, v12, 0);
  v10 = v30;
  v12 = (unsigned __int64)v29;
  v30 = 0;
  v26 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v32 = v10;
  v31 = v29;
  v33 = v28;
  if ( v26 )
    goto LABEL_4;
  sub_2205B60(a4, &v31);
  v10 = v32;
LABEL_5:
  if ( v10 > 0x40 && v31 )
    operator delete[](v31);
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
LABEL_11:
  if ( !*(_BYTE *)(a4 + 12) && sub_CF0820((__int64 *)a4) )
  {
    v29 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v31 = (void *)sub_E33D20(a1, &v29, 2444, 0);
    if ( v31 )
      sub_CF8A40((unsigned __int8 ***)&v31, a4);
    v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v19 )
    {
      sub_C16960((__int64)&v31, a4);
      v19 = sub_D78910(a1, a2, a3, (__int64)&v31, a5);
      if ( v32 > 0x40 )
      {
        if ( v31 )
          operator delete[](v31);
      }
    }
    return v19;
  }
  v13 = *(_DWORD *)(a4 + 8);
  v14 = *(_QWORD *)a4;
  v32 = v13;
  if ( v13 <= 0x40 )
  {
    v25 = 0;
    if ( v13 )
      v25 = v14 << (64 - (unsigned __int8)v13) >> (64 - (unsigned __int8)v13);
    v15 = *(_BYTE *)(a3 + 12) == 0;
    v17 = *(_DWORD *)(a3 + 8);
    v31 = (void *)v25;
    v16 = *(_BYTE **)a3;
    if ( v15 )
      goto LABEL_15;
  }
  else
  {
    v15 = *(_BYTE *)(a3 + 12) == 0;
    v16 = *(_BYTE **)a3;
    v31 = (void *)v14;
    v17 = *(_DWORD *)(a3 + 8);
    if ( v15 )
    {
LABEL_15:
      if ( v17 > 0x40 )
      {
        LOBYTE(v18) = *v16;
      }
      else
      {
        LOBYTE(v18) = 0;
        if ( v17 )
          v18 = (__int64)((_QWORD)v16 << (64 - (unsigned __int8)v17)) >> (64 - (unsigned __int8)v17);
      }
      goto LABEL_18;
    }
  }
  LOBYTE(v18) = (_BYTE)v16;
  if ( v17 > 0x40 )
    v18 = *(_QWORD *)v16;
LABEL_18:
  LOBYTE(v29) = v18;
  v19 = sub_D76860(a1, a2, &v29, (__int64 *)&v31, v9);
  if ( (_BYTE)v19 )
  {
    LODWORD(v20) = v9 - 1;
    if ( !sub_9EC640(a4, (unsigned int)v20) )
    {
      v20 = *(_DWORD **)a4;
      if ( *(_DWORD *)(a4 + 8) > 0x40u )
        LODWORD(v20) = *v20;
    }
    v21 = *(_BYTE *)(a3 + 12);
    sub_CF8150((__int64)&v31, a3, (unsigned int)v20);
    v22 = v31;
    if ( v21 )
    {
      if ( v32 <= 0x40 )
      {
        *a5 = (_BYTE)v31;
LABEL_27:
        *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = *a5;
        return v19;
      }
    }
    else if ( v32 <= 0x40 )
    {
      v23 = 0;
      if ( v32 )
        v23 = (__int64)((_QWORD)v31 << (64 - (unsigned __int8)v32)) >> (64 - (unsigned __int8)v32);
      *a5 = v23;
      goto LABEL_27;
    }
    *a5 = *(_QWORD *)v31;
    if ( v22 )
      operator delete[](v22);
    goto LABEL_27;
  }
  return v19;
}
