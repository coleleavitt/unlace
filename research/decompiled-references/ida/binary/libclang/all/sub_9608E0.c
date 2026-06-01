__int64 __fastcall sub_9608E0(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rdx
  void *v9; // rax
  unsigned int v10; // r13d
  unsigned int v11; // esi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // edx
  void *v20; // rax
  void *v21; // rdx
  void *v22; // rdi
  unsigned __int64 v23; // rsi
  void *v24; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+18h] [rbp-70h]
  void *v26; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-60h]
  void *v28; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-50h]
  void *v30; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-40h]
  char v32; // [rsp+4Ch] [rbp-3Ch]

  v7 = *(_DWORD *)(a3 + 8);
  v8 = sub_A2CB40(a1);
  v9 = *a4;
  if ( (*(_BYTE *)(v8 + 47) & 0x20) != 0 )
  {
    *a4 = (void *)((*(_DWORD *)(a3 + 8) - 1) & (unsigned int)v9);
    goto LABEL_3;
  }
  if ( (__int64)v9 >= 0 )
  {
LABEL_3:
    v10 = sub_955C30(a1, a2, a3, a4, v7);
    if ( !(_BYTE)v10 )
      return v10;
    v11 = *(_DWORD *)(a3 + 8);
    v25 = 3;
    v24 = &byte_7;
    v12 = *(_QWORD *)a3;
    v13 = v11 - 1;
    v14 = 1LL << ((unsigned __int8)v11 - 1);
    if ( (__int64)*a4 > v13 )
    {
      if ( v11 > 0x40 )
        v12 = *(_QWORD *)(v12 + 8LL * ((unsigned int)v13 >> 6));
      if ( (v14 & v12) != 0 )
        goto LABEL_8;
      v23 = (unsigned int)sub_831980(a3);
      *a4 = (void *)v23;
    }
    else
    {
      if ( v11 <= 0x40 )
      {
        if ( (v14 & v12) != 0 )
        {
LABEL_26:
          sub_938B60((__int64)&v30, a3);
          sub_8CC270((__int64)&v26, (__int64)&v30);
          if ( v31 > 0x40 && v30 )
            operator delete[](v30);
          sub_91FC70((__int64)&v28, *a4, v7);
          v31 = v27;
          if ( v27 > 0x40 )
            sub_2585B30(&v30);
          else
            v30 = v26;
          sub_8CC680((__int64)&v30, (__int64)&v28, (__int64)&v24);
          if ( v31 > 0x40 && v30 )
            operator delete[](v30);
          if ( v29 > 0x40 && v28 )
            operator delete[](v28);
          sub_938170((__int64)&v30, (__int64)&v24);
          if ( v25 > 0x40 && v24 )
            operator delete[](v24);
          v24 = v30;
          v15 = v31;
          v25 = v31;
          if ( v27 <= 0x40 )
            goto LABEL_9;
          v22 = v26;
          if ( !v26 )
            goto LABEL_9;
LABEL_42:
          operator delete[](v22);
LABEL_43:
          v15 = v25;
          goto LABEL_9;
        }
      }
      else if ( (*(_QWORD *)(v12 + 8LL * ((unsigned int)v13 >> 6)) & v14) != 0 )
      {
        if ( v11 == (unsigned int)sub_2587400(a3) )
        {
LABEL_8:
          sub_8F62E0((__int64)&v30, v11);
          v24 = v30;
          v15 = v31;
          v25 = v31;
LABEL_9:
          v29 = v15;
          v16 = *(_QWORD *)(a1 + 184);
          if ( v15 > 0x40 )
            sub_2585B30(&v28);
          else
            v28 = v24;
          sub_8CC190((__int64)&v30, (__int64)&v28);
          v17 = sub_A1A4E0(v16, 16);
          v18 = v31;
          v31 = 0;
          *(_DWORD *)(v17 + 8) = v18;
          *(_QWORD *)v17 = v30;
          if ( v29 > 0x40 && v28 )
            operator delete[](v28);
          if ( v25 > 0x40 && v24 )
            operator delete[](v24);
          return v10;
        }
        goto LABEL_26;
      }
      v23 = (unsigned __int64)*a4;
    }
    sub_91FC70((__int64)&v30, (void *)v23, v7);
    v27 = *(_DWORD *)(a3 + 8);
    if ( v27 > 0x40 )
      sub_2585B30(&v26);
    else
      v26 = *(void **)a3;
    sub_8CC270((__int64)&v28, (__int64)&v26);
    sub_8CC680((__int64)&v28, (__int64)&v30, (__int64)&v24);
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
    if ( v31 <= 0x40 )
      goto LABEL_43;
    v22 = v30;
    if ( !v30 )
      goto LABEL_43;
    goto LABEL_42;
  }
  v26 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v20 = (void *)sub_A2E1B0(a1, &v26, 2242, 0);
  v21 = *a4;
  v32 = 0;
  v28 = v20;
  v31 = 64;
  v30 = v21;
  if ( v20 )
  {
    sub_8DF340((unsigned __int8 ***)&v28, (__int64)&v30);
    if ( v31 > 0x40 )
    {
      if ( v30 )
        operator delete[](v30);
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v10 )
  {
    *a4 = (void *)-(__int64)*a4;
    return (unsigned int)sub_960400(a1, a2, a3, (__int64 *)a4);
  }
  return v10;
}

