__int64 __fastcall sub_97480(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  _DWORD *v9; // r11
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r8
  int v17; // [rsp+0h] [rbp-C8h]
  int v18; // [rsp+0h] [rbp-C8h]
  int v19; // [rsp+8h] [rbp-C0h]
  _DWORD *v20; // [rsp+10h] [rbp-B8h]
  __int64 v21; // [rsp+10h] [rbp-B8h]
  int v22; // [rsp+10h] [rbp-B8h]
  __int64 v23; // [rsp+10h] [rbp-B8h]
  int v24; // [rsp+18h] [rbp-B0h]
  int v25; // [rsp+18h] [rbp-B0h]
  __int64 v26; // [rsp+18h] [rbp-B0h]
  __int64 v27; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v29[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v30; // [rsp+40h] [rbp-88h]
  __int128 v31; // [rsp+48h] [rbp-80h]
  __int64 v32[3]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v33; // [rsp+78h] [rbp-50h]
  unsigned __int64 v34; // [rsp+88h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( *(int *)(a2 + 36) > 4 )
    return 0;
  v4 = a2 + 64;
  v2 = sub_120170(a2 + 64, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
  if ( (_BYTE)v2 )
    return 0;
  v6 = sub_11C8A0(a2, &v28);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL), *(unsigned int *)(v6 + 4), 1);
  if ( (v8 & (v8 - 1)) != 0 )
  {
    return 0;
  }
  else
  {
    v29[0] = 0;
    v29[1] = 0;
    v30 = 0;
    v31 = 0;
    sub_123EA0(a1, v29, v28, 0, 4294901760LL);
    v9 = (_DWORD *)sub_124CC0(a1, v29, a2, 0, 0, 1);
    if ( v9 )
    {
      if ( v9[9] == *(_DWORD *)(a2 + 36) && (unsigned int)(*v9 - 23) <= 1 )
      {
        v20 = v9;
        if ( (unsigned __int8)sub_152630(v9, (char *)&v27 + 4) )
        {
          v10 = 1LL << (8 * *((_BYTE *)v20 + 36) - BYTE4(v27));
          if ( (unsigned __int64)(8 * v20[9] - HIDWORD(v27)) >= 0x40 )
            v10 = 0;
          if ( v10 == v8 )
          {
            if ( (unsigned __int8)sub_125B60(v20 + 8, v28, 0) )
            {
              v24 = (int)v20;
              v21 = (__int64)(v20 + 16);
              if ( !(unsigned __int8)sub_11EFE0(v28, v21, 2) )
              {
                memset(v32, 0, sizeof(v32));
                v33 = 0;
                sub_127FE0(a1, (__int64)v32, v21, 0, v11, v12, v17, (int)v29, v21, v24, v27);
                v2 = sub_B02D0(a1, v19, (unsigned int)v32, v25, a2, v13, v18, v19, v22, v25, v27, v28, v29[0]);
                if ( (_BYTE)v2 )
                {
                  v14 = 8;
                  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
                  v16 = (unsigned int)(2 * *(_DWORD *)(v7 + 4));
                  *(_DWORD *)(v7 + 4) = v16;
                  if ( *(_DWORD *)v26 == 23 )
                    v14 = 9;
                  sub_1207E0(v28, v15, v14, *(_QWORD *)(v26 + 24), v16);
                  sub_1571F0(a1, a2, v4, v26, v23, 1);
                  sub_11D5D0(a2, v15);
                  sub_11D5A0(v26);
                }
                sub_93B40(v32);
              }
            }
          }
        }
      }
    }
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v30);
    }
    qfree(v29[0]);
  }
  return v2;
}
