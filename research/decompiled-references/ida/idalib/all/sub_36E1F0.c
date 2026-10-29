__int64 __fastcall sub_36E1F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 updated; // rax

  v2 = a1[9];
  v3 = a1[5];
  v4 = getseg(a1[1]);
  if ( !v4 )
    goto LABEL_6;
  v5 = v4;
  if ( (_DWORD)v3 == 44 )
  {
    if ( (((unsigned __int8)v2 ^ *(_BYTE *)(v4 + 44)) & 8) != 0 && (unsigned int)change_segment_status(v4) )
      goto LABEL_6;
  }
  else if ( (_DWORD)v3 == 48 )
  {
    sub_510270(qword_2CCB598);
  }
  if ( (unsigned __int8)sub_36E0E0((__int64)&unk_23AC7C0, v5, (unsigned int)v3, v2) )
  {
    updated = (unsigned __int8)update_segm(v5);
    goto LABEL_7;
  }
LABEL_6:
  updated = 0;
LABEL_7:
  *(_QWORD *)(a2 + 8) = updated;
  return 0;
}
