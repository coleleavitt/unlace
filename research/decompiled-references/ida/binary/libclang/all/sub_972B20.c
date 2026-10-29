__int64 __fastcall sub_972B20(__int64 a1, __int64 a2, unsigned __int8 *a3, int *a4)
{
  __int64 v7; // rax
  int v8; // ecx
  int v9; // ebp
  __int64 result; // rax
  unsigned __int8 **v11; // rax
  unsigned __int64 v12; // rdx
  _QWORD **v13; // rdi
  __int64 (*v14)(void); // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // r14
  unsigned __int8 **v18; // r13
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // esi
  __int64 v23; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int8 **v24; // [rsp+18h] [rbp-40h] BYREF
  void *v25; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-30h]
  char v27; // [rsp+2Ch] [rbp-2Ch]

  v7 = sub_A2CB40(a1);
  v8 = *a4;
  if ( (*(_BYTE *)(v7 + 47) & 0x20) != 0 )
  {
    v8 = *a4 & 7;
    *a4 = v8;
    goto LABEL_3;
  }
  if ( v8 >= 0 )
  {
    if ( v8 <= 7 )
      goto LABEL_3;
    v15 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v16 = (unsigned int)*a4;
    v27 = 0;
    v26 = 32;
    v25 = (void *)v16;
    v17 = *(_QWORD *)(v15 + 8);
    v24 = (unsigned __int8 **)sub_A2E240(a1, v15, 2220, 0);
    v18 = v24;
    if ( v24 )
    {
      sub_8DF340(&v24, (__int64)&v25);
      sub_8D69A0(v18, v17);
      sub_8D6E40(v18, 8);
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      if ( v26 > 0x40 && v25 )
        operator delete[](v25);
      v8 = *a4;
      if ( *a4 > 7 )
      {
        v19 = *a3;
        v20 = 8;
        if ( (_BYTE)v19 )
        {
          if ( v19 >> 4 )
          {
            v19 >>= 4;
            v22 = 0;
            v21 = 2;
          }
          else
          {
            v21 = 6;
            v22 = 4;
          }
          if ( v19 >> 2 )
          {
            v19 >>= 2;
            v21 = v22;
          }
          v20 = v21 | 1;
          if ( (unsigned int)v19 >> 1 )
            v20 = v21;
        }
        *a4 = v20;
        v9 = *a3 << v20;
        goto LABEL_4;
      }
LABEL_3:
      v9 = *a3 << v8;
LABEL_4:
      *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v9;
      return 1;
    }
    if ( v26 > 0x40 && v25 )
    {
      operator delete[](v25);
      return 0;
    }
  }
  else
  {
    v23 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v11 = (unsigned __int8 **)sub_A2E1B0(a1, &v23, 2242, 0);
    v12 = (unsigned int)*a4;
    v27 = 0;
    v24 = v11;
    v26 = 32;
    v25 = (void *)v12;
    if ( v11 )
    {
      sub_8DF340(&v24, (__int64)&v25);
      if ( v26 > 0x40 )
      {
        if ( v25 )
          operator delete[](v25);
      }
    }
    v13 = *(_QWORD ***)(a1 + 24);
    v14 = (__int64 (*)(void))(*v13)[4];
    if ( (char *)v14 == (char *)sub_8D7FC0 )
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v13[3] + 32LL))(v13[3]);
    else
      result = v14();
    if ( (_BYTE)result )
    {
      *a4 = -*a4;
      return sub_972D80(a1, a2, a3, a4);
    }
  }
  return result;
}

