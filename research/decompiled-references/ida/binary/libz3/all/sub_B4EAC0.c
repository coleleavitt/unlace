char __fastcall sub_B4EAC0(__int64 *a1, unsigned int *a2, __int64 a3, int a4, int a5, int a6)
{
  char v6; // r12
  unsigned int *v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // rax
  unsigned int *v11; // rax
  __int64 v12; // r13
  unsigned int *v13; // rbx
  __int64 v14; // rdx
  _DWORD *v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  char result; // al
  __int64 v20; // rax
  unsigned int *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned int *v24; // r12
  char v25; // al
  char v26; // dl
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  unsigned int *v30; // rsi
  unsigned int *v31; // r12
  char v32; // dl
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  unsigned int *v36; // r12
  unsigned int *v37; // r12
  unsigned int *v38; // r12
  char v39; // dl
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  unsigned int *v43; // rax
  __int64 v44; // r13
  unsigned int *v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r13
  __int64 v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rdx
  _QWORD v52[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = a3;
  v7 = a2;
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
      v17 = sub_8E80A0((_QWORD *)*a1, a2);
      if ( v17 )
        return (v17 == 1) == v6;
      return 0;
    }
  }
  if ( *((_WORD *)a2 + 2) )
    return 0;
  v10 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
  if ( !v10 || *v10 )
  {
LABEL_10:
    v11 = sub_B4DD60((__int64)a1, a2, (unsigned __int8)a3, a4, a5, a6);
    v12 = *a1;
    v13 = v11;
    if ( v11 == *(unsigned int **)(*(_QWORD *)(*a1 + 104) + 864LL) )
      goto LABEL_17;
    v14 = *(_QWORD *)(v12 + 8832);
    if ( *((_WORD *)v11 + 2) || (v15 = *(_DWORD **)(*((_QWORD *)v11 + 2) + 24LL)) == nullptr || *v15 || v15[1] != 8 )
    {
      if ( !v14 )
        goto LABEL_19;
      v16 = *v13;
      if ( (unsigned int)v16 >= *(_DWORD *)(v14 - 4) )
        goto LABEL_19;
    }
    else
    {
      if ( !v14 )
        goto LABEL_19;
      v16 = **((unsigned int **)v13 + 4);
      if ( (unsigned int)v16 >= *(_DWORD *)(v14 - 4) )
        goto LABEL_19;
    }
    if ( *(_DWORD *)(v14 + 4 * v16) != 0x7FFFFFFF )
    {
LABEL_17:
      if ( (unsigned int)sub_8E7030(*a1)
        && !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v12 + 7488) + 56LL))(
              *(_QWORD *)(v12 + 7488),
              v13) )
      {
        goto LABEL_19;
      }
      v17 = sub_8E80A0((_QWORD *)*a1, v13);
      if ( !v17 )
        goto LABEL_19;
      return (v17 == 1) == v6;
    }
