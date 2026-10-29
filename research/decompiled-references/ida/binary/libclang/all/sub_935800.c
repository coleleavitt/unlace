__int64 __fastcall sub_935800(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rbp
  char v8; // al
  __int64 v9; // rdi
  char v10; // r12
  char v11; // bp
  __int64 v12; // rbp
  __int16 v13; // ax
  __int64 v14; // rdi
  __int16 v15; // r12
  __int16 v16; // bp
  __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // rdi
  int v20; // r12d
  int v21; // ebp
  __int64 v22; // rbp
  void *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // r13
  char v30; // bp
  char v31; // bp
  unsigned __int8 v32; // [rsp+Fh] [rbp-69h]
  unsigned __int8 v33; // [rsp+Fh] [rbp-69h]
  void *v34; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v35; // [rsp+18h] [rbp-60h]
  void *v36; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-40h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v7 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v8 = sub_915550(*(_QWORD *)(a1 + 568));
      v9 = *(_QWORD *)(a1 + 568);
      LOBYTE(v36) = v8;
      LOBYTE(v34) = sub_915550(v9);
      return sub_9296D0((_QWORD *)(a1 + 384), v7, 9u, (unsigned __int8 *)&v34, (unsigned __int8 *)&v36);
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v10 = sub_915900(*(_QWORD *)(a1 + 568));
        v11 = sub_915900(*(_QWORD *)(a1 + 568)) - v10;
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
      LOWORD(v36) = v13;
      LOWORD(v34) = sub_915930(v14);
      return sub_929A50((_QWORD *)(a1 + 384), v12, 0x11u, (unsigned __int16 *)&v34, (unsigned __int16 *)&v36);
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v15 = sub_915CE0(*(_QWORD *)(a1 + 568));
        v16 = sub_915CE0(*(_QWORD *)(a1 + 568)) - v15;
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
      LODWORD(v36) = v18;
      LODWORD(v34) = sub_915D10(v19);
      return sub_929DD0((_QWORD *)(a1 + 384), v17, 0x21u, (unsigned int *)&v34, (unsigned int *)&v36);
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v20 = sub_9160C0(*(_QWORD *)(a1 + 568));
        v21 = sub_9160C0(*(_QWORD *)(a1 + 568)) - v20;
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
      v36 = v23;
      v34 = (void *)sub_9160F0(v24);
      return sub_92A150((_QWORD *)(a1 + 384), v22, 0x41u, &v34, &v36);
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v25 = sub_9164A0(*(_QWORD *)(a1 + 568));
        v26 = sub_9164A0(*(_QWORD *)(a1 + 568)) - v25;
        *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v26;
      }
      return 1;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v27 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_919FD0((__int64)&v34, v27);
        sub_919FD0((__int64)&v36, *(_QWORD *)(a1 + 568));
        sub_8CCD90(a1 + 384, (__int64)&v36, (__int64)&v34);
        if ( v37 > 0x40 && v36 )
          operator delete[](v36);
        if ( v35 > 0x40 && v34 )
          operator delete[](v34);
      }
      return 1;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v28 = *(_QWORD *)(a1 + 568);
      v29 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_91A020((__int64)&v36, v28);
      sub_91A020((__int64)&v34, *(_QWORD *)(a1 + 568));
      result = sub_935370(a1 + 384, v29, v37 + 1, (__int64)&v34, (__int64)&v36);
      if ( v35 > 0x40 )
        goto LABEL_34;
      goto LABEL_36;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v30 = sub_8F4170(*(_QWORD *)(a1 + 568));
        v31 = sub_8F4170(*(_QWORD *)(a1 + 568)) ^ v30;
        *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v31;
      }
      return 1;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v5 = *(_QWORD *)(a1 + 568);
      v6 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5730((__int64)&v36, v5);
      sub_8F5730((__int64)&v34, *(_QWORD *)(a1 + 568));
      result = sub_8D7090(a1 + 384, v6, (__int64)&v34, (__int64)&v36);
      if ( v35 > 0x40 )
      {
LABEL_34:
        if ( v34 )
        {
          v32 = result;
          operator delete[](v34);
          result = v32;
        }
      }
LABEL_36:
      if ( v37 > 0x40 && v36 )
      {
        v33 = result;
        operator delete[](v36);
        return v33;
      }
      return result;
  }
}

