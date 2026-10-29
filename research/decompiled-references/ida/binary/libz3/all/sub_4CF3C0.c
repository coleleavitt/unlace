void __fastcall sub_4CF3C0(_QWORD *a1)
{
  __int64 (__fastcall ****v1)(); // rbp
  __int64 (__fastcall ****v2)(); // r12
  __int64 (__fastcall ***v3)(); // r13
  __int64 (__fastcall *v4)(); // rax
  void (****v5)(void); // rbx
  void (****v6)(void); // r15

  v1 = (__int64 (__fastcall ****)())a1[1];
  *a1 = &off_1C4ED90;
  if ( v1 )
  {
    v2 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 == v2 )
      goto LABEL_15;
    do
    {
      v3 = *v1;
      if ( *v1 )
      {
        v4 = **v3;
        if ( v4 == sub_4CF3C0 )
        {
          v5 = (void (****)(void))v3[1];
          *v3 = &off_1C4ED90;
          if ( v5 )
          {
            v6 = &v5[*((unsigned int *)v5 - 1)];
            if ( v5 == v6 )
              goto LABEL_11;
            do
            {
              if ( *v5 )
                sub_4CF1F0(*v5);
              ++v5;
            }
            while ( v6 != v5 );
            v6 = (void (****)(void))v3[1];
            if ( v6 )
LABEL_11:
              sub_186B220(v6 - 1);
          }
        }
        else
        {
          ((void (__fastcall *)(__int64 (__fastcall ***)()))v4)(*v1);
        }
        sub_186B220(v3);
      }
      ++v1;
    }
    while ( v1 != v2 );
    v2 = (__int64 (__fastcall ****)())a1[1];
    if ( v2 )
LABEL_15:
      sub_186B220(v2 - 1);
  }
}

