void __fastcall sub_AF67C0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 v3; // r9
  _QWORD *v4; // r15
  __int64 v5; // r12
  unsigned int v6; // eax
  _QWORD *v7; // rax
  __int64 v8; // r13
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+18h] [rbp-50h]
  _QWORD v16[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD **)(a1 + 96);
  v3 = 2LL * *(unsigned int *)(a1 + 104);
  v4 = &v2[v3];
  if ( v2 != &v2[v3] )
  {
    while ( *v2 <= 1u )
    {
      v2 += 2;
      if ( v4 == v2 )
        return;
    }
    if ( v4 != v2 )
    {
      while ( 1 )
      {
        v5 = v2[1];
        v6 = *(_DWORD *)(v5 + 24);
        if ( v6 == 31 )
        {
          sub_AF64F0(a1, (_QWORD *)v2[1], a2);
        }
        else
        {
          if ( v6 <= 0x1F )
          {
            if ( v6 != 7 )
            {
              if ( v6 != 23 )
                goto LABEL_21;
              sub_AF6610(a1, v2[1], a2);
              goto LABEL_11;
            }
            goto LABEL_19;
          }
          if ( v6 != 39 )
          {
            if ( v6 != 64 )
            {
LABEL_21:
              sub_1872CE0("");
              sub_1873130(107, 1150);
            }
LABEL_19:
            sub_AF2F50(a1, (_QWORD *)v2[1], a2);
            goto LABEL_11;
          }
          sub_AF5FE0(v16, a1, (_QWORD *)v2[1], a2);
          v8 = v16[0];
          v15 = v16[1];
          v14 = sub_186B270(0x38u);
          sub_13478B0(v14, *(_QWORD *)(a1 + 24), 2);
          sub_1349280(v14, v8, v9, v10, v11, v12);
          sub_135F980(*(_QWORD *)(a2 + 72), *(_QWORD *)(v5 + 32), v14);
          if ( v8 )
          {
            if ( (*(_DWORD *)(v8 + 8))-- == 1 )
              sub_15D7BC0(v15, v8);
          }
        }
LABEL_11:
        v7 = v2 + 2;
        if ( v4 != v2 + 2 )
        {
          while ( 1 )
          {
            v2 = v7;
            if ( *v7 > 1u )
              break;
            v7 += 2;
            if ( v4 == v7 )
              return;
          }
          if ( v4 != v7 )
            continue;
        }
        return;
      }
    }
  }
}

