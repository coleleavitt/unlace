bool __fastcall sub_F3DC50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  _QWORD *v11; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(unsigned __int8 *)(v6 + 16);
  if ( (_BYTE)v7 == 13 )
  {
    if ( (((*(_WORD *)(v6 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
      return 0;
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 2320);
    if ( (*(_BYTE *)(v9 + 1) & 8) == 0 && (_BYTE)v7 == 47 )
    {
      v11 = sub_F3D150(*(_QWORD **)(v6 + 24), a2, v7, v9, a5, a6);
      if ( (*((_BYTE *)v11 + 74) & 1) == 0 && (v11[16] & 0xFFFFFFFFFFFFFFF8LL) == 0
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
      {
        return 0;
      }
    }
    else if ( (_BYTE)v7 != 10 )
    {
      return 0;
    }
  }
  v10 = sub_A73FE0(a2, a1);
  return v10 == sub_A73FE0(a2, *(_QWORD *)(*(_QWORD *)(a2 + 19056) & 0xFFFFFFFFFFFFFFF0LL));
}

