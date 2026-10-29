__int64 __fastcall sub_23DA0(__int128 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int128 *v4; // rbx
  int v5; // eax
  __int128 v7; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( !*((_BYTE *)a1 + 350) )
    return v8 - __readfsqword(0x28u);
  v3 = *((_QWORD *)a1 + 2);
  v4 = a1;
  if ( !*(_BYTE *)(v3 + 248) )
  {
    v5 = *(_DWORD *)(v3 + 552);
    if ( (v5 & 0x300) == 0 )
      goto LABEL_4;
LABEL_13:
    if ( *(_DWORD *)(get_ph(a1, a2, a3) + 4) != 55 )
    {
LABEL_22:
      sub_237E0();
      goto LABEL_23;
    }
    a2 = 2;
    a1 = (_OWORD *)(&stru_BB8 + 2);
    sub_101F0(0xBBAu, 2, -1);
    v5 = *(_DWORD *)(v3 + 552);
    if ( (v5 & 0x3000) == 0 )
      goto LABEL_5;
    goto LABEL_15;
  }
  a1 = (__int128 *)(v3 + 80);
  a2 = 7;
  if ( sub_46340(v3 + 80, 7, ".ghsinfo") )
  {
    a1 = &v7;
    a2 = 4;
    v7 = 0;
    set_compiler(&v7, 4, "rh850-8byte_align");
  }
  v3 = *((_QWORD *)v4 + 2);
  v5 = *(_DWORD *)(v3 + 552);
  if ( (v5 & 0x300) != 0 )
    goto LABEL_13;
LABEL_4:
  if ( (v5 & 0x3000) == 0 )
  {
LABEL_5:
    if ( (v5 & 0xC00) == 0 )
      goto LABEL_6;
    goto LABEL_17;
  }
LABEL_15:
  if ( *(_DWORD *)(get_ph(a1, a2, a3) + 4) != 55 )
  {
LABEL_21:
    sub_23800();
    goto LABEL_22;
  }
  a2 = 2;
  a1 = (_OWORD *)(&stru_BB8 + 5);
  sub_101F0(0xBBDu, 2, -1);
  v5 = *(_DWORD *)(v3 + 552);
  if ( (v5 & 0xC00) != 0 )
  {
LABEL_17:
    if ( *(_DWORD *)(get_ph(a1, a2, a3) + 4) == 55 )
    {
      a2 = 2;
      a1 = (_OWORD *)(&stru_BB8 + 8);
      sub_101F0(0xBC0u, 2, -1);
      if ( (*(_DWORD *)(v3 + 552) & 0x4000) == 0 )
        return v8 - __readfsqword(0x28u);
      goto LABEL_8;
    }
    sub_23820((__int64)a1, a2);
    goto LABEL_21;
  }
LABEL_6:
  if ( (v5 & 0x4000) == 0 )
    return v8 - __readfsqword(0x28u);
LABEL_8:
  if ( *(_DWORD *)(get_ph(a1, a2, a3) + 4) == 55 )
    return sub_101F0(0xBC2u, 2);
LABEL_23:
  if ( under_debugger )
    BUG();
  interr(0);
  return 1;
}

