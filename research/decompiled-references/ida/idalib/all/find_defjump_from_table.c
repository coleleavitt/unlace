__int64 __fastcall find_defjump_from_table(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // r12
  unsigned int v7; // esi
  unsigned __int64 v8; // rcx
  int v9; // edi
  int v10; // eax
  __int64 v11; // rdx
  __int64 segm_base; // rax
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 24);
  if ( result == -1 )
  {
    if ( (*(_DWORD *)a2 & 1) != 0 && (*(_DWORD *)a2 & 0x20) != 0 )
    {
      if ( *(_QWORD *)(a2 + 8) == -1 )
        return -1;
      v3 = *(__int64 **)(qword_2CCB598 + 1672);
      v4 = sub_505D70(v3 + 203, a1);
      v6 = v4;
      if ( !v4 )
      {
        return -1;
      }
      else
      {
        v7 = *(_DWORD *)a2;
        if ( (*(_DWORD *)a2 & 0x200) != 0 )
        {
          v8 = *(_QWORD *)(a2 + 56);
        }
        else
        {
          segm_base = get_segm_base(v4);
          v7 = *(_DWORD *)a2;
          v8 = segm_base;
        }
        v9 = 2;
        v10 = v7 & 0x404;
        if ( (v7 & 0x404) != 0 )
        {
          if ( v10 == 4 )
          {
            v9 = 4;
          }
          else
          {
            v9 = 1;
            if ( v10 != 1024 )
              v9 = 8;
          }
        }
        if ( (v7 & 0x400000) != 0 )
        {
          v11 = -v9;
        }
        else
        {
          v11 = 0;
          if ( (v7 & 0x40) == 0 )
            v11 = v9 * *(unsigned __int16 *)(a2 + 4);
        }
        return sub_44B830(v3, (unsigned int *)a2, *(_QWORD *)(a2 + 8) + v11, v8, v6, v5);
      }
    }
    else
    {
      return -1;
    }
  }
  return result;
}
