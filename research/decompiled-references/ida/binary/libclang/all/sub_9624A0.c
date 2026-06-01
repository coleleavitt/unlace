__int64 __fastcall sub_9624A0(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // r13d
  unsigned int v11; // esi
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // edx
  void *v20; // rax
  unsigned __int64 v21; // rdx
  void *v22; // rdi
  unsigned __int8 v23; // si
  char v24; // al
  void *v25; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-70h]
  void *v27; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-60h]
  void *v29; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-50h]
  void *v31; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-40h]
  char v33; // [rsp+4Ch] [rbp-3Ch]

  v7 = *(_DWORD *)(a3 + 8);
  v8 = sub_A2CB40(a1);
  v9 = (unsigned __int8)*a4;
  if ( (*(_BYTE *)(v8 + 47) & 0x20) != 0 )
  {
    v9 &= *(_DWORD *)(a3 + 8) - 1;
    *a4 = v9;
  }
  if ( (v9 & 0x80u) == 0 )
  {
    v10 = sub_9552A0(a1, a2, a3, a4, v7);
    if ( !(_BYTE)v10 )
      return v10;
    v11 = *(_DWORD *)(a3 + 8);
    v26 = 3;
    v25 = &byte_7;
    v12 = *(_QWORD *)a3;
    v13 = v11 - 1;
    v14 = 1LL << ((unsigned __int8)v11 - 1);
    if ( *a4 > (char)(v11 - 1) )
    {
      if ( v11 > 0x40 )
        v12 = *(_QWORD *)(v12 + 8LL * (v13 >> 6));
      if ( (v14 & v12) != 0 )
        goto LABEL_9;
      v24 = sub_831980(a3);
      *a4 = v24;
      v23 = v24;
    }
    else
    {
      if ( v11 <= 0x40 )
      {
        if ( (v14 & v12) != 0 )
        {
LABEL_26:
          sub_938B60((__int64)&v31, a3);
          sub_8CC270((__int64)&v27, (__int64)&v31);
          if ( v32 > 0x40 && v31 )
            operator delete[](v31);
          sub_91F910((__int64)&v29, *a4, v7);
          v32 = v28;
          if ( v28 > 0x40 )
            sub_2585B30(&v31);
          else
            v31 = v27;
          sub_8CC680((__int64)&v31, (__int64)&v29, (__int64)&v25);
          if ( v32 > 0x40 && v31 )
            operator delete[](v31);
          if ( v30 > 0x40 && v29 )
            operator delete[](v29);
          sub_938170((__int64)&v31, (__int64)&v25);
          if ( v26 > 0x40 && v25 )
            operator delete[](v25);
          v25 = v31;
          v15 = v32;
          v26 = v32;
          if ( v28 <= 0x40 )
            goto LABEL_10;
          v22 = v27;
          if ( !v27 )
            goto LABEL_10;
LABEL_42:
          operator delete[](v22);
LABEL_43:
          v15 = v26;
          goto LABEL_10;
        }
      }
      else if ( (*(_QWORD *)(v12 + 8LL * (v13 >> 6)) & v14) != 0 )
      {
        if ( v11 == (unsigned int)sub_2587400(a3) )
        {
LABEL_9:
          sub_8F62E0((__int64)&v31, v11);
          v25 = v31;
          v15 = v32;
          v26 = v32;
LABEL_10:
          v30 = v15;
          v16 = *(_QWORD *)(a1 + 184);
          if ( v15 > 0x40 )
            sub_2585B30(&v29);
          else
            v29 = v25;
          sub_8CC190((__int64)&v31, (__int64)&v29);
          v17 = sub_A1A4E0(v16, 16);
          v18 = v32;
          v32 = 0;
          *(_DWORD *)(v17 + 8) = v18;
          *(_QWORD *)v17 = v31;
          if ( v30 > 0x40 && v29 )
            operator delete[](v29);
          if ( v26 > 0x40 && v25 )
            operator delete[](v25);
          return v10;
        }
        goto LABEL_26;
      }
      v23 = *a4;
    }
    sub_91F910((__int64)&v31, v23, v7);
    v28 = *(_DWORD *)(a3 + 8);
    if ( v28 > 0x40 )
      sub_2585B30(&v27);
    else
      v27 = *(void **)a3;
    sub_8CC270((__int64)&v29, (__int64)&v27);
    sub_8CC680((__int64)&v29, (__int64)&v31, (__int64)&v25);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
    if ( v32 <= 0x40 )
      goto LABEL_43;
    v22 = v31;
    if ( !v31 )
      goto LABEL_43;
    goto LABEL_42;
  }
  v27 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v20 = (void *)sub_A2E1B0(a1, &v27, 2242, 0);
  v21 = (unsigned __int8)*a4;
  v33 = 0;
  v29 = v20;
  v32 = 8;
  v31 = (void *)v21;
  if ( v20 )
  {
    sub_8DF340((unsigned __int8 ***)&v29, (__int64)&v31);
    if ( v32 > 0x40 )
    {
      if ( v31 )
        operator delete[](v31);
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v10 )
  {
    *a4 = -*a4;
    return (unsigned int)sub_961FD0(a1, a2, a3, a4);
  }
  return v10;
}

