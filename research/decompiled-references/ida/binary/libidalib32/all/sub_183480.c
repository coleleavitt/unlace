__int64 __fastcall sub_183480(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r8

  *(_QWORD *)(a1 + 32) = 0x100000000LL;
  *(_QWORD *)a1 = &unk_23B988;
  *(_QWORD *)(a1 + 1104) = a1 + 1088;
  *(_QWORD *)(a1 + 1112) = a1 + 1088;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 1064) = 0;
  *(_DWORD *)(a1 + 1088) = 0;
  *(_QWORD *)(a1 + 1096) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1072) = &off_234C80;
  *(_QWORD *)(a1 + 1128) = a1;
  *(_DWORD *)(a1 + 1152) = 0;
  *(_QWORD *)(a1 + 1160) = 0;
  *(_QWORD *)(a1 + 1168) = a1 + 1152;
  *(_QWORD *)(a1 + 1176) = a1 + 1152;
  *(_QWORD *)(a1 + 1184) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 1192) = 0;
  *(_QWORD *)(a1 + 1136) = &off_234A00;
  sub_1765B0((__int64 *)(a1 + 1136), 0);
  sub_1830D0(a1 + 1208, a1, v4, v5);
  v6 = xmmword_2554C8;
  result = a1 + 1720;
  *(_DWORD *)(a1 + 1720) = 0;
  *(_QWORD *)(a1 + 1736) = a1 + 1720;
  v8 = qword_2554C0;
  *(_QWORD *)(a1 + 1728) = 0;
  *(_QWORD *)(a1 + 1744) = a1 + 1720;
  *(_QWORD *)(a1 + 1752) = 0;
  *(_DWORD *)(a1 + 1760) = 0;
  *(_QWORD *)(a1 + 1768) = -1;
  *(_DWORD *)(a1 + 1776) = -1;
  *(_QWORD *)(a1 + 1784) = 0;
  *(_QWORD *)(a1 + 1808) = 0;
  *(_QWORD *)(a1 + 1832) = 0;
  *(_QWORD *)(a1 + 1840) = 0;
  *(_QWORD *)(a1 + 1864) = -1;
  *(_DWORD *)(a1 + 1872) = 0;
  *(_DWORD *)(a1 + 1880) = 0;
  *(_QWORD *)(a1 + 1888) = 0;
  *(_QWORD *)(a1 + 1912) = 0;
  *(_OWORD *)(a1 + 1792) = 0;
  *(_OWORD *)(a1 + 1816) = 0;
  *(_OWORD *)(a1 + 1848) = 0;
  *(_OWORD *)(a1 + 1896) = 0;
  if ( v6 )
  {
    v9 = (_QWORD *)v8;
    v10 = 0;
    while ( 1 )
    {
      v11 = v9;
      if ( !*v9 )
        break;
      ++v10;
      v9 += 2;
      if ( v6 == v10 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    if ( *((_QWORD *)&xmmword_2554C8 + 1) < (unsigned __int64)(v6 + 1) )
    {
      result = qvector_reserve();
      qword_2554C0 = result;
      v6 = xmmword_2554C8;
      v8 = result;
    }
    v11 = (_QWORD *)(v8 + 16 * v6);
    *(_OWORD *)v11 = 0;
    *(_QWORD *)&xmmword_2554C8 = xmmword_2554C8 + 1;
  }
  *v11 = a2;
  v11[1] = a1;
  *(_DWORD *)(a1 + 1760) |= 1u;
  return result;
}

