__int64 __fastcall sub_115F0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rbx
  unsigned int _32bit; // eax
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // r15
  __int64 v12; // rbp
  __int64 result; // rax
  _QWORD v16[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v16[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    create_data();
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 320LL))(
      *(_QWORD *)(a1 + 8),
      a2,
      a3,
      a4);
    v4 = *(_QWORD *)(a1 + 16);
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(unsigned int *)(v5 + 744);
  v7 = a2 + *(_QWORD *)(v5 + 232);
  _32bit = get_32bit();
  v9 = *(_QWORD *)(v5 + 8);
  v10 = *(_DWORD *)(v9 + 2208);
  if ( v10 && v10 < _32bit )
  {
    if ( *(_BYTE *)(v9 + 2216) )
      sub_EC40();
    return 0xFFFFFFFFLL;
  }
  else
  {
    v11 = _32bit;
    v12 = 0;
    if ( _32bit )
    {
      while ( 1 )
      {
        v16[0] = 0;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v5 + 136LL))(v5, v16, v7) )
        {
          if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
            op_offset();
          result = (**(__int64 (__fastcall ***)(__int64, _QWORD))v4)(v4, v16[0]);
          if ( (_DWORD)result )
            break;
        }
        ++v12;
        v7 += v6;
        if ( v11 == v12 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
