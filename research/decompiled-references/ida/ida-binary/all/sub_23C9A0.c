__int64 __fastcall sub_23C9A0(unsigned int *a1, __int64 a2, __int64 a3, char *a4, double a5)
{
  __int64 v5; // rbp
  _QWORD *v6; // r12
  unsigned int v8; // eax
  int v9; // eax
  unsigned int *v10; // rax
  __int64 *v11; // rbp
  __int64 v12; // rbp
  _QWORD v13[5]; // [rsp+0h] [rbp-28h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( (_DWORD)a2 == 5 )
  {
LABEL_10:
    *((_BYTE *)a1 + 277) = 1;
    goto LABEL_11;
  }
  if ( a1[22] == 8 )
  {
    LODWORD(v5) = -1;
    return (unsigned int)v5;
  }
  if ( (_DWORD)a2 != 2 )
  {
    a1[58] = a2;
    if ( (int)a2 > 4 || (a4 = byte_5E2AE2, a3 = a1[22], ((unsigned int)a3 & byte_5E2AE2[(int)a2]) != 0) )
    {
      v6 = QT::QCoreApplication::self;
      switch ( a2 )
      {
        case 0LL:
          LODWORD(v5) = sub_20CEA0(
                          dbg,
                          3,
                          *(_QWORD *)a1,
                          *((_QWORD *)a1 + 1),
                          *((_QWORD *)a1 + 3),
                          a1[10],
                          *((_QWORD *)a1 + 4),
                          a1[11],
                          0,
                          *((_QWORD *)a1 + 2));
          if ( (int)v5 <= 0 )
            return (unsigned int)v5;
          goto LABEL_33;
        case 1LL:
          LODWORD(v5) = sub_20CEA0(dbg, 4, *a1, a1[1], a1[2], 0);
          if ( (int)v5 > 0 )
          {
LABEL_33:
            a1[22] = 4;
            byte_8CC5ED = 0;
          }
          return (unsigned int)v5;
        case 3LL:
          LODWORD(v5) = sub_20CEA0(dbg, 9, 0);
          goto LABEL_27;
        case 4LL:
          LODWORD(v5) = sub_20CEA0(dbg, 5, 0);
LABEL_27:
          if ( (int)v5 <= 0 )
            goto LABEL_22;
          v8 = a1[37];
          byte_8CC5ED = 1;
          v9 = v8 & 0xFFFFFFF;
          if ( v9 != 2 && v9 != 12 )
            (*(void (__fastcall **)(_QWORD *))(v6[2] + 216LL))(v6 + 2);
          goto LABEL_17;
        case 6LL:
          if ( a1[22] == 4 )
          {
            sub_232CB0((__int64)a1, *a1, a5);
            *a1 = -1;
          }
          LODWORD(v5) = a1[22] != 4;
          return (unsigned int)v5;
        case 7LL:
          LODWORD(v5) = sub_20CEA0(dbg, 25, a1 + 4, *(_QWORD *)a1, a1[2], a1[3], 0);
          goto LABEL_22;
        case 8LL:
          LODWORD(v5) = sub_20CEA0(dbg, 26, a1 + 3, *(_QWORD *)a1, a1[2], 0);
          goto LABEL_22;
        case 9LL:
          LODWORD(v5) = sub_20CEA0(dbg, 24, a1 + 4, a1[3], *(_QWORD *)a1, a1[2]);
          goto LABEL_22;
        case 10LL:
          LODWORD(v5) = sub_20CEA0(dbg, 20, *((_QWORD *)a1 + 3), *a1, a1[4], 0);
          goto LABEL_22;
        case 11LL:
          v12 = *(_QWORD *)a1;
          if ( (unsigned int)sub_20CEA0(dbg, 31, v13, *(_QWORD *)a1, *((_QWORD *)a1 + 1), a1[4]) == 1 )
            v12 = v13[0];
          *(_QWORD *)a1 = v12;
          goto LABEL_11;
        case 12LL:
          if ( *((_QWORD *)a1 + 8)
            && (*(unsigned __int8 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 224LL))(QT::QCoreApplication::self + 2) )
          {
            goto LABEL_11;
          }
          LODWORD(v5) = sub_20CEA0(dbg, 8, 0);
LABEL_22:
          if ( (int)v5 < -1 )
            goto LABEL_23;
          return (unsigned int)v5;
        case 13LL:
          LODWORD(v5) = sub_20CEA0(dbg, 15, *a1, 0);
          goto LABEL_22;
        case 14LL:
          LODWORD(v5) = sub_20CEA0(dbg, 16, *a1, 0);
          goto LABEL_22;
        case 15LL:
          LODWORD(v5) = sub_20CEA0(dbg, 17, *a1, a1[1], 0);
          goto LABEL_22;
        case 16LL:
          LODWORD(v5) = sub_20CEA0(dbg, 18, *a1, a1[8], *((_QWORD *)a1 + 5), 0);
          goto LABEL_22;
        case 17LL:
          LODWORD(v5) = sub_20CEA0(dbg, 19, *a1, a1[9], *((_QWORD *)a1 + 6), 0);
          goto LABEL_22;
        case 18LL:
          return sub_23C890((__int64)a1, *(__int64 **)a1);
        case 19LL:
          LODWORD(v5) = sub_20CEA0(dbg, 22, a1 + 4, *(_QWORD *)a1, *((_QWORD *)a1 + 1), *((_QWORD *)a1 + 2), 0);
          goto LABEL_22;
        case 20LL:
          LODWORD(v5) = sub_20CEA0(dbg, 23, a1 + 4, *(_QWORD *)a1, *((_QWORD *)a1 + 1), *((_QWORD *)a1 + 2), 0);
          goto LABEL_22;
        case 21LL:
          v10 = *((unsigned int **)a1 + 7);
          v11 = (__int64 *)(v10 + 14);
          if ( (unsigned int)sub_20CEA0(
                               dbg,
                               34,
                               v13,
                               *((_QWORD *)v10 + 1),
                               v10[4],
                               *((_QWORD *)v10 + 3),
                               v10[1],
                               *((_QWORD *)v10 + 4),
                               *((_QWORD *)v10 + 5),
                               *((_QWORD *)v10 + 6),
                               v10 + 14,
                               v10 + 20,
                               *v10) != 1 )
          {
            v13[0] = -1;
            sub_2296F0(v11, "Debugger plugin does not support an application function call");
          }
          if ( qword_8CC600 )
            *(_QWORD *)(*((_QWORD *)a1 + 7) + 8LL) = v13[0];
          goto LABEL_11;
        case 22LL:
          LODWORD(v5) = sub_20CEA0(dbg, 35, *a1);
          goto LABEL_22;
        case 23LL:
          LODWORD(v5) = sub_20CEA0(dbg, 36, *a1, *((_QWORD *)a1 + 1), 0);
          goto LABEL_22;
        case 24LL:
          sub_20CEA0(dbg, 13, *(_QWORD *)a1, a1[2]);
          goto LABEL_11;
        case 25LL:
          LODWORD(v5) = sub_20CEA0(
                          dbg,
                          37,
                          *a1,
                          *((_QWORD *)a1 + 1),
                          *((_QWORD *)a1 + 2),
                          *((_QWORD *)a1 + 3),
                          *((_QWORD *)a1 + 4));
          goto LABEL_22;
        case 26LL:
          LODWORD(v5) = *((unsigned __int8 *)a1 + 278);
          *((_BYTE *)a1 + 278) = 0;
          return (unsigned int)v5;
        case 27LL:
          LODWORD(v5) = sub_20CEA0(
                          dbg,
                          42,
                          a1,
                          *((_QWORD *)a1 + 1),
                          *((_QWORD *)a1 + 2),
                          *((_QWORD *)a1 + 3),
                          a1[8],
                          *((_QWORD *)a1 + 5));
          return (unsigned int)v5;
        case 28LL:
          return (unsigned int)sub_20CEA0(dbg, 33, *a1, *((_QWORD *)a1 + 1)) != 0;
        case 29LL:
          LODWORD(v5) = sub_20CEA0(dbg, 12, *(unsigned __int8 *)a1);
          goto LABEL_22;
        default:
          if ( under_debugger )
            goto LABEL_71;
          interr(40184, a2, a3, a4, a5);
          goto LABEL_68;
      }
    }
LABEL_8:
    if ( under_debugger )
LABEL_71:
      BUG();
    interr(40183, a2, a3, a4, a5);
    goto LABEL_10;
  }
  if ( a1[58] == 12 )
  {
LABEL_11:
    LODWORD(v5) = 1;
    return (unsigned int)v5;
  }
  a1[58] = 2;
  if ( (a1[22] & 2) == 0 )
    goto LABEL_8;
  v6 = QT::QCoreApplication::self;
  LODWORD(v5) = sub_20CEA0(dbg, 11, &qword_8CC340, 0);
  if ( (int)v5 < -1 )
  {
LABEL_23:
    byte_8CC55A = 1;
    a1[22] = 8;
  }
  else if ( (int)v5 > 0 )
  {
LABEL_17:
    if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) == 0xC || (HIDWORD(qword_8CC350) & 0xFFFFFFF) == 2 )
    {
LABEL_68:
      a1[22] = 1;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(v6[2] + 224LL))(v6 + 2) )
    {
      a1[22] = 2;
    }
    else
    {
      a1[22] = 4;
    }
  }
  return (unsigned int)v5;
}
