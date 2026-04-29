__int64 __fastcall sub_90DC0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  _DWORD *v9; // r11
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r8
  _DWORD *v15; // [rsp+10h] [rbp-B8h]
  _DWORD *v16; // [rsp+10h] [rbp-B8h]
  _DWORD *v17; // [rsp+18h] [rbp-B0h]
  int v18; // [rsp+24h] [rbp-A4h] BYREF
  __int64 v19; // [rsp+28h] [rbp-A0h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v21; // [rsp+40h] [rbp-88h]
  __int128 v22; // [rsp+48h] [rbp-80h]
  _QWORD v23[3]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v24; // [rsp+78h] [rbp-50h]
  unsigned __int64 v25; // [rsp+88h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( *(int *)(a2 + 36) > 4 )
    return 0;
  v4 = a2 + 64;
  v2 = sub_119AB0(a2 + 64, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
  if ( (_BYTE)v2 )
    return 0;
  v6 = sub_1161E0(a2, &v19);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = sub_323690(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL), *(unsigned int *)(v6 + 4), 1);
  if ( (v8 & (v8 - 1)) != 0 )
  {
    return 0;
  }
  else
  {
    v20[0] = 0;
    v20[1] = 0;
    v21 = 0;
    v22 = 0;
    sub_11D7E0(a1, v20, v19, 0, 4294901760LL);
    v9 = (_DWORD *)sub_11E600(a1, v20, a2, 0, 0, 1);
    if ( v9 )
    {
      if ( v9[9] == *(_DWORD *)(a2 + 36) && (unsigned int)(*v9 - 23) <= 1 )
      {
        v15 = v9;
        if ( (unsigned __int8)sub_14BF70(v9, &v18) )
        {
          v10 = 1LL << (8 * *((_BYTE *)v15 + 36) - v18);
          if ( (unsigned __int64)(8 * v15[9] - v18) >= 0x40 )
            v10 = 0;
          if ( v10 == v8 )
          {
            if ( (unsigned __int8)sub_11F4A0(v15 + 8, v19, 0) )
            {
              v17 = v15;
              v16 = v15 + 16;
              if ( !(unsigned __int8)sub_118920(v19, v16, 2) )
              {
                memset(v23, 0, sizeof(v23));
                v24 = 0;
                sub_121920(a1, v23, v16, 0);
                v2 = sub_A9C10(a1, (unsigned int)v20, (unsigned int)v23, (_DWORD)v17, a2, v11);
                if ( (_BYTE)v2 )
                {
                  v12 = 8;
                  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
                  v14 = (unsigned int)(2 * *(_DWORD *)(v7 + 4));
                  *(_DWORD *)(v7 + 4) = v14;
                  if ( *v17 == 23 )
                    v12 = 9;
                  sub_11A120(v19, v13, v12, *((_QWORD *)v17 + 3), v14);
                  sub_150B30(a1, a2, v4, v17, v16, 1);
                  sub_116F10(a2, v13);
                  sub_116EE0(v17);
                }
                sub_8D480(v23);
              }
            }
          }
        }
      }
    }
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21);
    }
    qfree(v20[0]);
  }
  return v2;
}
