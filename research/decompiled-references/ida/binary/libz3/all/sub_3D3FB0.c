__int64 __fastcall sub_3D3FB0(__int64 *a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  int *v4; // rax
  __int64 v9; // rax
  _DWORD *v10; // rdx
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  int v13; // edx
  __int64 v14; // rax
  _DWORD *v15; // rdx
  int v16; // ecx
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rsi
  char v20; // al
  void *v21; // r14
  __int64 v22; // rax
  _DWORD *v23; // rdx
  __int64 v24; // rdx
  _DWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rsi
  _DWORD *v28; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // [rsp+0h] [rbp-88h]
  __int64 v33; // [rsp+10h] [rbp-78h]
  void *v34; // [rsp+18h] [rbp-70h]
  void *v35; // [rsp+18h] [rbp-70h]
  char v36; // [rsp+2Fh] [rbp-59h] BYREF
  __int64 v37; // [rsp+30h] [rbp-58h] BYREF
  __int64 v38; // [rsp+38h] [rbp-50h]
  __int64 v39; // [rsp+40h] [rbp-48h] BYREF
  __int64 v40; // [rsp+48h] [rbp-40h]

  v4 = *(int **)(a2 + 24);
  if ( !v4 )
    return 5;
  if ( *v4 )
  {
    if ( *v4 != 5 )
      return 5;
  }
  else
  {
    if ( v4[1] != 2 )
      goto LABEL_20;
    v19 = a3[1];
    v37 = 0;
    v38 = 0;
    v39 = 1;
    v40 = 0;
    v20 = sub_1666AE0(a1 + 1, v19, &v37, &v36);
    v21 = qword_1C7F2C0;
    if ( v20 && !(_DWORD)v37 )
    {
      sub_182CBA0(qword_1C7F2C0, &v37);
      sub_182CBA0(v21, &v39);
      v22 = *a3;
      if ( !*(_WORD *)(*a3 + 4LL) )
      {
        v23 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
        if ( v23 )
        {
          if ( *v23 == 5 && v23[1] == 6 && *(_DWORD *)(v22 + 24) == 2 )
          {
            v24 = *(_QWORD *)(v22 + 40);
            if ( !*(_WORD *)(v24 + 4) )
            {
              v25 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL);
              if ( v25 )
              {
                if ( *v25 == 5
                  && v25[1] == 9
                  && *(_DWORD *)(v24 + 24) == 2
                  && (unsigned __int8)sub_3DB3F0(a1 + 1, *(_QWORD *)(v24 + 32)) )
                {
                  v18 = sub_15E1B70(*a1);
                  if ( !v18 )
                    goto LABEL_32;
                  goto LABEL_31;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      sub_182CBA0(qword_1C7F2C0, &v37);
      sub_182CBA0(v21, &v39);
    }
    v4 = *(int **)(a2 + 24);
    if ( !v4 )
      return 5;
    v13 = *v4;
    if ( *v4 != 5 )
    {
LABEL_38:
      if ( v13 )
        return 5;
LABEL_20:
      if ( v4[1] != 8 )
        return 5;
      v14 = *a3;
      if ( *(_WORD *)(*a3 + 4LL) )
        return 5;
      v15 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL);
      if ( !v15 || *v15 != 5 )
        return 5;
      v16 = v15[1];
      if ( v16 == 4 )
      {
        if ( *(_DWORD *)(v14 + 24) == 2 )
        {
          v17 = a1[1];
          goto LABEL_30;
        }
      }
      else
      {
        if ( v16 == 2 && *(_DWORD *)(v14 + 24) == 2 )
        {
          v17 = a1[1];
          goto LABEL_30;
        }
        if ( v15[1] == 5 )
        {
          if ( *(_DWORD *)(v14 + 24) != 2 )
            return 5;
          v17 = a1[1];
LABEL_30:
          v18 = sub_15E1B70(v17);
          if ( !v18 )
          {
LABEL_32:
            sub_3D2CD0(*a4, a4[1]);
            *a4 = v18;
            return 4;
          }
LABEL_31:
          ++*(_DWORD *)(v18 + 8);
          goto LABEL_32;
        }
      }
      if ( v15[1] != 3 || *(_DWORD *)(v14 + 24) != 2 )
        return 5;
      v17 = a1[1];
      goto LABEL_30;
    }
  }
  if ( (unsigned int)(v4[1] - 2) > 3 )
    return 5;
  v9 = *a3;
  if ( *(_WORD *)(*a3 + 4LL) )
    return 5;
  v10 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
  if ( !v10 )
    return 5;
  if ( *v10 != 5 )
    return 5;
  if ( v10[1] != 6 )
    return 5;
  if ( *(_DWORD *)(v9 + 24) != 2 )
    return 5;
  v11 = *(_QWORD *)(v9 + 40);
  if ( *(_WORD *)(v11 + 4) )
    return 5;
  v12 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
  if ( !v12 || *v12 != 5 || v12[1] != 9 || *(_DWORD *)(v11 + 24) != 2 )
    return 5;
  v32 = *(_QWORD *)(v11 + 40);
  if ( !(unsigned __int8)sub_3DB3F0(a1 + 1, *(_QWORD *)(v11 + 32)) )
  {
    v4 = *(int **)(a2 + 24);
    if ( !v4 )
      return 5;
    v13 = *v4;
    goto LABEL_38;
  }
  v26 = *a1;
  v27 = a3[1];
  v37 = 0;
  v33 = v26;
  v38 = 0;
  v39 = 1;
  v40 = 0;
  if ( !(unsigned __int8)sub_1666AE0(a1 + 1, v27, &v37, &v36) || (_DWORD)v37 )
  {
    v35 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v37);
    sub_182CBA0(v35, &v39);
    v32 = sub_15E1B70(a1[1]);
  }
  else
  {
    v34 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v37);
    sub_182CBA0(v34, &v39);
  }
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v28 = *(_DWORD **)(a2 + 24);
  if ( !v28 || *v28 != 5 || (v29 = v28[1], v29 != 2) && v29 != 4 && v29 != 3 && v29 != 5 )
  {
    sub_1872CE0("");
    sub_1873130(114, 778);
  }
  v30 = sub_15E1B70(a1[1]);
  v31 = v30;
  if ( v30 )
    ++*(_DWORD *)(v30 + 8);
  sub_3D2CD0(*a4, a4[1]);
  *a4 = v31;
  sub_3D2CD0(v32, v33);
  return 4;
}

