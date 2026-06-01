__int64 __fastcall sub_9708B0(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // ebp
  __int64 result; // rax
  unsigned __int8 **v11; // rax
  void *v12; // rdx
  _QWORD **v13; // rdi
  __int64 (*v14)(void); // rax
  __int64 v15; // rsi
  void *v16; // rax
  __int64 v17; // r14
  unsigned __int8 **v18; // r13
  unsigned __int16 v19; // dx
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int8 **v24; // [rsp+18h] [rbp-40h] BYREF
  void *v25; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-30h]
  char v27; // [rsp+2Ch] [rbp-2Ch]

  v7 = sub_A2CB40(a1);
  v8 = *a4;
  if ( (*(_BYTE *)(v7 + 47) & 0x20) != 0 )
  {
    LODWORD(v8) = v8 & 0xF;
    *a4 = (unsigned int)v8;
    goto LABEL_3;
  }
  if ( v8 >= 0 )
  {
    if ( v8 <= 15 )
      goto LABEL_3;
    v15 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v16 = (void *)*a4;
    v27 = 0;
    v26 = 64;
    v25 = v16;
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
        if ( *a3 )
        {
          v20 = v19;
          v21 = 8;
          if ( (v19 & 0xFF00) != 0 )
          {
            v21 = 0;
            v20 = HIBYTE(v19);
          }
          if ( v20 >> 4 )
            v20 >>= 4;
          else
            v21 |= 4u;
          if ( v20 >> 2 )
            v20 = (unsigned __int16)(v20 >> 2);
          else
            v21 |= 2u;
          if ( !((unsigned int)v20 >> 1) )
            v21 |= 1u;
          v22 = v21;
        }
        else
        {
          LOBYTE(v21) = 16;
          v22 = 16;
        }
        *a4 = v22;
        v9 = *a3 << v21;
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
    v12 = (void *)*a4;
    v27 = 0;
    v24 = v11;
    v26 = 64;
    v25 = v12;
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
      return sub_970B40(a1, a2, a3, a4);
    }
  }
  return result;
}

