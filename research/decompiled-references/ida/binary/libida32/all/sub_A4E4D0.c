unsigned __int64 __fastcall sub_A4E4D0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int16 v5; // ax

  v2 = sub_A4E300(a1, a2);
  v3 = sub_A4C2D0((__int64)a1, *(_QWORD *)(v2 + 32));
  v4 = v3 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v3 | (*(_BYTE *)(v2 + 18) >> 3)) & 7;
  v5 = sub_F468C0(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( HIBYTE(v5) )
    return sub_A4DCA0((__int64)a1, v5, v4, v4);
  else
    return v4;
}

