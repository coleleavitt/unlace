char __fastcall sub_F65360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax

  v6 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  v8 = *(unsigned __int8 *)(*(_QWORD *)v6 + 16LL);
  if ( (_BYTE)v8 == 13 )
  {
LABEL_2:
    LOBYTE(v9) = (((*(_WORD *)(v7 + 18) >> 3) + 76) & 0x1FFu) <= 0xB;
  }
  else
  {
    v10 = a1;
    if ( (_BYTE)v8 == 47 )
    {
      while ( 1 )
      {
        v11 = sub_F60E90(*(_QWORD **)(v7 + 24), a2, v8, a4, a5, a6);
        if ( (*((_BYTE *)v11 + 74) & 1) == 0 && (v11[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          break;
        if ( *((char *)sub_F60E90(*(_QWORD **)(v7 + 24), a2, v12, v13, v14, v15) + 76) < 0 )
          break;
        v20 = sub_F60E90(*(_QWORD **)(v7 + 24), a2, v16, v17, v18, v19);
        v10 = *(_QWORD *)(sub_6F3660((__int64)v20) & 0xFFFFFFFFFFFFFFF0LL);
        v21 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL;
        v7 = *(_QWORD *)v21;
        v8 = *(unsigned __int8 *)(*(_QWORD *)v21 + 16LL);
        if ( (_BYTE)v8 == 13 )
          goto LABEL_2;
        if ( (_BYTE)v8 != 47 )
          goto LABEL_9;
      }
      v22 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v7 = *(_QWORD *)v22;
      LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)v22 + 16LL);
    }
LABEL_9:
    if ( (_BYTE)v8 == 10 )
    {
      LOBYTE(v9) = *(_BYTE *)(v7 + 32) & 1;
    }
    else
    {
      LOBYTE(v9) = 0;
      if ( (_BYTE)v8 == 19 )
        return (*(__int64 *)(v7 + 32) >> 1) & 1;
    }
  }
  return v9;
}