LABEL_19:
    v18 = a1[1];
    if ( v6 )
      return *(_QWORD *)(v18 + 856) == (_QWORD)v13;
    else
      return *(_QWORD *)(v18 + 864) == (_QWORD)v13;
  }
  switch ( v10[1] )
  {
    case 0:
      return v6;
    case 1:
      return v6 ^ 1;
    case 2:
      v25 = sub_15D2CB0(a1[1], *((_QWORD *)a2 + 4));
      v30 = *((unsigned int **)a2 + 4);
      if ( !v25 )
      {
        if ( v6 )
        {
          v31 = sub_B4DD60((__int64)a1, v30, v26, v27, v28, v29);
          return v31 == sub_B4DD60((__int64)a1, *((unsigned int **)v7 + 5), v32, v33, v34, v35);
        }
        v38 = sub_B4DD60((__int64)a1, v30, v26, v27, v28, v29);
        v43 = sub_B4DD60((__int64)a1, *((unsigned int **)v7 + 5), v39, v40, v41, v42);
        v44 = *a1;
        v45 = v43;
        v46 = *(_QWORD *)(*a1 + 8656);
        if ( !v46 )
          return sub_15D27F0(a1[1], v38, v45);
        v47 = *v38;
        if ( (unsigned int)v47 >= *(_DWORD *)(v46 - 4)
          || !*(_QWORD *)(v46 + 8 * v47)
          || (unsigned int)sub_8E7030(*a1)
          && !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v44 + 7488) + 56LL))(
                *(_QWORD *)(v44 + 7488),
                v38) )
        {
          return sub_15D27F0(a1[1], v38, v45);
        }
        v52[0] = 0;
        v48 = *a1;
        v49 = *(_QWORD *)(*a1 + 8656);
        if ( v49 )
        {
          v50 = *v45;
          v51 = v52;
          if ( (unsigned int)v50 < *(_DWORD *)(v49 - 4) )
            v51 = (_QWORD *)(v49 + 8 * v50);
        }
        else
        {
          v51 = v52;
        }
        if ( !*v51
          || (unsigned int)sub_8E7030(*a1)
          && !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v48 + 7488) + 56LL))(
                *(_QWORD *)(v48 + 7488),
                v45)
          || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8656) + 8LL * *v45) + 8LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8656) + 8LL * *v38)
                                                                                               + 8LL) )
        {
          return sub_15D27F0(a1[1], v38, v45);
        }
        return 1;
      }
      if ( v6 )
      {
        if ( (unsigned __int8)sub_B4F040((int)a1, (int)v30) && (unsigned __int8)sub_B4F040((int)a1, *((_QWORD *)v7 + 5)) )
          return 1;
        if ( !(unsigned __int8)sub_B4F040((int)a1, *((_QWORD *)v7 + 4)) )
          return 0;
        v22 = *((_QWORD *)v7 + 5);
      }
      else
      {
        if ( (unsigned __int8)sub_B4F040((int)a1, (int)v30) && (unsigned __int8)sub_B4F040((int)a1, *((_QWORD *)v7 + 5)) )
          return 1;
        if ( !(unsigned __int8)sub_B4F040((int)a1, *((_QWORD *)v7 + 4)) )
          return 0;
        v22 = *((_QWORD *)v7 + 5);
      }
      return sub_B4F040((int)a1, v22);
    case 4:
      if ( (unsigned __int8)sub_B4F040((int)a1, *((_QWORD *)a2 + 4)) )
      {
        v22 = *((_QWORD *)a2 + 5);
        return sub_B4F040((int)a1, v22);
      }
      if ( (unsigned __int8)sub_B4F040((int)a1, *((_QWORD *)a2 + 4))
        || (unsigned __int8)sub_B4F040((int)a1, *((_QWORD *)a2 + 5)) )
      {
        v22 = *((_QWORD *)a2 + 6);
        return sub_B4F040((int)a1, v22);
      }
      return 0;
    case 5:
      v20 = a2[6];
      if ( v6 )
      {
        if ( !(_DWORD)v20 )
          return 1;
        v21 = &a2[2 * v20];
        while ( (unsigned __int8)sub_B4F040((int)a1, *((_QWORD *)v7 + 4)) )
        {
          v7 += 2;
          if ( v21 == v7 )
            return 1;
        }
        return 0;
      }
      if ( !(_DWORD)v20 )
        return 0;
      v36 = &a2[2 * v20];
      while ( !(unsigned __int8)sub_B4F040((int)a1, *((_QWORD *)v7 + 4)) )
      {
        v7 += 2;
        if ( v36 == v7 )
          return 0;
      }
      return 1;
    case 6:
      v23 = a2[6];
      if ( v6 )
      {
        if ( !(_DWORD)v23 )
          return 0;
        v24 = &a2[2 * v23];
        while ( !(unsigned __int8)sub_B4F040((int)a1, *((_QWORD *)v7 + 4)) )
        {
          v7 += 2;
          if ( v24 == v7 )
            return 0;
        }
        return 1;
      }
      if ( !(_DWORD)v23 )
        return 1;
      v37 = &a2[2 * v23];
      while ( (unsigned __int8)sub_B4F040((int)a1, *((_QWORD *)v7 + 4)) )
      {
        v7 += 2;
        if ( v37 == v7 )
          return 1;
      }
      result = 0;
      break;
    case 8:
      v22 = *((_QWORD *)a2 + 4);
      return sub_B4F040((int)a1, v22);
    default:
      goto LABEL_10;
  }
  return result;
}

