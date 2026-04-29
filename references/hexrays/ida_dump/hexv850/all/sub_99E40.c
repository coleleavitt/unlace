__int64 __fastcall sub_99E40(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  int v4; // r12d
  __int64 v5; // rbx
  _DWORD *v6; // r13
  _DWORD *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // eax
  _QWORD v11[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v14; // [rsp+58h] [rbp-A8h]
  __int64 v15; // [rsp+68h] [rbp-98h]
  _QWORD v16[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v17[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v18[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v19[10]; // [rsp+B0h] [rbp-50h] BYREF

  v19[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) == 4 )
  {
    v4 = *(_DWORD *)(a2 + 68);
    v5 = a2;
    if ( (unsigned __int8)sub_11B1C0(a2 + 48, v16, 1) )
    {
      if ( 8 * v4 - 1 == v16[0] )
      {
        v11[0] = &off_4AF7D0;
        v12[0] = 0xFFFFFFFF00000000LL;
        v13 = 0xFFFFFFFF00000000LL;
        v11[1] = a1;
        v15 = 0x4FFFFFFFFLL;
        v11[2] = 0;
        v11[3] = 0;
        v12[1] = 0;
        v14 = 0;
        v6 = (_DWORD *)sub_90930((__int64)v11, a2, 0);
        if ( !v6
          || (v7 = *(_DWORD **)(a2 + 40), *v6 != *v7)
          || !(unsigned int)sub_12B8C0(
                              *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                              a1,
                              a2,
                              (_DWORD)v7,
                              (_DWORD)v6,
                              (int)v6 + 32,
                              (__int64)(v6 + 12),
                              0) )
        {
          v2 = 0;
LABEL_9:
          v11[0] = &off_4AF7D0;
          sub_1181E0(&v13);
          sub_1181E0(v12);
          return v2;
        }
        v8 = *(_QWORD *)(a2 + 24);
        v17[1] = 0;
        v17[0] = 0xFFFFFFFF00000000LL;
        v18[0] = 0xFFFFFFFF00000000LL;
        v18[1] = 0;
        v19[0] = 0xFFFFFFFF00000000LL;
        v19[1] = 0;
        sub_32ADE0(v16, v8);
        LODWORD(v16[0]) = 8;
        sub_1205C0(v17);
        sub_1205C0(v19);
        v9 = *((_QWORD *)&v14 + 1);
        if ( (_DWORD)v15 == 1 )
        {
          if ( *((_QWORD *)&v14 + 1) )
          {
LABEL_14:
            v2 = sub_12E260(a1, *(_QWORD *)(v5 + 8), (unsigned int)v19, *(_QWORD *)(v9 + 8), (int)v9 + 64, 0);
            if ( (_BYTE)v2 && LOBYTE(v19[0]) != 4 && (unsigned int)sub_8F8F0(a1, (__int64)v6, v5, (__int64)v16, 0) )
            {
              if ( v5 && (unsigned __int8)sub_11D680(v6, *(_QWORD *)(v5 + 8), 0) )
              {
                sub_1207E0(v5, v6);
                v5 = (__int64)v6;
              }
              sub_118CD0(v5, v16);
              if ( *((_QWORD *)&v14 + 1) )
                sub_1189E0(*((_QWORD *)&v14 + 1));
              v10 = *(_DWORD *)(a1 + 24);
              BYTE1(v10) &= ~2u;
              LOBYTE(v10) = v10 | 0x80;
              *(_DWORD *)(a1 + 24) = v10;
              sub_118A10(v5, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
              sub_94710(a1, v5);
            }
            else
            {
              v2 = 0;
            }
            sub_1181E0(v19);
            sub_1181E0(v18);
            sub_1181E0(v17);
            goto LABEL_9;
          }
        }
        else if ( *((_QWORD *)&v14 + 1) )
        {
          if ( !under_debugger )
            sub_37CFE0(51679);
          BUG();
        }
        v9 = v5;
        goto LABEL_14;
      }
    }
  }
  return 0;
}
