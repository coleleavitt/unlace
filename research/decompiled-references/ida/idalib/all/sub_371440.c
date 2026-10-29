__int64 __fastcall sub_371440(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rsi
  __int64 tinfo_property; // rax
  __int64 v6; // rbx
  unsigned __int64 tinfo_property4; // rax
  __int64 v9; // rcx
  int *v10; // rdx
  int *v11; // rdi
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rsi
  __int64 v16; // r13
  int v17; // ecx
  int v18; // ecx
  _QWORD v19[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v19[1] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  v19[0] = 0;
  *(_QWORD *)(a2 + 8) = -1;
  get_type_by_tid(v19, v4);
  tinfo_property = get_tinfo_property(v19[0], 310);
  v6 = tinfo_property;
  if ( tinfo_property )
  {
    if ( *(_QWORD *)(tinfo_property + 32) )
    {
      tinfo_property4 = get_tinfo_property4(v19[0], 294, 0, v2, -1, 0);
      if ( tinfo_property4 != -1 )
      {
        v9 = *(_QWORD *)(v6 + 32);
        if ( v9 )
        {
          v10 = *(int **)(v6 + 24);
          v11 = &v10[v9];
          if ( v10 != v11 )
          {
            v12 = 0;
            while ( 1 )
            {
              v13 = *v10;
              v14 = v12;
              v12 += v13;
              if ( tinfo_property4 < v12 )
                break;
              if ( v11 == ++v10 )
                goto LABEL_3;
            }
            v15 = v14 + v13;
            if ( v15 < *(_QWORD *)(v6 + 8) )
            {
              v16 = *(_QWORD *)(*(_QWORD *)v6 + 56 * v15 + 48);
              if ( (*(_BYTE *)(v6 + 52) & 7) != 0 )
                v17 = 1 << ((*(_BYTE *)(v6 + 52) & 7) - 1);
              else
                v17 = (unsigned __int8)getinf(61);
              v18 = 8 * v17;
              if ( v18 <= 63 )
                v16 &= ~(-1LL << v18);
              *(_QWORD *)(a2 + 8) = v16;
            }
          }
        }
      }
    }
  }
LABEL_3:
  clear_tinfo_t(v19);
  return 0;
}
