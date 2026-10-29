_BYTE *__fastcall sub_E146C0(__int64 *a1, _DWORD *a2, int a3, int a4)
{
  __int64 v7; // rdi
  _BYTE *v8; // rax
  __int64 v9; // rdi
  int v10; // ebx
  _BYTE *v11; // rax
  __int64 v12; // rax
  _BYTE *v13; // rdx
  _BYTE *result; // rax

  v7 = *a1;
  v8 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v7 + 24) )
  {
    sub_2257CD0(v7, 84);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v8 + 1;
    *v8 = 84;
  }
  v9 = *a1;
  v10 = *a2 + a3;
  if ( v10 )
  {
    v11 = *(_BYTE **)(v9 + 32);
    if ( (unsigned __int64)v11 >= *(_QWORD *)(v9 + 24) )
    {
      v9 = sub_2257CD0(v9, 76);
    }
    else
    {
      *(_QWORD *)(v9 + 32) = v11 + 1;
      *v11 = 76;
    }
    v12 = sub_2257BD0(v9, (unsigned int)(v10 - 1));
    v13 = *(_BYTE **)(v12 + 32);
    if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 24) )
    {
      sub_2257CD0(v12, 95);
    }
    else
    {
      *(_QWORD *)(v12 + 32) = v13 + 1;
      *v13 = 95;
    }
    v9 = *a1;
  }
  if ( a4 )
  {
    sub_2257BD0(v9, (unsigned int)(a4 - 1));
    v9 = *a1;
  }
  result = *(_BYTE **)(v9 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v9 + 24) )
    return (_BYTE *)sub_2257CD0(v9, 95);
  *(_QWORD *)(v9 + 32) = result + 1;
  *result = 95;
  return result;
}

