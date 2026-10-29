unsigned __int64 __fastcall sub_6CB5B0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 i; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // [rsp+8h] [rbp-20h]

  for ( i = 0; ; i |= v6 )
  {
    v5 = sub_B107B0(a2);
    v7 = v5;
    if ( (unsigned __int8)(*(_BYTE *)(v5 + 16) - 2) > 4u )
    {
      v12 = v6;
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
        break;
      v8 = sub_B0D320(v5);
      v6 = v12;
      v7 = v8;
      if ( !v8 )
        break;
    }
    a2 = *(_QWORD *)(v7 + 32);
  }
  v9 = a2 & 7;
  if ( i <= 7 )
    return (unsigned int)i | (unsigned int)v9 | a2 & 0xFFFFFFFFFFFFFFF8LL;
  v11 = i | v9;
  if ( (a2 & 8) != 0 )
    return sub_6C3980(
             a1,
             *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL),
             *(__int64 *)((char *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL)) | v11);
  else
    return sub_6C3980(a1, a2 & 0xFFFFFFFFFFFFFFF0LL, v11);
}

