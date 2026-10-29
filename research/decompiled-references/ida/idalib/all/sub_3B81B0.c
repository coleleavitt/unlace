__int64 __fastcall sub_3B81B0(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 (__fastcall ***a5)(_QWORD, __int128 *, __int64))
{
  unsigned __int64 *v5; // r15
  unsigned __int64 *v6; // r13
  __int64 v8; // rax
  unsigned __int64 *v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 *v12; // rbx
  char v13; // al
  __int64 v14; // rdx
  unsigned __int64 *v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, __int128 *, __int64); // r8
  unsigned __int64 v17; // r10
  unsigned __int64 *v18; // r14
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 result; // rax
  unsigned __int64 v25; // rsi
  bool v26; // si
  unsigned __int64 v27; // rsi
  __int64 (__fastcall ***v28)(_QWORD, __int128 *, __int64); // [rsp+8h] [rbp-80h]
  unsigned __int64 *v29; // [rsp+10h] [rbp-78h]
  unsigned __int64 v30; // [rsp+10h] [rbp-78h]
  unsigned __int64 v32; // [rsp+18h] [rbp-70h]
  unsigned __int64 v33; // [rsp+18h] [rbp-70h]
  unsigned __int64 *v35; // [rsp+20h] [rbp-68h]
  __int64 (__fastcall ***v36)(_QWORD, __int128 *, __int64); // [rsp+20h] [rbp-68h]
  __int128 v38; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-40h]

  v5 = nullptr;
  v6 = nullptr;
  v8 = a1[127];
  v9 = *(unsigned __int64 **)(v8 + 16);
  v10 = 2LL * a1[141];
  v11 = 3LL * *(_QWORD *)(v8 + 24);
  v39 = __readfsqword(0x28u);
  v12 = (unsigned __int64 *)a1[140];
  v29 = &v9[v11];
  v13 = sub_3FC5C0();
  v15 = v29;
  v16 = a5;
  v17 = a3;
  v18 = &v12[v10];
  if ( v13 )
  {
    v36 = a5;
    v33 = v17;
    sub_3FC650(a1, 0, v14, v29);
    v16 = v36;
    v17 = v33;
    v15 = v29;
    v6 = (unsigned __int64 *)a1[102];
    v5 = &v6[2 * a1[103]];
  }
  do
  {
    if ( v18 != v12 )
    {
      do
      {
        if ( a2 < v12[1] )
          break;
        v12 += 2;
      }
      while ( v18 != v12 );
      if ( v15 == v9 )
      {
        if ( v6 )
          goto LABEL_12;
        v38 = 0;
        if ( v18 != v12 )
        {
          v19 = *v12;
          if ( a2 >= *v12 )
            v19 = a2;
LABEL_100:
          if ( v19 == -1 )
          {
            if ( a4 != 1 )
              return -1;
            *((_QWORD *)&v38 + 1) = -1;
            v6 = nullptr;
            *(_QWORD *)&v38 = -1;
LABEL_86:
            v23 = 2;
LABEL_32:
            if ( v19 < a2 )
            {
              if ( !under_debugger )
                interr(60);
              BUG();
            }
            goto LABEL_33;
          }
          *(_QWORD *)&v38 = v19;
          v6 = nullptr;
          v21 = -1;
          if ( v18 == v12 )
          {
            v21 = -1;
LABEL_58:
            *((_QWORD *)&v38 + 1) = v21;
            v23 = 1;
            goto LABEL_32;
          }
LABEL_61:
          v27 = v12[1];
LABEL_62:
          if ( v21 >= v27 || !a4 )
            v21 = v27;
          goto LABEL_58;
        }
        goto LABEL_105;
      }
      do
      {
LABEL_10:
        if ( a2 < v9[1] )
          break;
        v9 += 3;
      }
      while ( v15 != v9 );
      if ( !v6 )
      {
        v38 = 0;
        if ( v18 == v12 )
          goto LABEL_75;
        v19 = *v12;
        if ( a2 >= *v12 )
          v19 = a2;
        if ( v15 == v9 )
          goto LABEL_100;
        v21 = *v9;
        if ( a2 >= *v9 )
          v21 = a2;
        if ( v21 >= v19 )
          goto LABEL_70;
        goto LABEL_47;
      }
LABEL_12:
      if ( v6 == v5 )
      {
        v38 = 0;
        if ( v18 != v12 )
        {
          v19 = *v12;
          if ( a2 >= *v12 )
            v19 = a2;
          if ( v15 == v9 )
            goto LABEL_95;
LABEL_20:
          v20 = *v9;
          if ( v5 != v6 )
          {
            v21 = *v6;
            if ( a2 >= *v6 )
              v21 = a2;
            if ( a2 >= v20 )
              v20 = a2;
            if ( v20 < v19 )
            {
              if ( v20 == v21 && a4 != 1 )
              {
                v22 = v9[1];
                *(_QWORD *)&v38 = v20;
                if ( v19 <= v22 )
                  v22 = v19;
                v19 = v20;
                goto LABEL_31;
              }
              if ( v20 >= v21 )
              {
                v19 = -1;
                *(_QWORD *)&v38 = v21;
                if ( !a4 )
                  v19 = v20;
                *((_QWORD *)&v38 + 1) = v19;
LABEL_83:
                if ( v6[1] < v19 )
                  *((_QWORD *)&v38 + 1) = v6[1];
LABEL_85:
                v19 = v21;
                goto LABEL_86;
              }
              v22 = v9[1];
              *(_QWORD *)&v38 = v20;
              if ( v19 <= v22 )
                v22 = v19;
              if ( v21 < v22 && a4 )
              {
                v22 = v21;
                v19 = v20;
                goto LABEL_31;
              }
              v21 = v20;
LABEL_49:
              v19 = v21;
LABEL_31:
              *((_QWORD *)&v38 + 1) = v22;
              v23 = 0;
              goto LABEL_32;
            }
            goto LABEL_71;
          }
LABEL_67:
          v6 = v5;
          if ( a2 >= v20 )
            v20 = a2;
          v21 = v20;
          if ( v20 >= v19 )
          {
LABEL_70:
            v21 = -1;
LABEL_71:
            v26 = v21 == v19;
            goto LABEL_54;
          }
LABEL_47:
          v25 = v9[1];
          *(_QWORD *)&v38 = v21;
          v22 = v25;
          if ( v19 <= v25 )
            v22 = v19;
          goto LABEL_49;
        }
        if ( v15 != v9 )
        {
          v20 = *v9;
          v19 = -1;
          goto LABEL_67;
        }
        v19 = -1;
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
        v19 = -1;
        v38 = 0;
        if ( v18 != v12 )
        {
          v19 = *v12;
          if ( a2 >= *v12 )
            v19 = a2;
        }
        if ( v15 != v9 )
          goto LABEL_20;
        if ( v6 != v5 )
        {
          v21 = *v6;
          if ( a2 >= *v6 )
            v21 = a2;
          v26 = v21 == v19;
LABEL_54:
          if ( a4 == 1 || !v26 )
          {
            if ( v19 < v21 )
            {
              *(_QWORD *)&v38 = v19;
              v27 = -1;
              if ( v18 != v12 )
                goto LABEL_61;
              goto LABEL_62;
            }
LABEL_80:
            *(_QWORD *)&v38 = v21;
            if ( a4 )
              v19 = -1;
            *((_QWORD *)&v38 + 1) = v19;
            if ( !v6 )
              goto LABEL_85;
            goto LABEL_83;
          }
LABEL_56:
          *(_QWORD *)&v38 = v19;
          v21 = -1;
          if ( v18 != v12 )
            v21 = v12[1];
          goto LABEL_58;
        }
      }
LABEL_95:
      v21 = -1;
      v26 = v19 == -1;
      goto LABEL_54;
    }
    if ( v15 != v9 )
      goto LABEL_10;
    if ( v6 )
      goto LABEL_12;
    v38 = 0;
LABEL_75:
    if ( v15 != v9 )
    {
      v21 = *v9;
      v19 = -1;
      if ( a2 >= *v9 )
        v21 = a2;
      v6 = nullptr;
      if ( v21 == -1 )
      {
        if ( a4 )
          goto LABEL_80;
        goto LABEL_56;
      }
      goto LABEL_47;
    }
LABEL_105:
    if ( !a4 )
      return -1;
    v6 = nullptr;
    v19 = -1;
    *((_QWORD *)&v38 + 1) = -1;
    v23 = 2;
    *(_QWORD *)&v38 = -1;
LABEL_33:
    a2 = v17;
    v35 = v15;
    v32 = v17;
    v30 = *((_QWORD *)&v38 + 1);
    if ( *((_QWORD *)&v38 + 1) <= v17 )
      a2 = *((_QWORD *)&v38 + 1);
    *((_QWORD *)&v38 + 1) = a2;
    if ( v19 >= a2 )
      break;
    v28 = v16;
    result = (**v16)(v16, &v38, v23);
    if ( result != -1 )
      return result;
    v17 = v32;
    v16 = v28;
    v15 = v35;
  }
  while ( v30 < v32 );
  return -1;
}
