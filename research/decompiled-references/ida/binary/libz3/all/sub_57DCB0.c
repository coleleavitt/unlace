__int64 __fastcall sub_57DCB0(__int64 a1)
{
  __int64 (__fastcall ****v1)(); // rax
  __int64 (__fastcall ***v2)(); // rbp
  __int64 (__fastcall *v3)(); // rax
  __int64 (__fastcall ****v4)(); // rbx
  __int64 (__fastcall ***v5)(); // r15
  __int64 (__fastcall *v6)(); // rdx
  __int64 (__fastcall **v7)(); // r13
  __int64 (__fastcall **j)(); // r14
  __int64 (__fastcall *v9)(); // r12
  __int64 (__fastcall **v10)(); // rdi
  __int64 (__fastcall **v11)(); // rdi
  __int64 (__fastcall **v12)(); // rdi
  __int64 (__fastcall **v13)(); // rdi
  __int64 (__fastcall **v14)(); // rdi
  __int64 (__fastcall **v15)(); // rdi
  __int64 (__fastcall **v16)(); // rdi
  __int64 (__fastcall **v17)(); // rdi
  __int64 (__fastcall **v18)(); // rdi
  __int64 (__fastcall **v19)(); // rax
  __int64 (__fastcall **v20)(); // rax
  __int64 (__fastcall **v21)(); // rax
  __int64 (__fastcall **v22)(); // rax
  __int64 (__fastcall **v23)(); // rax
  __int64 (__fastcall **v24)(); // rax
  __int64 (__fastcall **v25)(); // rax
  __int64 (__fastcall **v26)(); // rax
  __int64 (__fastcall **v27)(); // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 result; // rax
  __int64 (__fastcall ****i)(); // [rsp+8h] [rbp-60h]
  __int64 (__fastcall ****v38)(); // [rsp+18h] [rbp-50h]
  __int64 (__fastcall ****v39)(); // [rsp+20h] [rbp-48h]

  v1 = *(__int64 (__fastcall *****)())(a1 + 40);
  *(_QWORD *)a1 = &off_1C51600;
  v38 = v1;
  if ( v1 )
  {
    v39 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 != v39 )
    {
      do
      {
        v2 = *v38;
        if ( *v38 )
        {
          v3 = **v2;
          if ( v3 == sub_57DCB0 )
          {
            v4 = (__int64 (__fastcall ****)())v2[5];
            *v2 = &off_1C51600;
            if ( v4 )
            {
              for ( i = &v4[*((unsigned int *)v4 - 1)]; i != v4; ++v4 )
              {
                v5 = *v4;
                if ( *v4 )
                {
                  v6 = **v5;
                  if ( v6 == sub_57DCB0 )
                  {
                    v7 = v5[5];
                    *v5 = &off_1C51600;
                    if ( v7 )
                    {
                      for ( j = &v7[*((unsigned int *)v7 - 1)]; j != v7; ++v7 )
                      {
                        v9 = *v7;
                        if ( *v7 )
                        {
                          (**(void (__fastcall ***)(__int64 (__fastcall *)()))v9)(*v7);
                          sub_186B220(v9);
                        }
                      }
                    }
                    sub_4D6410((__int64 ***)v5 + 6);
                    v10 = v5[10];
                    if ( v10 )
                      sub_186B220(v10 - 1);
                    v11 = v5[9];
                    if ( v11 )
                      sub_186B220(v11 - 1);
                    v12 = v5[8];
                    if ( v12 )
                      sub_186B220(v12 - 1);
                    v13 = v5[7];
                    if ( v13 )
                      sub_186B220(v13 - 1);
                    v14 = v5[6];
                    if ( v14 )
                      sub_186B220(v14 - 1);
                    v15 = v5[5];
                    if ( v15 )
                      sub_186B220(v15 - 1);
                    v16 = v5[3];
                    *v5 = (__int64 (__fastcall **)())qword_1C666F0;
                    if ( v16 )
                      sub_186B220(v16 - 1);
                    v17 = v5[2];
                    if ( v17 )
                      sub_186B220(v17 - 1);
                    v18 = v5[1];
                    if ( v18 )
                      sub_186B220(v18 - 1);
                  }
                  else
                  {
                    ((void (__fastcall *)(__int64 (__fastcall ***)()))v6)(*v4);
                  }
                  sub_186B220(v5);
                }
              }
            }
            sub_4D6410((__int64 ***)v2 + 6);
            v19 = v2[10];
            if ( v19 )
              sub_186B220(v19 - 1);
            v20 = v2[9];
            if ( v20 )
              sub_186B220(v20 - 1);
            v21 = v2[8];
            if ( v21 )
              sub_186B220(v21 - 1);
            v22 = v2[7];
            if ( v22 )
              sub_186B220(v22 - 1);
            v23 = v2[6];
            if ( v23 )
              sub_186B220(v23 - 1);
            v24 = v2[5];
            if ( v24 )
              sub_186B220(v24 - 1);
            *v2 = (__int64 (__fastcall **)())qword_1C666F0;
            v25 = v2[3];
            if ( v25 )
              sub_186B220(v25 - 1);
            v26 = v2[2];
            if ( v26 )
              sub_186B220(v26 - 1);
            v27 = v2[1];
            if ( v27 )
              sub_186B220(v27 - 1);
          }
          else
          {
            ((void (__fastcall *)(__int64 (__fastcall ***)()))v3)(*v38);
          }
          sub_186B220(v2);
        }
        ++v38;
      }
      while ( v39 != v38 );
    }
  }
  sub_4D6410((__int64 ***)(a1 + 48));
  v28 = *(_QWORD *)(a1 + 80);
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  v29 = *(_QWORD *)(a1 + 72);
  if ( v29 )
    sub_186B220((void *)(v29 - 8));
  v30 = *(_QWORD *)(a1 + 64);
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = *(_QWORD *)(a1 + 56);
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v32 = *(_QWORD *)(a1 + 48);
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = *(_QWORD *)(a1 + 40);
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  *(_QWORD *)a1 = qword_1C666F0;
  v34 = *(_QWORD *)(a1 + 24);
  if ( v34 )
    sub_186B220((void *)(v34 - 8));
  v35 = *(_QWORD *)(a1 + 16);
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  result = *(_QWORD *)(a1 + 8);
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

