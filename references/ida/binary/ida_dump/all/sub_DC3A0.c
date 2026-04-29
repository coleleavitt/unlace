__int64 __fastcall sub_DC3A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // r11d
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r13
  char v14; // al
  __int64 v16; // r13
  __int64 v17; // rax
  int v18; // eax
  int i; // r15d
  __int64 v20; // rax
  unsigned int v21; // [rsp+8h] [rbp-E0h]
  _QWORD v23[6]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v24[13]; // [rsp+80h] [rbp-68h] BYREF

  v24[5] = __readfsqword(0x28u);
  if ( !a3 )
  {
    if ( !under_debugger )
      sub_383060(51757);
LABEL_45:
    BUG();
  }
  if ( a4 && !(unsigned __int8)sub_122240(a3, *(_QWORD *)(a4 + 8), 0) )
  {
    if ( !under_debugger )
      sub_383060(51811);
    goto LABEL_45;
  }
  sub_124680(v23, a2, a3, 1);
  if ( sub_64930(v23, *(_DWORD *)(a1 + 132)) )
  {
    *(_QWORD *)(a1 + 104) = a3;
  }
  else if ( a3 == a4 )
  {
    *(_QWORD *)(a1 + 104) = 0;
  }
  else
  {
    v8 = sub_124B60(a2, *(unsigned int *)(a1 + 132), a3, a4, 0, 1);
    *(_QWORD *)(a1 + 104) = v8;
    if ( !v8 )
    {
      v16 = a3;
      do
      {
        if ( !a4 )
        {
          sub_127A20(v24, a2, v16, 1);
          LOBYTE(v18) = sub_64930(v24, *(_DWORD *)(a1 + 132));
          LODWORD(v5) = v18;
          if ( v24[2] )
          {
            v24[3] = 0;
            qfree();
          }
          qfree();
          if ( (_BYTE)v5 )
            break;
        }
        v17 = sub_120380(v16, 1);
        if ( v17 )
        {
          if ( *(_BYTE *)(v17 + 64) == 8 )
          {
            v5 = *(_QWORD *)(v17 + 72);
            for ( i = 0; (unsigned __int64)i < *(_QWORD *)(v5 + 32); ++i )
            {
              if ( *(_QWORD *)(a1 + 104) )
                break;
              if ( (unsigned int)for_all_arglocs() )
                *(_QWORD *)(a1 + 104) = v16;
            }
          }
        }
        v16 = *(_QWORD *)(v16 + 16);
        if ( a4 == v16 )
          break;
      }
      while ( !*(_QWORD *)(a1 + 104) );
    }
  }
  if ( !a5 )
    goto LABEL_12;
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_DWORD *)(a1 + 128);
  v5 = *(_QWORD *)(v9 + 32);
  v11 = *(_QWORD *)(v9 + 480);
  v12 = *(_QWORD *)(a3 + 24) + 1LL;
  v13 = *(_QWORD *)(v11 + 112);
  if ( *(char *)(*(_QWORD *)(v11 + 8) + 10LL) >= 0
    || (v21 = *(_DWORD *)(a1 + 128), LOBYTE(v24[0]) = 1, v20 = sub_CFF70(), v10 = v21, v20 != 1)
    || v12 == -1
    || (v14 = sub_32E840(v24, v13, v21, v12, v12 + 1, 1), v10 = v21, !v14) )
  {
    v14 = sub_32E840(v24, v13, v10, v5, v12, 1);
  }
  if ( (v14 & 2) == 0 )
  {
    *(_QWORD *)(a1 + 112) = -1;
LABEL_12:
    LOBYTE(v5) = *(_QWORD *)(a1 + 104) != 0;
    goto LABEL_13;
  }
  LODWORD(v5) = a5;
  *(_QWORD *)(a1 + 112) = v24[0];
  if ( v14 != 2 )
    goto LABEL_12;
LABEL_13:
  if ( v23[2] )
  {
    v23[3] = 0;
    qfree();
  }
  qfree();
  return (unsigned int)v5;
}
