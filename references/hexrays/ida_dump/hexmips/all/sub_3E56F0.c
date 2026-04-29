__int64 __fastcall sub_3E56F0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // r12
  void *(*v6)(); // rax
  int v7; // r15d
  int v8; // r12d
  int v9; // edx
  int v10; // edx
  int v11; // eax
  bool v12; // sf
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rax
  void *(*v21)(); // rax

  if ( (unsigned __int8)getinf_flag(67, 16) )
  {
    if ( !under_debugger )
      sub_37E160(0xCC0Fu, 16, a4);
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
  if ( v6 == sub_3E4BE0 )
  {
    v7 = *(_DWORD *)(a1 + 48);
    v8 = 4 * v5;
    v9 = 4;
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(__int64))v6)(a1);
    v7 = *(_DWORD *)(a1 + 48);
    v8 = *(char *)(v20 + 12) * (_DWORD)v5;
    v21 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
    if ( v21 == sub_3E4BE0 )
      v9 = 4;
    else
      v9 = *(char *)(((__int64 (__fastcall *)(__int64))v21)(a1) + 13);
  }
  v10 = v7 * v9;
  *(_QWORD *)(a2 + 80) = *(_QWORD *)a3;
  v11 = *(_DWORD *)(a3 + 24);
  if ( v11 != -1 )
  {
    v12 = v8 - v11 < 0;
    v13 = v8 - v11;
    v14 = v8 - v11 + 3;
    if ( !v12 )
      v14 = v13;
    v11 = v14 >> 2;
  }
  *(_DWORD *)(a2 + 40) = v11;
  v15 = *(_DWORD *)(a3 + 28);
  if ( v15 != -1 )
  {
    v12 = v10 - v15 < 0;
    v16 = v10 - v15;
    v17 = v10 - v15 + 3;
    if ( !v12 )
      v17 = v16;
    v15 = v17 >> 2;
  }
  *(_DWORD *)(a2 + 64) = v15;
  v18 = *(_QWORD *)(a3 + 8);
  if ( v18 != -1 )
    v18 = *(_QWORD *)(a3 + 8) - v8;
  *(_QWORD *)(a2 + 32) = v18;
  result = *(_QWORD *)(a3 + 16);
  if ( result != -1 )
    result = *(_QWORD *)(a3 + 16) - v10;
  *(_QWORD *)(a2 + 56) = result;
  return result;
}
