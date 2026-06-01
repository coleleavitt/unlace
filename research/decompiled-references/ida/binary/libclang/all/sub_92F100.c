__int64 __fastcall sub_92F100(__int64 a1, int a2, _QWORD *a3)
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
  void *v28; // rdx
  unsigned int v29; // ebp
  void *v30; // r12
  __int64 v31; // rsi
  __int64 v32; // r13
  char v33; // bp
  unsigned __int8 v34; // [rsp+Fh] [rbp-A9h]
  unsigned __int8 v35; // [rsp+Fh] [rbp-A9h]
  void *v36; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v37; // [rsp+18h] [rbp-A0h]
  void *v38; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v39; // [rsp+28h] [rbp-90h]
  void *v40; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v41; // [rsp+38h] [rbp-80h]
  void *v42; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v43; // [rsp+48h] [rbp-70h]
  void *v44; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-60h]
  void *v46; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v47; // [rsp+78h] [rbp-40h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v7 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v8 = sub_915550(*(_QWORD *)(a1 + 568));
      v9 = *(_QWORD *)(a1 + 568);
      LOBYTE(v46) = v8;
      LOBYTE(v44) = sub_915550(v9);
      return sub_915580((_QWORD *)(a1 + 384), v7, 9u, (unsigned __int8 *)&v44, (unsigned __int8 *)&v46);
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v10 = sub_915900(*(_QWORD *)(a1 + 568));
        v11 = sub_915900(*(_QWORD *)(a1 + 568)) + v10;
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
      LOWORD(v46) = v13;
      LOWORD(v44) = sub_915930(v14);
      return sub_915960((_QWORD *)(a1 + 384), v12, 0x11u, (unsigned __int16 *)&v44, (unsigned __int16 *)&v46);
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v15 = sub_915CE0(*(_QWORD *)(a1 + 568));
        v16 = sub_915CE0(*(_QWORD *)(a1 + 568)) + v15;
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
      LODWORD(v46) = v18;
      LODWORD(v44) = sub_915D10(v19);
      return sub_915D40((_QWORD *)(a1 + 384), v17, 0x21u, (unsigned int *)&v44, (unsigned int *)&v46);
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v20 = sub_9160C0(*(_QWORD *)(a1 + 568));
        v21 = sub_9160C0(*(_QWORD *)(a1 + 568)) + v20;
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
      v46 = v23;
      v44 = (void *)sub_9160F0(v24);
      return sub_916120((_QWORD *)(a1 + 384), v22, 0x41u, &v44, &v46);
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v25 = sub_9164A0(*(_QWORD *)(a1 + 568));
        v26 = sub_9164A0(*(_QWORD *)(a1 + 568)) + v25;
        *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v26;
      }
      return 1;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v27 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_919FD0((__int64)&v36, v27);
      sub_919FD0((__int64)&v38, *(_QWORD *)(a1 + 568));
      v41 = 3;
      v40 = &byte_7;
      v43 = v37;
      if ( v37 > 0x40 )
        sub_2585B30(&v42);
      else
        v42 = v36;
      v45 = v39;
      if ( v39 <= 0x40 )
      {
        v28 = v38;
        v47 = v39;
        v44 = v38;
LABEL_29:
        v46 = v28;
        goto LABEL_30;
      }
      sub_2585B30(&v44);
      v47 = v45;
      if ( v45 <= 0x40 )
      {
        v28 = v44;
        goto LABEL_29;
      }
      sub_2585B30(&v46);
LABEL_30:
      sub_2586200(&v46, &v42);
      v29 = v47;
      v30 = v46;
      if ( v41 > 0x40 && v40 )
        operator delete[](v40);
      v40 = v30;
      v41 = v29;
      if ( v45 > 0x40 && v44 )
        operator delete[](v44);
      if ( v43 > 0x40 && v42 )
        operator delete[](v42);
      sub_91C660(*(_QWORD *)(a1 + 568), (__int64)&v40);
      if ( v41 > 0x40 && v40 )
        operator delete[](v40);
      if ( v39 > 0x40 && v38 )
        operator delete[](v38);
      if ( v37 > 0x40 && v36 )
        operator delete[](v36);
      return 1;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v31 = *(_QWORD *)(a1 + 568);
      v32 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_91A020((__int64)&v46, v31);
      sub_91A020((__int64)&v44, *(_QWORD *)(a1 + 568));
      result = sub_92EC70(a1 + 384, v32, v47 + 1, (__int64)&v44, (__int64)&v46);
      if ( v45 > 0x40 )
        goto LABEL_50;
      goto LABEL_52;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v33 = sub_8F4170(*(_QWORD *)(a1 + 568));
        if ( (unsigned __int8)sub_8F4170(*(_QWORD *)(a1 + 568)) )
          v33 = 1;
        *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v33;
      }
      return 1;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v5 = *(_QWORD *)(a1 + 568);
      v6 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5730((__int64)&v46, v5);
      sub_8F5730((__int64)&v44, *(_QWORD *)(a1 + 568));
      result = sub_8D7610(a1 + 384, v6, (__int64)&v44, (__int64)&v46);
      if ( v45 > 0x40 )
      {
LABEL_50:
        if ( v44 )
        {
          v34 = result;
          operator delete[](v44);
          result = v34;
        }
      }
LABEL_52:
      if ( v47 > 0x40 && v46 )
      {
        v35 = result;
        operator delete[](v46);
        return v35;
      }
      return result;
  }
}

