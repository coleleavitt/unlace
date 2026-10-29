__int64 __fastcall sub_4E4000(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 segm_base; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbp
  _QWORD *v10; // r14
  unsigned __int64 v11; // r13
  __int64 v12; // rdx
  __int64 *v13; // rdi
  unsigned int v14; // ebx
  char *v16; // rax
  _QWORD v17[135]; // [rsp+0h] [rbp-438h] BYREF

  v3 = a1[8];
  v4 = a1[7];
  v17[129] = __readfsqword(0x28u);
  v5 = getseg(v4);
  segm_base = get_segm_base(v5);
  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 1504) & (v3 - segm_base);
  if ( !v8 )
    return 1;
  v9 = v8;
  if ( *(char *)(a1[2] + 24) < 0 )
  {
    btoa64(v17, 1024, v8, 0);
    sub_35A790((char **)a2);
    return 1;
  }
  if ( *(_QWORD *)(v7 + 1256) )
  {
    v10 = *(_QWORD **)(v7 + 1672);
    v11 = a1[3];
    if ( (sub_3BE900(v10, v11, 4) & 0x600) == 0x200 )
      v11 = sub_3C2650(v10, v11);
    if ( (~((unsigned __int16)sub_3BE900(v10, v11, 4) >> 8) & 6) != 0 )
      v11 = a1[3];
    v12 = a1[8];
    if ( v12 != v11 )
      goto LABEL_9;
    sub_35A790((char **)a2);
    return 1;
  }
  v12 = a1[8];
LABEL_9:
  v13 = a1;
  v14 = 0;
  if ( sub_4E3B70(v13, a2, v12, v9, 2, 0) > 0 )
  {
    v14 = 1;
    if ( *(_QWORD *)(a2 + 8) )
    {
      v16 = strchr(*(const char **)a2, 9);
      if ( v16 )
        return (unsigned int)(((v16[1] - 43) & 0xFD) == 0) + 1;
    }
  }
  return v14;
}
