unsigned __int64 __fastcall segm_chooser_t__::vfunc_9(__int64 a1, char *a2, _QWORD *a3)
{
  __int64 v3; // r12
  int segm_num; // eax
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  _QWORD *prev_seg; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-20h]

  v3 = *a3;
  v15 = __readfsqword(0x28u);
  segm_num = get_segm_num(*a3);
  v6 = segm_num;
  if ( segm_num != -1 )
    goto LABEL_2;
  prev_seg = (_QWORD *)get_prev_seg(v3);
  if ( prev_seg )
  {
    v6 = (int)get_segm_num(*prev_seg);
LABEL_2:
    v7 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      *((_QWORD *)a2 + 1) = 0;
      qfree(v7, a2);
      *(_QWORD *)a2 = 0;
      *((_QWORD *)a2 + 2) = 0;
    }
    if ( (int)v6 >= 0 )
    {
      v9 = *((_QWORD *)a2 + 1);
      v10 = *((_QWORD *)a2 + 2);
      v11 = *(_QWORD *)a2;
      if ( v10 < v9 + 1 )
      {
        v14 = qvector_reserve(a2, v11, v9 + 1, 8);
        *(_QWORD *)a2 = v14;
        v11 = v14;
        v9 = *((_QWORD *)a2 + 1);
      }
      *(_QWORD *)(v11 + 8 * v9) = v6;
      ++*((_QWORD *)a2 + 1);
    }
    return v15 - __readfsqword(0x28u);
  }
  v13 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    *((_QWORD *)a2 + 1) = 0;
    qfree(v13, a2);
    *(_QWORD *)a2 = 0;
    *((_QWORD *)a2 + 2) = 0;
  }
  return v15 - __readfsqword(0x28u);
}
