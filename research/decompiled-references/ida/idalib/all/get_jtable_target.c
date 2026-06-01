__int64 __fastcall get_jtable_target(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r13
  unsigned __int64 segm_base; // rcx
  int v9; // edx
  __int64 *v14; // rdi

  v14 = *(__int64 **)(qword_2CCB598 + 1672);
  if ( *(_QWORD *)(a2 + 8) != -1 )
  {
    v3 = a3;
    v4 = a2;
    if ( (*(_BYTE *)(a2 + 2) & 1) != 0 )
    {
      if ( a3 < *(_DWORD *)(a2 + 40) )
      {
LABEL_4:
        v5 = sub_505D70(v14 + 203, a1);
        v7 = v5;
        if ( v5 )
        {
          if ( (*(_DWORD *)v4 & 0x200) != 0 )
          {
            segm_base = *(_QWORD *)(v4 + 56);
            v9 = *(_DWORD *)v4 & 0x404;
            if ( v9 )
              goto LABEL_7;
          }
          else
          {
            segm_base = get_segm_base(v5);
            v9 = *(_DWORD *)v4 & 0x404;
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
              return sub_44B830(v14, (unsigned int *)v4, *(_QWORD *)(v4 + 8) + v3, segm_base, v7, v6);
            }
          }
          v3 *= 2;
          return sub_44B830(v14, (unsigned int *)v4, *(_QWORD *)(v4 + 8) + v3, segm_base, v7, v6);
        }
      }
    }
    else if ( a3 < *(unsigned __int16 *)(a2 + 4) )
    {
      goto LABEL_4;
    }
    return -1;
  }
  return -1;
}
