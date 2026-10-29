__int64 __fastcall sub_643BC0(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // eax
  int v4; // ebx
  unsigned int v5; // r13d
  __int64 v6; // rax
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)a1;
  a1[9] = 1;
  v3 = sub_503DD0(*(_QWORD *)(v2 + 1672) + 2872LL);
  v4 = v3;
  if ( v3 > 1 )
    sub_378E50();
  if ( v3 == 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      v7 = sub_505DE0(*(_QWORD *)(*(_QWORD *)a1 + 1672LL) + 2872LL, v5);
      v8 = v7[1];
      v9 = *v7;
      if ( v8 < *v7 || !a2 )
        break;
      if ( v8 != v9 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 1672LL) + 2825LL) & 8) == 0 )
      {
        v11 = v7[2];
        v6 = qlsize(a2);
        if ( *(_DWORD *)(*(_QWORD *)a1 + 932LL) == -1 )
          sub_378C70((__int64)"You forgot to call set_processor_type()");
        if ( !a1[9] )
          sub_6406C0(a1, v9, v8, v6 - v11, v11);
        if ( !(unsigned __int8)sub_643920((__int64)a1, a2, v11, v9, v8) )
          break;
      }
      if ( v4 <= (int)++v5 )
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
