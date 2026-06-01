__int64 __fastcall sub_79C6E0(__int64 *a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rbx
  __int64 v4; // rdx

  v2 = sub_79B8A0((unsigned __int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = operator new(0x58u);
    memset((void *)v4, 0, 0x58u);
  }
  else
  {
    v4 = operator new(0x50u);
    *(_OWORD *)v4 = 0;
    *(_OWORD *)(v4 + 16) = 0;
    *(_OWORD *)(v4 + 32) = 0;
    *(_OWORD *)(v4 + 48) = 0;
    *(_OWORD *)(v4 + 64) = 0;
  }
  *(_BYTE *)v4 = 1;
  *(_QWORD *)(v4 + 8) = -1;
  *(_QWORD *)(v4 + 24) = -1;
  *(_QWORD *)(v4 + 40) = -1;
  *(_QWORD *)(v4 + 56) = -1;
  *(_QWORD *)(v4 + 72) = *(_QWORD *)(a2 + 23080);
  *(_QWORD *)(a2 + 23080) = (4 * v3) | v4 & 0xFFFFFFFFFFFFFFFBLL;
  *a1 = v4;
  return v4;
}

