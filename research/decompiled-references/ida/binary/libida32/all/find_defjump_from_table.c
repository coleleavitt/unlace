__int64 __fastcall find_defjump_from_table(unsigned int a1, __int64 a2)
{
  _QWORD *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // r12
  unsigned int v7; // esi
  unsigned int v8; // ecx
  int v9; // edi
  int v10; // eax
  int v11; // edx
  unsigned int segm_base; // eax
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)result == -1 )
  {
    if ( (*(_DWORD *)a2 & 1) != 0 && (*(_DWORD *)a2 & 0x20) != 0 )
    {
      if ( *(_DWORD *)(a2 + 8) == -1 )
        return 0xFFFFFFFFLL;
      v3 = *(_QWORD **)(qword_2CA1698 + 1480);
      v4 = sub_4EE820(v3 + 194, a1);
      v6 = v4;
      if ( !v4 )
      {
        return 0xFFFFFFFFLL;
      }
      else
      {
        v7 = *(_DWORD *)a2;
        if ( (*(_DWORD *)a2 & 0x200) != 0 )
        {
          v8 = *(_DWORD *)(a2 + 32);
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
        v11 = v7 & 0x400000;
        if ( (v7 & 0x400000) != 0 )
        {
          v11 = -v9;
        }
        else if ( (v7 & 0x40) == 0 )
        {
          v11 = v9 * *(unsigned __int16 *)(a2 + 4);
        }
        return sub_437AB0(v3, (unsigned int *)a2, *(_DWORD *)(a2 + 8) + v11, v8, v6, v5);
      }
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}

