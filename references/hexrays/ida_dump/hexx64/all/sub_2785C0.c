__int64 __fastcall sub_2785C0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int v6; // ebx
  int tinfo_size; // eax
  __int64 v9; // rdi
  int v10; // r12d
  int v11; // eax
  unsigned int v12; // eax
  int v13; // [rsp+0h] [rbp-68h]
  int v14; // [rsp+8h] [rbp-60h]
  __int64 tinfo_property; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v16[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *a1;
  v16[1] = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v4, 11);
  v6 = sub_278410(&tinfo_property, a2, a3);
  if ( (_BYTE)v6 )
  {
    tinfo_size = get_tinfo_size(0, tinfo_property, 0);
    v9 = *a2;
    v13 = tinfo_size;
    v16[0] = 0;
    v16[0] = get_tinfo_property(v9, 11);
    v14 = get_tinfo_size(0, v16[0], 0);
    if ( a3 && ((get_tinfo_property(*a2, 2) & 0xF) != 0xB || v13 > 0 && !(a3 % v13) && (v14 <= 0 || a3 % v14)) )
      goto LABEL_11;
    if ( (get_tinfo_property(*a2, 2) & 0xF) == 0xB && v13 == v14 )
    {
      v10 = get_tinfo_property(*a1, 12);
      v11 = get_tinfo_property(*a2, 12);
      if ( v10 > v11 )
        goto LABEL_11;
      if ( v10 == v11 )
      {
        LOBYTE(v12) = sub_2780A0(v16, &tinfo_property);
        v6 = v12;
        goto LABEL_11;
      }
    }
    v6 = 0;
LABEL_11:
    clear_tinfo_t(v16);
    goto LABEL_3;
  }
  v6 = 1;
LABEL_3:
  clear_tinfo_t(&tinfo_property);
  return v6;
}
