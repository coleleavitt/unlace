unsigned __int64 __fastcall sub_121CE0(__int64 a1, __int64 *a2)
{
  int segm_num; // eax
  __int64 v4; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  segm_num = get_segm_num();
  v4 = segm_num;
  if ( segm_num != -1 )
    goto LABEL_2;
  if ( get_prev_seg() )
  {
    v4 = (int)get_segm_num();
LABEL_2:
    if ( *a2 )
    {
      a2[1] = 0;
      qfree();
      *a2 = 0;
      a2[2] = 0;
    }
    if ( (int)v4 >= 0 )
    {
      v6 = a2[1];
      v7 = a2[2];
      v8 = *a2;
      if ( v7 < v6 + 1 )
      {
        v9 = qvector_reserve();
        *a2 = v9;
        v8 = v9;
        v6 = a2[1];
      }
      *(_QWORD *)(v8 + 8 * v6) = v4;
      ++a2[1];
    }
    return v10 - __readfsqword(0x28u);
  }
  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  return v10 - __readfsqword(0x28u);
}

