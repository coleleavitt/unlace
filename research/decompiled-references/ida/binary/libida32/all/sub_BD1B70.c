__int64 __fastcall sub_BD1B70(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rax
  unsigned __int8 (*v8)(void); // rdx
  __int64 (*v9)(); // rdx
  __int64 (*v10)(); // rdx
  __int64 (*v11)(); // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // ebp
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // r12
  _QWORD *v18; // rbx
  __int64 v20; // rdx
  unsigned int *v21; // r12
  _QWORD *v22; // r13
  unsigned int *v23; // r15
  _QWORD *v24; // r14
  _QWORD *v25; // [rsp+8h] [rbp-40h] BYREF

  v7 = (_QWORD *)*a1;
  v25 = a1;
  v8 = (unsigned __int8 (*)(void))v7[27];
  if ( (char *)v8 != (char *)sub_BA1BA0 )
  {
    if ( !v8() )
      return 0;
    a1 = v25;
    v7 = (_QWORD *)*v25;
  }
  v9 = (__int64 (*)())v7[145];
  if ( v9 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v9)(a1, a2) )
      return 0;
    a1 = v25;
    v7 = (_QWORD *)*v25;
  }
  v10 = (__int64 (*)())v7[147];
  if ( v10 != sub_BA1D40 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v10)(a1, a2) )
      return 0;
    a1 = v25;
    v7 = (_QWORD *)*v25;
  }
  v11 = (__int64 (*)())v7[148];
  if ( v11 == sub_BA1D50 || ((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v11)(a1, a2) )
  {
    v12 = *(_QWORD *)(a2 + 104);
    if ( !v12 )
    {
      sub_A55AE0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), (__int64)v10, a4, a5, a6);
      v12 = *(_QWORD *)(a2 + 104);
    }
    v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v13
      || a2 != *(_QWORD *)v13
      || (v20 = *(unsigned int *)(v13 + 16),
          v21 = *(unsigned int **)(v13 + 24),
          v22 = *(_QWORD **)(v13 + 8),
          v23 = &v21[v20],
          v24 = &v22[v20],
          v21 == v23)
      || v22 == v24 )
    {
LABEL_9:
      v14 = sub_BABBC0(&v25, a2 + 48);
      if ( (_BYTE)v14 )
      {
        v15 = sub_9A4B10(a2);
        v17 = v16;
        v18 = (_QWORD *)v15;
        if ( (_QWORD *)v15 == v16 )
          return v14;
        while ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v25 + 32LL))(v25, *v18) )
        {
          if ( v17 == ++v18 )
            return v14;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v6 = *v21 | v6 & 0xFFFFFFFF00000000LL;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, unsigned __int64))(*v25 + 144LL))(v25, *v22, v6) )
          break;
        ++v22;
        if ( ++v21 == v23 || v22 == v24 )
          goto LABEL_9;
      }
    }
  }
  return 0;
}

