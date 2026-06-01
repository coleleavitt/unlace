__int64 __fastcall sub_A2090(__int64 a1, char *a2, __int64 a3, char a4)
{
  bool v4; // zf
  int v6; // r15d
  __int64 v9; // rsi
  unsigned int v11; // r14d
  __int64 v12; // r13
  unsigned int v13; // ecx
  char v14; // al
  unsigned __int8 *v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // r10
  __int64 v21; // rdi
  _BYTE v22[16]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v23[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  __int128 v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v4 = *a2 == 10;
  v26 = __readfsqword(0x28u);
  if ( v4 )
  {
    *(_BYTE *)(a1 + 40) = 1;
  }
  else
  {
    v6 = *((_DWORD *)a2 + 1);
    if ( v6 > 1 && (v6 & (v6 - 1)) == 0 )
    {
      v9 = 9;
      v11 = v6 >> 1;
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL);
      if ( (unsigned __int8)sub_11CC20(v12, 9, (unsigned int)(v6 >> 1)) )
      {
        if ( *a2 != 1
          || (v9 = *((unsigned int *)a2 + 2),
              !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 264LL))(v12, v9)) )
        {
          if ( !a4 )
          {
            if ( (v14 = *a2, (unsigned __int8)(*a2 - 5) <= 1u)
              || v14 == 1
              || v14 == 14
              && ((v15 = *((unsigned __int8 **)a2 + 1),
                   v16 = *v15,
                   v17 = (unsigned int)(v16 - 5),
                   (unsigned __int8)(v16 - 5) <= 1u)
               || (_BYTE)v16 == 1
               || (_BYTE)v16 == 14
               && (unsigned __int8)sub_A0D90(*((char **)v15 + 1), v9, v17, v13)
               && (unsigned __int8)sub_A0D90((char *)(v20 + 16), v9, v18, v19))
              && (unsigned __int8)sub_A0D90((char *)v15 + 16, v9, v17, v13) )
            {
              sub_123A40(v22, a2);
              if ( (unsigned __int8)sub_127850(v22, v12, v11, 0) )
              {
                v21 = *(_QWORD *)(a1 + 16);
                v23[0] = 0;
                v23[1] = 0;
                v24 = 0;
                v25 = 0;
                sub_127FE0(v21, v23, v22, 1);
                if ( (unsigned __int8)sub_64820(v23, (_QWORD *)(a1 + 48)) && (unsigned __int8)sub_317F40(a1 + 64, &v24) )
                {
                  if ( !(unsigned __int8)sub_1272B0(a2, v12, v11, 0) )
                  {
                    if ( !under_debugger )
                      sub_383060(51071);
                    BUG();
                  }
                  sub_1207E0(a2, v12, 9, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), (unsigned int)v6);
                  ++*(_DWORD *)(a1 + 88);
                }
                if ( v24 )
                {
                  *(_QWORD *)&v25 = 0;
                  qfree();
                }
                qfree();
              }
              sub_11CDA0(v22);
            }
          }
        }
      }
    }
  }
  return 0;
}
