__int64 __fastcall sub_3B3AD0(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        __int64 (__fastcall ***a5)(_QWORD, _QWORD *, __int64))
{
  unsigned int *v5; // r15
  unsigned int *v6; // r13
  __int64 v8; // rax
  unsigned int *v9; // rbx
  unsigned int *v10; // r14
  __int64 v11; // rax
  unsigned int *v12; // rbp
  char v13; // al
  __int64 v14; // rdx
  unsigned int *v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, _QWORD *, __int64); // r8
  unsigned int v17; // r10d
  unsigned int v18; // eax
  unsigned int v19; // esi
  unsigned int v20; // edx
  unsigned int v21; // edi
  __int64 v22; // rdx
  __int64 result; // rax
  unsigned int v24; // esi
  bool v25; // si
  unsigned int v26; // esi
  __int64 (__fastcall ***v27)(_QWORD, _QWORD *, __int64); // [rsp+8h] [rbp-70h]
  unsigned int *v28; // [rsp+10h] [rbp-68h]
  unsigned int v29; // [rsp+10h] [rbp-68h]
  unsigned int v31; // [rsp+18h] [rbp-60h]
  unsigned int v32; // [rsp+18h] [rbp-60h]
  unsigned int *v34; // [rsp+20h] [rbp-58h]
  __int64 (__fastcall ***v35)(_QWORD, _QWORD *, __int64); // [rsp+20h] [rbp-58h]
  _QWORD v37[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = nullptr;
  v6 = nullptr;
  v8 = a1[140];
  v37[1] = __readfsqword(0x28u);
  v9 = (unsigned int *)a1[139];
  v10 = &v9[2 * v8];
  v11 = a1[126];
  v12 = *(unsigned int **)(v11 + 16);
  v28 = &v12[4 * *(_QWORD *)(v11 + 24)];
  v13 = sub_3E9680();
  v15 = v28;
  v16 = a5;
  v17 = a3;
  if ( v13 )
  {
    v35 = a5;
    v32 = v17;
    sub_3E9710(a1, 0, v14, v28);
    v16 = v35;
    v17 = v32;
    v15 = v28;
    v6 = (unsigned int *)a1[101];
    v5 = &v6[2 * a1[102]];
  }
  do
  {
    if ( v10 != v9 )
    {
      do
      {
        if ( a2 < v9[1] )
          break;
        v9 += 2;
      }
      while ( v10 != v9 );
      if ( v15 == v12 )
      {
        if ( v6 )
          goto LABEL_12;
        v37[0] = 0;
        if ( v10 != v9 )
        {
          v18 = *v9;
          if ( a2 >= *v9 )
            v18 = a2;
LABEL_95:
          if ( a4 != 1 )
          {
            if ( v18 == -1 )
              return 0xFFFFFFFFLL;
LABEL_97:
            LODWORD(v37[0]) = v18;
            v6 = nullptr;
            v20 = -1;
            if ( v10 == v9 )
            {
              v20 = -1;
              goto LABEL_58;
            }
LABEL_61:
            v26 = v9[1];
LABEL_62:
            if ( v20 >= v26 || !a4 )
              v20 = v26;
LABEL_58:
            HIDWORD(v37[0]) = v20;
            v22 = 1;
LABEL_32:
            if ( v18 < a2 )
            {
              if ( !under_debugger )
                interr(60);
              BUG();
            }
            goto LABEL_33;
          }
          if ( v18 != -1 )
            goto LABEL_97;
          v37[0] = -1;
          v6 = nullptr;
LABEL_86:
          v22 = 2;
          goto LABEL_32;
        }
        goto LABEL_104;
      }
      do
      {
LABEL_10:
        if ( a2 < v12[1] )
          break;
        v12 += 4;
      }
      while ( v15 != v12 );
      if ( !v6 )
      {
        v37[0] = 0;
        if ( v10 == v9 )
          goto LABEL_75;
        v18 = *v9;
        if ( a2 >= *v9 )
          v18 = a2;
        if ( v15 == v12 )
          goto LABEL_95;
        v20 = *v12;
        if ( a2 >= *v12 )
          v20 = a2;
        if ( v20 >= v18 )
          goto LABEL_70;
        goto LABEL_47;
      }
LABEL_12:
      if ( v6 == v5 )
      {
        v37[0] = 0;
        if ( v10 != v9 )
        {
          v18 = *v9;
          if ( a2 >= *v9 )
            v18 = a2;
          if ( v15 == v12 )
            goto LABEL_103;
LABEL_20:
          v19 = *v12;
          if ( v5 != v6 )
          {
            v20 = *v6;
            if ( a2 >= *v6 )
              v20 = a2;
            if ( a2 >= v19 )
              v19 = a2;
            if ( v19 < v18 )
            {
              if ( v19 != v20 || a4 == 1 )
              {
                if ( v19 >= v20 )
                {
                  v18 = -1;
                  LODWORD(v37[0]) = v20;
                  if ( !a4 )
                    v18 = v19;
                  HIDWORD(v37[0]) = v18;
LABEL_83:
                  if ( v6[1] < v18 )
                    HIDWORD(v37[0]) = v6[1];
LABEL_85:
                  v18 = v20;
                  goto LABEL_86;
                }
                v21 = v12[1];
                LODWORD(v37[0]) = v19;
                if ( v18 <= v21 )
                  v21 = v18;
                if ( v20 < v21 && a4 )
                {
                  v21 = v20;
                  v18 = v19;
                }
                else
                {
                  v18 = v19;
                }
              }
              else
              {
                v21 = v12[1];
                LODWORD(v37[0]) = v19;
                if ( v18 <= v21 )
                  v21 = v18;
                v18 = v19;
              }
LABEL_31:
              HIDWORD(v37[0]) = v21;
              v22 = 0;
              goto LABEL_32;
            }
            goto LABEL_71;
          }
LABEL_67:
          v6 = v5;
          if ( a2 >= v19 )
            v19 = a2;
          v20 = v19;
          if ( v19 >= v18 )
          {
LABEL_70:
            v20 = -1;
LABEL_71:
            v25 = v20 == v18;
            goto LABEL_54;
          }
LABEL_47:
          v24 = v12[1];
          LODWORD(v37[0]) = v20;
          v21 = v24;
          if ( v18 <= v24 )
            v21 = v18;
          v18 = v20;
          goto LABEL_31;
        }
        if ( v15 != v12 )
        {
          v19 = *v12;
          v18 = -1;
          goto LABEL_67;
        }
        v18 = -1;
      }
      else
      {
        do
        {
          if ( a2 < v6[1] )
            break;
          v6 += 2;
        }
        while ( v6 != v5 );
        v37[0] = 0;
        v18 = -1;
        if ( v10 != v9 )
        {
          v18 = *v9;
          if ( a2 >= *v9 )
            v18 = a2;
        }
        if ( v15 != v12 )
          goto LABEL_20;
        if ( v6 != v5 )
        {
          v20 = *v6;
          if ( a2 >= *v6 )
            v20 = a2;
          v25 = v20 == v18;
LABEL_54:
          if ( a4 == 1 || !v25 )
          {
            if ( v18 < v20 )
            {
              LODWORD(v37[0]) = v18;
              v26 = -1;
              if ( v10 != v9 )
                goto LABEL_61;
              goto LABEL_62;
            }
LABEL_80:
            LODWORD(v37[0]) = v20;
            if ( a4 )
              v18 = -1;
            HIDWORD(v37[0]) = v18;
            if ( !v6 )
              goto LABEL_85;
            goto LABEL_83;
          }
LABEL_56:
          LODWORD(v37[0]) = v18;
          v20 = -1;
          if ( v10 != v9 )
            v20 = v9[1];
          goto LABEL_58;
        }
      }
LABEL_103:
      v20 = -1;
      v25 = v18 == -1;
      goto LABEL_54;
    }
    if ( v15 != v12 )
      goto LABEL_10;
    if ( v6 )
      goto LABEL_12;
    v37[0] = 0;
LABEL_75:
    if ( v15 != v12 )
    {
      v20 = *v12;
      v18 = -1;
      if ( a2 >= *v12 )
        v20 = a2;
      v6 = nullptr;
      if ( v20 == -1 )
      {
        if ( a4 )
          goto LABEL_80;
        goto LABEL_56;
      }
      goto LABEL_47;
    }
LABEL_104:
    if ( !a4 )
      return 0xFFFFFFFFLL;
    v6 = nullptr;
    v18 = -1;
    v22 = 2;
    v37[0] = -1;
LABEL_33:
    a2 = v17;
    v34 = v15;
    v31 = v17;
    v29 = HIDWORD(v37[0]);
    if ( HIDWORD(v37[0]) <= v17 )
      a2 = HIDWORD(v37[0]);
    HIDWORD(v37[0]) = a2;
    if ( v18 >= a2 )
      break;
    v27 = v16;
    result = (**v16)(v16, v37, v22);
    if ( (_DWORD)result != -1 )
      return result;
    v17 = v31;
    v16 = v27;
    v15 = v34;
  }
  while ( v29 < v31 );
  return 0xFFFFFFFFLL;
}

