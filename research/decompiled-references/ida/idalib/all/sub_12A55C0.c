__int64 __fastcall sub_12A55C0(__int64 a1)
{
  void **v1; // rbp
  unsigned __int64 v2; // rax
  void **v3; // r12
  void **v4; // rbx
  void **v5; // rdi
  void **v6; // rdi
  void **v7; // rbx
  void **v8; // r12
  __int64 v10; // rdx
  void *v11; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-60h]
  __int64 v13; // [rsp+10h] [rbp-58h]
  void *v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  __int16 v16; // [rsp+40h] [rbp-28h]

  sub_FC70B0((__int64)&v11, **(_QWORD **)(a1 + 8), 0, 506);
  if ( (_BYTE)v16 )
  {
    sub_FC7790(v13, (__int64 *)&v11, SHIBYTE(v16));
    v13 = 0;
    v16 = 0;
  }
  if ( v14 != &v15 )
    operator delete(v14);
  v1 = (void **)v11;
  if ( v11 )
  {
    v2 = v12;
    if ( v12 )
    {
      if ( (unsigned __int64)v11 < v12 || (unsigned __int64)v11 > v12 + 14848 )
      {
        v3 = *((void ***)v11 + 66);
        v4 = &v3[8 * (unsigned __int64)*((unsigned int *)v11 + 134)];
        if ( v3 != v4 )
        {
          do
          {
            while ( 1 )
            {
              v4 -= 8;
              v5 = (void **)v4[3];
              if ( v5 == v4 + 5 )
                break;
              operator delete(v5);
              if ( v3 == v4 )
                goto LABEL_11;
            }
          }
          while ( v3 != v4 );
LABEL_11:
          v4 = (void **)v1[66];
        }
        if ( v4 != v1 + 68 )
          free(v4);
        v6 = (void **)v1[52];
        if ( v6 != v1 + 54 )
          free(v6);
        v7 = v1 + 48;
        v8 = v1 + 8;
        do
        {
          while ( *v7 != v7 + 2 )
          {
            operator delete(*v7);
            v7 -= 4;
            if ( v8 == v7 )
              goto LABEL_19;
          }
          v7 -= 4;
        }
        while ( v8 != v7 );
LABEL_19:
        operator delete(v1, 0x3A0u);
      }
      else
      {
        v10 = *(unsigned int *)(v12 + 14976);
        *(_DWORD *)(v12 + 14976) = v10 + 1;
        *(_QWORD *)(v2 + 8 * v10 + 14848) = v1;
      }
    }
  }
  return 0;
}
