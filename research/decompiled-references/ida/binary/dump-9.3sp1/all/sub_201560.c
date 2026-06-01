__int64 __fastcall sub_201560(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int8 v4; // si
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // edi
  unsigned __int8 v12; // cl
  int v13; // edx

  v4 = *(_BYTE *)(a3 + 32);
  if ( v4 != *((_BYTE *)a2 + 8) )
  {
    if ( !under_debugger )
      sub_383060(51865);
    BUG();
  }
  v5 = *(_QWORD *)(a3 + 24);
  v6 = *a2;
  result = a1;
  v8 = *((int *)a2 + 3);
  if ( v5 < *a2 )
  {
    *a2 = v5;
    v11 = v6 - v5 + v8;
    *((_DWORD *)a2 + 3) = v11;
    v12 = *(_BYTE *)(a3 + 32);
    if ( v12 < v4 )
    {
LABEL_7:
      if ( v11 >= *(_DWORD *)(result + 88) )
        return result;
LABEL_12:
      result = sub_11CA90(v11);
      *((_DWORD *)a2 + 3) = result;
      return result;
    }
    if ( v4 < v12 )
      sub_201360();
    v10 = *(_QWORD *)(a3 + 24) + *(int *)(a3 + 40);
    v9 = v5 + v11;
    LODWORD(v6) = v5;
  }
  else
  {
    v9 = v6 + v8;
    v10 = v5 + *(int *)(a3 + 40);
  }
  if ( v10 < v9 || v10 <= v9 )
  {
    v11 = *((_DWORD *)a2 + 3);
    goto LABEL_7;
  }
  v13 = v10 - v6;
  *((_DWORD *)a2 + 3) = v13;
  v11 = v13;
  if ( v13 < *(_DWORD *)(result + 88) )
    goto LABEL_12;
  return result;
}
