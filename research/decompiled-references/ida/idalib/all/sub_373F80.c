__int64 __fastcall sub_373F80(__int64 a1, __int64 a2)
{
  unsigned __int64 edm_by_tid; // rbx
  __int64 tinfo_property; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  int *v7; // rax
  int *v8; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rbx
  int v12; // ecx
  int v13; // ecx
  _QWORD v14[5]; // [rsp+0h] [rbp-28h] BYREF

  v14[1] = __readfsqword(0x28u);
  v14[0] = 0;
  *(_QWORD *)(a2 + 8) = -1;
  edm_by_tid = get_edm_by_tid(v14, 0);
  if ( edm_by_tid != -1 )
  {
    if ( get_tinfo_property(v14[0], 291) )
    {
      tinfo_property = get_tinfo_property(v14[0], 310);
      v5 = tinfo_property;
      if ( tinfo_property )
      {
        v6 = *(_QWORD *)(tinfo_property + 32);
        if ( v6 )
        {
          v7 = *(int **)(tinfo_property + 24);
          v8 = &v7[v6];
          if ( v7 != v8 )
          {
            v9 = 0;
            while ( 1 )
            {
              v10 = v9;
              v9 += *v7;
              if ( edm_by_tid < v9 )
                break;
              if ( v8 == ++v7 )
                goto LABEL_3;
            }
            v11 = *(_QWORD *)(*(_QWORD *)v5 + 56 * v10 + 48);
            if ( (*(_BYTE *)(v5 + 52) & 7) != 0 )
              v12 = 1 << ((*(_BYTE *)(v5 + 52) & 7) - 1);
            else
              v12 = (unsigned __int8)getinf(61);
            v13 = 8 * v12;
            if ( v13 <= 63 )
              v11 &= ~(-1LL << v13);
            *(_QWORD *)(a2 + 8) = v11;
          }
        }
      }
    }
  }
LABEL_3:
  clear_tinfo_t(v14);
  return 0;
}
