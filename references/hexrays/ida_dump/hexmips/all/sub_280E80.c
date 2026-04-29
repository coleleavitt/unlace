__int64 __fastcall sub_280E80(__int64 a1)
{
  unsigned int tinfo_size; // eax
  unsigned int v2; // ebx
  unsigned int v3; // r13d
  unsigned int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // ebx
  unsigned int v8; // ebp
  unsigned int v9; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // ebx
  signed int v15; // eax
  unsigned int v16; // ebp
  unsigned int v17; // eax
  __int64 v18; // rax
  int v19; // ebx
  int v20; // ebp
  __int64 v21; // rax
  __int64 v22; // rax

  tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 48), 0);
  if ( tinfo_size == -1 )
    return 0;
  v2 = tinfo_size;
  v3 = tinfo_size;
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 == 34 )
  {
    v13 = *(_QWORD *)(a1 + 32);
    if ( *(_DWORD *)(v13 + 8) == 61 )
    {
      v18 = sub_2511B0(*(__int64 **)(v13 + 24), (_QWORD *)(v13 + 48));
      if ( v18 > 0 )
      {
        v19 = v18;
        if ( (int)v18 == v18 )
        {
          v20 = sub_280E80(*(_QWORD *)(a1 + 24));
          if ( v20 )
            return (unsigned int)(v19 + v20);
        }
      }
    }
    return 0;
  }
  if ( v4 > 0x22 )
  {
    if ( v4 == 48 )
    {
      if ( (get_tinfo_property(*(_QWORD *)(a1 + 48), 2) & 0xF) != 9
        || (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 2) & 0xF) == 9 )
      {
        v14 = 8 * v2;
        v15 = sub_280E80(*(_QWORD *)(a1 + 24));
        v8 = v15;
        if ( v15 > (int)v14 )
          return v14;
        if ( v15 != v14 )
          return v8;
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) != 61
          || (unsigned int)get_tinfo_property(*(_QWORD *)(a1 + 48), 3) != 1 )
        {
          return v14;
        }
        v21 = sub_27D1E0(*(_QWORD *)(a1 + 24));
        v22 = sub_325C90(-v21, v3, 1);
        if ( (int)v8 > 0 && v22 )
        {
          v8 = 0;
          while ( ++v8 != v14 )
          {
            if ( v8 == 64 )
              return 64;
            if ( (v22 & -(1LL << v8)) == 0 )
              return v8;
          }
          return v8;
        }
      }
    }
    else if ( v4 == 61 )
    {
      v5 = sub_2511B0(*(__int64 **)(a1 + 24), (_QWORD *)(a1 + 48));
      v6 = -v5;
      if ( v5 > 0 )
        v6 = v5;
      v7 = 8 * v2;
      if ( v7 > 0 )
      {
        if ( v6 )
        {
          v8 = v7;
          v9 = 0;
          while ( ++v9 != v7 )
          {
            if ( v9 == 64 )
              return 64;
            if ( (v6 & -(1LL << v9)) == 0 )
              return v9;
          }
          return v8;
        }
      }
    }
    return 0;
  }
  if ( v4 == 19 )
  {
    v16 = sub_280E80(*(_QWORD *)(a1 + 24));
    v17 = sub_280E80(*(_QWORD *)(a1 + 32));
    if ( (int)v16 < (int)v17 )
      return v17;
    return v16;
  }
  else
  {
    if ( v4 != 21 )
      return 0;
    v11 = sub_280E80(*(_QWORD *)(a1 + 24));
    v12 = sub_280E80(*(_QWORD *)(a1 + 32));
    if ( (int)v11 > (int)v12 )
      return v12;
    return v11;
  }
}
