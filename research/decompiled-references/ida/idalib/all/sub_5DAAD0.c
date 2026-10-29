unsigned __int64 __fastcall sub_5DAAD0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 *v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 *v8; // rdx
  int v9; // eax
  unsigned int v10; // ebp
  int i; // ebx
  __int64 v12; // r15
  __int64 v14; // rax
  const char *v15; // rax
  __int64 *v16; // [rsp+10h] [rbp-1058h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-1050h]
  __int16 v18; // [rsp+20h] [rbp-1048h] BYREF
  _BYTE v19[2046]; // [rsp+22h] [rbp-1046h] BYREF
  _BYTE v20[2056]; // [rsp+820h] [rbp-848h] BYREF
  unsigned __int64 v21; // [rsp+1028h] [rbp-40h]

  v2 = *a1;
  v21 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64 *))(v2 + 24))(a1);
  v16 = a1;
  v17 = 0;
  v3 = node_iterator_goup(&v16);
  v4 = *(__int64 **)v3;
  LODWORD(v3) = *(_DWORD *)(v3 + 8);
  v16 = v4;
  v17 = v3;
  while ( 1 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 56))(a1);
    v6 = v17;
    if ( v5 == v17 && a1 == v16 )
      break;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 32))(a1, a2, v17) )
    {
      sub_391AE0(a2, (__int64)"\t\"%d\" [\n", v6);
      v14 = *a1;
      v18 = 8250;
      (*(void (__fastcall **)(__int64 *, _BYTE *, __int64, _QWORD))(v14 + 16))(a1, v19, 2046, v6);
      if ( !v19[0] )
        LOBYTE(v18) = 0;
      v15 = (const char *)str2user(v20, &v18, 2048);
      sub_391AE0(a2, (__int64)"\t\tlabel = \"%d%s\"\n", v6, v15);
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 48))(a1, a2, v6);
      sub_391AE0(a2, (__int64)"\t];\n");
    }
    ++v17;
    node_iterator_goup(&v16);
  }
  v17 = 0;
  v7 = node_iterator_goup(&v16);
  v8 = *(__int64 **)v7;
  LODWORD(v7) = *(_DWORD *)(v7 + 8);
  v16 = v8;
  v17 = v7;
  while ( 1 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 56))(a1);
    v10 = v17;
    if ( v9 == v17 && a1 == v16 )
      break;
    sub_391AE0(a2, (__int64)"// node %d\n", v17);
    for ( i = 0; i < (*(int (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, v10); ++i )
    {
      v12 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 112))(a1, v10, (unsigned int)i);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(*a1 + 40))(a1, a2, v10, v12) )
      {
        sub_391AE0(a2, (__int64)"\t\"%d\" -> \"%d\" [\n", v10, v12);
        sub_391AE0(a2, (__int64)"\t\tlabel = \"%d\"\n", i);
        sub_391AE0(a2, (__int64)"\t];\n");
      }
    }
    ++v17;
    node_iterator_goup(&v16);
  }
  sub_391AE0(a2, (__int64)"}\n");
  return v21 - __readfsqword(0x28u);
}
