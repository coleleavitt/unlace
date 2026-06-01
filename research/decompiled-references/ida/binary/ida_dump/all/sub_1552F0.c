__int64 __fastcall sub_1552F0(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 result; // rax
  __int64 v4; // r12
  int v5; // r13d
  __int64 v6; // r14
  __int64 v7; // rax
  int data_elsize; // r15d
  __int64 v9; // r14
  int v10; // r13d
  __int16 v11; // r12
  _QWORD v12[11]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_BYTE *)a1;
  v12[3] = __readfsqword(0x28u);
  if ( v2 == 6 )
  {
    if ( (unsigned __int8)is_mapped() )
    {
      v4 = *(_QWORD *)(a2 + 96);
      v5 = *(_DWORD *)(a1 + 4);
      v6 = *(_QWORD *)(v4 + 8);
      if ( (unsigned __int8)getinf() )
        LODWORD(v7) = (unsigned __int8)getinf();
      else
        v7 = *(_QWORD *)(v6 + 120);
      data_elsize = v7;
      v9 = v5;
      if ( v5 == (_DWORD)v7 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v4 + 8) + 120LL) != v5 )
        {
          if ( (get_flags_ex() & 0x600) == 0x200 )
            prev_not_tail();
          get_item_flag();
          data_elsize = get_data_elsize();
          v9 = data_elsize;
          if ( (unsigned int)(data_elsize - 8) > 8 )
            return 0;
        }
      }
      else
      {
        data_elsize = v5;
      }
      if ( (unsigned int)sub_343460(v4, *(_QWORD *)(a1 + 8)) )
      {
        if ( data_elsize == get_bytes() )
        {
          v10 = *(_DWORD *)(a1 + 4);
          v11 = *(_WORD *)(a1 + 2);
          result = sub_11D360(a1, a2, (__int64)v12, v9);
          if ( (_BYTE)result )
          {
            *(_DWORD *)(a1 + 4) = v10;
            *(_WORD *)(a1 + 2) = v11;
            return result;
          }
        }
      }
    }
    v2 = *(_BYTE *)a1;
  }
  if ( v2 != 2 )
    return 0;
  return sub_11D360(a1, a2, *(_QWORD *)(a1 + 8) + 16LL, -(__int64)*(int *)(a1 + 4));
}
