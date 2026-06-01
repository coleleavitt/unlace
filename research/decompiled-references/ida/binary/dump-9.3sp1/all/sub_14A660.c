__int64 __fastcall sub_14A660(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  char v5; // r14
  int v6; // r13d
  int v7; // r12d
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax

  v4 = a2 & 8;
  v5 = a2;
  v6 = a2 & 4;
  v7 = a2 & 2;
  v8 = 0;
  sub_670E0((_QWORD *)a1, a2, a3, a4);
  if ( (a2 & 2) != 0 )
    goto LABEL_10;
LABEL_2:
  if ( v6 )
  {
LABEL_7:
    v16 = sub_670E0((_QWORD *)a1, a2, v9, v10);
    a2 = v5 & 1;
    v8 += sub_181F80(v16, a2);
    if ( v4 )
    {
LABEL_4:
      while ( 1 )
      {
        v13 = sub_149220(*(__int64 **)(a1 + 784), a2, v9, v10, v11, v12);
        if ( !v13 )
          break;
        v8 += v13;
        sub_670E0((_QWORD *)a1, a2, v14, v15);
        if ( v7 )
        {
LABEL_10:
          while ( sub_144330(a1, a2, v9, v10, v11, v12) )
            ++v8;
          goto LABEL_2;
        }
        if ( v6 )
          goto LABEL_7;
      }
    }
  }
  else if ( v4 )
  {
    goto LABEL_4;
  }
  return v8;
}
