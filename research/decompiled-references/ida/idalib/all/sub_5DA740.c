unsigned __int64 __fastcall sub_5DA740(__int64 *a1, __int64 a2)
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
  __int64 v11; // r12
  __int64 v13; // rax
  const char *v14; // rax
  __int64 (*v15)(); // rdx
  __int64 *v16; // [rsp+10h] [rbp-1058h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-1050h]
  __int16 v18; // [rsp+20h] [rbp-1048h] BYREF
  _BYTE v19[2046]; // [rsp+22h] [rbp-1046h] BYREF
  _BYTE v20[2056]; // [rsp+820h] [rbp-848h] BYREF
  unsigned __int64 v21; // [rsp+1028h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  sub_391AE0(a2, (__int64)"graph: {\n");
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
    sub_391AE0(a2, (__int64)"node: { title: \"%d\" ", v5);
    v13 = *a1;
    v18 = 8250;
    (*(void (__fastcall **)(__int64 *, _BYTE *, __int64, _QWORD))(v13 + 16))(a1, v19, 2046, v5);
    if ( !v19[0] )
      LOBYTE(v18) = 0;
    v14 = (const char *)str2user(v20, &v18, 2048);
    sub_391AE0(a2, (__int64)"label: \"%d%s\"", v5, v14);
    v15 = *(__int64 (**)())(*a1 + 80);
    if ( v15 == sub_367480 )
    {
      if ( !v5 )
        goto LABEL_22;
    }
    else if ( ((unsigned int (__fastcall *)(__int64 *))v15)(a1) == v5 )
    {
LABEL_22:
      sub_391AE0(a2, (__int64)" vertical_order: 0");
    }
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 48))(a1, a2, v5);
    sub_391AE0(a2, (__int64)" }\n");
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
    sub_391AE0(a2, (__int64)"// node %d\n", v17);
    for ( i = 0; i < (*(int (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, v9); ++i )
    {
      v11 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 112))(a1, v9, (unsigned int)i);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(*a1 + 40))(a1, a2, v9, v11) )
        sub_391AE0(a2, (__int64)"edge: { sourcename: \"%d\" targetname: \"%d\" label: \"%d\" }\n", v9, v11, i);
    }
    ++v17;
    node_iterator_goup(&v16);
  }
  sub_391AE0(a2, (__int64)"}\n");
  return v21 - __readfsqword(0x28u);
}
