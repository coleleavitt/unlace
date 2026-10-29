__int64 __fastcall sub_834DF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v8; // rdi
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // edx
  __int64 *v21; // r13
  __int64 *v22; // r15
  __int64 v23; // rsi
  _QWORD *v24; // r13
  _QWORD *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // r8
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rsi
  _QWORD *v36; // [rsp+10h] [rbp-78h]
  _QWORD *v37; // [rsp+10h] [rbp-78h]
  __int64 v38; // [rsp+10h] [rbp-78h]
  _QWORD *v39; // [rsp+10h] [rbp-78h]
  __int64 v40; // [rsp+18h] [rbp-70h]
  _QWORD *v41; // [rsp+18h] [rbp-70h]
  __int64 v42; // [rsp+18h] [rbp-70h]
  __int64 v43; // [rsp+28h] [rbp-60h]
  __int64 v44; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v45; // [rsp+38h] [rbp-50h]

  v8 = *(_QWORD **)(a1 + 16);
  v10 = sub_6BF060(v8, a4);
  v12 = sub_2575D20(v8, a4, v11);
  v13 = v12;
  if ( v10 == v12 )
  {
    sub_257CEA0(&v44, v12, 1);
    v16 = v44;
    if ( *a5 != v13 )
      goto LABEL_3;
  }
  else
  {
    sub_25785E0(&v44, v10, 1);
    v16 = v44;
    if ( *a5 != v13 )
    {
LABEL_3:
      if ( v13 != v16 )
      {
        sub_2576350(a5, &v44, v14, v15);
        goto LABEL_5;
      }
      sub_25769A0(a5);
      v29 = v44;
      goto LABEL_26;
    }
  }
  v24 = (_QWORD *)a5[1];
  if ( v13 == v16 )
  {
    if ( v24 )
    {
      v30 = &v24[3 * *(v24 - 1)];
      if ( v30 == v24 )
      {
        v34 = 0;
      }
      else
      {
        do
        {
          v30 -= 3;
          if ( *v30 == v16 )
          {
            v31 = v30[1];
            if ( v31 )
            {
              v32 = v31 + 24LL * *(_QWORD *)(v31 - 8);
              if ( v31 == v32 )
              {
                v33 = 0;
              }
              else
              {
                do
                {
                  v43 = v16;
                  v41 = v30;
                  v38 = v32 - 24;
                  sub_5FF3B0((__int64 *)(v32 - 24));
                  v32 = v38;
                  v30 = v41;
                  v16 = v43;
                }
                while ( v31 != v38 );
                v33 = 24LL * *(_QWORD *)(v31 - 8);
              }
              v42 = v16;
              v39 = v30;
              operator delete[]((void *)(v31 - 8), v33 + 8);
              v16 = v42;
              v30 = v39;
            }
            v30[1] = 0;
          }
          else
          {
            v40 = v16;
            v37 = v30;
            sub_25769A0(v30);
            v30 = v37;
            v16 = v40;
          }
        }
        while ( v30 != v24 );
        v34 = 24LL * *(v24 - 1);
      }
      operator delete[](v24 - 1, v34 + 8);
    }
    a5[1] = 0;
    sub_257D000(a5, &v44, v14, v15);
    goto LABEL_5;
  }
  if ( !v24 )
  {
LABEL_27:
    sub_2576960(a5, &v44);
    goto LABEL_5;
  }
  v25 = &v24[3 * *(v24 - 1)];
  if ( v25 == v24 )
  {
    v26 = 0;
  }
  else
  {
    do
    {
      v36 = v25 - 3;
      sub_5FF3B0(v25 - 3);
      v25 = v36;
    }
    while ( v36 != v24 );
    v26 = 24LL * *(v24 - 1);
  }
  operator delete[](v24 - 1, v26 + 8);
  a5[1] = 0;
  v29 = v44;
LABEL_26:
  if ( v13 != v29 )
    goto LABEL_27;
  sub_257D000(a5, &v44, v27, v28);
LABEL_5:
  if ( v44 == v13 )
  {
    v21 = v45;
    if ( v45 )
    {
      v22 = &v45[3 * *(v45 - 1)];
      if ( v45 == v22 )
      {
        v23 = 0;
      }
      else
      {
        do
        {
          v22 -= 3;
          sub_5FF3B0(v22);
        }
        while ( v21 != v22 );
        v23 = 24 * *(v21 - 1);
      }
      operator delete[](v21 - 1, v23 + 8);
    }
  }
  else
  {
    sub_25769A0(&v44);
  }
  v17 = ((unsigned int)sub_8175F0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2160LL)) >> 3) & 7;
  if ( (_BYTE)v17 == 7 )
    v17 = 1;
  v18 = *(_BYTE *)(a3 + 12) ^ 1u;
  if ( *a5 == v13 )
    v19 = sub_25814C0(a5, a3, v18, v17);
  else
    v19 = sub_2578400(a5, a3, v18, v17);
  return sub_81FBE0(a1, a2, v19);
}

