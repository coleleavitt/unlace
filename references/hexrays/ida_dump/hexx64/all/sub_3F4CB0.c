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
  __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rdx
  double v20; // xmm0_8
  __int64 v21; // rax
  const void *v22; // rbx
  int aflags; // r12d
  int v24; // [rsp+0h] [rbp-68h]
  int v25; // [rsp+0h] [rbp-68h]
  __int64 v26; // [rsp+8h] [rbp-60h]
  int v27; // [rsp+14h] [rbp-54h]
  __int64 v28; // [rsp+18h] [rbp-50h]
  int v29; // [rsp+20h] [rbp-48h]

  v2 = Clp_primalColumnSolution(*(_QWORD *)(a1 + 176));
  v3 = *(int *)(a1 + 160);
  if ( (int)v3 <= 0 )
  {
LABEL_6:
    v7 = *(_DWORD *)(a1 + 156);
    v8 = 2 * v7;
    if ( v7 <= 0 )
      return 1;
    v28 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( !sub_64930(a2, v28) )
        goto LABEL_8;
      v11 = floor(*(double *)(v2 + 8 * v28) + 0.5);
      v12 = *(_QWORD **)(a1 + 120);
      v13 = (unsigned int)(int)v11;
      if ( (unsigned __int64)v9 >= v12[1] )
      {
        if ( !under_debugger )
          sub_383060(0xC54Cu, (__int64)v12, v11);
        goto LABEL_42;
      }
      v14 = *v12 + 16LL * v9;
      if ( *(_QWORD *)(v14 + 8) )
      {
        if ( !under_debugger )
          sub_383060(0xC54Du, (__int64)v12, v11);
        goto LABEL_42;
      }
      *(_QWORD *)(v14 + 8) = v13;
      ++v9;
      v15 = *(unsigned int *)(*(_QWORD *)(a1 + 128) + 4 * v28);
      v24 = v15;
      if ( v9 < (int)v15 )
      {
        v16 = 16LL * v9;
        while ( 1 )
        {
          while ( 1 )
          {
            v18 = v16 + **(_QWORD **)(a1 + 120);
            v19 = *(_QWORD *)(v18 + 8);
            if ( !v19 )
              break;
            ++v9;
            v16 += 16;
            v13 = v19 + (int)v13;
            *(_QWORD *)(v18 + 8) = v13;
            if ( v24 <= v9 )
              goto LABEL_22;
          }
          if ( v8 + 1 >= *(_DWORD *)(a1 + 160) )
            break;
          v27 = v13;
          v29 = v8 + 2;
          v26 = (unsigned int)(int)floor(*(double *)(v2 + 8LL * v8) + 0.5);
          v11 = floor(*(double *)(v2 + 8LL * (v8 + 1)) + 0.5);
          v17 = (unsigned int)(int)v11;
          if ( v27 != v26 )
          {
            if ( !under_debugger )
              sub_383060(0xC54Fu, v15, v11);
            goto LABEL_42;
          }
          *(_QWORD *)(v18 + 8) = v17;
          LODWORD(v13) = (int)v11;
          if ( v17 == 1 )
          {
            v15 = (unsigned int)v8;
            v21 = sub_3F4BE0(a1, v8);
            v22 = (const void *)v21;
            if ( v21 != -1 )
            {
              aflags = get_aflags(v21);
              if ( (aflags & 0x4000000) == 0 )
              {
                set_abits(v22, 0x4000000);
                v15 = (__int64)v22;
                sub_375220(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1496LL), v22, 0xFFFFFFFFFFFFFFFFLL);
                if ( (aflags & 0xC2000000) == 0x40000000 )
                {
                  v15 = 0;
                  set_tinfo(v22, 0);
                }
              }
            }
            v8 = v29;
            LODWORD(v13) = 1;
          }
          else
          {
            v8 += 2;
          }
          ++v9;
          v16 += 16;
          if ( v24 <= v9 )
            goto LABEL_22;
        }
        if ( !under_debugger )
          sub_383060(0xC54Eu, v15, v11);
LABEL_42:
        BUG();
      }
LABEL_22:
      v10 = *(_DWORD *)(a1 + 156);
      v25 = v13;
      v20 = floor(*(double *)(v2 + 8LL * (v10 + (int)v28)) + 0.5);
      if ( v25 != (unsigned __int64)(unsigned int)(int)v20 )
      {
        if ( !under_debugger )
          sub_383060(0xC550u, v15, v20);
        goto LABEL_42;
      }
      if ( *(_DWORD *)(a1 + 164) == (_DWORD)v28 && v25 == 1 )
        break;
LABEL_9:
      if ( v10 <= (int)++v28 )
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
