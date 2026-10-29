__int64 __fastcall sub_44D20(_QWORD *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  bool v4; // cf
  __int64 v5; // rdx
  __int64 v7; // rbp
  unsigned int v8; // eax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-58h]
  _QWORD v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v20[1] = __readfsqword(0x28u);
  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = *a2 + a3;
  if ( v4 )
    return 0;
  v20[0] = *a2;
  v7 = v5;
  v8 = sub_93BC0(v20, v5);
  v9 = v20[0];
  if ( v3 >= v20[0] )
    return 0;
  v10 = a1[3];
  v11 = v8;
  if ( v10 < v8 )
  {
    v16 = a1[2];
    if ( a1[4] < (unsigned __int64)v8 )
    {
      v17 = sub_96080(a1 + 2, v16, v8, 4);
      v10 = a1[3];
      a1[2] = v17;
      v16 = v17;
    }
    memset((void *)(v16 + 4 * v10), 0, 4 * (v11 - v10));
    a1[3] = v11;
LABEL_8:
    v12 = 4 * v11;
    v13 = 0;
    v18 = v12;
    while ( 1 )
    {
      v14 = a1[2];
      v20[0] = v9;
      *(_DWORD *)(v13 + v14) = sub_93BC0(v20, v7);
      v15 = v9;
      v9 = v20[0];
      if ( v15 >= v20[0] )
        return 0;
      v13 += 4;
      if ( v18 == v13 )
        goto LABEL_15;
    }
  }
  if ( v8 != v10 )
    a1[3] = v8;
  if ( v8 )
    goto LABEL_8;
LABEL_15:
  *a2 = v9;
  return 1;
}

