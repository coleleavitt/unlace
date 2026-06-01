char __fastcall sub_BDB460(__int64 *a1, unsigned int *a2, __int64 a3, unsigned __int64 a4, _QWORD *a5, int a6)
{
  unsigned __int8 v6; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  int *v10; // rax
  __int64 v11; // rax
  unsigned int **v12; // rbx
  char result; // al
  int v14; // eax
  __int64 v15; // r13
  __int64 v16; // r14
  char v17; // al
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  _QWORD *v20; // r8
  int v21; // r9d
  unsigned int *v22; // rsi
  __int64 *v23; // r13
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  _QWORD *v26; // r8
  int v27; // r9d
  __int64 v28; // rax
  __int64 *v29; // rbx
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // r14
  unsigned int *v35; // r13
  __int64 v36; // rax
  _QWORD *v37; // rdx
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // rdx
  _QWORD *v42; // rbx
  __int64 v43; // rax
  bool v44; // zf
  unsigned int *v45; // r12
  _QWORD *v46; // rbx
  __int64 v47; // rax
  unsigned int *v48; // r12

  v6 = a3;
  v8 = *a1;
  v9 = *(_QWORD *)(*a1 + 8832);
  if ( v9 )
  {
    a3 = *a2;
    if ( (unsigned int)a3 < *(_DWORD *)(v9 - 4)
      && *(_DWORD *)(v9 + 4 * a3) != 0x7FFFFFFF
      && (!(unsigned int)sub_8E7030(*a1)
       || (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v8 + 7488) + 56LL))(
            *(_QWORD *)(v8 + 7488),
            a2)) )
    {
      v14 = sub_8E80A0((_QWORD *)*a1, a2);
      if ( v14 )
        return (v14 == 1) == v6;
      return 0;
    }
  }
  if ( *((_WORD *)a2 + 2) )
    return 0;
  v10 = *(int **)(*((_QWORD *)a2 + 2) + 24LL);
  if ( !v10 || (a6 = *v10) != 0 )
  {
LABEL_10:
    v11 = sub_BDB000(a1, a2, a3, a4, a5, a6);
    v12 = (unsigned int **)v11;
    if ( !v11 )
      return 0;
    if ( (*(_BYTE *)(v11 + 44) & 0x40) == 0 )
      return 0;
    v15 = *a1;
    v16 = *(_QWORD *)v11;
    if ( (unsigned int)sub_8E7030(*a1) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v15 + 7488) + 56LL))(
              *(_QWORD *)(v15 + 7488),
              v16) )
        return 0;
    }
    v14 = sub_8E80A0((_QWORD *)*a1, *v12);
    if ( !v14 )
      return 0;
    return (v14 == 1) == v6;
  }
  switch ( v10[1] )
  {
    case 0:
      return v6;
    case 1:
      return v6 ^ 1;
    case 2:
      v17 = sub_15D2CB0(a1[1], *((_QWORD *)a2 + 4));
      v22 = *((unsigned int **)a2 + 4);
      if ( !v17 )
      {
        v23 = (__int64 *)sub_BDB000(a1, v22, v18, v19, v20, v21);
        v28 = sub_BDB000(a1, *((unsigned int **)a2 + 5), v24, v25, v26, v27);
        v29 = (__int64 *)v28;
        if ( v23 )
        {
          if ( v28 )
          {
            v30 = *a1;
            v31 = *v23;
            if ( !(unsigned int)sub_8E7030(*a1)
              || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v30 + 7488) + 56LL))(
                   *(_QWORD *)(v30 + 7488),
                   v31) )
            {
              v32 = *a1;
              v33 = *v29;
              if ( !(unsigned int)sub_8E7030(*a1)
                || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v32 + 7488) + 56LL))(
                     *(_QWORD *)(v32 + 7488),
                     v33) )
              {
                if ( v6 )
                  return v23[1] == v29[1];
                else
                  return sub_8E77E0(*a1, (__int64)v23, (__int64)v29);
              }
            }
          }
        }
        return 0;
      }
      if ( v6 )
      {
        if ( (unsigned __int8)sub_BDB970(a1, v22, 1) && (unsigned __int8)sub_BDB970(a1, *((_QWORD *)a2 + 5), 1) )
          return 1;
        if ( !(unsigned __int8)sub_BDB970(a1, *((_QWORD *)a2 + 4), 0) )
          return 0;
        v40 = *((_QWORD *)a2 + 5);
        v41 = 0;
      }
      else
      {
        if ( (unsigned __int8)sub_BDB970(a1, v22, 1) && (unsigned __int8)sub_BDB970(a1, *((_QWORD *)a2 + 5), 0) )
          return 1;
        if ( !(unsigned __int8)sub_BDB970(a1, *((_QWORD *)a2 + 4), 0) )
          return 0;
        v40 = *((_QWORD *)a2 + 5);
        v41 = 1;
      }
      return sub_BDB970(a1, v40, v41);
    case 4:
      v34 = *a1;
      v35 = *((unsigned int **)a2 + 4);
      if ( v35 == *(unsigned int **)(*(_QWORD *)(*a1 + 104) + 864LL) )
        goto LABEL_39;
      v36 = *(_QWORD *)(v34 + 8832);
      if ( !*((_WORD *)v35 + 2) && (v37 = *(_QWORD **)(*((_QWORD *)v35 + 2) + 24LL)) != nullptr && *v37 == 0x800000000LL )
      {
        if ( !v36 )
          goto LABEL_61;
        v38 = **((unsigned int **)v35 + 4);
        if ( (unsigned int)v38 >= *(_DWORD *)(v36 - 4) )
          goto LABEL_61;
      }
      else
      {
        if ( !v36 )
          goto LABEL_61;
        v38 = *v35;
        if ( (unsigned int)v38 >= *(_DWORD *)(v36 - 4) )
          goto LABEL_61;
      }
      if ( *(_DWORD *)(v36 + 4 * v38) != 0x7FFFFFFF )
      {
LABEL_39:
        if ( !(unsigned int)sub_8E7030(*a1)
          || (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v34 + 7488) + 56LL))(
               *(_QWORD *)(v34 + 7488),
               v35) )
        {
          v39 = sub_8E80A0((_QWORD *)*a1, *((unsigned int **)a2 + 4));
          switch ( v39 )
          {
            case 0:
              return 0;
            case 1:
              v40 = *((_QWORD *)a2 + 5);
              v41 = v6;
              return sub_BDB970(a1, v40, v41);
            case -1:
              v40 = *((_QWORD *)a2 + 6);
              v41 = v6;
              return sub_BDB970(a1, v40, v41);
          }
        }
      }
