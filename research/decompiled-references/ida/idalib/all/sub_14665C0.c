_BOOL8 __fastcall sub_14665C0(__int64 a1, __int64 *a2, char a3, __int64 a4, int a5, __int64 a6)
{
  char v6; // al
  _BOOL8 result; // rax
  unsigned int v8; // ecx
  _BYTE *v9; // r8
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // ecx
  void **v17; // r13
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r12
  void *v21; // rdi
  void **v22; // rdi
  void **v23; // rdi
  void **v24; // r12
  void **v25; // r14
  __int64 v26; // rdx
  void *v27; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+10h] [rbp-68h]
  void *v30; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+30h] [rbp-48h] BYREF
  __int16 v32; // [rsp+40h] [rbp-38h]

  v6 = *(_BYTE *)(a4 + 36);
  if ( (v6 & 4) != 0 || (result = (v6 & 8) != 0) )
  {
    v8 = *(_DWORD *)(a4 + 24);
    result = 0;
    if ( v8 - 1 == a5 )
    {
      v9 = *(_BYTE **)(a6 + 56);
      if ( a3 || (*v9 & 0x20) != 0 )
      {
        if ( (*v9 & 1) == 0 || (v9[4] & 4) != 0 || (result = 0, v8 > 1) )
        {
          v10 = *((_DWORD *)a2 + 2);
          result = 0;
          if ( v10 )
          {
            v11 = *a2 + 24LL * v10 - 24;
            if ( *(_WORD *)(v11 + 16) == 66 )
            {
              if ( a3 )
              {
                sub_FC70B0((__int64)&v27, *(_QWORD *)(a6 + 48), *(_DWORD *)v11, 1233);
                if ( (_BYTE)v32 )
                {
                  sub_FC7790(v29, (__int64 *)&v27, SHIBYTE(v32));
                  v29 = 0;
                  v32 = 0;
                }
                if ( v30 != &v31 )
                  operator delete(v30);
                v17 = (void **)v27;
                if ( v27 )
                {
                  v18 = v28;
                  if ( v28 )
                  {
                    if ( (unsigned __int64)v27 < v28 || (unsigned __int64)v27 > v28 + 14848 )
                    {
                      v19 = *((_QWORD *)v27 + 66);
                      v20 = v19 + ((unsigned __int64)*((unsigned int *)v27 + 134) << 6);
                      while ( v19 != v20 )
                      {
                        while ( 1 )
                        {
                          v20 -= 64;
                          v21 = *(void **)(v20 + 24);
                          if ( v21 == (void *)(v20 + 40) )
                            break;
                          operator delete(v21);
                          if ( v19 == v20 )
                            goto LABEL_29;
                        }
                      }
LABEL_29:
                      v22 = (void **)v17[66];
                      if ( v22 != v17 + 68 )
                        free(v22);
                      v23 = (void **)v17[52];
                      if ( v23 != v17 + 54 )
                        free(v23);
                      v24 = v17 + 48;
                      v25 = v17 + 8;
                      do
                      {
                        while ( *v24 != v24 + 2 )
                        {
                          operator delete(*v24);
                          v24 -= 4;
                          if ( v24 == v25 )
                            goto LABEL_36;
                        }
                        v24 -= 4;
                      }
                      while ( v25 != v24 );
LABEL_36:
                      operator delete(v17, 0x3A0u);
                    }
                    else
                    {
                      v26 = *(unsigned int *)(v28 + 14976);
                      *(_DWORD *)(v28 + 14976) = v26 + 1;
                      *(_QWORD *)(v18 + 8 * v26 + 14848) = v17;
                    }
                  }
                }
                v10 = *((_DWORD *)a2 + 2);
              }
              v13 = v10 - 1;
              *((_DWORD *)a2 + 2) = v13;
              if ( v10 != 1 )
              {
                v14 = *a2;
                v15 = *a2 + 24 * v13 - 24;
                if ( *(_WORD *)(v15 + 16) == 68 )
                {
                  v16 = v10 - 2;
                  *((_DWORD *)a2 + 2) = v16;
                  v15 = v14 + 24LL * v16 - 24;
                }
                *(_WORD *)(v15 + 18) |= 0x200u;
              }
              *(_BYTE *)(a1 + 64) &= ~4u;
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}
