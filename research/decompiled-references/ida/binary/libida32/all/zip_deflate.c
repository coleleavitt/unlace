__int64 __fastcall zip_deflate(
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
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // [rsp+8h] [rbp-100C0h]
  int v15; // [rsp+8h] [rbp-100C0h]
  int v16; // [rsp+8h] [rbp-100C0h]
  _QWORD v17[14]; // [rsp+10h] [rbp-100B8h] BYREF
  _BYTE v18[32768]; // [rsp+80h] [rbp-10048h] BYREF
  _BYTE v19[32776]; // [rsp+8080h] [rbp-8048h] BYREF
  unsigned __int64 v20; // [rsp+10088h] [rbp-40h]

  v4 = 0x8000;
  v20 = __readfsqword(0x28u);
  memset(v17, 0, sizeof(v17));
  v17[3] = v19;
  LODWORD(v17[4]) = 0x8000;
  v5 = sub_72D8D0(v17, 0xFFFFFFFFLL, "1.3.1", 112);
  while ( !v5 )
  {
    if ( !LODWORD(v17[1]) && v4 > 0 )
    {
      v7 = a2(a1, v18, 0x8000);
      v4 = v7;
      if ( v7 < 0 )
      {
        v13 = -777;
LABEL_19:
        v16 = v13;
        sub_72D500(v17);
        v8 = v16;
        v9 = v17[3] - (_QWORD)v19;
        if ( (_BYTE *)v17[3] == v19 )
          return (unsigned int)-v8;
        goto LABEL_16;
      }
      v17[0] = v18;
      LODWORD(v17[1]) = v7;
    }
    if ( !LODWORD(v17[4]) )
    {
      if ( a3(a1, v19, 0x8000) != 0x8000 )
      {
        v13 = -778;
        goto LABEL_19;
      }
      v17[3] = v19;
      LODWORD(v17[4]) = 0x8000;
    }
    v6 = sub_72C290((__int64)v17, 4 * (unsigned int)(LODWORD(v17[1]) == 0));
    v5 = v6;
    if ( v6 < 0 || v6 == 1 )
      break;
  }
  v14 = v5;
  sub_72D500(v17);
  v8 = v14;
  v9 = v17[3] - (_QWORD)v19;
  if ( (_BYTE *)v17[3] == v19 )
    goto LABEL_13;
LABEL_16:
  v15 = v8;
  v11 = a3(a1, v19, v9);
  v8 = v15;
  v12 = v11;
  result = 778;
  if ( v12 != v9 )
    return result;
LABEL_13:
  if ( v8 >= 0 )
    return 0;
  return (unsigned int)-v8;
}

