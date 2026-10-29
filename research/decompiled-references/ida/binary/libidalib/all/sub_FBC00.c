unsigned __int64 __fastcall sub_FBC00(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int16 v4; // ax
  unsigned __int64 v6; // [rsp+58h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  *(_DWORD *)a2 = -1;
  linearray_t_ctr();
  linearray_t_set_place();
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(v2 + 20);
  *(_WORD *)(a2 + 4) = *(_WORD *)(v2 + 16);
  v4 = v3 - 1;
  if ( (__int16)(v3 - 1) < 0 )
    v4 = 0;
  *(_WORD *)(a2 + 6) = v4;
  linearray_t_dtr();
  return v6 - __readfsqword(0x28u);
}

