__int64 __fastcall sub_D474E0(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
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
        sub_E23170(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v7 = sub_D22760(*(_QWORD *)(a1 + 560));
        v8 = (_BYTE *)sub_D0C5D0((__int64)v21);
        goto LABEL_32;
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_E23170(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v7 = sub_D22E60(*(_QWORD *)(a1 + 560));
        v8 = (_BYTE *)sub_D0C7E0((__int64)v21);
        goto LABEL_32;
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_E23170(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v9 = sub_D23370(*(_QWORD *)(a1 + 560));
        v10 = (_WORD *)sub_D0CBD0((__int64)v21);
        goto LABEL_15;
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_E23170(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v9 = sub_D23A90(*(_QWORD *)(a1 + 560));
        v10 = (_WORD *)sub_D0CDE0((__int64)v21);
LABEL_15:
        *v10 = v9;
        sub_E24D00(v21);
        sub_E232A0(v21);
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_E23170(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v11 = sub_D23BA0(*(_QWORD *)(a1 + 560));
        v12 = (_DWORD *)sub_D0D1D0((__int64)v21);
        goto LABEL_20;
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_E23170(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v11 = sub_D242B0(*(_QWORD *)(a1 + 560));
        v12 = (_DWORD *)sub_D0D3E0((__int64)v21);
LABEL_20:
        *v12 = v11;
        sub_E24D00(v21);
        sub_E232A0(v21);
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_E23170(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v13 = sub_D243C0(*(_QWORD *)(a1 + 560));
        v14 = (_QWORD *)sub_D0D9C0((__int64)v21);
        goto LABEL_25;
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_E23170(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v13 = sub_D24B00(*(_QWORD *)(a1 + 560));
        v14 = (_QWORD *)sub_D0DBD0((__int64)v21);
LABEL_25:
        *v14 = v13;
        sub_E24D00(v21);
        sub_E232A0(v21);
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D473B0(a1 + 384, a3);
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D420B0(a1 + 384, a3);
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_E23170(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        v7 = sub_D08FE0(*(_QWORD *)(a1 + 560));
        v8 = (_BYTE *)sub_D0E7B0((__int64)v21);
LABEL_32:
        *v8 = v7;
        sub_E24D00(v21);
        sub_E232A0(v21);
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_E23170(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        sub_D0AF80((__int64)&v18, *(_QWORD *)(a1 + 560));
        v15 = sub_D0F1C0((__int64)v21);
        sub_C18DB0(v15, (__int64)&v18);
        v16 = v19 <= 0x40;
        *(_DWORD *)(v15 + 16) = v20;
        if ( !v16 && v18 )
          operator delete[](v18);
        sub_E24D00(v21);
        v4 = 1;
        sub_E232A0(v21);
      }
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D47210(a1 + 384, a3);
      }
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_E23170(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        sub_D09010((__int64)&v18, *(_QWORD *)(a1 + 560));
        v17 = sub_D0EA30((__int64)v21);
        sub_E23400(v17, &v18);
        sub_E232A0(&v18);
        sub_E24D00(v21);
        sub_E232A0(v21);
      }
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_E23170(&v18, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 224LL) + 8LL * a3));
        sub_D0A640((__int64)v21, *(_QWORD *)(a1 + 560));
        v6 = sub_D0EF40((__int64)&v18);
        sub_E23400(v6, v21);
        *(_QWORD *)(v6 + 48) = v22;
        *(_DWORD *)(v6 + 56) = v23;
        sub_E232A0(v21);
        sub_E24D00(&v18);
        sub_E232A0(&v18);
      }
      break;
  }
  return v4;
}
