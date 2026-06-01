__int64 __fastcall sub_F06060(__int64 a1, int a2)
{
  __int64 result; // rax
  char v4; // r12
  __int64 v5; // r13
  __int64 v6; // rdx
  char *v7; // r14
  unsigned int v8; // r15d
  unsigned int v9; // ebp
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rax
  _BYTE *v13; // rdx
  __int64 v14; // rax
  _BYTE *v15; // rdx
  __int64 v16; // rax
  _BYTE *v17; // rdx
  __int64 v18; // rax
  _BYTE *v19; // rdx
  __int64 v20; // rax
  _BYTE *v21; // rdx
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+Ch] [rbp-4Ch]
  unsigned int v24; // [rsp+10h] [rbp-48h]

  result = *(_QWORD *)(a1 + 1136);
  if ( !result )
    return result;
  v4 = *(_BYTE *)(a1 + 1104);
  v5 = *(_QWORD *)(a1 + 1096);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(*(_QWORD *)(a1 + 1096), 3, 0, 0);
    result = *(_QWORD *)(a1 + 1136);
    v6 = (unsigned int)a2;
    if ( a2 >= 0 )
      goto LABEL_4;
  }
  else
  {
    v6 = (unsigned int)a2;
    if ( a2 >= 0 )
      goto LABEL_4;
  }
  v6 = (unsigned int)sub_FFDE50(result, (unsigned int)a2);
  result = *(_QWORD *)(a1 + 1136);
LABEL_4:
  sub_FFEBC0(&s1, result, v6, 1);
  v7 = s1;
  v8 = v23;
  v9 = v24;
  if ( !s1 )
  {
    result = sub_971800(*(_QWORD *)(a1 + 1096), "<invalid sloc>");
    if ( !v4 )
      return result;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  }
  v10 = strcmp(s1, *(const char **)(a1 + 1112));
  v11 = *(_QWORD *)(a1 + 1096);
  if ( v10 )
  {
    v16 = sub_971800(v11, v7);
    v17 = *(_BYTE **)(v16 + 32);
    if ( (unsigned __int64)v17 >= *(_QWORD *)(v16 + 24) )
    {
      v16 = sub_2257CD0(v16, 58);
    }
    else
    {
      *(_QWORD *)(v16 + 32) = v17 + 1;
      *v17 = 58;
    }
    v18 = sub_2257BD0(v16, v8);
    v19 = *(_BYTE **)(v18 + 32);
    if ( (unsigned __int64)v19 >= *(_QWORD *)(v18 + 24) )
    {
      v18 = sub_2257CD0(v18, 58);
    }
    else
    {
      *(_QWORD *)(v18 + 32) = v19 + 1;
      *v19 = 58;
    }
    result = sub_2257BD0(v18, v9);
    *(_QWORD *)(a1 + 1112) = v7;
    *(_DWORD *)(a1 + 1120) = v8;
    if ( !v4 )
      return result;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  }
  if ( *(_DWORD *)(a1 + 1120) == v8 )
  {
    v20 = sub_971800(v11, "col");
    v21 = *(_BYTE **)(v20 + 32);
    if ( (unsigned __int64)v21 >= *(_QWORD *)(v20 + 24) )
    {
      v20 = sub_2257CD0(v20, 58);
    }
    else
    {
      *(_QWORD *)(v20 + 32) = v21 + 1;
      *v21 = 58;
    }
    result = sub_2257BD0(v20, v9);
  }
  else
  {
    v12 = sub_971800(v11, "line");
    v13 = *(_BYTE **)(v12 + 32);
    if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 24) )
    {
      v12 = sub_2257CD0(v12, 58);
    }
    else
    {
      *(_QWORD *)(v12 + 32) = v13 + 1;
      *v13 = 58;
    }
    v14 = sub_2257BD0(v12, v8);
    v15 = *(_BYTE **)(v14 + 32);
    if ( (unsigned __int64)v15 >= *(_QWORD *)(v14 + 24) )
    {
      v14 = sub_2257CD0(v14, 58);
    }
    else
    {
      *(_QWORD *)(v14 + 32) = v15 + 1;
      *v15 = 58;
    }
    result = sub_2257BD0(v14, v9);
    *(_DWORD *)(a1 + 1120) = v8;
  }
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  return result;
}

