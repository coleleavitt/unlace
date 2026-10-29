__int64 __fastcall sub_6268F0(_BYTE *a1, __int64 a2, double a3, double a4)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // ebx
  unsigned int v7; // r13d
  __int64 v8; // rax
  unsigned int *v9; // rax
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  __int64 result; // rax
  __int64 v13; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)a1;
  a1[9] = 1;
  v5 = sub_4EC8E0(*(_QWORD *)(v4 + 1480) + 2672LL);
  v6 = v5;
  if ( v5 > 1 )
    sub_375500();
  if ( v5 == 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v9 = sub_4EE890(*(_QWORD *)(*(_QWORD *)a1 + 1480LL) + 2672LL, v7);
      v10 = v9[1];
      v11 = *v9;
      if ( v10 < *v9 || !a2 )
        break;
      if ( v10 != v11 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 1480LL) + 2625LL) & 8) == 0 )
      {
        v13 = *((_QWORD *)v9 + 1);
        v8 = qlsize(a2);
        if ( *(_DWORD *)(*(_QWORD *)a1 + 764LL) == -1 )
          sub_375320((__int64)"You forgot to call set_processor_type()");
        if ( !a1[9] )
          sub_623450((__int64)a1, v11, v10, v8 - v13, v13, a3, a4);
        if ( !(unsigned __int8)sub_626660((__int64)a1, a2, v13, v11, v10) )
          break;
      }
      if ( v6 <= (int)++v7 )
        goto LABEL_15;
    }
    result = 0;
  }
  else
  {
LABEL_15:
    result = 1;
  }
  a1[9] = 0;
  return result;
}

