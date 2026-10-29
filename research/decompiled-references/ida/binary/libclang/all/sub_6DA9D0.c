unsigned __int64 __fastcall sub_6DA9D0(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 result; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14[4]; // [rsp+8h] [rbp-20h] BYREF

  v5 = a2;
  v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v7 & 8) == 0 )
    return v5;
  v8 = *(__int64 *)((char *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL));
  if ( (v8 | (unsigned __int64)(((unsigned __int8)v5 | (unsigned __int8)v7) & 7)) <= 0x1FF )
    return v5;
  v14[0] = 0;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
  {
    v10 = 0;
    while ( (v8 | (unsigned __int64)(((unsigned __int8)v5 | (unsigned __int8)v7) & 7)) > 0x1FF )
    {
      v10 |= v5 & 7;
      v14[0] = v10;
      if ( (v5 & 8) != 0 )
      {
        v10 |= *(_QWORD *)(v6 + 24);
        v14[0] = v10;
        v6 = *(_QWORD *)v6;
      }
      if ( (*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 8) == 0 )
        goto LABEL_5;
      if ( (*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          | *(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) <= 0x1FF )
        goto LABEL_5;
      v12 = sub_B10B70(v5, a1);
      v10 = v14[0];
      v5 = v12;
      v13 = v12 & 0xFFFFFFFFFFFFFFF0LL;
      v7 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v7 & 8) == 0 )
        goto LABEL_5;
      v8 = *(__int64 *)((char *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL));
      a4 = v6;
      v6 = v13;
    }
    v6 = a4;
  }
  else
  {
    v9 = sub_6DA5F0((__int64)a1, v5, v14);
    LOWORD(v10) = v14[0];
    v6 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  }
LABEL_5:
  v14[0] = v10 & 0x1FF;
  result = v14[0] | v6 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v10 & 0x1F8) != 0 )
    return sub_6C3980(a1, v6, v10 & 0x1FF);
  return result;
}

