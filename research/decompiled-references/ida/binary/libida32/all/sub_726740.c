unsigned __int64 __fastcall sub_726740(__int64 a1, __int64 a2, _DWORD **a3, int a4)
{
  _DWORD *v5; // r13
  __int64 v6; // r15
  unsigned __int16 *v9; // r13
  int v10; // r14d
  int v11; // r15d
  int v12; // eax
  int v13; // r8d
  char v14; // al
  int v16; // [rsp+Ch] [rbp-4Ch]
  int v17; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v5 = *a3;
  v6 = *((unsigned __int16 *)*a3 + 3 * a4 + 5);
  v18 = __readfsqword(0x28u);
  v17 = 0;
  sub_725200(a1, a3, a4, &v17);
  if ( v17 || !(unsigned __int8)sub_724ED0((unsigned int *)a1, a3, a4, nullptr) )
    return v18 - __readfsqword(0x28u);
  if ( *v5 )
  {
    if ( (unsigned int)(unsigned __int16)v6 >= *(v5 - 2) )
      sub_722BF0();
    v9 = (unsigned __int16 *)((char *)v5 + v6);
    if ( *(_WORD *)(a1 + 1632) == 0xFFFF )
      v9 = (unsigned __int16 *)((char *)v9 + 1);
LABEL_8:
    if ( !qword_2CA2E10 || sub_71D0C0(v9, (unsigned __int16 *)qword_2CA2E10) > 0 )
    {
      sub_71D140(word_2CA2800, v9);
      if ( !sub_723E90(a2, word_2CA2800) && !(unsigned __int8)sub_71CD80(a2, word_2CA2800, 0xFFFF, nullptr, 0) )
      {
        sub_713900((__int64)"*** FATAL: %s\n", "internal error in vld_key");
        sub_722B40();
        exit(-1);
      }
      qword_2CA2E10 = (__int64)word_2CA2800;
    }
    return v18 - __readfsqword(0x28u);
  }
  v10 = a4 - 1;
  v11 = sub_721D90((__int64)v5, a4);
  if ( a4 > 0 && v11 )
  {
    while ( 1 )
    {
      v12 = sub_721D90((__int64)v5, v10);
      v13 = v12;
      if ( v10 && v12 == v11 )
      {
        --v10;
      }
      else
      {
        v16 = v12;
        v14 = sub_724ED0((unsigned int *)a1, a3, v10, nullptr);
        v13 = v16;
        if ( !v14 )
          return v18 - __readfsqword(0x28u);
        if ( v10-- == 0 )
          goto LABEL_27;
        if ( !v16 )
          goto LABEL_22;
      }
      v11 = v13;
    }
  }
  v13 = v11;
LABEL_27:
  if ( !v13 )
  {
LABEL_22:
    v9 = (unsigned __int16 *)sub_7266D0(a1, a3, a4);
    if ( !v9 )
      return v18 - __readfsqword(0x28u);
    goto LABEL_8;
  }
  return v18 - __readfsqword(0x28u);
}

