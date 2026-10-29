__int64 __fastcall sub_373880(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 tinfo_property; // rax
  __int64 v5; // rcx
  int *v7; // rdx
  int *v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // r12
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  vars0[0] = 0;
  *(_QWORD *)(a2 + 8) = -1;
  get_type_by_tid(vars0, v3);
  tinfo_property = get_tinfo_property(vars0[0], 310);
  if ( tinfo_property )
  {
    v5 = *(_QWORD *)(tinfo_property + 32);
    if ( v5 )
    {
      v7 = *(int **)(tinfo_property + 24);
      v8 = &v7[v5];
      if ( v7 != v8 )
      {
        v9 = 0;
        while ( 1 )
        {
          v10 = v9;
          v9 += *v7;
          if ( *(_QWORD *)(tinfo_property + 8) - 1LL < v9 )
            break;
          if ( v8 == ++v7 )
            goto LABEL_3;
        }
        v11 = *(_QWORD *)(*(_QWORD *)tinfo_property + 56 * v10 + 48);
        v12 = *(_BYTE *)(tinfo_property + 52) & 7;
        if ( v12 )
          v13 = 1 << (v12 - 1);
        else
          v13 = (unsigned __int8)getinf(61);
        v14 = 8 * v13;
        if ( v14 <= 63 )
          v11 &= ~(-1LL << v14);
        *(_QWORD *)(a2 + 8) = v11;
      }
    }
  }
LABEL_3:
  clear_tinfo_t(vars0);
  return 0;
}
