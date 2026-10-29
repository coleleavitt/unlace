unsigned __int64 __fastcall sub_583850(__int64 a1, __int64 a2)
{
  __int64 switch_info; // rax
  _DWORD *v4; // rdi
  unsigned int v5; // ebx
  __int64 i; // rax
  unsigned int v7; // ebp
  __int64 v9; // [rsp+0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+8h] [rbp-70h]
  __int64 v11; // [rsp+18h] [rbp-60h]
  unsigned __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+28h] [rbp-50h]
  unsigned __int64 v14; // [rsp+30h] [rbp-48h]
  void *ptr; // [rsp+38h] [rbp-40h]
  __int128 v16; // [rsp+40h] [rbp-38h]
  unsigned __int64 v17; // [rsp+58h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v12 = 0xFFFFFFFF00000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23838B0);
  v9 = 0x800000;
  v11 = 0;
  v13 = 0;
  v14 = 0xFFFFFFFF00000002LL;
  ptr = nullptr;
  v16 = 0;
  switch_info = get_switch_info(&v9, a2);
  v4 = ptr;
  if ( switch_info <= 0 )
  {
    if ( !ptr )
      return v17 - __readfsqword(0x28u);
    goto LABEL_9;
  }
  v5 = 0;
  for ( i = 0; v5 < (unsigned __int64)v16; i = v5 )
  {
    v7 = v4[i];
    if ( v7 != -1 )
    {
      if ( (unsigned __int8)netnode_charval(*(unsigned int *)(*(_QWORD *)(a1 + 544) + 104LL), v7, 256) == 3 )
        netnode_supdel(*(unsigned int *)(*(_QWORD *)(a1 + 544) + 104LL), v7, 256);
      v4 = ptr;
    }
    ++v5;
  }
  if ( v4 )
  {
LABEL_9:
    *(_QWORD *)&v16 = 0;
    qfree(v4);
  }
  return v17 - __readfsqword(0x28u);
}

