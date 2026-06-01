__int64 __fastcall sub_970D90(__int64 a1, __int64 a2, unsigned __int16 *a3, int *a4)
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
  unsigned __int16 v19; // dx
  int v20; // ecx
  int v21; // eax
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
    v8 = *a4 & 0xF;
    *a4 = v8;
    goto LABEL_3;
  }
  if ( v8 >= 0 )
  {
    if ( v8 <= 15 )
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
      sub_8D6E40(v18, 16);
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      if ( v26 > 0x40 && v25 )
        operator delete[](v25);
      v8 = *a4;
      if ( *a4 > 15 )
      {
        v19 = *a3;
        v20 = 16;
        if ( *a3 )
        {
          v21 = v19;
          v22 = 8;
          if ( (v19 & 0xFF00) != 0 )
          {
            v22 = 0;
            v21 = HIBYTE(v19);
          }
          if ( v21 >> 4 )
            v21 >>= 4;
          else
            v22 |= 4u;
          if ( v21 >> 2 )
            v21 = (unsigned __int16)(v21 >> 2);
          else
            v22 |= 2u;
          v20 = v22 | 1;
          if ( (unsigned int)v21 >> 1 )
            v20 = v22;
        }
        *a4 = v20;
        v9 = *a3 << v20;
        goto LABEL_4;
      }
LABEL_3:
      v9 = *a3 << v8;
LABEL_4:
      *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v9;
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
      return sub_971000(a1, a2, a3, a4);
    }
  }
  return result;
}

