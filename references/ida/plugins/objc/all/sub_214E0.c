__int64 __fastcall sub_214E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rbx
  unsigned int _32bit; // eax
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 result; // rax
  _QWORD v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v15[3] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    create_data();
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 8) + 328LL))(*(_QWORD *)(a1 + 8), a2, a3);
    v3 = *(_QWORD *)(a1 + 16);
  }
  v4 = *(_QWORD **)(a1 + 8);
  v15[2] = v3;
  v15[0] = &off_3C580;
  v5 = v4[27];
  v15[1] = v4;
  v6 = v4[28];
  v7 = a2 + v5;
  _32bit = get_32bit();
  v9 = v4[1];
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
        result = sub_21360((__int64)v15, v7);
        if ( (_DWORD)result )
          break;
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
