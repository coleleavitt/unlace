void __fastcall sub_BE1FD0(__int64 a1)
{
  __int64 *v1; // r14
  __int64 v2; // rbx
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  _QWORD *v7; // rdx
  __int64 v8; // rax
  unsigned int i; // r13d
  __int64 *v10; // [rsp+0h] [rbp-58h]
  __int64 *v11; // [rsp+8h] [rbp-50h]
  _QWORD v12[8]; // [rsp+18h] [rbp-40h] BYREF

  v1 = *(__int64 **)(a1 + 232);
  if ( v1 )
  {
    v11 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 != v11 )
    {
      v10 = *(__int64 **)(a1 + 232);
      v2 = 0;
      do
      {
        v3 = (__int64 *)*v10;
        v4 = sub_BE07E0(a1, *v10);
        v5 = *(_QWORD *)v4;
        v6 = *(_QWORD *)v4 + 16LL * *(unsigned int *)(v4 + 8);
        if ( *(_QWORD *)v4 != v6 )
        {
          while ( *(_QWORD *)(v5 + 8) <= 1u )
          {
            v5 += 16;
            if ( v6 == v5 )
              goto LABEL_15;
          }
          if ( v6 != v5 )
          {
            v7 = *(_QWORD **)(v5 + 8);
            do
            {
              v12[0] = v2;
              sub_BE16E0(a1, v3, v7, v12);
              v8 = v5 + 16;
              v2 = v12[0];
              if ( v6 == v5 + 16 )
                break;
              while ( 1 )
              {
                v7 = *(_QWORD **)(v8 + 8);
                v5 = v8;
                if ( (unsigned __int64)v7 > 1 )
                  break;
                v8 += 16;
                if ( v6 == v8 )
                  goto LABEL_15;
              }
            }
            while ( v6 != v8 );
          }
        }
LABEL_15:
        ++v10;
      }
      while ( v11 != v10 );
      if ( v2 )
      {
        for ( i = 0; i < *(_DWORD *)(v2 - 4); ++i )
        {
          v12[0] = v2;
          sub_BE16E0(a1, *(__int64 **)(v2 + 16LL * i), *(_QWORD **)(v2 + 16LL * i + 8), v12);
          v2 = v12[0];
          if ( !v12[0] )
            return;
        }
        sub_186B220((void *)(v2 - 8));
      }
    }
  }
}

