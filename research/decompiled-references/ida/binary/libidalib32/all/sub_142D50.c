__int64 __fastcall sub_142D50(__int64 a1, unsigned __int16 a2)
{
  unsigned int v3; // eax
  int v4; // edx
  bool v5; // zf
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  char v9; // [rsp+2h] [rbp-16h] BYREF
  char v10; // [rsp+3h] [rbp-15h] BYREF
  int v11; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  if ( unk_2530A9 )
    return 1;
  v3 = getinf();
  v4 = (v3 >> 9) & 1;
  v5 = (v3 & 0x400) == 0;
  v6 = 2;
  if ( v5 )
    v6 = v4;
  v11 = v6;
  v9 = 0;
  v7 = TView::commandEnabled((TView *)unk_24DFA0, a2);
  v10 = is_miniidb();
  v8 = sub_142710(v7 != 0, &v11, &v9, (bool *)&v10);
  if ( v8 == -1 )
    return 1;
  else
    return (unsigned __int8)sub_142B00(
                              v8 == 0,
                              v11,
                              v9,
                              v10,
                              (unsigned int (__fastcall *)(__int64, const char *))sub_13F270);
}

