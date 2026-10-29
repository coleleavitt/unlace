__int64 __fastcall sub_933EE0(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rbp
  char v8; // al
  __int64 v9; // rdi
  char v10; // bp
  char v11; // bp
  __int64 v12; // rbp
  __int16 v13; // ax
  __int64 v14; // rdi
  __int16 v15; // bp
  __int16 v16; // bp
  __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // rdi
  int v20; // ebp
  int v21; // ebp
  __int64 v22; // rbp
  void *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // r13
  char v30; // bp
  char v31; // al
  __int64 v32; // rdi
  unsigned __int8 v33; // [rsp+Fh] [rbp-A9h]
  unsigned __int8 v34; // [rsp+Fh] [rbp-A9h]
  void *v35; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v36; // [rsp+18h] [rbp-A0h]
  void *v37; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v38; // [rsp+28h] [rbp-90h]
  void *v39; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v40; // [rsp+38h] [rbp-80h]
  void *v41; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v42; // [rsp+48h] [rbp-70h]
  void *v43; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v44; // [rsp+58h] [rbp-60h]
  void *v45; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v46; // [rsp+78h] [rbp-40h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v7 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v8 = sub_915550(*(_QWORD *)(a1 + 568));
      v9 = *(_QWORD *)(a1 + 568);
      LOBYTE(v45) = v8;
      LOBYTE(v43) = sub_915550(v9);
      return sub_924430((_QWORD *)(a1 + 384), v7, 0x10u, (unsigned __int8 *)&v43, (unsigned __int8 *)&v45);
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v10 = sub_915900(*(_QWORD *)(a1 + 568));
        v11 = v10 * sub_915900(*(_QWORD *)(a1 + 568));
        *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v11;
      }
      return 1;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v12 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v13 = sub_915930(*(_QWORD *)(a1 + 568));
      v14 = *(_QWORD *)(a1 + 568);
      LOWORD(v45) = v13;
      LOWORD(v43) = sub_915930(v14);
      return sub_9247A0((_QWORD *)(a1 + 384), v12, 0x20u, (unsigned __int16 *)&v43, (unsigned __int16 *)&v45);
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v15 = sub_915CE0(*(_QWORD *)(a1 + 568));
        v16 = sub_915CE0(*(_QWORD *)(a1 + 568)) * v15;
        *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v16;
      }
      return 1;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v17 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v18 = sub_915D10(*(_QWORD *)(a1 + 568));
      v19 = *(_QWORD *)(a1 + 568);
      LODWORD(v45) = v18;
      LODWORD(v43) = sub_915D10(v19);
      return sub_924B10((_QWORD *)(a1 + 384), v17, 0x40u, (unsigned int *)&v43, (unsigned int *)&v45);
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v20 = sub_9160C0(*(_QWORD *)(a1 + 568));
        v21 = sub_9160C0(*(_QWORD *)(a1 + 568)) * v20;
        *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v21;
      }
      return 1;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v22 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v23 = (void *)sub_9160F0(*(_QWORD *)(a1 + 568));
      v24 = *(_QWORD *)(a1 + 568);
      v45 = v23;
      v43 = (void *)sub_9160F0(v24);
      return sub_924E80((_QWORD *)(a1 + 384), v22, 0x80u, &v43, (unsigned __int64 *)&v45);
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v25 = sub_9164A0(*(_QWORD *)(a1 + 568));
        v26 = sub_9164A0(*(_QWORD *)(a1 + 568)) * v25;
        *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v26;
      }
      return 1;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v27 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_919FD0((__int64)&v35, v27);
        sub_919FD0((__int64)&v37, *(_QWORD *)(a1 + 568));
        v40 = 3;
        v39 = &byte_7;
        v42 = v36;
        if ( v36 > 0x40 )
          sub_2585B30(&v41);
        else
          v41 = v35;
        v44 = v38;
        if ( v38 > 0x40 )
          sub_2585B30(&v43);
        else
          v43 = v37;
        sub_258C0C0(&v45, &v43, &v41);
        if ( v40 > 0x40 && v39 )
          operator delete[](v39);
        v39 = v45;
        v40 = v46;
        if ( v44 > 0x40 && v43 )
          operator delete[](v43);
        if ( v42 > 0x40 && v41 )
          operator delete[](v41);
        sub_91C660(*(_QWORD *)(a1 + 568), (__int64)&v39);
        if ( v40 > 0x40 && v39 )
          operator delete[](v39);
        if ( v38 > 0x40 && v37 )
          operator delete[](v37);
        if ( v36 > 0x40 && v35 )
          operator delete[](v35);
      }
      return 1;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v28 = *(_QWORD *)(a1 + 568);
      v29 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_91A020((__int64)&v45, v28);
      sub_91A020((__int64)&v43, *(_QWORD *)(a1 + 568));
      result = sub_933A70(a1 + 384, v29, 2 * v46, (__int64)&v43, (__int64)&v45);
      if ( v44 > 0x40 )
        goto LABEL_49;
      goto LABEL_51;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v30 = sub_8F4170(*(_QWORD *)(a1 + 568));
        v31 = sub_8F4170(*(_QWORD *)(a1 + 568));
        v32 = *(_QWORD *)(a1 + 568);
        if ( !v31 )
          v30 = 0;
        *(_BYTE *)sub_A1A4E0(v32, 8) = v30;
      }
      return 1;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v5 = *(_QWORD *)(a1 + 568);
      v6 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5730((__int64)&v45, v5);
      sub_8F5730((__int64)&v43, *(_QWORD *)(a1 + 568));
      result = sub_8D7350(a1 + 384, v6, (__int64)&v43, (__int64)&v45);
      if ( v44 > 0x40 )
      {
LABEL_49:
        if ( v43 )
        {
          v33 = result;
          operator delete[](v43);
          result = v33;
        }
      }
LABEL_51:
      if ( v46 > 0x40 && v45 )
      {
        v34 = result;
        operator delete[](v45);
        return v34;
      }
      return result;
  }
}

