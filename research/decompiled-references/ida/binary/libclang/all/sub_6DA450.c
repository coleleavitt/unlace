unsigned __int64 __fastcall sub_6DA450(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  unsigned __int16 v4; // ax

  v2 = sub_6D9A50(a1, a2);
  v3 = sub_6C4160((__int64)a1, *(_QWORD *)(v2 + 32)) | (*(_BYTE *)(v2 + 18) >> 3) & 7;
  v4 = sub_B16670(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( HIBYTE(v4) )
    return sub_6C80A0((__int64)a1, v4, v3, v3);
  else
    return v3;
}

