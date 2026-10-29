char *__fastcall sub_11FCD40(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r12d
  char v5; // bp
  char *result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // zf
  char *v14; // r12
  char *v15; // [rsp+8h] [rbp-30h]
  char *v16; // [rsp+8h] [rbp-30h]
  _BYTE v17[4]; // [rsp+14h] [rbp-24h] BYREF
  int v18; // [rsp+18h] [rbp-20h]
  int v19; // [rsp+1Ch] [rbp-1Ch]

  sub_11C59A0((__int64)v17, *(_DWORD **)(a1 + 24), a2);
  v4 = v18;
  v5 = v17[0];
  result = sub_11BB370(v19);
  if ( result )
  {
    v7 = *(unsigned int *)(a3 + 8);
    if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v15 = result;
      sub_2237220(a3, a3 + 16, v7 + 1, 8);
      v7 = *(unsigned int *)(a3 + 8);
      result = v15;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v7) = "-mrelocation-model";
    v8 = *(unsigned int *)(a3 + 12);
    v9 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v9;
    if ( v9 + 1 > v8 )
    {
      v16 = result;
      sub_2237220(a3, a3 + 16, v9 + 1, 8);
      v9 = *(unsigned int *)(a3 + 8);
      result = v16;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v9) = result;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( v4 )
  {
    v10 = *(unsigned int *)(a3 + 8);
    if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v10 + 1, 8);
      v10 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v10) = "-pic-level";
    v11 = *(unsigned int *)(a3 + 12);
    v12 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    v13 = v4 == 1;
    v14 = "1";
    if ( !v13 )
      v14 = "2";
    *(_DWORD *)(a3 + 8) = v12;
    if ( v12 + 1 > v11 )
    {
      sub_2237220(a3, a3 + 16, v12 + 1, 8);
      v12 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v12) = v14;
    result = (char *)(unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = (_DWORD)result;
    if ( v5 )
    {
      if ( (unsigned __int64)(result + 1) > *(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, result + 1, 8);
        result = (char *)*(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8LL * (_QWORD)result) = "-pic-is-pie";
      ++*(_DWORD *)(a3 + 8);
    }
  }
  return result;
}
