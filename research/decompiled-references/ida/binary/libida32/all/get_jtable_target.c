__int64 __fastcall get_jtable_target(unsigned int a1, __int64 a2, int a3)
{
  int v3; // ebp
  unsigned int *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r13
  unsigned int segm_base; // ecx
  int v9; // edx
  __int64 v13; // rsi
  _QWORD *v14; // rdi

  v13 = a1;
  v14 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( *(_DWORD *)(a2 + 8) != -1 )
  {
    v3 = a3;
    v4 = (unsigned int *)a2;
    if ( (*(_BYTE *)(a2 + 2) & 1) != 0 )
    {
      if ( a3 < *(_DWORD *)(a2 + 24) )
      {
LABEL_4:
        v5 = sub_4EE820(v14 + 194, v13);
        v7 = v5;
        if ( v5 )
        {
          if ( (*v4 & 0x200) != 0 )
          {
            segm_base = v4[8];
            v9 = *v4 & 0x404;
            if ( v9 )
              goto LABEL_7;
          }
          else
          {
            segm_base = get_segm_base(v5);
            v9 = *v4 & 0x404;
            if ( v9 )
            {
LABEL_7:
              if ( v9 == 4 )
              {
                v3 *= 4;
              }
              else if ( v9 != 1024 )
              {
                v3 *= 8;
              }
              return sub_437AB0(v14, v4, v3 + v4[2], segm_base, v7, v6);
            }
          }
          v3 *= 2;
          return sub_437AB0(v14, v4, v3 + v4[2], segm_base, v7, v6);
        }
      }
    }
    else if ( a3 < *(unsigned __int16 *)(a2 + 4) )
    {
      goto LABEL_4;
    }
    return 0xFFFFFFFFLL;
  }
  return 0xFFFFFFFFLL;
}

