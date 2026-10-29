__int64 __fastcall sub_2091720(_QWORD *a1, _BYTE *a2)
{
  _QWORD *v2; // rbp
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // r13
  char v8; // al
  const char *v9; // rbp
  __int64 v10; // r12
  size_t v11; // rax
  _QWORD *v12; // rcx
  _WORD *v13; // rax
  _BYTE *v14; // rdx
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  __int64 (__fastcall *v16)(_BYTE *, _QWORD); // rax
  unsigned __int64 v17; // r9
  char *v18; // rcx
  const char *v19; // rbp
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // edi
  __int64 v23; // r8
  _QWORD v24[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1;
  v3 = *((_DWORD *)a2 + 2);
  v4 = *a1;
  if ( v3 <= 12 || v3 > 21 )
  {
    v5 = *(_QWORD *)(v4 + 88);
    if ( !v5 )
      goto LABEL_10;
  }
  else
  {
    a1 = *(_QWORD **)(v4 + 136);
    if ( a1 )
    {
      sub_2093BA0();
      v4 = *v2;
      v5 = *(_QWORD *)(*v2 + 88LL);
      if ( !v5 )
        goto LABEL_5;
    }
    else
    {
      v5 = *(_QWORD *)(v4 + 88);
      if ( !v5 )
        goto LABEL_6;
    }
  }
  if ( a2[12] )
  {
    if ( !*(_BYTE *)(v4 + 96) )
      goto LABEL_26;
  }
  else
  {
    *(_BYTE *)(v5 + 16) = 1;
    if ( !*(_BYTE *)(v4 + 96) )
      goto LABEL_26;
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 2) - 13) <= 8 )
  {
    a1 = a2;
    if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2) || a2[416] && !a2[72] )
      goto LABEL_5;
    v4 = *v2;
  }
LABEL_26:
  a1 = *(_QWORD **)(v4 + 88);
  v15 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 16LL);
  if ( v15 == sub_208B6A0 )
  {
    v16 = (__int64 (__fastcall *)(_BYTE *, _QWORD))a1[3];
    if ( v16 )
      return v16(a2, a1[1]);
  }
  else
  {
    result = v15((__int64)a1, (__int64)a2);
    if ( (_BYTE)result )
      return result;
  }
LABEL_5:
  v3 = *((_DWORD *)a2 + 2);
  if ( v3 <= 12 )
    goto LABEL_10;
LABEL_6:
  if ( v3 > 18 )
  {
    if ( (unsigned int)(v3 - 19) > 2 )
      goto LABEL_10;
    a1 = a2;
    result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2);
    if ( !(_BYTE)result )
      return result;
  }
  else
  {
    a1 = a2;
    result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2);
    if ( !(_BYTE)result )
      return result;
  }
  if ( a2[416] && !a2[72] )
    return result;
LABEL_10:
  v24[1] = sub_227D6D0(a1, a2);
  v24[0] = off_2BE5EC0;
  v7 = sub_227D6D0(a1, a2);
  v8 = a2[12];
  if ( v8 == 1 )
  {
    v9 = "warning";
  }
  else if ( v8 <= 1 )
  {
    if ( v8 )
      return sub_2091AA0(a1, a2);
    v9 = "error";
  }
  else
  {
    if ( v8 != 2 )
    {
      if ( v8 == 3 )
      {
        v9 = "note";
        goto LABEL_15;
      }
      return sub_2091AA0(a1, a2);
    }
    v9 = "remark";
  }
LABEL_15:
  v10 = v7;
  v11 = strlen(v9);
  v12 = *(_QWORD **)(v7 + 32);
  if ( v11 <= *(_QWORD *)(v7 + 24) - (_QWORD)v12 )
  {
    if ( (unsigned int)v11 >= 8 )
    {
      v17 = (unsigned __int64)(v12 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v12 = *(_QWORD *)v9;
      *(_QWORD *)((char *)v12 + (unsigned int)v11 - 8) = *(_QWORD *)&v9[(unsigned int)v11 - 8];
      v18 = (char *)v12 - v17;
      v19 = (const char *)(v9 - v18);
      v20 = (v11 + (_DWORD)v18) & 0xFFFFFFF8;
      if ( v20 >= 8 )
      {
        v21 = v20 & 0xFFFFFFF8;
        v22 = 0;
        do
        {
          v23 = v22;
          v22 += 8;
          *(_QWORD *)(v17 + v23) = *(_QWORD *)&v19[v23];
        }
        while ( v22 < v21 );
      }
    }
    else
    {
      if ( (v11 & 4) != 0 )
      {
        *(_DWORD *)v12 = *(_DWORD *)v9;
        *(_DWORD *)((char *)v12 + (unsigned int)v11 - 4) = *(_DWORD *)&v9[(unsigned int)v11 - 4];
        v12 = *(_QWORD **)(v7 + 32);
        goto LABEL_49;
      }
      if ( !(_DWORD)v11 )
      {
LABEL_49:
        v13 = (_WORD *)((char *)v12 + v11);
        *(_QWORD *)(v7 + 32) = v13;
        goto LABEL_17;
      }
      *(_BYTE *)v12 = *v9;
      if ( (v11 & 2) != 0 )
      {
        *(_WORD *)((char *)v12 + (unsigned int)v11 - 2) = *(_WORD *)&v9[(unsigned int)v11 - 2];
        v12 = *(_QWORD **)(v7 + 32);
        goto LABEL_49;
      }
    }
    v12 = *(_QWORD **)(v7 + 32);
    goto LABEL_49;
  }
  v10 = sub_227BF10(v7, v9, v11);
  v13 = *(_WORD **)(v10 + 32);
LABEL_17:
  if ( *(_QWORD *)(v10 + 24) - (_QWORD)v13 > 1u )
  {
    *v13 = 8250;
    *(_QWORD *)(v10 + 32) += 2LL;
  }
  else
  {
    sub_227BF10(v10, ": ", 2);
  }
  (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)a2 + 24LL))(a2, v24);
  result = sub_227D6D0(a2, v24);
  v14 = *(_BYTE **)(result + 32);
  if ( *(_BYTE **)(result + 24) == v14 )
  {
    result = sub_227BF10(result, "\n", 1);
  }
  else
  {
    *v14 = 10;
    ++*(_QWORD *)(result + 32);
  }
  if ( !a2[12] )
    exit(1);
  return result;
}
