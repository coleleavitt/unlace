__int64 __fastcall sub_F7DFA0(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // r13
  bool v11; // al
  __int64 v12; // rsi
  __int64 *v13; // rbx
  __int64 *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r12
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 *v19; // rbp
  _QWORD *v20; // r9
  _QWORD *v21; // rdx
  __int64 v22; // rsi
  _QWORD *v23; // r10
  _QWORD *v24; // rsi
  _QWORD *v25; // r10
  __int64 v26; // rdx
  _QWORD *v27; // r12
  _QWORD *v28; // rsi
  _QWORD *v29; // r11
  __int64 v30; // rbx
  __int64 v31; // r12
  __int64 v32; // rcx
  __int64 v33; // [rsp+0h] [rbp-68h]
  __int64 v34; // [rsp+8h] [rbp-60h]
  __int64 v35; // [rsp+10h] [rbp-58h]
  __int64 v36; // [rsp+20h] [rbp-48h]
  __int64 v37; // [rsp+28h] [rbp-40h]

  result = (char *)a2 - (char *)a1;
  v33 = a3;
  if ( (char *)a2 - (char *)a1 > 128 )
  {
    v6 = a2;
    v7 = result;
    if ( !a3 )
    {
      v19 = a2;
      goto LABEL_33;
    }
    while ( 1 )
    {
      v8 = a1[1];
      --v33;
      v9 = &a1[v7 >> 4];
      v10 = *v9;
      v35 = *v9 + 24;
      v11 = sub_F7DD90(v8 + 24, v35);
      v36 = *(v6 - 1);
      v34 = *a1;
      v12 = v36 + 24;
      v37 = v36 + 24;
      if ( !v11 )
        break;
      if ( !sub_F7DD90(v35, v12) )
      {
        if ( sub_F7DD90(v8 + 24, v37) )
          goto LABEL_41;
LABEL_39:
        *a1 = v8;
        a1[1] = v34;
        goto LABEL_6;
      }
      *a1 = v10;
      *v9 = v34;
LABEL_6:
      v13 = a1 + 1;
      v14 = v6;
      v15 = *(_QWORD **)(*a1 + 24);
      v16 = *(unsigned int *)(*a1 + 32);
      while ( 1 )
      {
        v17 = *v13;
        v18 = 8 * v16;
        v19 = v13;
        v20 = &v15[v16];
        v21 = *(_QWORD **)(*v13 + 24);
        v22 = *(unsigned int *)(*v13 + 32);
        v23 = &v21[v16];
        if ( v16 >= v22 )
          v23 = &v21[v22];
        if ( v21 == v23 )
        {
          v24 = v15;
        }
        else
        {
          if ( *v21 < *v15 )
            goto LABEL_17;
          if ( *v21 > *v15 )
            goto LABEL_19;
          v24 = v15;
          while ( 1 )
          {
            ++v21;
            ++v24;
            if ( v23 == v21 )
              break;
            if ( *v21 < *v24 )
              goto LABEL_17;
            if ( *v21 > *v24 )
              goto LABEL_19;
          }
        }
        if ( v20 == v24 )
          break;
LABEL_17:
        ++v13;
      }
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_19:
          v25 = *(_QWORD **)(*--v14 + 24);
          v26 = 8LL * *(unsigned int *)(*v14 + 32);
          v27 = &v15[(unsigned __int64)v26 / 8];
          if ( v18 <= v26 )
            v27 = v20;
          if ( v27 != v15 )
            break;
          if ( v25 == &v25[(unsigned __int64)v26 / 8] )
            goto LABEL_29;
        }
        if ( *v25 <= *v15 )
        {
          if ( *v25 < *v15 )
            break;
          v28 = *(_QWORD **)(*v14 + 24);
          v29 = v15;
          while ( 1 )
          {
            ++v29;
            ++v28;
            if ( v27 == v29 )
              break;
            if ( *v29 < *v28 )
              goto LABEL_19;
            if ( *v29 > *v28 )
              goto LABEL_29;
          }
          if ( v28 == &v25[(unsigned __int64)v26 / 8] )
            break;
        }
      }
LABEL_29:
      if ( v13 < v14 )
      {
        *v13 = *v14;
        *v14 = v17;
        v15 = *(_QWORD **)(*a1 + 24);
        v16 = *(unsigned int *)(*a1 + 32);
        goto LABEL_17;
      }
      result = sub_F7DFA0(v13, v6, v33, v14, v17, v20);
      v7 = (char *)v13 - (char *)a1;
      if ( (char *)v13 - (char *)a1 <= 128 )
        return result;
      v6 = v13;
      if ( !v33 )
      {
LABEL_33:
        v30 = v7 >> 3;
        v31 = ((v7 >> 3) - 2) >> 1;
        sub_F7DE10((__int64)a1, v31, v7 >> 3, a1[v31]);
        do
        {
          --v31;
          sub_F7DE10((__int64)a1, v31, v30, a1[v31]);
        }
        while ( v31 );
        do
        {
          v32 = *--v19;
          *v19 = *a1;
          result = sub_F7DE10((__int64)a1, 0, v19 - a1, v32);
        }
        while ( (char *)v19 - (char *)a1 > 8 );
        return result;
      }
    }
    if ( !sub_F7DD90(v8 + 24, v12) )
    {
      if ( !sub_F7DD90(v35, v37) )
      {
        *a1 = v10;
        *v9 = v34;
        goto LABEL_6;
      }
LABEL_41:
      *a1 = v36;
      *(v6 - 1) = v34;
      goto LABEL_6;
    }
    goto LABEL_39;
  }
  return result;
}
