__int64 __fastcall sub_1408340(__int64 a1, __int64 a2, int a3)
{
  __int64 **v3; // r14
  __int64 v5; // r13
  int v6; // ecx
  __int64 v8; // r14
  __int64 v9; // r15
  void **v10; // rbp
  void **v11; // rbx
  __int64 **v12; // r10
  __int64 **v13; // r15
  char v14; // bp
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 **v20; // rdi
  __int64 **v21; // r12
  __int64 v22; // r8
  void **v23; // rbp
  void **v24; // rbx
  __int64 *v25; // rax
  char *v26; // rbx
  __int64 v27; // rax
  __int64 ***v28; // [rsp+8h] [rbp-120h]
  __int64 *v29; // [rsp+10h] [rbp-118h]
  __int64 v30; // [rsp+18h] [rbp-110h]
  __int64 **v31; // [rsp+20h] [rbp-108h] BYREF
  __int64 v32; // [rsp+28h] [rbp-100h]
  char v33; // [rsp+30h] [rbp-F8h] BYREF

  LODWORD(v3) = 0;
  LODWORD(v29) = a3;
  v5 = sub_FEEE40(a2);
  v28 = &v31;
  v6 = *(_DWORD *)(v5 + 1344);
  v31 = (__int64 **)&v33;
  v32 = 0x200000000LL;
  if ( v6 )
  {
    v30 = v5 + 1336;
    sub_1408080((__int64)v28, v5 + 1336);
    v8 = *(_QWORD *)(v5 + 1336);
    v9 = v8 + 96LL * *(unsigned int *)(v5 + 1344);
    if ( v8 == v9 )
    {
      v12 = v31;
      v13 = &v31[12 * (unsigned int)v32];
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v9 -= 96;
          v10 = *(void ***)v9;
          v11 = (void **)(*(_QWORD *)v9 + 40LL * *(unsigned int *)(v9 + 8));
          if ( *(void ***)v9 != v11 )
          {
            do
            {
              while ( 1 )
              {
                v11 -= 5;
                if ( *v11 == v11 + 2 )
                  break;
                operator delete(*v11);
                if ( v10 == v11 )
                  goto LABEL_7;
              }
            }
            while ( v10 != v11 );
LABEL_7:
            v10 = *(void ***)v9;
          }
          if ( v10 == (void **)(v9 + 16) )
            break;
          free(v10);
          if ( v8 == v9 )
            goto LABEL_10;
        }
      }
      while ( v8 != v9 );
LABEL_10:
      v12 = v31;
      v13 = &v31[12 * (unsigned int)v32];
    }
    *(_DWORD *)(v5 + 1344) = 0;
    if ( v12 == v13 )
    {
      LODWORD(v3) = 0;
    }
    else
    {
      v14 = (char)v29;
      v3 = v12;
      do
      {
        while ( 1 )
        {
          v16 = (__int64)v3;
          v25 = sub_13F8D90(a1, v3, (__int64 *)v5, v14);
          if ( v25 )
            break;
          v17 = *(unsigned int *)(v5 + 1344);
          v18 = *(_QWORD *)(v5 + 1336);
          v19 = v17 + 1;
          v20 = (__int64 **)(v18 + 96 * v17);
          if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(v5 + 1348) )
          {
            if ( v18 > (unsigned __int64)v3 || v20 <= v3 )
            {
              sub_1407F20(v30, v19);
              v20 = (__int64 **)(*(_QWORD *)(v5 + 1336) + 96LL * *(unsigned int *)(v5 + 1344));
            }
            else
            {
              v26 = (char *)v3 - v18;
              sub_1407F20(v30, v19);
              v27 = *(_QWORD *)(v5 + 1336);
              v16 = (__int64)&v26[v27];
              v20 = (__int64 **)(v27 + 96LL * *(unsigned int *)(v5 + 1344));
            }
          }
          *v20 = (__int64 *)(v20 + 2);
          v20[1] = (__int64 *)0x200000000LL;
          if ( *(_DWORD *)(v16 + 8) )
            sub_13FA600((__int64)v20, v16);
          v3 += 12;
          ++*(_DWORD *)(v5 + 1344);
          if ( v13 == v3 )
            goto LABEL_21;
        }
        v15 = *(unsigned int *)(v5 + 1312);
        if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(v5 + 1316) )
        {
          v29 = v25;
          sub_2237220(v5 + 1304, v5 + 1320, v15 + 1, 8);
          v15 = *(unsigned int *)(v5 + 1312);
          v25 = v29;
        }
        v3 += 12;
        *(_QWORD *)(*(_QWORD *)(v5 + 1304) + 8 * v15) = v25;
        ++*(_DWORD *)(v5 + 1312);
      }
      while ( v13 != v3 );
LABEL_21:
      v21 = v31;
      LOBYTE(v3) = *(_DWORD *)(v5 + 1344) != 0;
      v22 = 12LL * (unsigned int)v32;
      v13 = &v31[v22];
      if ( v31 != &v31[v22] )
      {
        do
        {
          while ( 1 )
          {
            v13 -= 12;
            v23 = (void **)*v13;
            v24 = (void **)&(*v13)[5 * *((unsigned int *)v13 + 2)];
            if ( *v13 != (__int64 *)v24 )
            {
              do
              {
                while ( 1 )
                {
                  v24 -= 5;
                  if ( *v24 == v24 + 2 )
                    break;
                  operator delete(*v24);
                  if ( v23 == v24 )
                    goto LABEL_25;
                }
              }
              while ( v23 != v24 );
LABEL_25:
              v23 = (void **)*v13;
            }
            if ( v23 == (void **)(v13 + 2) )
              break;
            free(v23);
            if ( v21 == v13 )
              goto LABEL_28;
          }
        }
        while ( v21 != v13 );
LABEL_28:
        v13 = v31;
      }
    }
    if ( v13 != (__int64 **)(v28 + 2) )
      free(v13);
  }
  return (unsigned int)v3;
}
