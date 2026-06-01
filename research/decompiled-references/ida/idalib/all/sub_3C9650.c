__int64 __fastcall sub_3C9650(__int64 *a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned __int64 v6; // rsi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 tinfo_size; // [rsp+8h] [rbp-150h]
  __int64 v19; // [rsp+18h] [rbp-140h] BYREF
  _QWORD v20[39]; // [rsp+20h] [rbp-138h] BYREF

  v20[35] = __readfsqword(0x28u);
  if ( (a3 & 0x600) != 0x400 )
    return 1;
  v6 = (unsigned int)a3 & 0xF0000000;
  if ( v6 == 1879048192 )
    return 16;
  if ( v6 <= 0x70000000 )
  {
    if ( v6 == 805306368 )
      return 8;
    if ( v6 <= 0x30000000 )
    {
      result = 2;
      if ( v6 == 0x10000000 )
        return result;
      result = 4;
      if ( v6 == 0x20000000 )
        return result;
      return 1;
    }
    if ( v6 != 1342177280 )
    {
      if ( v6 == 1610612736 )
      {
        if ( a4 || (a4 = sub_3C9470(a1, v20, (unsigned __int64)a2, 0, a3)) != nullptr )
        {
          v19 = 0;
          if ( (unsigned __int8)get_type_by_tid(&v19, *a4) )
          {
            tinfo_size = get_tinfo_size(0, v19, 0);
            clear_tinfo_t(&v19);
            return tinfo_size;
          }
          clear_tinfo_t(&v19);
        }
        return 1;
      }
      if ( v6 != 0x40000000 )
        return 1;
      return *(_QWORD *)(a1[2] + 120);
    }
    if ( !a4 )
    {
      a4 = sub_3C9470(a1, v20, (unsigned __int64)a2, 0, a3);
      if ( !a4 )
        return 1;
    }
    result = 2;
    v10 = *(_DWORD *)a4 & 3;
    if ( v10 != 1 )
    {
      result = 4;
      if ( v10 != 2 )
        return 1;
    }
  }
  else if ( v6 == 3489660928 )
  {
    if ( !a4 )
    {
      a4 = sub_3C9470(a1, v20, (unsigned __int64)a2, 0, a3);
      if ( !a4 )
        return 1;
    }
    v14 = sub_3E8BE0(a1, (unsigned int)*(__int16 *)a4);
    v15 = v14;
    if ( !v14 )
    {
      if ( (unsigned __int8)sub_3C2100(&v19, a1, a2) )
        return v19;
      return 1;
    }
    if ( *(_QWORD *)(v14 + 72) )
    {
      v16 = sub_505D70(a1 + 203, a2);
      if ( v16 )
        v17 = *(_QWORD *)(v16 + 8) - (_QWORD)a2;
      else
        v17 = sub_631AD0(*a1, 20) - (_QWORD)a2;
      return (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(v15 + 72))(*(_QWORD *)(v15 + 8), a2, v17);
    }
    else
    {
      return *(_QWORD *)(v14 + 56);
    }
  }
  else
  {
    if ( v6 > 0xD0000000 )
    {
      result = 32;
      if ( v6 == 3758096384 )
        return result;
      result = 64;
      if ( v6 == 4026531840 )
        return result;
      return 1;
    }
    if ( v6 != 2415919104 )
    {
      if ( v6 != 2684354560 )
      {
        if ( v6 == 0x80000000 )
        {
          v7 = *(_DWORD *)(a1[2] + 20);
          v8 = v7 + 14;
          v9 = v7 + 7;
          if ( v9 >= 0 )
            v8 = v9;
          return 4 / (v8 >> 3);
        }
        return 1;
      }
      return *(_QWORD *)(a1[2] + 120);
    }
    v11 = *(_DWORD *)(a1[2] + 20);
    v12 = v11 + 14;
    v13 = v11 + 7;
    if ( v13 >= 0 )
      v12 = v13;
    return 8 / (v12 >> 3);
  }
  return result;
}
