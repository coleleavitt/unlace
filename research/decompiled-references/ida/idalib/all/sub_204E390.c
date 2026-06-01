__int64 __fastcall sub_204E390(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  _DWORD *v6; // r8
  __int64 v7; // rbx
  char v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  _DWORD *v12; // rax
  _DWORD *v13; // rsi
  __int64 v14; // rsi
  _DWORD *v15; // rsi
  _DWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE *v21; // r15
  __int64 v22; // rax
  __int64 result; // rax
  _BYTE *v24; // rdi
  unsigned int v25; // ebx
  unsigned int *v26; // r15
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rsi
  unsigned int v35; // r14d
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v40; // [rsp+8h] [rbp-180h]
  __int64 v41; // [rsp+10h] [rbp-178h]
  int v42; // [rsp+18h] [rbp-170h]
  __int64 v43; // [rsp+28h] [rbp-160h]
  size_t v44; // [rsp+38h] [rbp-150h]
  void *ptr; // [rsp+40h] [rbp-148h] BYREF
  __int64 v46; // [rsp+48h] [rbp-140h]
  _BYTE v47[312]; // [rsp+50h] [rbp-138h] BYREF

  v6 = &a3[a4];
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_BYTE *)(v7 + 8);
  LODWORD(v44) = a4;
  v41 = *(_QWORD *)(v7 + 24);
  BYTE4(v44) = v8 == 18;
  v9 = (4 * a4) >> 4;
  v10 = (4 * a4) >> 2;
  if ( v9 > 0 )
  {
    v11 = *a3;
    if ( *a3 == -1 )
    {
      v12 = a3 + 1;
      if ( a3[1] == -1 )
      {
        v12 = a3 + 2;
        if ( a3[2] == -1 )
        {
          v13 = a3;
          v12 = a3 + 3;
          if ( a3[3] == -1 )
          {
            while ( 1 )
            {
              v12 = v13 + 4;
              if ( &a3[4 * v9] == v13 + 4 )
              {
                v14 = v6 - v12;
                goto LABEL_14;
              }
              if ( v13[4] != -1 )
                goto LABEL_41;
              if ( v13[5] != -1 )
              {
                v12 = v13 + 5;
                goto LABEL_41;
              }
              if ( v13[6] != -1 )
              {
                v12 = v13 + 6;
                goto LABEL_41;
              }
              if ( v13[7] != -1 )
                break;
              v13 += 4;
            }
            v12 = v13 + 7;
          }
        }
      }
LABEL_41:
      if ( v6 == v12 )
        goto LABEL_42;
      goto LABEL_82;
    }
    if ( a3 == v6 )
    {
LABEL_42:
      v22 = sub_20C5270(v41, v44, v9, a4, v6, v10);
      return sub_2058290(v22);
    }
    goto LABEL_21;
  }
  v14 = (4 * a4) >> 2;
  v12 = a3;
LABEL_14:
  if ( v14 != 2 )
  {
    if ( v14 != 3 )
    {
      if ( v14 != 1 )
        goto LABEL_42;
      goto LABEL_17;
    }
    if ( *v12 != -1 )
      goto LABEL_18;
    ++v12;
  }
  if ( *v12 != -1 )
    goto LABEL_18;
  ++v12;
LABEL_17:
  if ( *v12 == -1 )
    goto LABEL_42;
LABEL_18:
  if ( v6 == v12 )
    goto LABEL_42;
  if ( v9 <= 0 )
  {
    v16 = a3;
LABEL_33:
    if ( v10 != 2 )
    {
      if ( v10 != 3 )
      {
        if ( v10 != 1 )
          goto LABEL_36;
LABEL_70:
        v9 = (unsigned int)*v16;
        if ( !(_DWORD)v9 )
        {
LABEL_36:
          v42 = a4;
          v17 = sub_20CB0D0(a1);
          v18 = sub_20C3F60(v17, 32);
          v19 = sub_205FB40(v18, 0, 0);
          v20 = sub_205EAD0(a1, v19, 0);
          v21 = (_BYTE *)v20;
          if ( v8 != 18 )
            return sub_205EF10(v44);
          if ( (unsigned __int8)sub_20510E0(v20) )
            return sub_205EF10(v44);
          LODWORD(a4) = v42;
          if ( *v21 <= 1u )
            return sub_205EF10(v44);
          v8 = *(_BYTE *)(v7 + 8);
          goto LABEL_47;
        }
        goto LABEL_46;
      }
      if ( *v16 )
        goto LABEL_46;
      ++v16;
    }
    if ( *v16 )
      goto LABEL_46;
    ++v16;
    goto LABEL_70;
  }
  v11 = *a3;
LABEL_21:
  if ( v11 )
  {
LABEL_82:
    v16 = a3;
    goto LABEL_46;
  }
  if ( a3[1] )
  {
    v16 = a3 + 1;
  }
  else if ( a3[2] )
  {
    v16 = a3 + 2;
  }
  else
  {
    v15 = a3;
    v16 = a3 + 3;
    if ( !a3[3] )
    {
      while ( 1 )
      {
        v16 = v15 + 4;
        if ( !--v9 )
        {
          v10 = v6 - v16;
          goto LABEL_33;
        }
        if ( v15[4] )
          goto LABEL_46;
        if ( v15[5] )
        {
          v16 = v15 + 5;
          goto LABEL_46;
        }
        if ( v15[6] )
        {
          v16 = v15 + 6;
          goto LABEL_46;
        }
        if ( v15[7] )
          break;
        v15 += 4;
      }
      v16 = v15 + 7;
    }
  }
LABEL_46:
  if ( v6 == v16 )
    goto LABEL_36;
LABEL_47:
  if ( v8 == 18 )
    return 0;
  v24 = v47;
  v25 = *(_DWORD *)(v7 + 32);
  ptr = v47;
  v46 = 0x2000000000LL;
  if ( (_DWORD)a4 )
  {
    v26 = a3;
    v27 = (__int64)&a3[(unsigned int)(a4 - 1) + 1];
    do
    {
      v35 = *v26;
      if ( *v26 == -1 || 2 * v25 <= v35 )
      {
        v31 = sub_2057E60(v41);
      }
      else if ( v35 >= v25 )
      {
        v28 = sub_20CB0D0(a2);
        v29 = sub_20C3F60(v28, 32);
        v30 = sub_205FB40(v29, v35 - v25, 0);
        v31 = sub_205EAD0(a2, v30, 0);
      }
      else
      {
        v36 = sub_20CB0D0(a1);
        v37 = sub_20C3F60(v36, 32);
        v38 = sub_205FB40(v37, (int)v35, 0);
        v31 = sub_205EAD0(a1, v38, 0);
      }
      v32 = (unsigned int)v46;
      v33 = (unsigned int)v46 + 1LL;
      if ( v33 > HIDWORD(v46) )
      {
        v43 = v31;
        sub_2237220(&ptr, v47, v33, 8);
        v32 = (unsigned int)v46;
        v31 = v43;
      }
      v9 = (__int64)ptr;
      ++v26;
      *((_QWORD *)ptr + v32) = v31;
      v34 = (unsigned int)(v46 + 1);
      LODWORD(v46) = v46 + 1;
    }
    while ( (unsigned int *)v27 != v26 );
    v24 = ptr;
  }
  else
  {
    v34 = 0;
  }
  result = sub_205D2F0(v24, v34, v9);
  if ( ptr != v47 )
  {
    v40 = result;
    free(ptr);
    return v40;
  }
  return result;
}
