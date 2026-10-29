__int64 __fastcall sub_57D770(_QWORD *a1)
{
  __int64 (__fastcall ****v1)(); // rdx
  __int64 (__fastcall ***v2)(); // rcx
  __int64 (__fastcall *v3)(); // rax
  __int64 (__fastcall ****v4)(); // rbx
  __int64 (__fastcall ****v5)(); // rbp
  __int64 (__fastcall ***v6)(); // r14
  __int64 (__fastcall *v7)(); // rax
  __int64 (__fastcall **v8)(); // r13
  __int64 (__fastcall **v9)(); // r15
  __int64 (__fastcall *v10)(); // r12
  __int64 (__fastcall **v11)(); // rdi
  __int64 (__fastcall **v12)(); // rax
  __int64 result; // rax
  __int64 (__fastcall ****v14)(); // [rsp+0h] [rbp-58h]
  __int64 (__fastcall ***ptr)(); // [rsp+8h] [rbp-50h]
  __int64 (__fastcall ****v16)(); // [rsp+10h] [rbp-48h]

  *a1 = &off_1C51628;
  v1 = (__int64 (__fastcall ****)())a1[2];
  v14 = v1;
  if ( v1 )
  {
    v16 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 == v16 )
      goto LABEL_27;
    do
    {
      v2 = *v14;
      ptr = *v14;
      if ( *v14 )
      {
        v3 = **v2;
        if ( v3 == sub_57D770 )
        {
          v4 = (__int64 (__fastcall ****)())v2[2];
          *v2 = &off_1C51628;
          if ( v4 )
          {
            v5 = &v4[*((unsigned int *)v4 - 1)];
            if ( v4 == v5 )
              goto LABEL_21;
            do
            {
              v6 = *v4;
              if ( *v4 )
              {
                v7 = **v6;
                if ( v7 == sub_57D770 )
                {
                  v8 = v6[2];
                  *v6 = &off_1C51628;
                  if ( v8 )
                  {
                    v9 = &v8[*((unsigned int *)v8 - 1)];
                    if ( v8 == v9 )
                      goto LABEL_15;
                    do
                    {
                      v10 = *v8;
                      if ( *v8 )
                      {
                        (**(void (__fastcall ***)(__int64 (__fastcall *)()))v10)(*v8);
                        sub_186B220(v10);
                      }
                      ++v8;
                    }
                    while ( v9 != v8 );
                    v9 = v6[2];
                    if ( v9 )
LABEL_15:
                      sub_186B220(v9 - 1);
                  }
                  v11 = v6[1];
                  if ( v11 )
                    sub_186B220(v11 - 1);
                }
                else
                {
                  ((void (__fastcall *)(__int64 (__fastcall ***)()))v7)(*v4);
                }
                sub_186B220(v6);
              }
              ++v4;
            }
            while ( v5 != v4 );
            v5 = (__int64 (__fastcall ****)())ptr[2];
            if ( v5 )
LABEL_21:
              sub_186B220(v5 - 1);
          }
          v12 = ptr[1];
          if ( v12 )
            sub_186B220(v12 - 1);
        }
        else
        {
          ((void (__fastcall *)(__int64 (__fastcall ***)()))v3)(v2);
        }
        sub_186B220(ptr);
      }
      ++v14;
    }
    while ( v16 != v14 );
    v16 = (__int64 (__fastcall ****)())a1[2];
    if ( v16 )
LABEL_27:
      sub_186B220(v16 - 1);
  }
  result = a1[1];
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

