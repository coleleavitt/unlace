unsigned __int64 __fastcall sub_A71510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  char v7; // al
  __int64 *v8; // rbp
  __int64 v10; // rdx
  __int64 v11; // rdx

LABEL_4:
  while ( 1 )
  {
    v8 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
    while ( 1 )
    {
      if ( (v8[1] & 8) != 0
        && (((*(__int64 *)((char *)&qword_18 + (v8[1] & 0xFFFFFFFFFFFFFFF0LL)) | v8[1] & 7uLL) >> 6) & 7) != 0 )
      {
        return ((*(__int64 *)((char *)&qword_18 + (v8[1] & 0xFFFFFFFFFFFFFFF0LL)) | v8[1] & 7uLL) >> 6) & 7;
      }
      v6 = *v8;
      v7 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned __int8)(v7 - 2) <= 4u )
      {
        a2 = sub_A71450(a1, a2);
        goto LABEL_4;
      }
      v10 = *(unsigned __int8 *)(v6 + 16);
      if ( (_BYTE)v10 != 42 )
      {
        if ( v7 != 42 )
          goto LABEL_14;
        v6 = sub_F63050(v6, a2, v10, a4, a5);
        if ( !v6 )
          break;
      }
      a2 = *(_QWORD *)(v6 + 32);
      v8 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
    }
    v6 = *v8;
    LODWORD(v10) = *(unsigned __int8 *)(*v8 + 16);
LABEL_14:
    v11 = (unsigned int)(v10 - 43);
    if ( (unsigned int)v11 > 1 )
    {
      v6 = sub_A56C80(v6, a2, v11, a4, a5);
      if ( !v6 )
        return 0;
    }
    a2 = sub_9B4870(v6, a2, v11, a4, a5);
  }
}
