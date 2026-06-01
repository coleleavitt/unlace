bool __fastcall sub_77A8A0(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  _QWORD *v13; // rdi
  __int64 v14; // r13
  __int64 v15; // r14
  int v17; // ecx
  __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // rax

  if ( *(char *)(a2 + 29) < 0 && *(char *)(a1 + 29) < 0 )
    return 0;
  v6 = *(_BYTE *)(a1 + 28) & 0x7F;
  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (_BYTE)v7 != v6 || v6 == 16 )
    return 0;
  if ( v6 != 41 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v8 & 4) != 0 )
      v9 = (_QWORD *)*v9;
    v12 = sub_79C2A0(v9, a2, v7, a4);
    v13 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    {
      v14 = sub_79C2A0(*v13, a2, v10, v11);
      if ( !v14 )
        return 0;
    }
    else
    {
      v14 = sub_79C2A0(v13, a2, v10, v11);
      if ( !v14 )
        return 0;
    }
    v15 = sub_79CC40(v12);
    if ( v15 != sub_79CC40(v14) )
      return 0;
    v17 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( (_BYTE)v17 == 78 || (_BYTE)v17 == 26 )
    {
      v18 = sub_798D40(a1);
      v19 = sub_6CB180(v18, *(_QWORD *)(a1 + 64));
      return v19 == sub_6CB180(v18, *(_QWORD *)(a2 + 64));
    }
    if ( (unsigned __int8)v17 <= 0x1Fu )
    {
      if ( ((1LL << v17) & 0xFFB9FFFE) != 0 )
        return 0;
    }
    else
    {
      v20 = 0x7FF78620E7E400LL;
      if ( _bittest64(&v20, (unsigned int)(v17 + 96)) )
        return 0;
    }
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    if ( v21 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
      return 0;
    if ( !a3 && a1 != a2 )
    {
      v22 = a1;
      while ( v22 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22) )
      {
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22);
        v22 = v23;
        if ( a1 == v23 || a2 == v23 || !v23 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}

