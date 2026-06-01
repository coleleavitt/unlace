__int64 __fastcall sub_3EA0F0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  double *v5; // r12
  double *v6; // rbx
  int v8; // eax
  int v9; // ebx
  int v10; // r15d
  int v11; // r12d
  double v12; // xmm0_8
  _QWORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rbx
  int aflags; // r12d
  int v23; // [rsp+0h] [rbp-68h]
  int v24; // [rsp+0h] [rbp-68h]
  int v25; // [rsp+14h] [rbp-54h]
  __int64 v26; // [rsp+18h] [rbp-50h]
  int v27; // [rsp+20h] [rbp-48h]

  v3 = Clp_primalColumnSolution();
  v4 = *(int *)(a1 + 160);
  if ( (int)v4 <= 0 )
  {
LABEL_6:
    v8 = *(_DWORD *)(a1 + 156);
    v9 = 2 * v8;
    if ( v8 <= 0 )
      return 1;
    v26 = 0;
    v10 = 0;
    while ( 1 )
    {
      if ( !sub_64030(a2, v26) )
        goto LABEL_8;
      v12 = floor(*(double *)(v3 + 8 * v26) + 0.5);
      v13 = *(_QWORD **)(a1 + 120);
      v14 = (unsigned int)(int)v12;
      if ( (unsigned __int64)v10 >= v13[1] )
      {
        if ( !under_debugger )
          sub_37EA20(50508);
        goto LABEL_42;
      }
      v15 = *v13 + 16LL * v10;
      if ( *(_QWORD *)(v15 + 8) )
      {
        if ( !under_debugger )
          sub_37EA20(50509);
        goto LABEL_42;
      }
      *(_QWORD *)(v15 + 8) = v14;
      ++v10;
      v23 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4 * v26);
      if ( v10 < v23 )
      {
        v16 = 16LL * v10;
        while ( 1 )
        {
          while ( 1 )
          {
            v19 = v16 + **(_QWORD **)(a1 + 120);
            v20 = *(_QWORD *)(v19 + 8);
            if ( !v20 )
              break;
            ++v10;
            v16 += 16;
            v14 = v20 + (int)v14;
            *(_QWORD *)(v19 + 8) = v14;
            if ( v23 <= v10 )
              goto LABEL_22;
          }
          if ( v9 + 1 >= *(_DWORD *)(a1 + 160) )
            break;
          v25 = v14;
          v17 = (unsigned int)(int)floor(*(double *)(v3 + 8LL * v9) + 0.5);
          v27 = v9 + 2;
          v18 = (unsigned int)(int)floor(*(double *)(v3 + 8LL * (v9 + 1)) + 0.5);
          if ( v25 != v17 )
          {
            if ( !under_debugger )
              sub_37EA20(50511);
            goto LABEL_42;
          }
          *(_QWORD *)(v19 + 8) = v18;
          LODWORD(v14) = v18;
          if ( v18 == 1 )
          {
            v21 = sub_3EA020(a1, v9);
            if ( v21 != -1 )
            {
              aflags = get_aflags();
              if ( (aflags & 0x4000000) == 0 )
              {
                set_abits();
                sub_3718E0(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1496LL), v21, -1);
                if ( (aflags & 0xC2000000) == 0x40000000 )
                  set_tinfo();
              }
            }
            v9 = v27;
            LODWORD(v14) = 1;
          }
          else
          {
            v9 += 2;
          }
          ++v10;
          v16 += 16;
          if ( v23 <= v10 )
            goto LABEL_22;
        }
        if ( !under_debugger )
          sub_37EA20(50510);
LABEL_42:
        BUG();
      }
LABEL_22:
      v11 = *(_DWORD *)(a1 + 156);
      v24 = v14;
      if ( (int)v14 != (unsigned __int64)(unsigned int)(int)floor(*(double *)(v3 + 8LL * (v11 + (int)v26)) + 0.5) )
      {
        if ( !under_debugger )
          sub_37EA20(50512);
        goto LABEL_42;
      }
      if ( *(_DWORD *)(a1 + 164) == (_DWORD)v26 && v24 == 1 )
        break;
LABEL_9:
      if ( v11 <= (int)++v26 )
        return 1;
    }
    sub_36FC50(*(_QWORD *)(a1 + 184));
LABEL_8:
    v11 = *(_DWORD *)(a1 + 156);
    goto LABEL_9;
  }
  v5 = (double *)v3;
  v6 = (double *)(v3 + 8 * v4);
  while ( fabs(*v5 - round(*v5)) <= 0.001 )
  {
    if ( ++v5 == v6 )
      goto LABEL_6;
  }
  return 0;
}
