__int64 __fastcall sub_1DB70(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, unsigned __int64, __int64, _QWORD),
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8)
{
  __int64 result; // rax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned __int64 v14; // r13
  unsigned int v15; // eax
  unsigned __int64 v16; // r14
  unsigned int _32bit; // eax
  __int64 v18; // rcx
  unsigned int v19; // edx
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  _BOOL8 v22; // r15
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  unsigned __int64 v27; // [rsp+10h] [rbp-A8h]
  __int64 v28; // [rsp+30h] [rbp-88h] BYREF
  __int128 v29; // [rsp+38h] [rbp-80h]
  unsigned __int64 v30; // [rsp+50h] [rbp-68h] BYREF
  __int128 v31; // [rsp+58h] [rbp-60h]
  int v32; // [rsp+68h] [rbp-50h]
  unsigned __int64 v33; // [rsp+78h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( !a3 || !(unsigned __int8)is_loaded() )
    return 0;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 2216LL) )
  {
    v31 = 0;
    v30 = 0;
    get_ea_name();
    sub_EC40();
  }
  if ( a8 == 2 )
  {
    if ( *(_QWORD *)(a1 + 136) == -1 )
      sub_193C0(a1);
    create_data();
    if ( (unsigned int)get_32bit() == 8 )
    {
      _32bit = get_32bit();
      if ( _32bit != -1 )
      {
        v18 = *(_QWORD *)(a1 + 8);
        v19 = *(_DWORD *)(v18 + 2208);
        if ( v19 && v19 < _32bit )
        {
          if ( !*(_BYTE *)(v18 + 2216) )
            return 0xFFFFFFFFLL;
          goto LABEL_44;
        }
        v20 = a3 + 8;
        v21 = 8 * _32bit;
        v27 = a3 + 8 + v21;
        v22 = __CFADD__(a3 + 8, v21);
        v23 = getseg();
        if ( v23 && !v22 && *(_QWORD *)(v23 + 8) >= v27 )
        {
          if ( v20 < v27 )
          {
            while ( (unsigned __int8)get_data_value() )
            {
              create_data();
              v24 = *(_DWORD *)(a1 + 752);
              v31 = v20;
              v30 = v20;
              v32 = v24 | 0x40;
              op_offset_ex();
              if ( (unsigned __int8)is_loaded() )
              {
                if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 2216LL) )
                  sub_EC40();
                result = (**a2)(a2, v20, a5, a6);
                if ( (_DWORD)result )
                  return result;
              }
              v20 += 8LL;
              if ( v20 >= v27 )
                break;
            }
          }
          v25 = *(_QWORD *)a1;
          v29 = 0;
          v28 = 0;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(v25 + 280))(a1, &v28, a5, a6) )
          {
            v30 = 0;
            v31 = 0;
            sub_D6A0((__int64 *)&v30);
            set_name();
            if ( v30 )
            {
              *(_QWORD *)&v31 = 0;
              qfree();
            }
          }
          if ( v28 )
          {
            *(_QWORD *)&v29 = 0;
            qfree();
          }
          return 0;
        }
      }
    }
    sub_E8C0();
    return 0;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) && (unsigned __int8)getinf_flag() && (a7 & 0x100000) != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, unsigned __int64, __int64, _QWORD), unsigned __int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
             a1,
             a2,
             a3,
             a5,
             a6);
  if ( !a8 )
    return (**a2)(a2, a3, a5, a6);
  if ( a8 != 1 )
    return 0;
  v11 = get_32bit();
  result = 0;
  if ( v11 != -1 )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13 = *(unsigned int *)(a1 + 744);
    v14 = v13 + a3;
    v15 = *(_DWORD *)(v12 + 2208);
    if ( !v15 || v15 >= v11 )
    {
      v30 = 0;
      v16 = v14 + v11 * (unsigned int)v13;
      if ( v14 < v16 )
      {
        while ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *, unsigned __int64))(*(_QWORD *)a1 + 136LL))(
                  a1,
                  &v30,
                  v14) )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 2216LL) )
            sub_EC40();
          result = (**a2)(a2, v30, a5, a6);
          if ( (_DWORD)result )
            return result;
          v14 += *(unsigned int *)(a1 + 744);
          if ( v14 >= v16 )
            return 0;
        }
      }
      return 0;
    }
    if ( !*(_BYTE *)(v12 + 2216) )
      return 0xFFFFFFFFLL;
LABEL_44:
    sub_EC40();
    return 0xFFFFFFFFLL;
  }
  return result;
}
