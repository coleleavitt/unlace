__int64 __fastcall sub_BD0240(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 *v3; // rdi
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 (*v6)(); // rdx
  _QWORD *v7; // rdx
  bool v8; // cl
  __int64 *v9; // rbx
  unsigned __int16 v10; // dx
  __int64 *v11; // r14
  _QWORD **v12; // r12
  __int64 *v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 *v17; // [rsp+8h] [rbp-30h] BYREF

  v17 = a1;
  v2 = sub_BC9860(&v17, a2);
  if ( !(_BYTE)v2 )
    return 0;
  v3 = v17;
  v4 = v2;
  v5 = *v17;
  v6 = *(__int64 (**)())(*v17 + 4344);
  if ( v6 != sub_BC6340 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(v17, a2) )
      return 0;
    v3 = v17;
    v5 = *v17;
  }
  if ( (*(_BYTE *)(a2 + 19) & 0x40) != 0 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v5 + 96))(v3, *(_QWORD *)(a2 + 32)) )
      return 0;
  }
  else
  {
    v7 = *(_QWORD **)(a2 + 8LL * (*(_WORD *)(a2 + 16) & 0x7FFF) + 32);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(v5 + 136))(v3, *v7, v7 + 1) )
      return 0;
  }
  v8 = (*(_BYTE *)(a2 + 19) & 0x40) != 0;
  v9 = (__int64 *)(a2 + 8LL * v8 + 32);
  v10 = *(_WORD *)(a2 + 16) & 0x7FFF;
  v11 = &v9[v10];
  v12 = (_QWORD **)(8LL * (unsigned __int16)(v10 + v8) + 8LL * ((*(_BYTE *)(a2 + 19) & 0x40) == 0) + 32 + a2);
  if ( v9 == v11 )
    return v4;
  while ( 1 )
  {
    v13 = v17;
    v14 = *v9;
    v15 = *v17;
    if ( *v12 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(v15 + 136))(v17, **v12, *v12 + 1) )
        return 0;
      v13 = v17;
      v15 = *v17;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v15 + 96))(v13, v14) )
      break;
    ++v9;
    ++v12;
    if ( v11 == v9 )
      return v4;
  }
  return 0;
}
