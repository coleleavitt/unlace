_QWORD *__fastcall sub_240660(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *i; // rdx
  __int64 v4; // rcx
  int v5; // edi
  int v6; // edi
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx

  result = a1;
  if ( a1 != (_QWORD *)a2 )
  {
    for ( i = *(_QWORD **)(a2 + 24); a1 != i && a1 != (_QWORD *)i[3]; i = (_QWORD *)i[3] )
      ;
    v4 = *a1;
    *a1 = *(_QWORD *)a2;
    v5 = *(_DWORD *)(a2 + 8);
    *(_QWORD *)a2 = v4;
    LODWORD(v4) = *((_DWORD *)result + 2);
    *((_DWORD *)result + 2) = v5;
    v6 = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 8) = v4;
    LODWORD(v4) = *((_DWORD *)result + 3);
    *((_DWORD *)result + 3) = v6;
    v7 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 12) = v4;
    v8 = result[3];
    result[3] = v7;
    v9 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a2 + 24) = v8;
    v10 = result[4];
    result[4] = v9;
    v11 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 32) = v10;
    v12 = result[5];
    result[5] = v11;
    v13 = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(a2 + 40) = v12;
    v14 = result[6];
    result[6] = v13;
    LODWORD(v13) = *(_DWORD *)(a2 + 56);
    *(_QWORD *)(a2 + 48) = v14;
    LODWORD(v14) = *((_DWORD *)result + 14);
    *((_DWORD *)result + 14) = v13;
    *(_DWORD *)(a2 + 56) = v14;
    i[3] = a2;
  }
  return result;
}
