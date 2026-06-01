__int64 __fastcall sub_D78910(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  unsigned int v9; // ebp
  unsigned int v10; // eax
  char v11; // cl
  unsigned __int64 v12; // rsi
  unsigned int v13; // eax
  void *v14; // rdx
  _DWORD *v15; // rbp
  void *v16; // rdi
  char v17; // dl
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 result; // rax
  bool v21; // cc
  char v22; // [rsp+0h] [rbp-78h]
  unsigned __int8 v23; // [rsp+0h] [rbp-78h]
  __int64 v25; // [rsp+8h] [rbp-70h]
  unsigned __int8 **v26; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int8 **v27; // [rsp+18h] [rbp-60h] BYREF
  void *v28; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-50h]
  void *v30; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-40h]
  char v32; // [rsp+3Ch] [rbp-3Ch]

  v9 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(_BYTE *)(a4 + 12);
  v12 = v9 - 1;
  v29 = v10;
  if ( v10 <= 0x40 )
  {
    v28 = (void *)(v9 - 1);
    v31 = v10;
    v30 = v28;
    v29 = 0;
    v32 = v11;
LABEL_4:
    *(_QWORD *)a4 &= v12;
    goto LABEL_5;
  }
  v22 = v11;
  sub_2205470(&v28, v12, 0);
  v10 = v29;
  v12 = (unsigned __int64)v28;
  v29 = 0;
  v21 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v31 = v10;
  v30 = v28;
  v32 = v22;
  if ( v21 )
    goto LABEL_4;
  sub_2205B60(a4, &v30);
  v10 = v31;
LABEL_5:
  if ( v10 > 0x40 && v30 )
    operator delete[](v30);
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
LABEL_11:
  if ( *(_BYTE *)(a4 + 12) || !sub_CF0820((__int64 *)a4) )
  {
    v13 = *(_DWORD *)(a4 + 8);
    v14 = *(void **)a4;
    v29 = v13;
    if ( v13 <= 0x40 )
    {
      v18 = 0;
      if ( v13 )
        v18 = (__int64)((_QWORD)v14 << (64 - (unsigned __int8)v13)) >> (64 - (unsigned __int8)v13);
      v28 = (void *)v18;
    }
    else
    {
      v28 = v14;
    }
    if ( (unsigned __int8)sub_D55480((__int64 *)&v28) )
    {
      v27 = (unsigned __int8 **)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
      v26 = (unsigned __int8 **)sub_E33D20(a1, &v27, 2444, 0);
      sub_D4B780((__int64)&v30, (__int64)&v28, 0);
      if ( v26 )
        sub_CF8A40(&v26, (__int64)&v30);
      if ( v31 > 0x40 && v30 )
        operator delete[](v30);
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      if ( !(_BYTE)result )
        return result;
    }
    if ( v9 <= 1 || !(unsigned __int8)sub_D76790((__int64 *)&v28, v9) )
    {
LABEL_17:
      LODWORD(v15) = v9 - 1;
      if ( !sub_9EC640(a4, (unsigned int)v15) )
      {
        v15 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v15) = *v15;
      }
      sub_CF8770((__int64)&v30, a3, (unsigned int)v15);
      if ( v32 )
      {
        v16 = v30;
        if ( v31 <= 0x40 )
        {
          *a5 = (_BYTE)v30;
          goto LABEL_46;
        }
        *a5 = *(_QWORD *)v30;
        if ( !v16 )
        {
LABEL_46:
          *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = *a5;
          return 1;
        }
      }
      else
      {
        v16 = v30;
        if ( v31 <= 0x40 )
        {
          v17 = 0;
          if ( v31 )
            v17 = (__int64)((_QWORD)v30 << (64 - (unsigned __int8)v31)) >> (64 - (unsigned __int8)v31);
          *a5 = v17;
          goto LABEL_46;
        }
        *a5 = *(_QWORD *)v30;
      }
      operator delete[](v16);
      goto LABEL_46;
    }
    v25 = sub_E1EF60(*(_QWORD *)(a1 + 400));
    sub_D4B780((__int64)&v30, (__int64)&v28, 0);
    v19 = *(_QWORD *)(v25 + 8);
    v27 = (unsigned __int8 **)sub_E33C90(a1, v25, 2422, 0);
    if ( v27 )
    {
      sub_CF8A40(&v27, (__int64)&v30);
      if ( v27 )
      {
        sub_AE9DF0(v27, v19, 8u);
        if ( v27 )
          sub_AE9DF0(v27, v9, 3u);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      if ( v31 > 0x40 && v30 )
        operator delete[](v30);
      goto LABEL_17;
    }
    if ( v31 <= 0x40 )
      return result;
LABEL_53:
    if ( v30 )
    {
      v23 = result;
      operator delete[](v30);
      return v23;
    }
    return result;
  }
  v28 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v30 = (void *)sub_E33D20(a1, &v28, 2444, 0);
  if ( v30 )
    sub_CF8A40((unsigned __int8 ***)&v30, a4);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    sub_C16960((__int64)&v30, a4);
    result = sub_D78D60(a1, a2, a3, &v30, a5);
    if ( v31 > 0x40 )
      goto LABEL_53;
  }
  return result;
}
