_QWORD *__fastcall sub_A05760(_QWORD *a1, _QWORD **a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbp
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  _QWORD *v7; // r13
  _QWORD *v8; // rbp
  _QWORD *v9; // r13
  bool v10; // zf
  __int64 v11; // rax
  _QWORD *v12; // r14
  _QWORD *i; // r15
  __int64 v14; // rax
  char *v15; // rsi
  char *v16; // rsi
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v20; // rax
  char v21; // al
  char *v22; // r15
  char *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  char *v26; // r14
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdi
  char *v32; // rsi
  char *v33; // rsi
  char *v34; // rsi
  _QWORD *v35; // rax
  char *v36; // rsi
  _QWORD *v37; // [rsp+10h] [rbp-68h]
  _QWORD *v39; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v40[8]; // [rsp+38h] [rbp-40h] BYREF

  v2 = a1;
  v3 = *a2;
  if ( !*a2 )
  {
    *a1 = 0;
    return v2;
  }
  v4 = *v3;
  *a2 = nullptr;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(v4 + 48))(v3, &unk_2D0AA9B) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v3 + 48LL))(v3, &unk_2D0AA9C) )
    {
      v20 = *v3;
      *a1 = 0;
      (*(void (__fastcall **)(_QWORD *))(v20 + 8))(v3);
    }
    else
    {
      *a1 = v3;
    }
    return v2;
  }
  v5 = (_QWORD *)v3[1];
  v6 = (_QWORD *)v3[2];
  v7 = nullptr;
  if ( v6 == v5 )
    goto LABEL_17;
  v37 = v3;
  v8 = nullptr;
  do
  {
    v9 = (_QWORD *)*v5;
    *v5 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v9 + 48LL))(v9, &unk_2D0AA9C) )
      goto LABEL_14;
    if ( !v8 )
      goto LABEL_34;
    v10 = (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v8 + 48LL))(v8, &unk_2D0AA9B) == 0;
    v11 = *v9;
    if ( v10 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD *, void *))(v11 + 48))(v9, &unk_2D0AA9B);
      v40[0] = v8;
      if ( v21 )
      {
        v22 = (char *)v9[1];
        v23 = (char *)v9[2];
        if ( v23 == (char *)v9[3] )
        {
          sub_A054C0((__int64)(v9 + 1), (char *)v9[1], v40);
        }
        else
        {
          v24 = v23 + 8;
          if ( v22 == v23 )
          {
            v40[0] = 0;
            *(_QWORD *)v22 = v8;
            v9[2] = v24;
          }
          else
          {
            v25 = *((_QWORD *)v23 - 1);
            v26 = v23 - 8;
            *((_QWORD *)v23 - 1) = 0;
            *(_QWORD *)v23 = v25;
            v9[2] = v24;
            v27 = (v23 - 8 - v22) >> 3;
            if ( v23 - 8 - v22 > 0 )
            {
              while ( 1 )
              {
                v28 = *((_QWORD *)v26 - 1);
                v29 = *(_QWORD *)v26;
                *((_QWORD *)v26 - 1) = 0;
                *(_QWORD *)v26 = v28;
                if ( v29 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
                if ( !--v27 )
                  break;
                v26 -= 8;
              }
            }
            v30 = v40[0];
            v40[0] = 0;
            v31 = *(_QWORD *)v22;
            *(_QWORD *)v22 = v30;
            if ( v31 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
          }
        }
        if ( v40[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v40[0] + 8LL))(v40[0]);
LABEL_34:
        v8 = v9;
        goto LABEL_15;
      }
      v39 = v9;
      v8 = (_QWORD *)operator new(0x20u);
      v8[1] = 0;
      v8[2] = 0;
      *v8 = &off_2BEADB8;
      v8[3] = 0;
      sub_A054C0((__int64)(v8 + 1), nullptr, v40);
      v34 = (char *)v8[2];
      if ( (char *)v8[3] == v34 )
      {
        sub_A054C0((__int64)(v8 + 1), v34, &v39);
      }
      else
      {
        v35 = v39;
        v36 = v34 + 8;
        v39 = nullptr;
        *((_QWORD *)v36 - 1) = v35;
        v8[2] = v36;
      }
      if ( v39 )
        (*(void (__fastcall **)(_QWORD *))(*v39 + 8LL))(v39);
    }
    else
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(v11 + 48))(v9, &unk_2D0AA9B) )
      {
        v12 = (_QWORD *)v9[2];
        for ( i = (_QWORD *)v9[1]; v12 != i; ++i )
        {
          while ( 1 )
          {
            v16 = (char *)v8[2];
            if ( v16 == (char *)v8[3] )
              break;
            v14 = *i;
            v15 = v16 + 8;
            *i++ = 0;
            *((_QWORD *)v15 - 1) = v14;
            v8[2] = v15;
            if ( v12 == i )
              goto LABEL_14;
          }
          v17 = i;
          sub_A054C0((__int64)(v8 + 1), v16, v17);
        }
LABEL_14:
        (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
        goto LABEL_15;
      }
      v40[0] = v9;
      v32 = (char *)v8[2];
      if ( v32 == (char *)v8[3] )
      {
        sub_A054C0((__int64)(v8 + 1), v32, v40);
      }
      else
      {
        v40[0] = 0;
        v33 = v32 + 8;
        *((_QWORD *)v33 - 1) = v9;
        v8[2] = v33;
      }
    }
    if ( v40[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v40[0] + 8LL))(v40[0]);
LABEL_15:
    ++v5;
  }
  while ( v6 != v5 );
  v7 = v8;
  v2 = a1;
  v3 = v37;
LABEL_17:
  v18 = *v3;
  *v2 = v7;
  (*(void (__fastcall **)(_QWORD *))(v18 + 8))(v3);
  return v2;
}
