__int64 *__fastcall sub_AEA4D0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  _QWORD *v8; // rdi
  char v9; // al
  __int64 v10; // rax
  char *v11; // rsi
  __int64 v13; // rdi
  __int64 v14; // r14
  char *v15; // rsi
  char *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rbx
  char *v20; // rsi
  __int64 v21; // rax
  char *v22; // rsi
  __int64 v23; // rdi
  _QWORD *v24; // r13
  __int64 *v25; // r15
  __int64 *i; // rbx
  __int64 v27; // rax
  char *v28; // rsi
  char *v29; // rsi
  __int64 v30; // [rsp+10h] [rbp-48h] BYREF
  __int64 v31[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = *a2;
  v6 = *a3;
  if ( !*a2 )
  {
LABEL_9:
    *a1 = v6;
    *a3 = 0;
    return a1;
  }
  if ( !v6 )
  {
    *a1 = v5;
    *a2 = 0;
    return a1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 48LL))(v5, &unk_2D0AA9B) )
  {
    v13 = *a3;
    v14 = *a2;
    if ( *a3 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 48LL))(v13, &unk_2D0AA9B) )
      {
        v24 = (_QWORD *)*a3;
        *a3 = 0;
        v25 = (__int64 *)v24[2];
        for ( i = (__int64 *)v24[1]; v25 != i; ++i )
        {
          v29 = *(char **)(v14 + 16);
          if ( v29 == *(char **)(v14 + 24) )
          {
            sub_A054C0(v14 + 8, v29, i);
          }
          else
          {
            v27 = *i;
            v28 = v29 + 8;
            *i = 0;
            *((_QWORD *)v28 - 1) = v27;
            *(_QWORD *)(v14 + 16) = v28;
          }
        }
        (*(void (__fastcall **)(_QWORD *))(*v24 + 8LL))(v24);
        goto LABEL_19;
      }
      v13 = *a3;
    }
    v31[0] = v13;
    v15 = *(char **)(v14 + 16);
    *a3 = 0;
    if ( v15 == *(char **)(v14 + 24) )
    {
      sub_A054C0(v14 + 8, v15, v31);
    }
    else
    {
      v31[0] = 0;
      v16 = v15 + 8;
      *((_QWORD *)v16 - 1) = v13;
      *(_QWORD *)(v14 + 16) = v16;
    }
    if ( v31[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31[0] + 8LL))(v31[0]);
LABEL_19:
    v17 = *a2;
    *a2 = 0;
    *a1 = v17;
    return a1;
  }
  v8 = (_QWORD *)*a3;
  if ( *a3 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD *, void *))(*v8 + 48LL))(v8, &unk_2D0AA9B);
    v8 = (_QWORD *)*a3;
    if ( v9 )
    {
      v10 = *a2;
      v11 = (char *)v8[1];
      *a2 = 0;
      v31[0] = v10;
      sub_AEA3D0(v8 + 1, v11, v31);
      if ( v31[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31[0] + 8LL))(v31[0]);
      v6 = *a3;
      goto LABEL_9;
    }
  }
  v18 = *a2;
  *a3 = 0;
  *a2 = 0;
  v31[0] = (__int64)v8;
  v30 = v18;
  v19 = (_QWORD *)operator new(0x20u);
  v19[1] = 0;
  v19[2] = 0;
  *v19 = &off_2BEADB8;
  v19[3] = 0;
  sub_A054C0((__int64)(v19 + 1), nullptr, &v30);
  v20 = (char *)v19[2];
  if ( (char *)v19[3] == v20 )
  {
    sub_A054C0((__int64)(v19 + 1), v20, v31);
  }
  else
  {
    v21 = v31[0];
    v22 = v20 + 8;
    v31[0] = 0;
    *((_QWORD *)v22 - 1) = v21;
    v19[2] = v22;
  }
  v23 = v31[0];
  *a1 = (__int64)v19;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
  return a1;
}
