unsigned __int64 __fastcall sub_B59840(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdi
  char v8; // al
  __int64 v9; // rdi
  __int64 *v10; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v26[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v5 = a1 + 72;
    v6 = *(_QWORD *)(sub_B68470(a1 + 72) + 16);
    v7 = (v6 & 4) != 0 ? *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL) : v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v7 && v7 != 64 && (unsigned __int8)sub_B731B0() )
    {
      v14 = *(_QWORD *)(sub_B68470(v5) + 16);
      v15 = (v14 & 4) != 0 ? *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL) : v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v15 )
      {
        if ( v15 != 64 )
        {
          v16 = *(_QWORD *)(v15 + 64);
          if ( v16 )
          {
            if ( (*(_BYTE *)(v16 + 10) & 0x20) != 0
              && (*(_DWORD *)(a1 + 40) & 7) == 6
              && *(_DWORD *)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL) == 42 )
            {
              v17 = *(_QWORD *)(a1 + 152);
              v18 = (v17 >> 1) & 3;
              if ( v18 == 3 || v18 == 2 )
              {
                if ( !v17 || v18 != 2 || (v19 = v17 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                  BUG();
                v11 = *(_QWORD *)((*(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 48);
                goto LABEL_13;
              }
            }
          }
        }
      }
    }
  }
  v25 = 0;
  v8 = sub_B59650(a1, (__int64)&v25, 1, a4);
  v9 = v25;
  if ( !v8 )
  {
    v25 = a1;
    v9 = a1;
  }
  v10 = (__int64 *)sub_B53BF0(v9);
  v11 = (unsigned __int64)v10;
  if ( v10 )
  {
    v12 = *v10;
    if ( a2 && ((v12 >> 1) & 3) == 1 )
      return 0;
    v11 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_13;
  }
  if ( !a2 || (sub_B53FE0(a1) & 0xFFFFFFFD) != 0 )
  {
    v20 = *(_QWORD *)(a1 + 152);
    if ( v20 )
    {
      if ( ((v20 >> 1) & 3) == 2 )
      {
        v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v22 )
          {
            if ( a2 )
            {
              while ( (*(_BYTE *)sub_B9F900(v22) & 4) == 0 )
              {
                v24 = *(_QWORD *)sub_B9F900(v22) & 0xFFFFFFFFFFFFFFF8LL;
                if ( !v24 )
                  break;
                v22 = v24;
              }
            }
            else
            {
              while ( 1 )
              {
                v23 = *(_QWORD *)sub_B9F900(v22) & 0xFFFFFFFFFFFFFFF8LL;
                if ( !v23 )
                  break;
                v22 = v23;
              }
            }
            v11 = *(_QWORD *)(v22 + 48);
LABEL_13:
            if ( (unsigned __int8)sub_B59650(v11, (__int64)v26, 0, a4) && v26[0] )
              return v26[0];
          }
        }
      }
    }
  }
  return v11;
}

