void __fastcall sub_142A710(__int64 *a1, unsigned int a2, int *a3)
{
  void **v5; // r14
  unsigned __int64 v6; // rdx
  void **v7; // r15
  void **v8; // rbx
  void **v9; // rdi
  void **v10; // rdi
  void **v11; // rbx
  void **v12; // r15
  __int64 v13; // rcx
  void *v14; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-80h]
  __int64 v16; // [rsp+20h] [rbp-78h]
  void *v17; // [rsp+30h] [rbp-68h]
  __int64 v18; // [rsp+40h] [rbp-58h] BYREF
  __int16 v19; // [rsp+50h] [rbp-48h]

  sub_FC70B0((__int64)&v14, a1[6], *a3, 1243);
  if ( (_BYTE)v19 )
  {
    sub_FC7790(v16, (__int64 *)&v14, SHIBYTE(v19));
    v16 = 0;
    v19 = 0;
  }
  if ( v17 != &v18 )
    operator delete(v17);
  v5 = (void **)v14;
  if ( v14 )
  {
    v6 = v15;
    if ( v15 )
    {
      if ( (unsigned __int64)v14 < v15 || (unsigned __int64)v14 > v15 + 14848 )
      {
        v7 = *((void ***)v14 + 66);
        v8 = &v7[8 * (unsigned __int64)*((unsigned int *)v14 + 134)];
        if ( v7 != v8 )
        {
          do
          {
            while ( 1 )
            {
              v8 -= 8;
              v9 = (void **)v8[3];
              if ( v9 == v8 + 5 )
                break;
              operator delete(v9);
              if ( v7 == v8 )
                goto LABEL_11;
            }
          }
          while ( v7 != v8 );
LABEL_11:
          v8 = (void **)v5[66];
        }
        if ( v8 != v5 + 68 )
          free(v8);
        v10 = (void **)v5[52];
        if ( v10 != v5 + 54 )
          free(v10);
        v11 = v5 + 48;
        v12 = v5 + 8;
        do
        {
          while ( *v11 != v11 + 2 )
          {
            operator delete(*v11);
            v11 -= 4;
            if ( v12 == v11 )
              goto LABEL_19;
          }
          v11 -= 4;
        }
        while ( v12 != v11 );
LABEL_19:
        operator delete(v5, 0x3A0u);
      }
      else
      {
        v13 = *(unsigned int *)(v15 + 14976);
        *(_DWORD *)(v15 + 14976) = v13 + 1;
        *(_QWORD *)(v6 + 8 * v13 + 14848) = v5;
      }
    }
  }
  sub_141B0D0((__int64 *)&v14, a1, a3);
  sub_142A3D0(a1, a2, (__int64)a3, (__int64)v14, v15, v16);
}
