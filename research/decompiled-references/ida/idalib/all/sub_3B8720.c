__int64 __fastcall sub_3B8720(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 (__fastcall ***a5)(_QWORD, __int128 *, __int64))
{
  unsigned __int64 *v5; // r15
  unsigned __int64 *v6; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned __int64 *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 *v12; // r14
  __int64 v13; // rcx
  unsigned __int64 *v14; // rbp
  char v15; // al
  __int64 v16; // rdx
  unsigned __int64 *v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, __int128 *, __int64); // r8
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 result; // rax
  bool v26; // si
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  unsigned __int64 v29; // [rsp+8h] [rbp-80h]
  unsigned __int64 *v30; // [rsp+10h] [rbp-78h]
  unsigned __int64 v31; // [rsp+10h] [rbp-78h]
  unsigned __int64 *v33; // [rsp+18h] [rbp-70h]
  __int64 (__fastcall ***v34)(_QWORD, __int128 *, __int64); // [rsp+20h] [rbp-68h]
  __int128 v36; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-40h]

  v5 = nullptr;
  v6 = nullptr;
  v8 = a1[141];
  v37 = __readfsqword(0x28u);
  v9 = a1[140];
  v10 = (unsigned __int64 *)(v9 + 16 * v8 - 16);
  v11 = a1[127];
  v12 = (unsigned __int64 *)(v9 - 16);
  v13 = *(_QWORD *)(v11 + 16);
  v14 = (unsigned __int64 *)(v13 + 24LL * *(_QWORD *)(v11 + 24) - 24);
  v30 = (unsigned __int64 *)(v13 - 24);
  v15 = sub_3FC5C0();
  v17 = v30;
  v18 = a5;
  v19 = a2;
  if ( v15 )
  {
    sub_3FC650(a1, 0, v16, v30);
    v18 = a5;
    v19 = a2;
    v17 = v30;
    v28 = a1[102];
    v5 = (unsigned __int64 *)(v28 - 16);
    v6 = (unsigned __int64 *)(v28 + 16LL * a1[103] - 16);
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
        v36 = 0;
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
            *(_QWORD *)&v36 = v22;
            v24 = 1;
            *((_QWORD *)&v36 + 1) = v20;
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
          *((_QWORD *)&v36 + 1) = v22;
          if ( a4 )
            v20 = 0;
          *(_QWORD *)&v36 = v20;
          if ( v6 )
          {
LABEL_83:
            if ( v20 < *v6 )
              *(_QWORD *)&v36 = *v6;
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
        v14 -= 3;
      }
      while ( v17 != v14 );
      if ( !v6 )
      {
        v36 = 0;
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
        v36 = 0;
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
              if ( v21 == v22 && a4 != 1 )
              {
                v23 = *v14;
                if ( v20 >= *v14 )
                  v23 = v20;
                v20 = v21;
                goto LABEL_32;
              }
              if ( v22 >= v21 )
              {
                v20 = 0;
                *((_QWORD *)&v36 + 1) = v22;
                if ( !a4 )
                  v20 = v21;
                *(_QWORD *)&v36 = v20;
                goto LABEL_83;
              }
              v23 = *v14;
              if ( v20 >= *v14 )
                v23 = v20;
              if ( v23 < v22 && a4 )
              {
                v23 = v22;
                v20 = v21;
                goto LABEL_32;
              }
              v22 = v21;
LABEL_50:
              v20 = v22;
LABEL_32:
              *(_QWORD *)&v36 = v23;
              v24 = 0;
              *((_QWORD *)&v36 + 1) = v20;
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
          goto LABEL_50;
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
        v20 = 0;
        v36 = 0;
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
    v36 = 0;
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
      return -1;
    v36 = 0u;
    v6 = nullptr;
    v20 = 0;
    v24 = 2;
LABEL_34:
    a3 = v19;
    v33 = v17;
    v31 = v19;
    v29 = v36;
    if ( (unsigned __int64)v36 >= v19 )
      a3 = v36;
    *(_QWORD *)&v36 = a3;
    if ( a3 >= v20 )
      break;
    v34 = v18;
    result = (**v18)(v18, &v36, v24);
    if ( result != -1 )
      return result;
    v19 = v31;
    v18 = v34;
    v17 = v33;
  }
  while ( v31 < v29 );
  return -1;
}
