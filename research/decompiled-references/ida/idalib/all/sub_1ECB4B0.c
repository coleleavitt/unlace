__int64 __fastcall sub_1ECB4B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v8; // r13d
  unsigned __int8 v9; // bl
  _QWORD *v10; // rax
  _QWORD *v12; // rax
  _QWORD *v16; // [rsp+28h] [rbp-270h] BYREF
  _QWORD *v17; // [rsp+30h] [rbp-268h] BYREF
  char v18; // [rsp+38h] [rbp-260h]
  _QWORD *v19; // [rsp+40h] [rbp-258h] BYREF
  char v20; // [rsp+48h] [rbp-250h]
  void *ptr; // [rsp+50h] [rbp-248h] BYREF
  __int64 v22; // [rsp+58h] [rbp-240h]
  _BYTE v23[568]; // [rsp+60h] [rbp-238h] BYREF

  sub_202A150(&v19, a1, 17, 0);
  if ( v19 )
  {
    ptr = v19;
    v19 = nullptr;
    sub_A0E8E0((_QWORD **)&ptr);
    if ( ptr )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
    if ( v19 )
      (*(void (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19);
    return 1;
  }
  else
  {
    v8 = 0;
    ptr = v23;
    v9 = ((a4 >> 3) ^ 1) & 1;
    v22 = 0x4000000000LL;
    while ( 1 )
    {
      sub_1EAFE10((__int64)&v17, a1);
      if ( (v18 & 1) != 0 )
      {
        v12 = v17;
        v17 = nullptr;
        v19 = v12;
        sub_A0E8E0(&v19);
        if ( v19 )
          (*(void (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19);
LABEL_17:
        v8 = 1;
        goto LABEL_12;
      }
      if ( (_DWORD)v17 == 1 )
        goto LABEL_12;
      if ( !(_DWORD)v17 || (_DWORD)v17 == 2 )
        goto LABEL_17;
      LODWORD(v22) = 0;
      sub_2027F10(&v19, a1, HIDWORD(v17), &ptr, 0);
      if ( (v20 & 1) != 0 )
        break;
      switch ( (int)v19 )
      {
        case 1:
          if ( (unsigned __int8)sub_1EC85F0((__int64 *)&ptr, a2, a3, v9, a6, a5) )
            goto LABEL_20;
          break;
        case 2:
          if ( (unsigned __int8)sub_1EB1A20((__int64 *)&ptr, a2, a3, v9, a6, a5) )
            goto LABEL_20;
          break;
        case 3:
          if ( !a5 && (unsigned __int8)sub_1EADC70((__int64 *)&ptr, v9, a6) )
            goto LABEL_20;
          break;
        case 4:
          if ( !a5 && (unsigned __int8)sub_1EAF370((__int64 *)&ptr, a2, a3, v9, a6) )
            goto LABEL_20;
          break;
        case 5:
          if ( !a5 && (unsigned __int8)sub_1ECAD50((__int64 *)&ptr, a2, a3, v9, a6, a7) )
LABEL_20:
            v8 = 5;
          break;
        default:
          break;
      }
      sub_A0AE90((__int64 *)&v19);
      sub_A0B030((__int64 *)&v17);
    }
    v10 = v19;
    v19 = nullptr;
    v16 = v10;
    sub_A0E8E0(&v16);
    if ( v16 )
      (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
    v8 = 1;
    sub_A0AE90((__int64 *)&v19);
LABEL_12:
    sub_A0B030((__int64 *)&v17);
    if ( ptr != v23 )
      free(ptr);
  }
  return v8;
}
