void __fastcall sub_1504470(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r12
  signed __int64 v3; // rbp
  void **v4; // rbp
  unsigned __int64 v5; // rax
  void **v6; // r12
  void **v7; // rbx
  void **v8; // rdi
  void **v9; // rdi
  void **v10; // rbx
  void **v11; // r12
  __int64 v12; // rdx
  void *v13; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+10h] [rbp-58h]
  void *v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  __int16 v18; // [rsp+40h] [rbp-28h]

  v2 = *(_BYTE **)a2;
  v3 = *(_QWORD *)(a2 + 8);
  sub_1564820(&v13, *(_QWORD *)a1, *(unsigned int *)(a1 + 8), 2228);
  sub_AEC220((unsigned __int8 **)&v13, v2, v3);
  if ( (_BYTE)v18 )
  {
    sub_FC7790(v15, (__int64 *)&v13, SHIBYTE(v18));
    v15 = 0;
    v18 = 0;
  }
  if ( v16 != &v17 )
    operator delete(v16);
  v4 = (void **)v13;
  if ( v13 )
  {
    v5 = v14;
    if ( v14 )
    {
      if ( (unsigned __int64)v13 < v14 || (unsigned __int64)v13 > v14 + 14848 )
      {
        v6 = *((void ***)v13 + 66);
        v7 = &v6[8 * (unsigned __int64)*((unsigned int *)v13 + 134)];
        if ( v6 != v7 )
        {
          do
          {
            while ( 1 )
            {
              v7 -= 8;
              v8 = (void **)v7[3];
              if ( v8 == v7 + 5 )
                break;
              operator delete(v8);
              if ( v6 == v7 )
                goto LABEL_11;
            }
          }
          while ( v6 != v7 );
LABEL_11:
          v7 = (void **)v4[66];
        }
        if ( v7 != v4 + 68 )
          free(v7);
        v9 = (void **)v4[52];
        if ( v9 != v4 + 54 )
          free(v9);
        v10 = v4 + 48;
        v11 = v4 + 8;
        do
        {
          while ( *v10 != v10 + 2 )
          {
            operator delete(*v10);
            v10 -= 4;
            if ( v11 == v10 )
            {
              operator delete(v4, 0x3A0u);
              return;
            }
          }
          v10 -= 4;
        }
        while ( v11 != v10 );
        operator delete(v4, 0x3A0u);
      }
      else
      {
        v12 = *(unsigned int *)(v14 + 14976);
        *(_DWORD *)(v14 + 14976) = v12 + 1;
        *(_QWORD *)(v5 + 8 * v12 + 14848) = v4;
      }
    }
  }
}
