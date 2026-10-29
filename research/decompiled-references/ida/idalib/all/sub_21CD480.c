unsigned __int64 __fastcall sub_21CD480(__int64 a1, char *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  char *v12; // rbx

  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  LODWORD(v5) = *(_DWORD *)(a1 + 8);
  v6 = v3 + 1;
  result = *(_QWORD *)a1 + 32 * v3;
  if ( v6 > *(unsigned int *)(a1 + 12) )
  {
    if ( v4 > (unsigned __int64)a2 || result <= (unsigned __int64)a2 )
    {
      sub_21CD380(a1, v6);
      v5 = *(unsigned int *)(a1 + 8);
      result = *(_QWORD *)a1 + 32 * v5;
    }
    else
    {
      v12 = &a2[-v4];
      sub_21CD380(a1, v6);
      v5 = *(unsigned int *)(a1 + 8);
      a2 = &v12[*(_QWORD *)a1];
      result = *(_QWORD *)a1 + 32 * v5;
    }
  }
  *(_QWORD *)(result + 16) = 0;
  *(_OWORD *)result = 0;
  *(_QWORD *)result = *(_QWORD *)a2;
  v8 = *((_QWORD *)a2 + 1);
  *(_QWORD *)a2 = 0;
  v9 = *(_QWORD *)(result + 8);
  *(_QWORD *)(result + 8) = v8;
  v10 = *((_QWORD *)a2 + 2);
  *((_QWORD *)a2 + 1) = v9;
  v11 = *(_QWORD *)(result + 16);
  *(_QWORD *)(result + 16) = v10;
  *((_QWORD *)a2 + 2) = v11;
  *(_QWORD *)(result + 24) = *((_QWORD *)a2 + 3);
  *(_DWORD *)(a1 + 8) = v5 + 1;
  return result;
}
