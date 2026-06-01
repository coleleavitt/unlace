__int64 __fastcall sub_370120(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v4; // rsi
  __int64 tinfo_property; // rax
  __int64 v6; // rbx
  __int64 tinfo_property4; // rax
  __int64 v9; // rcx
  int *v10; // rdx
  int *v11; // rdi
  unsigned __int64 v12; // rcx
  int *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // r14
  int v17; // r13d
  int v18; // ecx
  int v19; // ecx
  _QWORD v20[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  v20[1] = __readfsqword(0x28u);
  v4 = *(unsigned int *)(a1 + 8);
  v20[0] = 0;
  *(_DWORD *)(a2 + 8) = -1;
  get_type_by_tid(v20, v4);
  tinfo_property = get_tinfo_property(v20[0], 310);
  v6 = tinfo_property;
  if ( tinfo_property )
  {
    if ( *(_QWORD *)(tinfo_property + 32) )
    {
      tinfo_property4 = get_tinfo_property4(v20[0], 294, 0, v2, -1, 0);
      if ( tinfo_property4 > 0 )
      {
        v9 = *(_QWORD *)(v6 + 32);
        if ( v9 )
        {
          v10 = *(int **)(v6 + 24);
          v11 = &v10[v9];
          if ( v10 != v11 )
          {
            v12 = tinfo_property4 - 1;
            v13 = *(int **)(v6 + 24);
            v14 = 0;
            while ( 1 )
            {
              v15 = v14;
              v14 += *v13;
              if ( v12 < v14 )
                break;
              if ( v11 == ++v13 )
                goto LABEL_3;
            }
            v16 = *(_QWORD *)(*(_QWORD *)v6 + 56 * v15 + 48);
            v17 = v16;
            if ( (*(_BYTE *)(v6 + 52) & 7) != 0 )
              v18 = 1 << ((*(_BYTE *)(v6 + 52) & 7) - 1);
            else
              v18 = (unsigned __int8)getinf(61);
            v19 = 8 * v18;
            if ( v19 <= 63 )
              v17 = v16 & ((1LL << v19) - 1);
            *(_DWORD *)(a2 + 8) = v17;
          }
        }
      }
    }
  }
LABEL_3:
  clear_tinfo_t(v20);
  return 0;
}

