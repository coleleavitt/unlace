unsigned __int64 __fastcall sub_5BEC20(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rdx
  int v4; // eax
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 *v7; // rdx
  int v8; // eax
  unsigned int v9; // r13d
  int i; // ebp
  unsigned int v11; // eax
  __int64 v13; // rax
  const char *v14; // rcx
  __int64 (*v15)(); // rdx
  __int64 *v16; // [rsp+10h] [rbp-1058h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-1050h]
  __int16 v18; // [rsp+20h] [rbp-1048h] BYREF
  _BYTE v19[2046]; // [rsp+22h] [rbp-1046h] BYREF
  _BYTE v20[2056]; // [rsp+820h] [rbp-848h] BYREF
  unsigned __int64 v21; // [rsp+1028h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  sub_38CDA0();
  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 24))(a1, a2);
  v16 = a1;
  v17 = 0;
  v2 = ((__int64 (*)(void))node_iterator_goup)();
  v3 = *(__int64 **)v2;
  LODWORD(v2) = *(_DWORD *)(v2 + 8);
  v16 = v3;
  v17 = v2;
  while ( 1 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 56))(a1);
    v5 = v17;
    if ( v4 == v17 && a1 == v16 )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 32))(a1, a2, v17) )
      goto LABEL_3;
    sub_38CDA0();
    v13 = *a1;
    v18 = 8250;
    (*(void (__fastcall **)(__int64 *, _BYTE *, __int64, _QWORD))(v13 + 16))(a1, v19, 2046, v5);
    if ( !v19[0] )
      LOBYTE(v18) = 0;
    str2user(v20, &v18, 2048);
    sub_38CDA0();
    v15 = *(__int64 (**)())(*a1 + 80);
    if ( v15 == sub_364000 )
    {
      if ( !v5 )
        goto LABEL_22;
    }
    else if ( ((unsigned int (*)(__int64 *, const char *, ...))v15)(a1, "label: \"%d%s\"", (_DWORD)v15, v14) == v5 )
    {
LABEL_22:
      sub_38CDA0();
    }
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 48))(a1, a2, v5);
    sub_38CDA0();
LABEL_3:
    ++v17;
    node_iterator_goup(&v16);
  }
  v17 = 0;
  v6 = node_iterator_goup(&v16);
  v7 = *(__int64 **)v6;
  LODWORD(v6) = *(_DWORD *)(v6 + 8);
  v16 = v7;
  v17 = v6;
  while ( 1 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 56))(a1);
    v9 = v17;
    if ( v8 == v17 && a1 == v16 )
      break;
    sub_38CDA0();
    for ( i = 0; i < (*(int (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, v9); ++i )
    {
      v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 112))(a1, v9, (unsigned int)i);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(*a1 + 40))(a1, a2, v9, v11) )
        sub_38CDA0();
    }
    ++v17;
    node_iterator_goup(&v16);
  }
  sub_38CDA0();
  return v21 - __readfsqword(0x28u);
}

