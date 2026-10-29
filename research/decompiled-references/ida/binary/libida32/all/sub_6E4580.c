unsigned __int64 __fastcall sub_6E4580(_QWORD *a1, _QWORD *a2, const char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // r13
  __int64 *v8; // rax
  __int64 v9; // r12
  unsigned __int64 v11; // r14
  __int16 v12; // ax
  char v13; // cl
  int v14; // r13d
  int tinfo_property; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax

  v7 = sub_6E4310(a1, (__int64)a2, (__int64)a3, a4, a5, a6);
  v8 = sub_6D3920(a1, a3);
  if ( v8 )
  {
    v9 = sub_6D3C30((__int64)a1, v8);
  }
  else
  {
    v11 = sub_B5C410(a1[6], 0);
    sub_B68340(v11, v7);
    *(_QWORD *)(v11 + 40) = sub_6D3CC0((__int64)a1, a3);
    v12 = *(_WORD *)(v11 + 76) & 0xFC7F;
    HIBYTE(v12) |= 2u;
    *(_WORD *)(v11 + 76) = v12;
    sub_6D3180((__int64)a1, a3, v11, 2);
    sub_B70D90(v7, v11);
    v9 = sub_A56EE0(a1[6], v11);
    v13 = *(_BYTE *)(get_tinfo_property(*a2, 310) + 52) & 7;
    if ( v13 )
      v14 = 1 << (v13 - 1);
    else
      v14 = (unsigned __int8)getinf(61);
    tinfo_property = get_tinfo_property(*a2, 3);
    v16 = sub_6D3DB0((__int64)a1, v14, tinfo_property == 1);
    v17 = 0;
    if ( (v16 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
      v17 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFFBLL;
    *(_QWORD *)(v11 + 128) = v17;
    v18 = get_tinfo_property(*a2, 3);
    v19 = sub_6D3DB0((__int64)a1, 4LL * (v14 >= 5) + 4, v18 == 1);
    *(_WORD *)(v11 + 72) &= 0xFE7Fu;
    *(_QWORD *)(v11 + 136) = v19;
  }
  return sub_6D3D30((__int64)a1, a2, v9);
}

