__int64 __fastcall sub_39B280(__int64 a1, unsigned __int64 a2, _DWORD *a3, char a4)
{
  __int64 v5; // rdi
  __int64 v6; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 not_tail; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  __int64 v22; // rax

  v5 = *(_QWORD *)(a1 + 696);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 688);
    v9 = 0;
    v10 = v6;
    v11 = v6;
    while ( 1 )
    {
      if ( a2 == *(_QWORD *)v11 )
      {
        if ( a4 )
        {
          while ( (*(_BYTE *)(v11 + 10) & 1) == 0 )
          {
            ++v9;
            v11 += 16;
            if ( v5 == v9 )
              goto LABEL_38;
            if ( a2 != *(_QWORD *)v11 )
            {
              if ( a2 >= *(_QWORD *)v11 )
                goto LABEL_4;
              goto LABEL_11;
            }
          }
        }
        v22 = (int)v9;
        if ( (int)v9 < 0 )
        {
LABEL_38:
          v12 = v6 + 16 * v5;
          if ( v12 == v6 )
          {
LABEL_39:
            v13 = -1;
          }
          else
          {
LABEL_14:
            while ( (*(_BYTE *)(v10 + 10) & 1) == 0 )
            {
              v10 += 16;
              if ( v12 == v10 )
                goto LABEL_39;
            }
            v13 = *(_QWORD *)v10;
          }
          if ( a2 < v13 )
            return 0;
          v14 = v5 - 1;
          v15 = v6 + 16 * v14;
          while ( (*(_BYTE *)(v15 + 10) & 1) == 0 )
          {
            v15 -= 16;
            if ( !v14 )
              goto LABEL_21;
            --v14;
          }
          if ( *(_QWORD *)v15 < a2 )
            return 0;
LABEL_21:
          if ( (get_flags_ex(a2, 4) & 0x600) != 0x200 )
            return 0;
          not_tail = prev_not_tail(a2);
          v17 = *(_QWORD *)(a1 + 696);
          if ( !v17 )
            return 0;
          v6 = *(_QWORD *)(a1 + 688);
          v18 = 0;
          v19 = v6;
          while ( 1 )
          {
            v20 = *(_QWORD *)v19;
            if ( not_tail == *(_QWORD *)v19 )
              break;
LABEL_24:
            if ( not_tail >= v20 )
            {
              ++v18;
              v19 += 16;
              if ( v17 != v18 )
                continue;
            }
            return 0;
          }
          if ( a4 )
          {
            while ( (*(_BYTE *)(v19 + 10) & 1) == 0 )
            {
              ++v18;
              v19 += 16;
              if ( v17 == v18 )
                return 0;
              v20 = *(_QWORD *)v19;
              if ( not_tail != *(_QWORD *)v19 )
                goto LABEL_24;
            }
          }
          v22 = (int)v18;
          if ( (int)v18 < 0 )
            return 0;
        }
        if ( a3 )
        {
          *a3 = v22;
          v6 = *(_QWORD *)(a1 + 688);
        }
        return v6 + 16 * v22;
      }
      if ( a2 < *(_QWORD *)v11 )
        break;
LABEL_4:
      ++v9;
      v11 += 16;
      if ( v5 == v9 )
        goto LABEL_38;
    }
LABEL_11:
    v12 = v6 + 16 * v5;
    if ( v6 != v12 )
      goto LABEL_14;
  }
  return 0;
}
