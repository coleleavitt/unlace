unsigned int *__fastcall sub_A6270(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int *v5; // rbx
  int v6; // eax
  int v7; // r12d
  __int64 v9; // rdx
  int v10; // eax
  int *v11; // r15
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-98h] BYREF
  int v16; // [rsp+8h] [rbp-90h]
  __int64 v17; // [rsp+10h] [rbp-88h] BYREF
  __int128 v18; // [rsp+18h] [rbp-80h]
  _QWORD v19[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v20; // [rsp+40h] [rbp-58h]
  __int128 v21; // [rsp+48h] [rbp-50h]
  unsigned __int64 v22; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a1 + 64);
  v22 = __readfsqword(0x28u);
  v5 = (unsigned int *)a2;
  v16 = 0;
  v15 = v3;
  v6 = sub_1370B0(v4, &v15) & 7;
  if ( v6 )
  {
    v7 = 1 << (v6 - 1);
    if ( (unsigned int)(*(_DWORD *)a2 - 8) <= 1 || *(_DWORD *)a2 == 2 )
    {
      if ( v7 >= *(_DWORD *)(a2 + 68) )
        return v5;
    }
    else if ( v7 >= *(_DWORD *)(a2 + 36) )
    {
      return v5;
    }
    v18 = 0;
    v17 = 0;
    v17 = qvector_reserve(&v17, 0, 1, 8);
    *(_QWORD *)(v17 + 8 * v18) = a2;
    v9 = v18 + 1;
    *(_QWORD *)&v18 = v9;
    while ( v9 )
    {
      while ( 1 )
      {
        v5 = *(unsigned int **)(v17 + 8 * v9 - 8);
        v21 = 0;
        *(_QWORD *)&v18 = v9 - 1;
        v19[0] = 0;
        v19[1] = 0;
        v20 = 0;
        v11 = (int *)sub_A3530(a1, v5, v19, 1);
        if ( v20 )
        {
          *(_QWORD *)&v21 = 0;
          qfree(v20);
        }
        qfree(v19[0]);
        v9 = v18;
        if ( !v11 )
          goto LABEL_12;
        v12 = *v5 - 8 <= 1 || *v5 == 2 ? v5[17] : v5[9];
        if ( v7 < v12 )
          break;
        v10 = *v11;
        if ( (unsigned int)(*v11 - 8) <= 1 )
          goto LABEL_23;
LABEL_10:
        if ( v10 == 2 )
          goto LABEL_23;
        if ( v7 >= v11[9] )
          goto LABEL_12;
LABEL_24:
        v14 = v17;
        if ( *((_QWORD *)&v18 + 1) < (unsigned __int64)(v9 + 1) )
        {
          v17 = qvector_reserve(&v17, v17, v9 + 1, 8);
          v9 = v18;
          v14 = v17;
        }
        *(_QWORD *)(v14 + 8 * v9) = v11;
        v9 = v18 + 1;
        *(_QWORD *)&v18 = v9;
        if ( !v9 )
          goto LABEL_27;
      }
      v13 = v17;
      if ( *((_QWORD *)&v18 + 1) < (unsigned __int64)(v18 + 1) )
      {
        v17 = qvector_reserve(&v17, v17, v18 + 1, 8);
        v9 = v18;
        v13 = v17;
      }
      *(_QWORD *)(v13 + 8 * v9) = v5;
      v9 = v18 + 1;
      *(_QWORD *)&v18 = v18 + 1;
      v10 = *v11;
      if ( (unsigned int)(*v11 - 8) > 1 )
        goto LABEL_10;
LABEL_23:
      if ( v7 < v11[17] )
        goto LABEL_24;
LABEL_12:
      ;
    }
LABEL_27:
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
    }
  }
  return v5;
}
