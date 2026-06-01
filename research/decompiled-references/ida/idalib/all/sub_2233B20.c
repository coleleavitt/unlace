__int64 __fastcall sub_2233B20(__int64 a1, char *a2, __int64 a3)
{
  __int64 v3; // r15
  char *v4; // r14
  size_t v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  char v8; // r13
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-48h]
  char *v15; // [rsp+8h] [rbp-40h]

  v3 = a1 + 16;
  *(_QWORD *)a1 = a1 + 16;
  v14 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v15 = &a2[a3];
  if ( a2 != &a2[a3] )
  {
    v4 = a2;
    v5 = 0;
    while ( 1 )
    {
      v7 = v5 + 1;
      v8 = *v4;
      if ( strchr("()^$|*+?.[]\\{}", *v4) )
      {
        if ( v14 == v3 )
          v9 = 15;
        else
          v9 = *(_QWORD *)(a1 + 16);
        if ( v9 < v7 )
        {
          sub_998B30(a1, v5, 0, nullptr, 1u);
          v3 = *(_QWORD *)a1;
        }
        *(_BYTE *)(v3 + v5) = 92;
        v10 = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 8) = v7;
        *(_BYTE *)(v10 + v7) = 0;
        v5 = *(_QWORD *)(a1 + 8);
        v3 = *(_QWORD *)a1;
        v7 = v5 + 1;
      }
      if ( v14 == v3 )
        v11 = 15;
      else
        v11 = *(_QWORD *)(a1 + 16);
      if ( v11 >= v7 )
      {
        *(_BYTE *)(v3 + v5) = v8;
        v6 = *(_QWORD *)a1;
        ++v4;
        *(_QWORD *)(a1 + 8) = v7;
        *(_BYTE *)(v6 + v7) = 0;
        if ( v15 == v4 )
          return a1;
      }
      else
      {
        ++v4;
        sub_998B30(a1, v5, 0, nullptr, 1u);
        *(_BYTE *)(*(_QWORD *)a1 + v5) = v8;
        v12 = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 8) = v7;
        *(_BYTE *)(v12 + v7) = 0;
        if ( v4 == v15 )
          return a1;
      }
      v5 = *(_QWORD *)(a1 + 8);
      v3 = *(_QWORD *)a1;
    }
  }
  return a1;
}
