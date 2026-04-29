unsigned __int64 __fastcall sub_57000(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  _QWORD *v7; // rbp
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v3 = *a1;
  v4 = *a1 + 8 * a1[1];
  if ( v4 != *a1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD **)v3;
      v8 = *(_DWORD *)(*(_QWORD *)v3 + 272LL);
      if ( v8 == 1 )
        break;
      if ( (unsigned int)(v8 - 2) > 1 )
        goto LABEL_11;
      v9 = v7[48];
      v10 = v9 + 104LL * v7[49];
      if ( !(104LL * v7[49]) )
        goto LABEL_11;
      while ( *(_DWORD *)(v9 + 48) != 1 || *(_QWORD *)(v9 + 56) != a3 )
      {
        v9 += 104;
        if ( v9 == v10 )
          goto LABEL_11;
      }
      v11 = a2[1];
      v12 = *a2;
      if ( a2[2] < (unsigned __int64)(v11 + 1) )
      {
        v14 = v11 + 1;
LABEL_18:
        v15 = qvector_reserve(a2, v12, v14, 8);
        *a2 = v15;
        v12 = v15;
        v11 = a2[1];
      }
LABEL_10:
      *(_QWORD *)(v12 + 8 * v11) = v7;
      ++a2[1];
LABEL_11:
      v3 += 8;
      if ( v4 == v3 )
        return v16 - __readfsqword(0x28u);
    }
    if ( *((_DWORD *)v7 + 98) != 1 || v7[50] != a3 )
      goto LABEL_11;
    v11 = a2[1];
    v12 = *a2;
    v14 = v11 + 1;
    if ( a2[2] >= (unsigned __int64)(v11 + 1) )
      goto LABEL_10;
    goto LABEL_18;
  }
  return v16 - __readfsqword(0x28u);
}
