__int64 __fastcall sub_1668340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdi
  int v20; // eax
  _QWORD *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 *v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_2;
  v27 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v30 = *v27;
  v31 = *v27 + 8LL * *((unsigned int *)v27 + 2);
  if ( *v27 < v31 )
  {
    result = *v27;
    while ( 1 )
    {
      v30 = *(_QWORD *)result;
      if ( *(_WORD *)(*(_QWORD *)result + 36LL) == 323 )
        break;
      result += 8;
      if ( v31 == result )
        goto LABEL_31;
    }
    if ( v31 != result )
      return result;
  }
  else if ( v30 != v31 )
  {
    result = *(_QWORD *)v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 36LL) == 323 )
      return result;
    result = v31 + 8;
    while ( 1 )
    {
      v31 = result;
      if ( v30 == result )
        break;
      v32 = *(_QWORD *)result;
      result += 8;
      if ( *(_WORD *)(v32 + 36) == 323 )
        return result;
    }
  }
LABEL_31:
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_2;
  v33 = sub_B8C3D0(a2, a2, v30, v31, v28, v29);
  v34 = *v33;
  v35 = *v33 + 8LL * *((unsigned int *)v33 + 2);
  if ( *v33 >= v35 )
  {
    if ( v34 != v35 )
    {
      result = *(_QWORD *)v35;
      if ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 328 )
      {
        result = v35 + 8;
        while ( v34 != result )
        {
          v36 = *(_QWORD *)result;
          result += 8;
          if ( *(_WORD *)(v36 + 36) == 328 )
            return result;
        }
        goto LABEL_2;
      }
      return result;
    }
LABEL_2:
    v7 = a2;
    v8 = 0;
    while ( 1 )
    {
      v9 = sub_B31380(a1, 0, 0);
      sub_B8CC60(v7, v9, v10, v11, v12, v13);
      result = *(_QWORD *)(v7 + 96);
      if ( (result & 1) != 0 )
      {
        if ( v8 )
          return result;
        v17 = result & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_11;
      }
      if ( (result & 2) != 0 )
      {
        if ( v8 )
          return result;
        v21 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL);
        v8 = 1;
        if ( v21 )
        {
          v22 = v21[2295];
          if ( v22 )
          {
            v23 = v21[294];
            v21[304] += 24LL;
            v24 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v21[295] >= v24 + 24 && v23 )
            {
              v21[294] = v24 + 24;
              v25 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v25 = sub_986170((__int64)(v21 + 294), 24, 24, 3, v14, v15);
              v24 = v25 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v25 = v22;
            v26 = v24 | 4;
            *(_DWORD *)(v25 + 8) = 0;
            *(_QWORD *)(v25 + 16) = v7;
          }
          else
          {
            v26 = v7 & 0xFFFFFFFFFFFFFFFBLL;
          }
          v17 = v26 & 0xFFFFFFFFFFFFFFFELL;
          result = v17 | 1;
          *(_QWORD *)(v7 + 96) = v17 | 1;
LABEL_11:
          result &= 0xFFFFFFFFFFFFFFF8LL;
          v8 = 1;
          v18 = result;
          if ( v17 && (v17 & 4) != 0 && result )
          {
            v19 = *(_QWORD *)result;
            v20 = *(_DWORD *)(*(_QWORD *)result + 12LL);
            if ( *(_DWORD *)(v18 + 8) != v20 )
            {
              *(_DWORD *)(v18 + 8) = v20;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 152LL))(v19, v7);
            }
            result = *(_QWORD *)(v18 + 16);
            v8 = 1;
          }
          goto LABEL_6;
        }
      }
      else
      {
        result &= 0xFFFFFFFFFFFFFFFCLL;
        if ( result )
          goto LABEL_6;
      }
      result = 0;
LABEL_6:
      if ( a2 != result )
      {
        v7 = result;
        if ( result )
          continue;
      }
      return result;
    }
  }
  result = *v33;
  while ( *(_WORD *)(*(_QWORD *)result + 36LL) != 328 )
  {
    result += 8;
    if ( v35 == result )
      goto LABEL_2;
  }
  if ( v35 == result )
    goto LABEL_2;
  return result;
}
