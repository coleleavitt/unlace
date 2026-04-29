__int64 __fastcall sub_14E5C0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // rax
  __int64 v7; // r8
  int v8; // esi
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rax

  v5 = a2;
  v7 = (a2 - 1) / 2;
  if ( a2 <= a3 )
  {
    v13 = 16 * a2;
    v8 = *((_DWORD *)a4 + 2);
    v9 = a1 + v13;
  }
  else
  {
    while ( 1 )
    {
      v8 = *((_DWORD *)a4 + 2);
      v9 = a1 + 16 * v7;
      v10 = *(_DWORD *)(v9 + 8);
      if ( v10 >= v8 && (v10 != v8 || *(_QWORD *)v9 >= (unsigned __int64)*a4) )
      {
        v9 = a1 + 16 * v5;
        goto LABEL_8;
      }
      v11 = a1 + 16 * v5;
      *(_DWORD *)(v11 + 8) = v10;
      *(_QWORD *)v11 = *(_QWORD *)v9;
      v5 = v7;
      if ( a3 >= v7 )
        break;
      v7 = (v7 - 1) / 2;
    }
    v8 = *((_DWORD *)a4 + 2);
  }
LABEL_8:
  *(_DWORD *)(v9 + 8) = v8;
  result = *a4;
  *(_QWORD *)v9 = *a4;
  return result;
}
