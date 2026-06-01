__int64 __fastcall sub_D237A0(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rbx
  char v7; // bl
  _BYTE *v8; // rax
  __int16 v9; // bx
  _WORD *v10; // rax
  int v11; // ebx
  _DWORD *v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rbx
  bool v16; // cc
  __int64 v17; // rax
  void *v18; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v19; // [rsp+8h] [rbp-90h]
  int v20; // [rsp+10h] [rbp-88h]
  _BYTE v21[48]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v22; // [rsp+60h] [rbp-38h]
  int v23; // [rsp+68h] [rbp-30h]

  v4 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_DFF430(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v7 = sub_CFEA20(*(_QWORD *)(a1 + 560));
        v8 = (_BYTE *)sub_CE8890((__int64)v21);
        goto LABEL_32;
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_DFF430(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v7 = sub_CFF120(*(_QWORD *)(a1 + 560));
        v8 = (_BYTE *)sub_CE8AA0((__int64)v21);
        goto LABEL_32;
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_DFF430(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v9 = sub_CFF630(*(_QWORD *)(a1 + 560));
        v10 = (_WORD *)sub_CE8E90((__int64)v21);
        goto LABEL_15;
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_DFF430(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v9 = sub_CFFD50(*(_QWORD *)(a1 + 560));
        v10 = (_WORD *)sub_CE90A0((__int64)v21);
LABEL_15:
        *v10 = v9;
        sub_E00FC0(v21);
        sub_DFF560(v21);
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_DFF430(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v11 = sub_CFFE60(*(_QWORD *)(a1 + 560));
        v12 = (_DWORD *)sub_CE9490((__int64)v21);
        goto LABEL_20;
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_DFF430(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v11 = sub_D00570(*(_QWORD *)(a1 + 560));
        v12 = (_DWORD *)sub_CE96A0((__int64)v21);
LABEL_20:
        *v12 = v11;
        sub_E00FC0(v21);
        sub_DFF560(v21);
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_DFF430(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v13 = sub_D00680(*(_QWORD *)(a1 + 560));
        v14 = (_QWORD *)sub_CE9C80((__int64)v21);
        goto LABEL_25;
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_DFF430(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v13 = sub_D00DC0(*(_QWORD *)(a1 + 560));
        v14 = (_QWORD *)sub_CE9E90((__int64)v21);
LABEL_25:
        *v14 = v13;
        sub_E00FC0(v21);
        sub_DFF560(v21);
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D23670(a1 + 384, a3);
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D1E370(a1 + 384, a3);
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_DFF430(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v7 = sub_CE52A0(*(_QWORD *)(a1 + 560));
        v8 = (_BYTE *)sub_CEAA70((__int64)v21);
LABEL_32:
        *v8 = v7;
        sub_E00FC0(v21);
        sub_DFF560(v21);
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_DFF430(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        sub_CE7240((__int64)&v18, *(_QWORD *)(a1 + 560));
        v15 = sub_CEB480((__int64)v21);
        sub_BF5070(v15, (__int64)&v18);
        v16 = v19 <= 0x40;
        *(_DWORD *)(v15 + 16) = v20;
        if ( !v16 && v18 )
          operator delete[](v18);
        sub_E00FC0(v21);
        v4 = 1;
        sub_DFF560(v21);
      }
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D234D0(a1 + 384, a3);
      }
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_DFF430(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        sub_CE52D0((__int64)&v18, *(_QWORD *)(a1 + 560));
        v17 = sub_CEACF0((__int64)v21);
        sub_DFF6C0(v17, &v18);
        sub_DFF560(&v18);
        sub_E00FC0(v21);
        sub_DFF560(v21);
      }
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_DFF430(&v18, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        sub_CE6900((__int64)v21, *(_QWORD *)(a1 + 560));
        v6 = sub_CEB200((__int64)&v18);
        sub_DFF6C0(v6, v21);
        *(_QWORD *)(v6 + 48) = v22;
        *(_DWORD *)(v6 + 56) = v23;
        sub_DFF560(v21);
        sub_E00FC0(&v18);
        sub_DFF560(&v18);
      }
      break;
  }
  return v4;
}

