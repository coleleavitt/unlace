bool __fastcall sub_9A4330(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rax

  v2 = *a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_BYTE *)v2 == 4 )
  {
    v3 = *(_QWORD *)(v2 + 16);
    if ( v3 && !sub_B684C0(*(_QWORD *)(v2 + 16), 0) )
    {
      v10 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v3 + 16) & 4) != 0 )
        v10 = *(_QWORD *)v10;
      return (*(_BYTE *)(v10 + 8) & 0x7Fu) - 59 > 2;
    }
    else
    {
      return 0;
    }
  }
  else if ( *(_BYTE *)v2 == 12 && (v5 = *(_QWORD *)(a1 + 328)) != 0 && (*(_BYTE *)(v5 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v2 + 64) + 16LL);
    v7 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v6 & 4) != 0 )
      v7 = (_QWORD *)*v7;
    v8 = *(_QWORD *)(v5 + 16);
    v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v8 & 4) != 0 )
      v9 = (_QWORD *)*v9;
    return v9 == v7;
  }
  else
  {
    return 0;
  }
}

