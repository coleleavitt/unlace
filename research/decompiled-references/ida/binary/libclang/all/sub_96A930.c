__int64 __fastcall sub_96A930(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v6; // r14d
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 result; // rax
  void *v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int8 **v19; // r13
  unsigned int v20; // eax
  void *v21; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-70h]
  void *v23; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-60h]
  void *v25; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-50h]
  void *v27; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-40h]
  char v29; // [rsp+4Ch] [rbp-3Ch]

  v6 = *(_DWORD *)(a3 + 8);
  v7 = sub_A2CB40(a1);
  v8 = *a4;
  if ( (*(_BYTE *)(v7 + 47) & 0x20) != 0 )
  {
    v8 = (*(_DWORD *)(a3 + 8) - 1) & (unsigned int)v8;
    *a4 = v8;
  }
  if ( (v8 & 0x80000000) != 0LL )
  {
    v23 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v14 = (void *)sub_A2E1B0(a1, &v23, 2242, 0);
    v15 = *a4;
    v29 = 0;
    v25 = v14;
    v28 = 32;
    v27 = (void *)v15;
    if ( v14 )
    {
      sub_8DF340((unsigned __int8 ***)&v25, (__int64)&v27);
      if ( v28 > 0x40 )
      {
        if ( v27 )
          operator delete[](v27);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      *a4 = -*a4;
      return sub_96AD70(a1, a2, a3, a4);
    }
  }
  else
  {
    if ( v6 <= 1 || (int)v6 > (int)v8 )
      goto LABEL_6;
    v16 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v17 = *a4;
    v29 = 0;
    v28 = 32;
    v27 = (void *)v17;
    v18 = *(_QWORD *)(v16 + 8);
    v25 = (void *)sub_A2E240(a1, v16, 2220, 0);
    v19 = (unsigned __int8 **)v25;
    if ( v25 )
    {
      sub_8DF340((unsigned __int8 ***)&v25, (__int64)&v27);
      sub_8D69A0(v19, v18);
      sub_8D6E40(v19, v6);
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      if ( v28 > 0x40 && v27 )
        operator delete[](v27);
      v8 = *a4;
LABEL_6:
      v9 = *(_DWORD *)(a3 + 8);
      v22 = 3;
      v21 = &byte_7;
      if ( v9 - 1 < (int)v8 )
      {
        v20 = sub_831980(a3);
        *a4 = v20;
        sub_91FB50((__int64)&v27, v20, v6);
        v24 = *(_DWORD *)(a3 + 8);
        if ( v24 <= 0x40 )
        {
          v23 = *(void **)a3;
LABEL_12:
          sub_8CC200((__int64)&v25, (__int64)&v23);
          sub_8CC680((__int64)&v25, (__int64)&v27, (__int64)&v21);
          if ( v26 > 0x40 && v25 )
            operator delete[](v25);
          if ( v24 > 0x40 && v23 )
            operator delete[](v23);
          if ( v28 > 0x40 && v27 )
            operator delete[](v27);
          v10 = *(_QWORD *)(a1 + 184);
          v26 = v22;
          if ( v22 > 0x40 )
            sub_2585B30(&v25);
          else
            v25 = v21;
          sub_8CC200((__int64)&v27, (__int64)&v25);
          v11 = sub_A1A4E0(v10, 16);
          v12 = v28;
          v28 = 0;
          *(_DWORD *)(v11 + 8) = v12;
          *(_QWORD *)v11 = v27;
          if ( v26 > 0x40 && v25 )
            operator delete[](v25);
          if ( v22 > 0x40 )
          {
            if ( v21 )
              operator delete[](v21);
          }
          return 1;
        }
      }
      else
      {
        v28 = 32;
        v27 = (void *)v8;
        sub_2587E80(&v25, &v27, v6);
        if ( v28 > 0x40 && v27 )
          operator delete[](v27);
        v28 = v26;
        if ( v26 > 0x40 )
        {
          sub_2585B30(&v27);
          if ( v26 > 0x40 && v25 )
            operator delete[](v25);
        }
        else
        {
          v27 = v25;
        }
        v24 = *(_DWORD *)(a3 + 8);
        if ( v24 <= 0x40 )
        {
          v23 = *(void **)a3;
          goto LABEL_12;
        }
      }
      sub_2585B30(&v23);
      goto LABEL_12;
    }
    if ( v28 > 0x40 && v27 )
    {
      operator delete[](v27);
      return 0;
    }
  }
  return result;
}