LABEL_61:
      if ( (unsigned __int8)sub_BDB970(a1, *((_QWORD *)a2 + 5), v6) )
      {
        v40 = *((_QWORD *)a2 + 6);
        v41 = v6;
        return sub_BDB970(a1, v40, v41);
      }
      return 0;
    case 5:
      v46 = a2 + 8;
      v47 = 8LL * a2[6];
      v44 = v6 == 0;
      v48 = &a2[(unsigned __int64)v47 / 4 + 8];
      if ( !v44 )
      {
        if ( !v47 )
          return 1;
        while ( (unsigned __int8)sub_BDB970(a1, *v46, 1) )
        {
          if ( v48 == (unsigned int *)++v46 )
            return 1;
        }
        return 0;
      }
      if ( !v47 )
        return 0;
      while ( !(unsigned __int8)sub_BDB970(a1, *v46, 0) )
      {
        if ( v48 == (unsigned int *)++v46 )
          return 0;
      }
      return 1;
    case 6:
      v42 = a2 + 8;
      v43 = 8LL * a2[6];
      v44 = v6 == 0;
      v45 = &a2[(unsigned __int64)v43 / 4 + 8];
      if ( !v44 )
      {
        if ( !v43 )
          return 0;
        while ( !(unsigned __int8)sub_BDB970(a1, *v42, 1) )
        {
          if ( v45 == (unsigned int *)++v42 )
            return 0;
        }
        return 1;
      }
      if ( !v43 )
        return 1;
      while ( (unsigned __int8)sub_BDB970(a1, *v42, 0) )
      {
        if ( v45 == (unsigned int *)++v42 )
          return 1;
      }
      result = 0;
      break;
    case 8:
      v40 = *((_QWORD *)a2 + 4);
      v41 = v6 ^ 1u;
      return sub_BDB970(a1, v40, v41);
    default:
      goto LABEL_10;
  }
  return result;
}

