unsigned __int64 __fastcall sub_CFBD0(__int64 *a1, __int64 a2, __int16 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rdx
  __int16 v11; // ax
  __int64 v12; // rdx
  __int64 v13; // rsi
  _DWORD *v14; // r12
  __int64 v16; // rax
  _QWORD v17[2]; // [rsp+0h] [rbp-68h] BYREF
  int v18; // [rsp+10h] [rbp-58h]
  int v19; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v20; // [rsp+28h] [rbp-40h]
  int v21; // [rsp+30h] [rbp-38h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v3 = a1[1];
  v22 = __readfsqword(0x28u);
  if ( !v3 )
    goto LABEL_9;
  v5 = 3 * v3;
  v6 = *a1;
  v19 = 0;
  v7 = v6 + 8 * v5 - 24;
  copy_argloc(&v19, v7);
  v8 = *(unsigned __int16 *)(v7 + 18);
  if ( v19 == 5 )
  {
    *v20 += v8;
    goto LABEL_7;
  }
  if ( v19 > 5 )
  {
    if ( v19 != 6 )
      goto LABEL_8;
    goto LABEL_17;
  }
  if ( v19 == 1 )
  {
LABEL_17:
    v20 = (_QWORD *)((char *)v20 + v8);
LABEL_7:
    if ( !(unsigned int)compare_arglocs(&v19, a2) )
    {
      *(_WORD *)(v7 + 18) += a3;
      cleanup_argloc(&v19);
      return v22 - __readfsqword(0x28u);
    }
    goto LABEL_8;
  }
  if ( v19 == 3 )
  {
    HIWORD(v9) = WORD1(v20);
    LOWORD(v9) = 0;
    LODWORD(v20) = v9 | ((unsigned __int16)v20 + (_DWORD)v8);
    goto LABEL_7;
  }
LABEL_8:
  cleanup_argloc(&v19);
LABEL_9:
  v17[0] = 0;
  v17[1] = 0;
  v18 = 0xFFFF;
  copy_argloc(v17, a2);
  v10 = a1[1];
  v11 = 0;
  if ( v10 )
    v11 = *(_WORD *)(*a1 + 24 * v10 - 6) + *(_WORD *)(*a1 + 24 * v10 - 8);
  LOWORD(v18) = v11;
  HIWORD(v18) = a3;
  v19 = 0;
  copy_argloc(&v19, v17);
  v12 = a1[1];
  v13 = *a1;
  v21 = v18;
  if ( a1[2] < (unsigned __int64)(v12 + 1) )
  {
    v16 = qvector_reserve(a1, v13, v12 + 1, 24);
    *a1 = v16;
    v12 = a1[1];
    v13 = v16;
  }
  v14 = (_DWORD *)(v13 + 24 * v12);
  *v14 = 0;
  copy_argloc(v14, &v19);
  v14[4] = v21;
  ++a1[1];
  cleanup_argloc(&v19);
  cleanup_argloc(v17);
  return v22 - __readfsqword(0x28u);
}
