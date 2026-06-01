__int64 __fastcall sub_3C1F00(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  int v5; // edx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned __int16 v15; // dx
  unsigned __int64 v16; // rcx
  __int64 v17; // rsi

  if ( a2 == -1 )
    return -1;
  v2 = a1[3];
  if ( *(_DWORD *)(v2 + 24) == 8 || (result = 0x100000000LL, a2 != 0x100000000LL) )
  {
    if ( a2 == a1[153] )
    {
      return a1[154];
    }
    else
    {
      a1[153] = a2;
      v5 = *(_DWORD *)(v2 + 24);
      while ( 1 )
      {
        result = -1;
        v6 = a2 + 1;
        if ( v5 != 8 )
          result = 0x100000000LL;
LABEL_8:
        if ( result == v6 )
          break;
        while ( 1 )
        {
          v7 = sub_3BE900(a1, v6, 4);
          if ( (v7 & 0x600) != 0x200 )
            goto LABEL_30;
          v8 = a1[129];
          if ( v8 > 0xFFFFFFFFFFFFFFFDLL )
          {
            v9 = a1 + 113;
            v10 = a1[125];
            if ( v8 == -1 )
              v9 = a1 + 119;
            if ( a1[128] == v6 )
              goto LABEL_16;
            while ( 1 )
            {
              if ( v9[3] == v10 )
                goto LABEL_25;
              v10 = std::_Rb_tree_decrement(v10);
LABEL_16:
              v11 = *(_QWORD *)(v10 + 40);
              if ( v11 )
                break;
              if ( (*(_DWORD *)(v10 + 48) & 0x600) != 0x200 )
                goto LABEL_25;
            }
            if ( (_QWORD *)v10 == v9 + 1 )
            {
LABEL_25:
              if ( !under_debugger )
                interr(71);
              BUG();
            }
            result = *(_QWORD *)(v10 + 32);
            v12 = result + v11;
            if ( result != v6 )
              result = v12;
            goto LABEL_20;
          }
          if ( (v6 & 1) == 0 )
            break;
          ++v6;
          result = 0x100000000LL;
          if ( *(_DWORD *)(a1[3] + 24LL) != 8 )
            goto LABEL_8;
        }
        v13 = v7;
        v14 = (unsigned int)v7 >> 20;
        v15 = (v13 >> 20) & 0xFFF;
        if ( !v15 )
          goto LABEL_30;
        v16 = v15;
        v17 = 0x100000000LL;
        v5 = *(_DWORD *)(a1[3] + 24LL);
        if ( v5 == 8 )
          v17 = -1;
        if ( v17 - v6 < v16 )
        {
LABEL_30:
          result = v6;
          break;
        }
        a2 = v6 + (int)(v14 - 1);
      }
LABEL_20:
      a1[154] = result;
    }
  }
  return result;
}
