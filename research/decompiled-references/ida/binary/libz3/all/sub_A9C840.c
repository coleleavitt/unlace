_DWORD *__fastcall sub_A9C840(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int *v8; // rax
  unsigned int *v9; // rbp
  unsigned int *v10; // r15
  unsigned int v11; // r13d
  unsigned int v12; // r14d
  __int64 v13; // rax
  _DWORD *result; // rax
  unsigned int **v15; // rax
  unsigned int *v16; // rdx
  unsigned int **v17; // r14
  __int64 v18; // rcx
  unsigned int *v19; // rax
  unsigned int *v20; // rbp
  unsigned int *v21; // r13
  __int64 v22; // rax

  if ( !*(_BYTE *)(sub_FF9A10(a1) + 338) )
    goto LABEL_14;
  v2 = sub_FF9A10(a1);
  v6 = 214013 * *(_DWORD *)(v2 + 232) + 2531011;
  *(_DWORD *)(v2 + 232) = v6;
  v7 = __ROR4__(-858993459 * (HIWORD(v6) & 0x7FFF), 1);
  if ( v7 <= 0x19999999 )
    sub_1004BD0(a1, (_DWORD)a2, v7, v3, v4, v5);
  if ( *a2 )
    *(_DWORD *)(*a2 - 4LL) = 0;
  v8 = (unsigned int *)sub_FFB090(a1);
  v9 = *((unsigned int **)v8 + 1);
  v10 = &v9[*v8];
  if ( v10 != v9 )
  {
    while ( 1 )
    {
      v11 = *v9;
      v12 = *(_DWORD *)(sub_FF9A30(a1) + 116);
      sub_A9C140((__int64)a2, v11);
      v13 = sub_FF9A10(a1);
      result = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 40) + 16LL))(*(_QWORD *)(v13 + 40));
      if ( (_BYTE)result )
        break;
      if ( v12 >= *(_DWORD *)(sub_FF9A30(a1) + 116) )
      {
        if ( v10 == ++v9 )
          goto LABEL_14;
      }
      else
      {
        v15 = (unsigned int **)sub_FF99F0(a1);
        v16 = *v15;
        v17 = v15;
        if ( !*v15 || (v18 = *(v16 - 1), (_DWORD)v18 == *(v16 - 2)) )
        {
          sub_2FD3F0(v15);
          v16 = *v17;
          v18 = *(*v17 - 1);
        }
        ++v9;
        v16[v18] = v11;
        ++*(v16 - 1);
        if ( v10 == v9 )
          goto LABEL_14;
      }
    }
  }
  else
  {
LABEL_14:
    v19 = (unsigned int *)sub_FFB090(a1);
    v20 = *((unsigned int **)v19 + 1);
    v21 = &v20[*v19];
    if ( v21 == v20 )
    {
LABEL_20:
      result = (_DWORD *)sub_FFB090(a1);
      *result = 0;
    }
    else
    {
      while ( 1 )
      {
        sub_A96880(a1, *v20, (__int64)a2);
        v22 = sub_FF9A10(a1);
        result = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v22 + 40) + 16LL))(*(_QWORD *)(v22 + 40));
        if ( (_BYTE)result )
          break;
        if ( v21 == ++v20 )
          goto LABEL_20;
      }
    }
  }
  return result;
}

