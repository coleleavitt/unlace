char __fastcall sub_F3D5F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  _QWORD *v7; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 48 )
    return 0;
  v7 = sub_F3D150(*(_QWORD **)(v6 + 24), a2, a3, a4, a5, a6);
  if ( *((_BYTE *)v7 + 73) >> 5 )
    return 0;
  else
    return (unsigned __int8)BYTE2(v7[9]) >> 7;
}

