__int64 __fastcall sub_4BEE60(__int64 *a1, unsigned int *a2, __int64 a3)
{
  const char *v3; // r12
  bool v4; // zf
  unsigned int v6; // ebp
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v15[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = &s1;
  v4 = *(_QWORD *)(a3 + 8) == 0;
  v15[1] = __readfsqword(0x28u);
  if ( !v4 )
    v3 = *(const char **)a3;
  v6 = sub_4BED70(a1, a2, v3, &v14, v15);
  if ( v15[0] )
  {
    v7 = *(_QWORD *)(a3 + 8);
    if ( v7 )
    {
      v8 = v14;
      v9 = v7 - 1;
      if ( v14 < v9 && v15[0] != (_QWORD)&v3[v14] )
      {
        v10 = v15[0] - (_QWORD)v3;
        if ( v15[0] - (_QWORD)v3 < v9 )
        {
          v8 = v9 - v10 + v14;
          memmove((void *)(v14 + *(_QWORD *)a3), (const void *)(*(_QWORD *)a3 + v10), v9 - v10);
        }
        v11 = *(_QWORD *)a3;
        if ( *(_QWORD *)(a3 + 16) < v8 + 1 )
        {
          v13 = qvector_reserve(a3, v11, v8 + 1, 1);
          *(_QWORD *)a3 = v13;
          v11 = v13;
        }
        *(_QWORD *)(a3 + 8) = v8 + 1;
        *(_BYTE *)(v11 + v8) = 0;
      }
    }
  }
  return v6;
}
