__int64 __fastcall sub_6D47D0(__int64 a1, const void *a2, size_t a3)
{
  unsigned int v4; // eax
  __int64 v5; // r15
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  __int64 *v12; // rax
  unsigned __int64 v13; // rax
  _QWORD *v14; // [rsp+8h] [rbp-50h]
  _DWORD v15[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v4 = sub_25E2710(a2, a3);
  v5 = (unsigned int)sub_25E2870(a1 + 1288, a2, a3, v4);
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 1288) + 8 * v5);
  v7 = *v6;
  if ( *v6 )
  {
    if ( v7 != -8 )
      goto LABEL_3;
    --*(_DWORD *)(a1 + 1304);
  }
  v14 = v6;
  v9 = sub_25CC9C0(a3 + 17, 8);
  v10 = v14;
  v11 = (_QWORD *)v9;
  if ( a3 )
  {
    memcpy((void *)(v9 + 16), a2, a3);
    v10 = v14;
  }
  *((_BYTE *)v11 + a3 + 16) = 0;
  *v11 = a3;
  v11[1] = 0;
  *v10 = v11;
  ++*(_DWORD *)(a1 + 1300);
  v12 = (__int64 *)(*(_QWORD *)(a1 + 1288) + 8LL * (unsigned int)sub_25E2C40(a1 + 1288, (unsigned int)v5));
  v7 = *v12;
  if ( *v12 && v7 != -8 )
  {
LABEL_3:
    result = *(_QWORD *)(v7 + 8);
    if ( result )
      return result;
LABEL_13:
    v13 = sub_6D4720((_QWORD *)a1, *(_QWORD *)(a1 + 18488), a3);
    v15[0] = 0;
    result = sub_8095B0(a1, a2, a3, 0, 0, v13, v15, 1);
    *(_QWORD *)(v7 + 8) = result;
    return result;
  }
  do
  {
    do
    {
      v7 = v12[1];
      ++v12;
    }
    while ( v7 == -8 );
  }
  while ( !v7 );
  result = *(_QWORD *)(v7 + 8);
  if ( !result )
    goto LABEL_13;
  return result;
}

