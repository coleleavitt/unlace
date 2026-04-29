__int64 __fastcall sub_16D050(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  int *v6; // rbp
  int v7; // eax
  int *v8; // rbx
  unsigned int v9; // r15d
  int v11; // ebp
  __int64 i; // rax
  _DWORD *v13; // rdi
  __int128 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // [rsp+18h] [rbp-70h] BYREF
  __int64 v21; // [rsp+20h] [rbp-68h] BYREF
  __int128 v22; // [rsp+28h] [rbp-60h]
  __int128 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v5 = a1[7];
  v6 = *(int **)(v5 + 16);
  if ( !v6 )
    return 0;
  while ( 1 )
  {
    v7 = *v6;
    v8 = v6;
    if ( *v6 == 67 )
    {
      while ( v8[9] == v8[17] && *((_BYTE *)v8 + 32) == 4 )
      {
        v8 = *((int **)v8 + 5);
        v7 = *v8;
        if ( *v8 != 67 )
          goto LABEL_10;
      }
      goto LABEL_7;
    }
LABEL_10:
    if ( v7 == 65 )
      break;
LABEL_7:
    v6 = *((int **)v6 + 2);
    if ( !v6 )
      return 0;
  }
  if ( !(unsigned __int8)sub_30CFD0(*(_QWORD *)(a1[60] + 112), a1, v6, v8 + 8, v5, a2 + 32) )
    return 0;
  if ( *((_QWORD *)v6 + 1) == a1[7] )
    goto LABEL_17;
  v21 = 0;
  v22 = 0u;
  v23 = 0;
  sub_127FE0((__int64)a1, &v21, (__int64)(v6 + 16), 0);
  if ( sub_A9AA0((__int64)a1, &v21, *((_QWORD *)v6 + 1), 0, 1u) )
  {
    if ( *((_QWORD *)&v22 + 1) )
    {
      *(_QWORD *)&v23 = 0;
      qfree(*((_QWORD *)&v22 + 1));
    }
    qfree(v21);
    return 0;
  }
  if ( *((_QWORD *)&v22 + 1) )
  {
    *(_QWORD *)&v23 = 0;
    qfree(*((_QWORD *)&v22 + 1));
  }
  qfree(v21);
LABEL_17:
  if ( !v8 )
    return 0;
  v21 = 0;
  v22 = 0;
  v9 = sub_16CEF0(a3, (__int64)&v21, (__int64)(v6 + 16), v8[9]);
  if ( (_BYTE)v9 && (int)sub_16CAA0((__int64)a1, (__int64)(v6 + 16), v6, *((_QWORD *)v6 + 1), a1[7]) >= 0 )
  {
    v11 = 0;
    for ( i = 0; v11 < (unsigned __int64)v22; i = v11 )
    {
      v13 = *(_DWORD **)(v21 + 8 * i);
      *v13 = 67;
      sub_11CDA0((__int64)(v13 + 12));
      ++v11;
    }
    *((_QWORD *)&v14 + 1) = a2 + 32;
    *(_QWORD *)&v14 = a1;
    v20 = a1[7];
    v15 = sub_129440(v14, (__int64)&v20, 0);
    if ( v15 && *(_DWORD *)v15 == 2 )
    {
      *((_QWORD *)&v14 + 1) = *((_QWORD *)v8 + 3);
      sub_B57F0(a1[8], *((unsigned __int64 *)&v14 + 1), *(_QWORD *)(v15 + 24));
    }
    *v8 = 66;
    sub_B57E0(a3, *((__int64 *)&v14 + 1), v16, v17, v18, v19);
    sub_A2520((__int64)a1, (__int64)"U2F");
  }
  else
  {
    v9 = 0;
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  return v9;
}
