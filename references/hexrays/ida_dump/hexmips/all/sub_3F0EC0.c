__int64 __fastcall sub_3F0EC0(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, int a5, double a6)
{
  unsigned __int16 v7; // dx
  char v8; // cl
  __int64 v9; // rbx
  signed int v10; // r13d
  char v12; // r12
  __int64 v13; // rcx
  char v14; // r14
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // edi
  int v20; // r11d
  __int64 v21; // rax
  int v22; // esi
  __int64 v23; // rax
  __int16 v24; // ax
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // r15
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  int v32; // esi
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // [rsp+0h] [rbp-78h]
  __int64 v36; // [rsp+8h] [rbp-70h]
  unsigned __int64 v37; // [rsp+18h] [rbp-60h]
  int v39; // [rsp+30h] [rbp-48h]

  v7 = *(_WORD *)(a1 + 48);
  v8 = v7 - 122;
  if ( (unsigned __int16)(v7 - 122) > 0x14u )
    goto LABEL_51;
  v9 = a1;
  v10 = a2;
  if ( ((1LL << v8) & 0xA0005) == 0 )
  {
    if ( ((1LL << v8) & 0x14000A) != 0 )
    {
      v12 = 0;
      if ( !a5 )
        goto LABEL_5;
      goto LABEL_25;
    }
LABEL_51:
    if ( !under_debugger )
      sub_37E160(0xCCB0u, a2, a6);
    goto LABEL_60;
  }
  v12 = 1;
  if ( !a5 )
  {
LABEL_5:
    if ( ((a4 - 4) & 0xFFFFFFFFFFFFFFFBLL) != 0 )
    {
      if ( !under_debugger )
        sub_37E160(0xCCAEu, a2, a6);
      goto LABEL_60;
    }
    if ( v7 > 0x7Du )
    {
      if ( (unsigned __int16)(v7 - 139) <= 3u )
      {
        if ( ((*(_BYTE *)(a1 + 105) - 2) & 0xFD) == 0 )
        {
LABEL_9:
          v13 = *(_QWORD *)(a1 + 832);
          if ( **(_DWORD **)(v13 + 696) == v10 )
          {
            a2 = 3;
            sub_1D1F50(a1, 3u, *(_DWORD *)(v13 + 80), 0, 0x3BEA45E214ADDC55LL, v10, 0);
            a1 = v35;
            v13 = *(_QWORD *)(v9 + 832);
          }
          v14 = 0;
LABEL_12:
          v15 = *(_QWORD *)(v13 + 760);
          v37 = *(_QWORD *)(v9 + 120) % a4;
          if ( !v15
            || (a1 = v9,
                v16 = *(int *)(*(_QWORD *)(v13 + 752) + 4 * v15 - 4),
                *(_QWORD *)(v13 + 760) = v15 - 1,
                sub_3EAB70(v9, 4u, *(_DWORD *)(*(_QWORD *)(v9 + 832) + 84LL), a3, 0x3BEA45E214ADDC55LL, v16, 0),
                v17 = *(_QWORD *)(v9 + 832),
                a2 = v36,
                (v18 = *(_QWORD *)(v17 + 760)) == 0) )
          {
            sub_3E5460(a6, a1, a2);
          }
          v19 = *(_DWORD *)(*(_QWORD *)(v17 + 752) + 4 * v18 - 4);
          *(_QWORD *)(v17 + 760) = v18 - 1;
          v20 = a4 - v37;
          if ( *(_BYTE *)(*(_QWORD *)(v9 + 800) + 145LL) != v12 )
          {
            sub_3EAB70(v9, 3u, *(_DWORD *)(*(_QWORD *)(v9 + 832) + 84LL), (int)v37, 0x3BEA45E214ADDC55LL, v19, 1);
            sub_3EAB70(v9, 0xDu, *(_DWORD *)(*(_QWORD *)(v9 + 832) + 84LL), v16, v19, v16, 0);
            v20 = v37 + 1;
          }
          v21 = *(_QWORD *)(v9 + 832);
          v22 = *(_DWORD *)(v21 + 84);
          if ( v20 == a4 )
          {
            v23 = *(int *)(v21 + 64);
            if ( !v14 )
            {
              sub_3EAB70(v9, 1u, v20, v10, v23, v16, v22);
              sub_3E8540(*(_QWORD *)(v9 + 832), v16);
              sub_3E8540(*(_QWORD *)(v9 + 832), v19);
              goto LABEL_21;
            }
            sub_3EAB70(v9, 2u, v20, v23, v16, v10, v22);
            sub_3E8540(*(_QWORD *)(v9 + 832), v16);
            sub_3E8540(*(_QWORD *)(v9 + 832), v19);
          }
          else
          {
            v39 = v20;
            sub_3EAB70(v9, 3u, v22, 1, 0x3BEA45E214ADDC55LL, v19, 1);
            if ( v39 > 0 )
            {
              v26 = v9;
              v27 = 0;
              v28 = v26;
              do
              {
                v29 = v27;
                if ( *(_BYTE *)(*(_QWORD *)(v28 + 800) + 145LL) != v12 )
                  v29 = v37 - v27;
                if ( v12 )
                  v29 = a4 - 1 - v29;
                v30 = *(_QWORD *)(v28 + 832);
                v31 = v10 + v29;
                v32 = *(_DWORD *)(v30 + 84);
                v33 = *(int *)(v30 + 64);
                if ( v14 )
                  sub_3EAB70(v28, 2u, 1, v33, v16, v31, v32);
                else
                  sub_3EAB70(v28, 1u, 1, v31, v33, v16, v32);
                ++v27;
                sub_3EAB70(v28, 0xCu, *(_DWORD *)(*(_QWORD *)(v28 + 832) + 84LL), v16, v19, v16, 0);
              }
              while ( v39 != v27 );
              v9 = v28;
            }
            sub_3E8540(*(_QWORD *)(v9 + 832), v16);
            sub_3E8540(*(_QWORD *)(v9 + 832), v19);
            if ( !v14 )
            {
              v24 = *(_WORD *)(v9 + 48);
              if ( v24 != 124 )
                goto LABEL_22;
              goto LABEL_42;
            }
          }
          if ( v10 == **(_DWORD **)(*(_QWORD *)(v9 + 832) + 728LL) )
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 920LL) + 128LL) |= 2u;
LABEL_21:
          v24 = *(_WORD *)(v9 + 48);
          if ( v24 != 124 )
          {
LABEL_22:
            if ( v24 != 125 )
              return 1;
            v34 = 0;
            if ( *(_BYTE *)(*(_QWORD *)(v9 + 800) + 145LL) )
              v34 = 3;
            if ( v34 != (_DWORD)v37 )
              return 1;
          }
LABEL_42:
          sub_3EE280(v9, a4, v10);
          return 1;
        }
        goto LABEL_56;
      }
      if ( !under_debugger )
        sub_37E160(0xCCB1u, a2, a6);
LABEL_60:
      BUG();
    }
    if ( ((*(_BYTE *)(a1 + 105) - 2) & 0xFD) == 0 )
    {
LABEL_44:
      v13 = *(_QWORD *)(a1 + 832);
      v14 = 1;
      goto LABEL_12;
    }
    goto LABEL_56;
  }
LABEL_25:
  sub_3EA750(a1, a6);
  a2 = a4;
  if ( *(unsigned __int16 *)(a1 + 890) == a4 )
  {
    if ( ((*(_BYTE *)(a1 + 105) - 2) & 0xFD) == 0 )
    {
      if ( a5 != 1 )
        goto LABEL_9;
      goto LABEL_44;
    }
LABEL_56:
    if ( !under_debugger )
      sub_37E160(0xCCAFu, a2, a6);
    goto LABEL_60;
  }
  return 0;
}
