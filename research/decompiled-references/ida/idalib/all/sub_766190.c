__int64 __fastcall sub_766190(unsigned int *a1, unsigned int *a2, __int64 a3, char *a4)
{
  char *v4; // rbx
  char v5; // r12
  char *v6; // rax
  unsigned int v8; // r13d
  __int64 v9; // rax
  unsigned int v10; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v4 = qword_2CD44C0;
  if ( (unsigned __int8)(*qword_2CD44C0 - 48) > 9u )
  {
    v10 = 0;
    v5 = (char)a1;
    if ( *qword_2CD44C0 == 63 )
    {
      qword_2CD44C0 += 2;
      if ( v4[1] != 36
        || (a1 = nullptr,
            v10 = sub_765F90(0, a2),
            v6 = qword_2CD44C0,
            a3 = (__int64)(qword_2CD44C0 + 1),
            ++qword_2CD44C0,
            *v6 != 64) )
      {
        sub_76E6C0(a1, a2, a3, a4);
      }
LABEL_10:
      if ( v5 )
        return v10;
      goto LABEL_7;
    }
    if ( (unsigned int)(qword_2CD44B8 - (_DWORD)qword_2CD44C0) <= 0x11 )
    {
      if ( (unsigned int)(qword_2CD44B8 - (_DWORD)qword_2CD44C0) <= 0xC )
        goto LABEL_6;
    }
    else
    {
      a3 = *((_QWORD *)qword_2CD44C0 + 1) ^ 0x74656D617261702DLL;
      if ( !(a3 | *(_QWORD *)qword_2CD44C0 ^ 0x6574616C706D6574LL) && *((_WORD *)qword_2CD44C0 + 8) == 29285 )
      {
        v8 = 19;
        v9 = 19;
        if ( qword_2CD44C0[18] == 45 )
          goto LABEL_17;
      }
    }
    if ( *(_QWORD *)qword_2CD44C0 == 0x2D636972656E6567LL && *(_QWORD *)(qword_2CD44C0 + 5) == 0x2D657079742D6369LL )
    {
      v8 = 13;
      v9 = 13;
LABEL_17:
      qword_2CD44C0 += v9;
      sub_763320(a1, (__int64)a2, a3, a4);
      sub_76F980(&v11, v4, v8);
      v10 = sub_773330(&v11);
      goto LABEL_10;
    }
LABEL_6:
    sub_76F5E0(&v11, 0);
    v10 = v11;
    if ( (_BYTE)a1 )
      return v10;
LABEL_7:
    sub_772B00(qword_2CD44D0, &v10);
    return v10;
  }
  ++qword_2CD44C0;
  return *(unsigned int *)sub_772CD0(qword_2CD44D0, (unsigned int)(*v4 - 48), a3, a4);
}
