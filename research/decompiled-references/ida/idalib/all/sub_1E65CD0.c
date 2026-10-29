unsigned __int64 __fastcall sub_1E65CD0(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 result; // rax
  __int64 v8; // r9
  char v9; // al
  unsigned int v10; // ebx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r13
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // [rsp+0h] [rbp-30h]

  v5 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v8 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned int)(v8 - 43) <= 1 )
  {
    v9 = a4 & 0xEA;
    v10 = a4 & 0xFFFFFFE2;
LABEL_5:
    if ( (v9 & 8) != 0 )
      v10 |= 8u;
    v11 = v10;
    return sub_1E62D40((__int64)a1, a2, a3, v11, a5);
  }
  v10 = a4 & 0xFFFFFFE7;
  if ( (a4 & 0x10) == 0 || (_BYTE)v8 == 7 )
  {
    v9 = a4;
    goto LABEL_5;
  }
  v12 = *(_QWORD *)(*(_QWORD *)v5 + 8LL) & 7LL | (*(__int64 *)(*(_QWORD *)v5 + 8LL) >> 3) & 1;
  if ( v12 )
  {
    v17 = a5;
    v15 = sub_F64F00(a2, a2, v12, a4, a5);
    a5 = v17;
    v13 = v16;
    v5 = v15 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v13 = a2 & 7;
    if ( (a2 & 8) != 0 )
    {
      v13 |= *(__int64 *)((char *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL));
      v5 = *(_QWORD *)v5 & 0xFFFFFFFFFFFFFFF0LL;
    }
  }
  v14 = a3;
  if ( a5 )
    v14 = *(_DWORD *)(a5 + 232);
  result = sub_1E65A20(a1, v5, v14, a4, a5, v8);
  a2 = result;
  if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    a5 = 0;
    v11 = v13 | v10;
    return sub_1E62D40((__int64)a1, a2, a3, v11, a5);
  }
  return result;
}
