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
  __int64 not_tail; // r13
  __int64 v13; // rdx
  __int64 item_flag; // rax
  _BYTE v15[24]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v2 = *(_BYTE *)a1;
  v16 = __readfsqword(0x28u);
  if ( v2 == 6 )
  {
    if ( (unsigned __int8)is_mapped(*(_QWORD *)(a1 + 8)) )
    {
      v4 = *(_QWORD *)(a2 + 96);
      v5 = *(_DWORD *)(a1 + 4);
      v6 = *(_QWORD *)(v4 + 8);
      if ( (unsigned __int8)getinf(66) )
        LODWORD(v7) = (unsigned __int8)getinf(66);
      else
        v7 = *(_QWORD *)(v6 + 120);
      data_elsize = v7;
      v9 = v5;
      if ( v5 == (_DWORD)v7 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v4 + 8) + 120LL) != v5 )
        {
          not_tail = *(_QWORD *)(a1 + 8);
          if ( (get_flags_ex(not_tail, 4) & 0x600) == 0x200 )
            not_tail = prev_not_tail(not_tail, 4, v13);
          item_flag = get_item_flag(not_tail, 0, *(_QWORD *)(a1 + 8), 1);
          data_elsize = get_data_elsize(not_tail, item_flag, 0);
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
        if ( data_elsize == get_bytes(v15, data_elsize, *(_QWORD *)(a1 + 8), 0, 0) )
        {
          v10 = *(_DWORD *)(a1 + 4);
          v11 = *(_WORD *)(a1 + 2);
          result = sub_11D360(a1, a2, v15, v9);
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
  return sub_11D360(a1, a2, (_BYTE *)(*(_QWORD *)(a1 + 8) + 16LL), -(__int64)*(int *)(a1 + 4));
}
