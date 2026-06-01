__int64 __fastcall sub_3F4CB0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  double *v4; // r12
  double *v5; // rbx
  int v7; // eax
  int v8; // ebx
  int v9; // r15d
  int v10; // r12d
  double v11; // xmm0_8
  _QWORD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rdx
  double v19; // xmm0_8
  unsigned __int64 v20; // rbx
  int aflags; // r12d
  int v22; // [rsp+0h] [rbp-68h]
  int v23; // [rsp+0h] [rbp-68h]
  __int64 v24; // [rsp+8h] [rbp-60h]
  int v25; // [rsp+14h] [rbp-54h]
  __int64 v26; // [rsp+18h] [rbp-50h]
  int v27; // [rsp+20h] [rbp-48h]

  v2 = Clp_primalColumnSolution();
  v3 = *(int *)(a1 + 160);
  if ( (int)v3 <= 0 )
  {
LABEL_6:
    v7 = *(_DWORD *)(a1 + 156);
    v8 = 2 * v7;
    if ( v7 <= 0 )
      return 1;
    v26 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( !sub_64930(a2, v26) )
        goto LABEL_8;
      v11 = floor(*(double *)(v2 + 8 * v26) + 0.5);
      v12 = *(_QWORD **)(a1 + 120);
      v13 = (unsigned int)(int)v11;
      if ( (unsigned __int64)v9 >= v12[1] )
      {
        if ( !under_debugger )
          sub_383060(0xC54Cu, v11);
        goto LABEL_42;
      }
      v14 = *v12 + 16LL * v9;
      if ( *(_QWORD *)(v14 + 8) )
      {
        if ( !under_debugger )
          sub_383060(0xC54Du, v11);
        goto LABEL_42;
      }
      *(_QWORD *)(v14 + 8) = v13;
      ++v9;
      v22 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4 * v26);
      if ( v9 < v22 )
      {
        v15 = 16LL * v9;
        while ( 1 )
        {
          while ( 1 )
          {
            v17 = v15 + **(_QWORD **)(a1 + 120);
            v18 = *(_QWORD *)(v17 + 8);
            if ( !v18 )
              break;
            ++v9;
            v15 += 16;
            v13 = v18 + (int)v13;
            *(_QWORD *)(v17 + 8) = v13;
            if ( v22 <= v9 )
              goto LABEL_22;
          }
          if ( v8 + 1 >= *(_DWORD *)(a1 + 160) )
            break;
          v25 = v13;
          v27 = v8 + 2;
          v24 = (unsigned int)(int)floor(*(double *)(v2 + 8LL * v8) + 0.5);
          v11 = floor(*(double *)(v2 + 8LL * (v8 + 1)) + 0.5);
          v16 = (unsigned int)(int)v11;
          if ( v25 != v24 )
          {
            if ( !under_debugger )
              sub_383060(0xC54Fu, v11);
            goto LABEL_42;
          }
          *(_QWORD *)(v17 + 8) = v16;
          LODWORD(v13) = (int)v11;
          if ( v16 == 1 )
          {
            v20 = sub_3F4BE0(a1, v8);
            if ( v20 != -1 )
            {
              aflags = get_aflags();
              if ( (aflags & 0x4000000) == 0 )
              {
                set_abits();
                sub_375220(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1496LL), v20, 0xFFFFFFFFFFFFFFFFLL);
                if ( (aflags & 0xC2000000) == 0x40000000 )
                  set_tinfo();
              }
            }
            v8 = v27;
            LODWORD(v13) = 1;
          }
          else
          {
            v8 += 2;
          }
          ++v9;
          v15 += 16;
          if ( v22 <= v9 )
            goto LABEL_22;
        }
        if ( !under_debugger )
          sub_383060(0xC54Eu, v11);
LABEL_42:
        BUG();
      }
LABEL_22:
      v10 = *(_DWORD *)(a1 + 156);
      v23 = v13;
      v19 = floor(*(double *)(v2 + 8LL * (v10 + (int)v26)) + 0.5);
      if ( v23 != (unsigned __int64)(unsigned int)(int)v19 )
      {
        if ( !under_debugger )
          sub_383060(0xC550u, v19);
        goto LABEL_42;
      }
      if ( *(_DWORD *)(a1 + 164) == (_DWORD)v26 && v23 == 1 )
        break;
LABEL_9:
      if ( v10 <= (int)++v26 )
        return 1;
    }
    sub_373590(*(_QWORD *)(a1 + 184));
LABEL_8:
    v10 = *(_DWORD *)(a1 + 156);
    goto LABEL_9;
  }
  v4 = (double *)v2;
  v5 = (double *)(v2 + 8 * v3);
  while ( fabs(*v4 - round(*v4)) <= 0.001 )
  {
    if ( ++v4 == v5 )
      goto LABEL_6;
  }
  return 0;
}
