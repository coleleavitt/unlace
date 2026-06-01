__int64 __fastcall sub_1466860(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // r9
  void **v8; // r13
  unsigned __int64 v9; // rax
  void **v10; // r14
  void **v11; // rbx
  void **v12; // rdi
  void **v13; // rdi
  void **v14; // rbx
  void **v15; // r14
  __int64 v16; // rdi
  void *v18; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-70h]
  __int64 v20; // [rsp+10h] [rbp-68h]
  void *v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  __int16 v23; // [rsp+40h] [rbp-38h]

  sub_FC70B0((__int64)&v18, *(_QWORD *)(a1[2] + 48LL), a3, 1211);
  if ( (_BYTE)v23 )
  {
    sub_FC7790(v20, (__int64 *)&v18, SHIBYTE(v23));
    v20 = 0;
    v23 = 0;
  }
  if ( v21 != &v22 )
    operator delete(v21);
  v8 = (void **)v18;
  if ( v18 )
  {
    v9 = v19;
    if ( v19 )
    {
      if ( (unsigned __int64)v18 < v19 || (unsigned __int64)v18 > v19 + 14848 )
      {
        v10 = *((void ***)v18 + 66);
        v11 = &v10[8 * (unsigned __int64)*((unsigned int *)v18 + 134)];
        if ( v10 != v11 )
        {
          do
          {
            while ( 1 )
            {
              v11 -= 8;
              v12 = (void **)v11[3];
              if ( v12 == v11 + 5 )
                break;
              operator delete(v12);
              if ( v10 == v11 )
                goto LABEL_11;
            }
          }
          while ( v10 != v11 );
LABEL_11:
          v11 = (void **)v8[66];
        }
        if ( v11 != v8 + 68 )
          free(v11);
        v13 = (void **)v8[52];
        if ( v13 != v8 + 54 )
          free(v13);
        v14 = v8 + 48;
        v15 = v8 + 8;
        do
        {
          while ( *v14 != v14 + 2 )
          {
            operator delete(*v14);
            v14 -= 4;
            if ( v15 == v14 )
              goto LABEL_19;
          }
          v14 -= 4;
        }
        while ( v15 != v14 );
LABEL_19:
        operator delete(v8, 0x3A0u);
      }
      else
      {
        v4 = *(unsigned int *)(v19 + 14976);
        v5 = (unsigned int)(v4 + 1);
        *(_DWORD *)(v19 + 14976) = v5;
        *(_QWORD *)(v9 + 8 * v4 + 14848) = v8;
      }
    }
  }
  v16 = a1[2];
  *(_BYTE *)(*a1 + 36LL) &= ~0x40u;
  return sub_143F140(v16, a2, v4, v5, v6, v7);
}
