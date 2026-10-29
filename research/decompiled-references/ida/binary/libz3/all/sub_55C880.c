__int64 __fastcall sub_55C880(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  __int64 (__fastcall *v4)(); // rax
  __int64 v5; // r13
  __int64 v6; // r13
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v14; // rax
  void *v15; // rdi
  __int64 v16; // rax
  void *v17; // rdi
  __int64 v18; // rax
  void *v19; // rdi
  __int64 v20; // rax
  void *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  void *v24; // rdi
  __int64 v25; // rax
  void *v26; // rdi
  __int64 v27; // rax
  void *v28; // rdi
  __int64 v29; // rax
  void *v30; // rdi
  __int64 v31; // rax
  void *v32; // rdi

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD **)(v2 + 40);
  if ( !v3 )
  {
    v14 = (**(__int64 (__fastcall ***)(_QWORD))v2)(*(_QWORD *)(a1 + 40));
    v15 = *(void **)(v2 + 40);
    v3 = (_QWORD *)v14;
    if ( v15 && (void *)v14 != v15 )
      sub_4D63E0(v15);
    *(_QWORD *)(v2 + 40) = v3;
  }
  v4 = *(__int64 (__fastcall **)())(*v3 + 168LL);
  if ( v4 == sub_55C880 )
  {
    v5 = v3[5];
    v3 = *(_QWORD **)(v5 + 40);
    if ( !v3 )
    {
      v16 = (**(__int64 (__fastcall ***)(__int64))v5)(v5);
      v17 = *(void **)(v5 + 40);
      v3 = (_QWORD *)v16;
      if ( v17 && (void *)v16 != v17 )
        sub_4D63E0(v17);
      *(_QWORD *)(v5 + 40) = v3;
    }
    v4 = *(__int64 (__fastcall **)())(*v3 + 168LL);
    if ( v4 == sub_55C880 )
    {
      v6 = v3[5];
      v3 = *(_QWORD **)(v6 + 40);
      if ( !v3 )
      {
        v18 = (**(__int64 (__fastcall ***)(__int64))v6)(v6);
        v19 = *(void **)(v6 + 40);
        v3 = (_QWORD *)v18;
        if ( (void *)v18 != v19 && v19 )
          sub_4D63E0(v19);
        *(_QWORD *)(v6 + 40) = v3;
      }
      v4 = *(__int64 (__fastcall **)())(*v3 + 168LL);
      if ( v4 == sub_55C880 )
      {
        v7 = v3[5];
        v3 = *(_QWORD **)(v7 + 40);
        if ( v3 )
        {
          v4 = *(__int64 (__fastcall **)())(*v3 + 168LL);
          if ( v4 != sub_55C880 )
            return ((__int64 (__fastcall *)(_QWORD *, __int64))v4)(v3, a2);
          goto LABEL_9;
        }
        v20 = (**(__int64 (__fastcall ***)(__int64))v7)(v7);
        v21 = *(void **)(v7 + 40);
        v3 = (_QWORD *)v20;
        if ( v21 && (void *)v20 != v21 )
          sub_4D63E0(v21);
        v22 = *v3;
        *(_QWORD *)(v7 + 40) = v3;
        v4 = *(__int64 (__fastcall **)())(v22 + 168);
        if ( v4 == sub_55C880 )
        {
LABEL_9:
          v8 = v3[5];
          v3 = *(_QWORD **)(v8 + 40);
          if ( !v3 )
          {
            v27 = (**(__int64 (__fastcall ***)(__int64))v8)(v8);
            v28 = *(void **)(v8 + 40);
            v3 = (_QWORD *)v27;
            if ( v28 && (void *)v27 != v28 )
              sub_4D63E0(v28);
            *(_QWORD *)(v8 + 40) = v3;
          }
          v4 = *(__int64 (__fastcall **)())(*v3 + 168LL);
          if ( v4 == sub_55C880 )
          {
            v9 = v3[5];
            v3 = *(_QWORD **)(v9 + 40);
            if ( !v3 )
            {
              v29 = (**(__int64 (__fastcall ***)(__int64))v9)(v9);
              v30 = *(void **)(v9 + 40);
              v3 = (_QWORD *)v29;
              if ( v30 && (void *)v29 != v30 )
                sub_4D63E0(v30);
              *(_QWORD *)(v9 + 40) = v3;
            }
            v4 = *(__int64 (__fastcall **)())(*v3 + 168LL);
            if ( v4 == sub_55C880 )
            {
              v10 = v3[5];
              v3 = *(_QWORD **)(v10 + 40);
              if ( !v3 )
              {
                v23 = (**(__int64 (__fastcall ***)(__int64))v10)(v10);
                v24 = *(void **)(v10 + 40);
                v3 = (_QWORD *)v23;
                if ( v24 && (void *)v23 != v24 )
                  sub_4D63E0(v24);
                *(_QWORD *)(v10 + 40) = v3;
              }
              v4 = *(__int64 (__fastcall **)())(*v3 + 168LL);
              if ( v4 == sub_55C880 )
              {
                v11 = v3[5];
                v3 = *(_QWORD **)(v11 + 40);
                if ( !v3 )
                {
                  v25 = (**(__int64 (__fastcall ***)(__int64))v11)(v11);
                  v26 = *(void **)(v11 + 40);
                  v3 = (_QWORD *)v25;
                  if ( v26 && (void *)v25 != v26 )
                    sub_4D63E0(v26);
                  *(_QWORD *)(v11 + 40) = v3;
                }
                v4 = *(__int64 (__fastcall **)())(*v3 + 168LL);
                if ( v4 == sub_55C880 )
                {
                  v12 = v3[5];
                  v3 = *(_QWORD **)(v12 + 40);
                  if ( !v3 )
                  {
                    v31 = (**(__int64 (__fastcall ***)(__int64))v12)(v12);
                    v32 = *(void **)(v12 + 40);
                    v3 = (_QWORD *)v31;
                    if ( v32 && (void *)v31 != v32 )
                      sub_4D63E0(v32);
                    *(_QWORD *)(v12 + 40) = v3;
                  }
                  v4 = *(__int64 (__fastcall **)())(*v3 + 168LL);
                }
              }
            }
          }
        }
      }
    }
  }
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v4)(v3, a2);
}

