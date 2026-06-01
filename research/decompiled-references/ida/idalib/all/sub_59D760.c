unsigned __int64 __fastcall sub_59D760(__int64 a1, __int64 a2)
{
  __int64 switch_info; // rax
  _QWORD *v4; // rdi
  unsigned int v5; // ebx
  __int64 i; // rax
  __int64 v7; // rbp
  void *v9; // [rsp+0h] [rbp-98h] BYREF
  __m128i si128; // [rsp+8h] [rbp-90h]
  __int128 v11; // [rsp+18h] [rbp-80h]
  __int64 v12; // [rsp+28h] [rbp-70h]
  __int64 v13; // [rsp+30h] [rbp-68h]
  __int64 v14; // [rsp+38h] [rbp-60h]
  __int64 v15; // [rsp+40h] [rbp-58h]
  __int64 v16; // [rsp+48h] [rbp-50h]
  __int64 v17; // [rsp+50h] [rbp-48h]
  __int64 v18; // [rsp+58h] [rbp-40h]
  void *ptr; // [rsp+60h] [rbp-38h]
  __int128 v20; // [rsp+68h] [rbp-30h]
  unsigned __int64 v21; // [rsp+78h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  v9 = &loc_800000;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
  v11 = -1;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0xFFFFFFFFLL;
  v16 = 0;
  v17 = 2;
  v18 = -1;
  ptr = nullptr;
  v20 = 0;
  switch_info = get_switch_info(&v9, a2);
  v4 = ptr;
  if ( switch_info <= 0 )
  {
    if ( !ptr )
      return v21 - __readfsqword(0x28u);
    goto LABEL_9;
  }
  v5 = 0;
  for ( i = 0; v5 < (unsigned __int64)v20; i = v5 )
  {
    v7 = v4[i];
    if ( v7 != -1 )
    {
      if ( (unsigned __int8)netnode_charval(*(_QWORD *)(*(_QWORD *)(a1 + 632) + 104LL), v7, 256) == 3 )
        netnode_supdel(*(_QWORD *)(*(_QWORD *)(a1 + 632) + 104LL), v7, 256);
      v4 = ptr;
    }
    ++v5;
  }
  if ( v4 )
  {
LABEL_9:
    *(_QWORD *)&v20 = 0;
    qfree(v4);
  }
  return v21 - __readfsqword(0x28u);
}
