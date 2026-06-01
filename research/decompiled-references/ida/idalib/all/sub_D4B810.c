__int64 __fastcall sub_D4B810(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  bool v4; // cc
  unsigned __int8 v5; // al
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  unsigned int v8; // eax
  __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // rdx
  void *v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // eax
  void *v15; // rcx
  __int64 v16; // rdx
  void *v17; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+8h] [rbp-B0h]
  int v19; // [rsp+10h] [rbp-A8h]
  void *v20; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-90h]
  char v22; // [rsp+2Ch] [rbp-8Ch]
  int v23; // [rsp+30h] [rbp-88h]
  unsigned int v24; // [rsp+60h] [rbp-58h] BYREF
  char v25; // [rsp+64h] [rbp-54h]
  __int64 v26; // [rsp+68h] [rbp-50h]
  int v27; // [rsp+70h] [rbp-48h]
  char v28; // [rsp+74h] [rbp-44h]
  int v29; // [rsp+78h] [rbp-40h]

  switch ( a2 )
  {
    case 0:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v5 = sub_D22760(*(_QWORD *)(a1 + 560));
        v25 &= ~1u;
        v24 = 2;
        v26 = v5;
        v27 = 8;
        v28 = 0;
        goto LABEL_35;
      }
      break;
    case 1:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        LOBYTE(v6) = sub_D22E60(*(_QWORD *)(a1 + 560));
        v21 = 8;
        v6 = (unsigned __int8)v6;
        goto LABEL_32;
      }
      break;
    case 2:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v7 = sub_D23370(*(_QWORD *)(a1 + 560));
        v25 &= ~1u;
        v24 = 2;
        v26 = v7;
        v27 = 16;
        v28 = 0;
        goto LABEL_35;
      }
      break;
    case 3:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        LOWORD(v6) = sub_D23A90(*(_QWORD *)(a1 + 560));
        v21 = 16;
        v6 = (unsigned __int16)v6;
        goto LABEL_32;
      }
      break;
    case 4:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v8 = sub_D23BA0(*(_QWORD *)(a1 + 560));
        v25 &= ~1u;
        v24 = 2;
        v26 = v8;
        v27 = 32;
        v28 = 0;
        goto LABEL_35;
      }
      break;
    case 5:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        LODWORD(v6) = sub_D242B0(*(_QWORD *)(a1 + 560));
        v21 = 32;
        v6 = (unsigned int)v6;
        goto LABEL_32;
      }
      break;
    case 6:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v9 = sub_D243C0(*(_QWORD *)(a1 + 560));
        v25 &= ~1u;
        v24 = 2;
        v26 = v9;
        v27 = 64;
        v28 = 0;
        goto LABEL_35;
      }
      break;
    case 7:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = sub_D24B00(*(_QWORD *)(a1 + 560));
        v21 = 64;
        goto LABEL_32;
      }
      break;
    case 8:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v10 = (void *)sub_D25090(*(_QWORD *)(a1 + 560));
        v18 = v11;
        v17 = v10;
        sub_D47D10((__int64)&v20, (__int64)&v17, 0);
        goto LABEL_28;
      }
      break;
    case 9:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v12 = (void *)sub_D251C0(*(_QWORD *)(a1 + 560));
        v18 = v13;
        v17 = v12;
        sub_D4B780((__int64)&v20, (__int64)&v17, 0);
LABEL_28:
        sub_B96770((__int64)&v24, (__int64 *)&v20);
        if ( v21 <= 0x40 )
          goto LABEL_35;
        goto LABEL_33;
      }
      break;
    case 10:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        LOBYTE(v6) = sub_D08FE0(*(_QWORD *)(a1 + 560));
        v21 = 1;
        v6 = (unsigned __int8)v6;
LABEL_32:
        v20 = (void *)v6;
        v22 = 1;
        sub_B96770((__int64)&v24, (__int64 *)&v20);
        if ( v21 > 0x40 )
        {
LABEL_33:
          if ( v20 )
            operator delete[](v20);
        }
LABEL_35:
        sub_D08A00(a1 + 1056, (int *)&v24);
        v4 = v24 <= 1;
        *(_DWORD *)(a1 + 1120) = 2;
        if ( v4 )
          goto LABEL_48;
        goto LABEL_47;
      }
      break;
    case 11:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        sub_D0AF80((__int64)&v17, *(_QWORD *)(a1 + 560));
        v14 = v18;
        v15 = v17;
        v21 = v18;
        if ( (unsigned int)v18 > 0x40 )
        {
          sub_2205510(&v20);
          v14 = v21;
          v15 = v20;
        }
        v27 = v14;
        v25 &= ~1u;
        v23 = v19;
        v26 = (__int64)v15;
        v28 = BYTE4(v18);
        v29 = v19;
        v24 = 4;
        sub_D08A00(a1 + 1056, (int *)&v24);
        v4 = v24 <= 1;
        *(_DWORD *)(a1 + 1120) = 2;
        if ( !v4 )
          sub_A4F8E0((int *)&v24);
        if ( (unsigned int)v18 > 0x40 && v17 )
          operator delete[](v17);
        goto LABEL_48;
      }
      break;
    case 12:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = (void *)sub_D08C00(*(_QWORD *)(a1 + 560));
        v18 = v16;
        sub_CFEAE0((__int64)&v20, (__int64)&v17);
        sub_C18B90((__int64)&v24, &v20);
        sub_9955A0(&v20);
        sub_D08A00(a1 + 1056, (int *)&v24);
        v4 = v24 <= 1;
        *(_DWORD *)(a1 + 1120) = 2;
        if ( !v4 )
LABEL_47:
          sub_A4F8E0((int *)&v24);
LABEL_48:
        result = 1;
      }
      break;
    case 13:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        result = sub_D09510(a1, a3);
      break;
    case 14:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        sub_D0A640((__int64)&v24, *(_QWORD *)(a1 + 560));
        sub_E34130(&v20, &v24, **(_QWORD **)(a1 + 368));
        sub_D08A00(a1 + 1056, (int *)&v20);
        v4 = (unsigned int)v20 <= 1;
        *(_DWORD *)(a1 + 1120) = 2;
        if ( !v4 )
          sub_A4F8E0((int *)&v20);
        sub_E232A0(&v24);
        result = 1;
      }
      break;
  }
  return result;
}
