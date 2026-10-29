_BYTE *__fastcall sub_E27E20(__int64 a1, __int64 a2)
{
  int v3; // r13d
  int v5; // ebx
  __int64 v6; // rdi
  int v7; // ebp
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  _BYTE *result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx

  v3 = 0;
  if ( (*(_BYTE *)(a2 + 97) & 0x10) == 0 )
    v3 = (*(_DWORD *)(a2 + 96) >> 13) & 0x7F;
  v5 = (unsigned __int8)(*(_WORD *)(a2 + 98) >> 4);
  if ( v5 == 255 )
    v5 = sub_B50B40(a2);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = ((*(_DWORD *)(a1 + 44) & 1) == 0) + (*(_DWORD *)(a1 + 44) >> 1) - v3 - 1;
  if ( ((*(_DWORD *)(a1 + 44) & 1) == 0) + (*(_DWORD *)(a1 + 44) >> 1) - v3 == 1 )
  {
    sub_971800(v6, "fp");
  }
  else
  {
    v16 = sub_971800(v6, "fL");
    v17 = sub_2257BD0(v16, (unsigned int)(v7 - 1));
    v18 = *(_BYTE **)(v17 + 32);
    if ( (unsigned __int64)v18 >= *(_QWORD *)(v17 + 24) )
    {
      sub_2257CD0(v17, 112);
    }
    else
    {
      *(_QWORD *)(v17 + 32) = v18 + 1;
      *v18 = 112;
    }
  }
  v8 = *(_QWORD *)(a2 + 48);
  v9 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v10 = *(_QWORD *)v9;
  if ( *(_BYTE *)(*(_QWORD *)v9 + 16LL) == 18 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    v12 = 0;
    v13 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v13 & 8) != 0 )
      v12 = *(__int64 *)((char *)&qword_18 + (v13 & 0xFFFFFFFFFFFFFFF0LL));
    sub_E27640((__int64 *)a1, v12 | ((unsigned __int8)v13 | (unsigned __int8)v11) & 7, v10);
    v14 = *(_QWORD *)(a1 + 8);
    if ( !v5 )
      goto LABEL_11;
LABEL_18:
    sub_2257BD0(v14, (unsigned int)(v5 - 1));
    v14 = *(_QWORD *)(a1 + 8);
    result = *(_BYTE **)(v14 + 32);
    if ( (unsigned __int64)result < *(_QWORD *)(v14 + 24) )
      goto LABEL_12;
    return (_BYTE *)sub_2257CD0(v14, 95);
  }
  v19 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  v20 = 0;
  if ( (v19 & 8) != 0 )
    v20 = *(__int64 *)((char *)&qword_18 + (v19 & 0xFFFFFFFFFFFFFFF0LL));
  sub_E27640((__int64 *)a1, v20 | ((unsigned __int8)v19 | (unsigned __int8)v8) & 7, 0);
  v14 = *(_QWORD *)(a1 + 8);
  if ( v5 )
    goto LABEL_18;
LABEL_11:
  result = *(_BYTE **)(v14 + 32);
  if ( (unsigned __int64)result < *(_QWORD *)(v14 + 24) )
  {
LABEL_12:
    *(_QWORD *)(v14 + 32) = result + 1;
    *result = 95;
    return result;
  }
  return (_BYTE *)sub_2257CD0(v14, 95);
}

