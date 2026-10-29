__int64 __fastcall sub_8BAB70(_QWORD *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned int v5; // eax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-58h]
  _QWORD v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v17[1] = __readfsqword(0x28u);
  v3 = *a2;
  if ( __CFADD__(*a2, a3) )
    return 0;
  v17[0] = *a2;
  v5 = unpack_dd(v17);
  v6 = v17[0];
  if ( v3 >= v17[0] )
    return 0;
  v7 = a1[3];
  v8 = v5;
  if ( v7 < v5 )
  {
    v13 = a1[2];
    if ( a1[4] < (unsigned __int64)v5 )
    {
      v14 = qvector_reserve(a1 + 2, v13, v5, 4);
      v7 = a1[3];
      a1[2] = v14;
      v13 = v14;
    }
    memset((void *)(v13 + 4 * v7), 0, 4 * (v8 - v7));
    a1[3] = v8;
LABEL_8:
    v9 = 4 * v8;
    v10 = 0;
    v15 = v9;
    while ( 1 )
    {
      v11 = a1[2];
      v17[0] = v6;
      *(_DWORD *)(v10 + v11) = unpack_dd(v17);
      v12 = v6;
      v6 = v17[0];
      if ( v12 >= v17[0] )
        return 0;
      v10 += 4;
      if ( v15 == v10 )
        goto LABEL_15;
    }
  }
  if ( v5 != v7 )
    a1[3] = v5;
  if ( v5 )
    goto LABEL_8;
LABEL_15:
  *a2 = v6;
  return 1;
}

