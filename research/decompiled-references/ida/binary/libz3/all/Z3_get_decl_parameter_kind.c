__int64 __fastcall Z3_get_decl_parameter_kind(__int64 a1, __int64 a2, unsigned int a3)
{
  char **exception; // r15
  char v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  _BYTE *v8; // rax
  char v9; // cl
  __int64 result; // rax
  __int16 v11; // dx
  __int64 v12[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
  {
    sub_29A200();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      result = 0;
LABEL_16:
      byte_1C7EBA0 = 1;
      return result;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return 0;
    }
  }
  v6 = *(_QWORD *)(a2 + 24);
  if ( v6 && (v7 = *(_QWORD *)(v6 + 8)) != 0 && a3 < *(_DWORD *)(v7 - 4) )
  {
    v8 = (_BYTE *)(16LL * a3 + v7);
    v9 = v8[8];
    switch ( v9 )
    {
      case 0:
        goto LABEL_10;
      case 1:
        v11 = *(_WORD *)(*(_QWORD *)v8 + 4LL);
        result = 4;
        if ( v11 != 3 )
          result = (unsigned int)(v11 == 4) + 5;
        break;
      case 2:
        result = 3;
        break;
      case 4:
        result = 2;
        break;
      case 5:
        result = 1;
        break;
      default:
        if ( v9 == 3 )
        {
          result = 8;
        }
        else
        {
          if ( v9 != 6 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v12, "an attempt was made to access an unknown parameter kind");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v12);
            sub_233E40((__int64)v12);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          result = 7;
        }
        break;
    }
  }
  else
  {
    sub_24EA30(a1, 2u, nullptr);
LABEL_10:
    result = 0;
  }
  if ( v5 )
    goto LABEL_16;
  return result;
}

