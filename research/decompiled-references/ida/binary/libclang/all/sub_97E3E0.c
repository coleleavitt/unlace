__int64 __fastcall sub_97E3E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  _QWORD *v6; // rdi
  __int64 v7; // r13
  __int64 (*v8)(void); // rax
  _QWORD **v9; // rdi
  __int64 (*v10)(void); // rdx
  __int64 v11; // rdi
  __int64 *v12; // rbx
  unsigned int v13; // r14d
  char v14; // al
  __int64 v15; // rdx
  char v16; // cl
  unsigned int v17; // eax
  __int64 v18; // rbx
  __int64 result; // rax
  __int64 v20; // rbp
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned __int64 v23; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-50h]
  void *v25; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-40h]
  void *v27; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-30h]

  v5 = sub_8CA760(*(__int64 **)(a1 + 192), a3);
  v6 = *(_QWORD **)(a1 + 24);
  v7 = v5;
  v8 = *(__int64 (**)(void))(*v6 + 104LL);
  if ( (char *)v8 == (char *)sub_8D7E60 )
  {
    v9 = (_QWORD **)v6[3];
    v10 = (__int64 (*)(void))(*v9)[13];
    if ( v10 == v8 )
      v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v9[3] + 104LL))(v9[3]);
    else
      v11 = v10();
  }
  else
  {
    v11 = v8();
  }
  v12 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = sub_6F6DE0(v11, *v12);
  v14 = sub_B10310(*v12);
  v15 = *(_QWORD *)a2;
  v16 = v14;
  v17 = *(_DWORD *)(a2 + 8);
  if ( v16 )
  {
    if ( v17 <= 0x40 )
    {
      v18 = 0;
      if ( v17 )
        v18 = v15 << (64 - (unsigned __int8)v17) >> (64 - (unsigned __int8)v17);
    }
    else
    {
      v18 = *(_QWORD *)v15;
    }
    switch ( v7 )
    {
      case 0LL:
      case 1LL:
        goto LABEL_14;
      case 2LL:
      case 3LL:
        goto LABEL_15;
      case 4LL:
      case 5LL:
        goto LABEL_17;
      case 6LL:
      case 7LL:
        goto LABEL_16;
      case 8LL:
        goto LABEL_23;
      case 9LL:
        goto LABEL_19;
      case 10LL:
        goto LABEL_18;
    }
  }
  v18 = *(_QWORD *)a2;
  if ( v17 > 0x40 )
    v18 = *(_QWORD *)v15;
  switch ( v7 )
  {
    case 0LL:
    case 1LL:
LABEL_14:
      result = sub_A1A4E0(*(_QWORD *)(a1 + 184), 8);
      *(_BYTE *)result = v18;
      return result;
    case 2LL:
    case 3LL:
LABEL_15:
      result = sub_A1A4E0(*(_QWORD *)(a1 + 184), 8);
      *(_WORD *)result = v18;
      return result;
    case 4LL:
    case 5LL:
LABEL_17:
      result = sub_A1A4E0(*(_QWORD *)(a1 + 184), 8);
      *(_DWORD *)result = v18;
      return result;
    case 6LL:
    case 7LL:
LABEL_16:
      result = sub_A1A4E0(*(_QWORD *)(a1 + 184), 8);
      *(_QWORD *)result = v18;
      return result;
    case 8LL:
LABEL_23:
      v20 = *(_QWORD *)(a1 + 184);
      v26 = v13;
      if ( v13 <= 0x40 )
      {
        v24 = v13;
        v23 = v18;
        goto LABEL_22;
      }
      v21 = 0;
      goto LABEL_27;
    case 9LL:
LABEL_19:
      v20 = *(_QWORD *)(a1 + 184);
      v26 = v13;
      if ( v13 > 0x40 )
      {
        v21 = 1;
LABEL_27:
        sub_2585A50(&v25, v18, v21);
        v28 = v26;
        if ( v26 <= 0x40 )
        {
          v24 = v26;
          v23 = (unsigned __int64)v25;
        }
        else
        {
          sub_2585B30(&v27);
          v24 = v28;
          if ( v28 <= 0x40 )
          {
            v22 = v26;
            v23 = (unsigned __int64)v27;
          }
          else
          {
            sub_2585B30(&v23);
            if ( v28 > 0x40 && v27 )
              operator delete[](v27);
            v22 = v26;
          }
          if ( v22 > 0x40 )
          {
            if ( v25 )
              operator delete[](v25);
          }
        }
      }
      else if ( v13 )
      {
        v24 = v13;
        v23 = v18 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v13);
      }
      else
      {
        v24 = 0;
        v23 = 0;
      }
LABEL_22:
      result = sub_A1A4E0(v20, 16);
      *(_DWORD *)(result + 8) = v24;
      *(_QWORD *)result = v23;
      return result;
    case 10LL:
LABEL_18:
      result = sub_A1A4E0(*(_QWORD *)(a1 + 184), 8);
      *(_BYTE *)result = v18 != 0;
      return result;
    default:
      std::__throw_logic_error("basic_string: construction from null is not valid");
  }
}

