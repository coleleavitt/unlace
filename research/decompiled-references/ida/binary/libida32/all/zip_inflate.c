__int64 __fastcall zip_inflate(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _BYTE *, __int64),
        __int64 (__fastcall *a3)(__int64, _BYTE *, __int64))
{
  __int64 v4; // rbx
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // rbx
  int v13; // ecx
  char v14; // [rsp+4h] [rbp-100C4h]
  int v15; // [rsp+4h] [rbp-100C4h]
  int v16; // [rsp+4h] [rbp-100C4h]
  int v17; // [rsp+4h] [rbp-100C4h]
  _QWORD v18[14]; // [rsp+10h] [rbp-100B8h] BYREF
  _BYTE v19[32768]; // [rsp+80h] [rbp-10048h] BYREF
  _BYTE v20[32776]; // [rsp+8080h] [rbp-8048h] BYREF
  unsigned __int64 v21; // [rsp+10088h] [rbp-40h]

  v4 = 0x8000;
  v21 = __readfsqword(0x28u);
  memset(v18, 0, sizeof(v18));
  v18[3] = v20;
  LODWORD(v18[4]) = 0x8000;
  v14 = 1;
  v5 = sub_72E340(v18, "1.3.1", 112);
  while ( 1 )
  {
    if ( v5 )
    {
LABEL_15:
      if ( byte_2CABFC0 && v5 == -5 )
      {
        sub_730100(v18);
        if ( (_BYTE *)v18[3] != v20 )
        {
          v12 = v18[3] - (_QWORD)v20;
          if ( v12 != a3(a1, v20, v18[3] - (_QWORD)v20) )
            return 778;
        }
        return 0;
      }
      v15 = v5;
      sub_730100(v18);
      v8 = v15;
      v9 = v18[3] - (_QWORD)v20;
      if ( (_BYTE *)v18[3] == v20 )
      {
LABEL_20:
        if ( v8 < 0 )
          return (unsigned int)-v8;
        return 0;
      }
LABEL_18:
      v16 = v8;
      v10 = a3(a1, v20, v9);
      v8 = v16;
      if ( v10 != v9 )
        return 778;
      goto LABEL_20;
    }
    if ( LODWORD(v18[1]) || v4 <= 0 )
      goto LABEL_2;
    v7 = a2(a1, v19, 0x8000);
    v4 = v7;
    if ( v7 < 0 )
      break;
    v18[0] = v19;
    LODWORD(v18[1]) = v7;
    if ( v14 && byte_2CABFC0 )
      sub_72E350((__int64)v18);
    v14 = 0;
LABEL_2:
    if ( !LODWORD(v18[4]) )
    {
      if ( a3(a1, v20, 0x8000) != 0x8000 )
      {
        v13 = -778;
        goto LABEL_26;
      }
      v18[3] = v20;
      LODWORD(v18[4]) = 0x8000;
    }
    v6 = sub_72E360((__int64)v18, 4 * (unsigned int)(LODWORD(v18[1]) == 0));
    v5 = v6;
    if ( v6 < 0 || v6 == 1 )
      goto LABEL_15;
  }
  v13 = -777;
LABEL_26:
  v17 = v13;
  sub_730100(v18);
  v8 = v17;
  v9 = v18[3] - (_QWORD)v20;
  if ( (_BYTE *)v18[3] != v20 )
    goto LABEL_18;
  return (unsigned int)-v8;
}

