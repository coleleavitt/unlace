__int64 __fastcall sub_D7B160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v9; // ebp
  unsigned int v10; // eax
  char v11; // cl
  unsigned __int64 v12; // rsi
  unsigned int v13; // eax
  void *v14; // rdx
  _DWORD *v15; // rbp
  char v16; // bl
  void *v17; // rdi
  __int64 v18; // rdx
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // r14
  bool v22; // cc
  unsigned __int8 v23; // [rsp+0h] [rbp-78h]
  char v24; // [rsp+0h] [rbp-78h]
  __int64 v26; // [rsp+8h] [rbp-70h]
  unsigned __int8 **v27; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int8 **v28; // [rsp+18h] [rbp-60h] BYREF
  void *v29; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-50h]
  void *v31; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-40h]
  char v33; // [rsp+3Ch] [rbp-3Ch]

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
  v24 = v11;
  sub_2205470(&v29, v12, 0);
  v10 = v30;
  v12 = (unsigned __int64)v29;
  v30 = 0;
  v22 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v32 = v10;
  v31 = v29;
  v33 = v24;
  if ( v22 )
    goto LABEL_4;
  sub_2205B60(a4, &v31);
  v10 = v32;
LABEL_5:
  if ( v10 > 0x40 && v31 )
    operator delete[](v31);
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
LABEL_11:
  if ( *(_BYTE *)(a4 + 12) || !sub_CF0820((__int64 *)a4) )
  {
    v13 = *(_DWORD *)(a4 + 8);
    v14 = *(void **)a4;
    v30 = v13;
    if ( v13 <= 0x40 )
    {
      v20 = 0;
      if ( v13 )
        v20 = (__int64)((_QWORD)v14 << (64 - (unsigned __int8)v13)) >> (64 - (unsigned __int8)v13);
      v29 = (void *)v20;
    }
    else
    {
      v29 = v14;
    }
    if ( (unsigned __int8)sub_D55480((__int64 *)&v29) )
    {
      v28 = (unsigned __int8 **)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
      v27 = (unsigned __int8 **)sub_E33D20(a1, &v28, 2444, 0);
      sub_D4B780((__int64)&v31, (__int64)&v29, 0);
      if ( v27 )
        sub_CF8A40(&v27, (__int64)&v31);
      if ( v32 > 0x40 && v31 )
        operator delete[](v31);
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      if ( !(_BYTE)result )
        return result;
    }
    if ( v9 <= 1 || !(unsigned __int8)sub_D76790((__int64 *)&v29, v9) )
    {
LABEL_17:
      LODWORD(v15) = v9 - 1;
      if ( !sub_9EC640(a4, (unsigned int)v15) )
      {
        v15 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v15) = *v15;
      }
      v16 = *(_BYTE *)(a3 + 12);
      sub_CF8150((__int64)&v31, a3, (unsigned int)v15);
      v17 = v31;
      if ( v16 )
      {
        if ( v32 <= 0x40 )
        {
          *a5 = v31;
LABEL_25:
          *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = *a5;
          return 1;
        }
      }
      else if ( v32 <= 0x40 )
      {
        v18 = 0;
        if ( v32 )
          v18 = (__int64)((_QWORD)v31 << (64 - (unsigned __int8)v32)) >> (64 - (unsigned __int8)v32);
        *a5 = v18;
        goto LABEL_25;
      }
      *a5 = *(_QWORD *)v31;
      if ( v17 )
        operator delete[](v17);
      goto LABEL_25;
    }
    v26 = sub_E1EF60(*(_QWORD *)(a1 + 400));
    sub_D4B780((__int64)&v31, (__int64)&v29, 0);
    v21 = *(_QWORD *)(v26 + 8);
    v28 = (unsigned __int8 **)sub_E33C90(a1, v26, 2422, 0);
    if ( v28 )
    {
      sub_CF8A40(&v28, (__int64)&v31);
      if ( v28 )
      {
        sub_AE9DF0(v28, v21, 8u);
        if ( v28 )
          sub_AE9DF0(v28, v9, 3u);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      if ( v32 > 0x40 && v31 )
        operator delete[](v31);
      goto LABEL_17;
    }
    if ( v32 <= 0x40 )
      return result;
LABEL_53:
    if ( v31 )
    {
      v23 = result;
      operator delete[](v31);
      return v23;
    }
    return result;
  }
  v29 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v31 = (void *)sub_E33D20(a1, &v29, 2444, 0);
  if ( v31 )
    sub_CF8A40((unsigned __int8 ***)&v31, a4);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    sub_C16960((__int64)&v31, a4);
    result = sub_D7B580(a1, a2, a3, &v31, a5);
    if ( v32 > 0x40 )
      goto LABEL_53;
  }
  return result;
}
