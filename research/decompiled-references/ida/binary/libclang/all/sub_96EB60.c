__int64 __fastcall sub_96EB60(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebp
  __int64 result; // rax
  unsigned __int8 **v11; // rax
  void *v12; // rdx
  _QWORD *v13; // rdi
  __int64 (*v14)(void); // rax
  _QWORD **v15; // rdi
  __int64 (*v16)(void); // rdx
  __int64 v17; // rsi
  void *v18; // rax
  __int64 v19; // r14
  unsigned __int8 **v20; // r13
  unsigned int v21; // ecx
  signed int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int8 **v25; // [rsp+18h] [rbp-40h] BYREF
  void *v26; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-30h]
  char v28; // [rsp+2Ch] [rbp-2Ch]

  v7 = sub_A2CB40(a1);
  v8 = *a4;
  if ( (*(_BYTE *)(v7 + 47) & 0x20) != 0 )
  {
    LODWORD(v8) = v8 & 0x1F;
    *a4 = (unsigned int)v8;
    goto LABEL_3;
  }
  if ( v8 >= 0 )
  {
    if ( v8 <= 31 )
      goto LABEL_3;
    v17 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v18 = (void *)*a4;
    v28 = 0;
    v27 = 64;
    v26 = v18;
    v19 = *(_QWORD *)(v17 + 8);
    v25 = (unsigned __int8 **)sub_A2E240(a1, v17, 2220, 0);
    v20 = v25;
    if ( v25 )
    {
      sub_8DF340(&v25, (__int64)&v26);
      sub_8D69A0(v20, v19);
      sub_8D6E40(v20, 32);
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      if ( v27 > 0x40 && v26 )
        operator delete[](v26);
      v8 = *a4;
      if ( *a4 > 31 )
      {
        if ( *a3 )
        {
          _BitScanReverse(&v21, *a3);
          v22 = v21 ^ 0x1F;
          v23 = v22;
        }
        else
        {
          v23 = 32;
          LOBYTE(v22) = 32;
        }
        *a4 = v23;
        v9 = *a3 << v22;
        goto LABEL_4;
      }
LABEL_3:
      v9 = *a3 << v8;
LABEL_4:
      *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v9;
      return 1;
    }
    if ( v27 > 0x40 && v26 )
    {
      operator delete[](v26);
      return 0;
    }
  }
  else
  {
    v24 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v11 = (unsigned __int8 **)sub_A2E1B0(a1, &v24, 2242, 0);
    v12 = (void *)*a4;
    v28 = 0;
    v25 = v11;
    v27 = 64;
    v26 = v12;
    if ( v11 )
    {
      sub_8DF340(&v25, (__int64)&v26);
      if ( v27 > 0x40 )
      {
        if ( v26 )
          operator delete[](v26);
      }
    }
    v13 = *(_QWORD **)(a1 + 24);
    v14 = *(__int64 (**)(void))(*v13 + 32LL);
    if ( (char *)v14 == (char *)sub_8D7FC0 )
    {
      v15 = (_QWORD **)v13[3];
      v16 = (__int64 (*)(void))(*v15)[4];
      if ( v16 == v14 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v15[3] + 32LL))(v15[3]);
      else
        result = v16();
    }
    else
    {
      result = v14();
    }
    if ( (_BYTE)result )
    {
      *a4 = -*a4;
      return sub_96EDD0(a1, a2, a3, a4);
    }
  }
  return result;
}

