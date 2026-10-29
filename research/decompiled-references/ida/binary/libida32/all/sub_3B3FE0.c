__int64 __fastcall sub_3B3FE0(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        __int64 (__fastcall ***a5)(_QWORD, _QWORD *, __int64))
{
  unsigned int *v5; // r15
  unsigned int *v6; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned int *v10; // rbx
  __int64 v11; // rax
  unsigned int *v12; // r14
  __int64 v13; // rcx
  unsigned int *v14; // rbp
  char v15; // al
  __int64 v16; // rdx
  unsigned int *v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, _QWORD *, __int64); // r8
  unsigned int v19; // r10d
  unsigned int v20; // eax
  unsigned int v21; // esi
  unsigned int v22; // edx
  unsigned int v23; // edi
  __int64 v24; // rdx
  __int64 result; // rax
  bool v26; // si
  unsigned int v27; // esi
  __int64 v28; // rax
  unsigned int v29; // [rsp+8h] [rbp-70h]
  unsigned int *v30; // [rsp+10h] [rbp-68h]
  unsigned int v31; // [rsp+10h] [rbp-68h]
  unsigned int *v33; // [rsp+18h] [rbp-60h]
  __int64 (__fastcall ***v34)(_QWORD, _QWORD *, __int64); // [rsp+20h] [rbp-58h]
  _QWORD v36[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = nullptr;
  v6 = nullptr;
  v8 = a1[140];
  v36[1] = __readfsqword(0x28u);
  v9 = a1[139];
  v10 = (unsigned int *)(v9 + 8 * v8 - 8);
  v11 = a1[126];
  v12 = (unsigned int *)(v9 - 8);
  v13 = *(_QWORD *)(v11 + 16);
  v14 = (unsigned int *)(v13 + 16LL * *(_QWORD *)(v11 + 24) - 16);
  v30 = (unsigned int *)(v13 - 16);
  v15 = sub_3E9680();
  v17 = v30;
  v18 = a5;
  v19 = a2;
  if ( v15 )
  {
    sub_3E9710(a1, 0, v16, v30);
    v18 = a5;
    v19 = a2;
    v17 = v30;
    v28 = a1[101];
    v5 = (unsigned int *)(v28 - 8);
    v6 = (unsigned int *)(v28 + 8LL * a1[102] - 8);
  }
  do
  {
    if ( v12 != v10 )
    {
      do
      {
        if ( *v10 < a3 )
          break;
        v10 -= 2;
      }
      while ( v12 != v10 );
      if ( v17 == v14 )
      {
        if ( v6 )
          goto LABEL_12;
        v36[0] = 0;
        if ( v12 != v10 )
        {
          v20 = v10[1];
          if ( a3 <= v20 )
            v20 = a3;
LABEL_90:
          v26 = v20 == 0;
          v22 = 0;
          v6 = nullptr;
LABEL_56:
          if ( a4 != 1 && v26 )
          {
LABEL_58:
            v22 = 0;
            if ( v12 != v10 )
              v22 = *v10;
            goto LABEL_60;
          }
          if ( v22 < v20 )
          {
            v27 = 0;
            if ( v12 != v10 )
              v27 = *v10;
            if ( v27 >= v22 || !a4 )
              v22 = v27;
LABEL_60:
            v36[0] = __PAIR64__(v20, v22);
            v24 = 1;
LABEL_33:
            if ( a3 < v20 )
            {
              if ( !under_debugger )
                interr(61);
              BUG();
            }
            goto LABEL_34;
          }
LABEL_80:
          HIDWORD(v36[0]) = v22;
          if ( a4 )
            v20 = 0;
          LODWORD(v36[0]) = v20;
          if ( v6 )
          {
LABEL_83:
            if ( v20 < *v6 )
              LODWORD(v36[0]) = *v6;
          }
          v20 = v22;
          v24 = 2;
          goto LABEL_33;
        }
        goto LABEL_102;
      }
      do
      {
LABEL_10:
        if ( *v14 < a3 )
          break;
        v14 -= 4;
      }
      while ( v17 != v14 );
      if ( !v6 )
      {
        v36[0] = 0;
        if ( v12 == v10 )
          goto LABEL_75;
        v20 = v10[1];
        if ( a3 <= v20 )
          v20 = a3;
        if ( v17 == v14 )
          goto LABEL_90;
        v22 = v14[1];
        if ( a3 <= v22 )
          v22 = a3;
        if ( v20 >= v22 )
          goto LABEL_70;
        goto LABEL_48;
      }
LABEL_12:
      if ( v6 == v5 )
      {
        v36[0] = 0;
        if ( v12 == v10 )
        {
          if ( v17 == v14 )
          {
            v20 = 0;
            goto LABEL_96;
          }
          v21 = v14[1];
          v20 = 0;
LABEL_21:
          if ( v5 != v6 )
          {
            v22 = v6[1];
            if ( a3 <= v22 )
              v22 = a3;
            if ( a3 <= v21 )
              v21 = a3;
            if ( v20 < v21 )
            {
              if ( v21 != v22 || a4 == 1 )
              {
                if ( v22 >= v21 )
                {
                  v20 = 0;
                  HIDWORD(v36[0]) = v22;
                  if ( !a4 )
                    v20 = v21;
                  LODWORD(v36[0]) = v20;
                  goto LABEL_83;
                }
                v23 = *v14;
                if ( v20 >= *v14 )
                  v23 = v20;
                if ( v23 < v22 && a4 )
                {
                  v23 = v22;
                  v20 = v21;
                }
                else
                {
                  v20 = v21;
                }
              }
              else
              {
                v23 = *v14;
                if ( v20 >= *v14 )
                  v23 = v20;
                v20 = v21;
              }
LABEL_32:
              v36[0] = __PAIR64__(v20, v23);
              v24 = 0;
              goto LABEL_33;
            }
LABEL_71:
            v26 = v20 == v22;
            goto LABEL_56;
          }
LABEL_67:
          if ( a3 <= v21 )
            v21 = a3;
          v22 = v21;
          if ( v20 >= v21 )
          {
LABEL_70:
            v22 = 0;
            goto LABEL_71;
          }
LABEL_48:
          v23 = *v14;
          if ( v20 >= *v14 )
            v23 = v20;
          v20 = v22;
          goto LABEL_32;
        }
        v20 = v10[1];
        if ( a3 <= v20 )
          v20 = a3;
        if ( v17 == v14 )
          goto LABEL_52;
      }
      else
      {
        do
        {
          if ( *v6 < a3 )
            break;
          v6 -= 2;
        }
        while ( v6 != v5 );
        v36[0] = 0;
        v20 = 0;
        if ( v12 != v10 )
        {
          v20 = v10[1];
          if ( a3 <= v20 )
            v20 = a3;
        }
        if ( v17 == v14 )
        {
          if ( !v6 )
            goto LABEL_90;
LABEL_52:
          if ( v5 != v6 )
          {
            v22 = v6[1];
            if ( a3 <= v22 )
              v22 = a3;
            v26 = v22 == v20;
            goto LABEL_56;
          }
LABEL_96:
          v26 = v20 == 0;
          v22 = 0;
          goto LABEL_56;
        }
      }
      v21 = v14[1];
      if ( !v6 )
        goto LABEL_67;
      goto LABEL_21;
    }
    if ( v17 != v14 )
      goto LABEL_10;
    if ( v6 )
      goto LABEL_12;
    v36[0] = 0;
LABEL_75:
    if ( v17 != v14 )
    {
      v22 = v14[1];
      if ( a3 <= v22 )
        v22 = a3;
      v20 = 0;
      v6 = nullptr;
      if ( !v22 )
      {
        if ( !a4 )
          goto LABEL_58;
        goto LABEL_80;
      }
      goto LABEL_48;
    }
LABEL_102:
    if ( !a4 )
      return 0xFFFFFFFFLL;
    v36[0] = 0;
    v6 = nullptr;
    v20 = 0;
    v24 = 2;
LABEL_34:
    a3 = v19;
    v33 = v17;
    v31 = v19;
    v29 = v36[0];
    if ( LODWORD(v36[0]) >= v19 )
      a3 = v36[0];
    LODWORD(v36[0]) = a3;
    if ( a3 >= v20 )
      break;
    v34 = v18;
    result = (**v18)(v18, v36, v24);
    if ( (_DWORD)result != -1 )
      return result;
    v19 = v31;
    v18 = v34;
    v17 = v33;
  }
  while ( v31 < v29 );
  return 0xFFFFFFFFLL;
}

