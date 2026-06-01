__int64 __fastcall sub_36A8D0(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r13d
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rbx
  int updated; // eax

  v2 = a1[18];
  v3 = a1[10];
  v4 = getseg(a1[2]);
  if ( !v4 )
    goto LABEL_6;
  v5 = v4;
  if ( v3 == 24 )
  {
    if ( (((unsigned __int8)v2 ^ *(_BYTE *)(v4 + 24)) & 8) != 0 && (unsigned int)change_segment_status(v4) )
      goto LABEL_6;
  }
  else if ( v3 == 28 )
  {
    sub_4F8940(qword_2CA1698);
  }
  if ( (unsigned __int8)sub_36A7C0((__int64)&unk_2388780, v5, v3, v2) )
  {
    updated = (unsigned __int8)update_segm(v5);
    goto LABEL_7;
  }
LABEL_6:
  updated = 0;
LABEL_7:
  *(_DWORD *)(a2 + 8) = updated;
  return 0;
}

