__int64 __fastcall sub_F3F8C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax

  if ( *(_BYTE *)(a1 + 16) == 48 && *((_BYTE *)sub_F3D150(*(_QWORD **)(a1 + 24), a2, a3, a4, a5, a6) + 73) >> 5 == 2 )
    return a1;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) == 48 && *((_BYTE *)sub_F3D150(*(_QWORD **)(v6 + 24), a2, a3, a4, a5, a6) + 73) >> 5 == 2 )
    return sub_F3F130(a1);
  else
    return 0;
}

