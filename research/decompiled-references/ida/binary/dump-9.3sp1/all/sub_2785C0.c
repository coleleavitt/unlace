__int64 __fastcall sub_2785C0(_DWORD a1, __int64 *a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v6; // r12d
  int v7; // eax
  unsigned int v8; // eax
  int tinfo_size; // [rsp+0h] [rbp-68h]
  int v10; // [rsp+8h] [rbp-60h]
  __int64 tinfo_property; // [rsp+18h] [rbp-50h] BYREF
  __int64 v12[9]; // [rsp+20h] [rbp-48h] BYREF

  v12[1] = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property();
  v4 = sub_278410(&tinfo_property, a2, a3);
  if ( (_BYTE)v4 )
  {
    tinfo_size = get_tinfo_size();
    v12[0] = 0;
    v12[0] = get_tinfo_property();
    v10 = get_tinfo_size();
    if ( a3 && ((get_tinfo_property() & 0xF) != 0xB || tinfo_size > 0 && !(a3 % tinfo_size) && (v10 <= 0 || a3 % v10)) )
      goto LABEL_11;
    if ( (get_tinfo_property() & 0xF) == 0xB && tinfo_size == v10 )
    {
      v6 = get_tinfo_property();
      v7 = get_tinfo_property();
      if ( v6 > v7 )
        goto LABEL_11;
      if ( v6 == v7 )
      {
        LOBYTE(v8) = sub_2780A0(v12, &tinfo_property);
        v4 = v8;
        goto LABEL_11;
      }
    }
    v4 = 0;
LABEL_11:
    clear_tinfo_t();
    goto LABEL_3;
  }
  v4 = 1;
LABEL_3:
  clear_tinfo_t();
  return v4;
}
