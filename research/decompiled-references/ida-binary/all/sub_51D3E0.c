unsigned __int64 __fastcall sub_51D3E0(__int64 a1)
{
  int v1; // ebp
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  bool v7; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  sub_5345F0(&qword_8D2480, off_8C3140, 4, 0);
  sub_5344E0(&qword_8D2478, "QuickFilterModeRegex");
  sub_5344E0(&qword_8D2470, "QuickFilterModeFuzzy");
  sub_5344E0(&qword_8D2468, "QuickFilterModeWholeWords");
  sub_5344E0(&qword_8D2460, "QuickFilterMatchCase");
  sub_531B30(1, a1, &qword_8D2480);
  v1 = *(_DWORD *)(a1 + 104) & 3;
  v7 = v1 == 2;
  v2 = sub_5313F0(qword_8D2478);
  if ( v2 )
    sub_537630(v2, 7, &v7);
  v7 = v1 == 3;
  v3 = sub_5313F0(qword_8D2470);
  if ( v3 )
    sub_537630(v3, 7, &v7);
  v7 = v1 == 1;
  v4 = sub_5313F0(qword_8D2468);
  if ( v4 )
    sub_537630(v4, 7, &v7);
  v7 = (*(_BYTE *)(a1 + 104) & 0x20) != 0;
  v5 = sub_5313F0(qword_8D2460);
  if ( v5 )
    sub_537630(v5, 7, &v7);
  return v8 - __readfsqword(0x28u);
}
