void __fastcall sub_13A4820(_QWORD *a1)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  volatile signed __int32 **v4; // r12
  volatile signed __int32 **v5; // r15
  volatile signed __int32 **v6; // rdi
  volatile signed __int32 *v7; // rbp
  _QWORD *v8; // r12
  _QWORD *v9; // rbx
  volatile signed __int32 *v10; // rbp
  int v11; // eax
  volatile signed __int32 *v12; // rbp
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // rbp
  int v16; // eax

  v2 = (_QWORD *)a1[10];
  v3 = &v2[4 * *((unsigned int *)a1 + 22)];
  *a1 = &off_2BB2648;
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 4;
        v4 = (volatile signed __int32 **)v3[1];
        v5 = (volatile signed __int32 **)v3[2];
        v6 = v4;
        if ( v5 != v4 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              while ( 1 )
              {
                v7 = v4[1];
                if ( v7 )
                {
                  if ( !_InterlockedSub(v7 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
                    if ( !_InterlockedSub(v7 + 3, 1u) )
                      break;
                  }
                }
                v4 += 2;
                if ( v5 == v4 )
                  goto LABEL_10;
              }
              v4 += 2;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 24LL))(v7);
            }
            while ( v5 != v4 );
          }
          else
          {
            do
            {
              v12 = v4[1];
              if ( v12 )
              {
                v13 = *((_DWORD *)v12 + 2);
                *((_DWORD *)v12 + 2) = v13 - 1;
                if ( v13 == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
                  v11 = *((_DWORD *)v12 + 3);
                  *((_DWORD *)v12 + 3) = v11 - 1;
                  if ( v11 == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 24LL))(v12);
                }
              }
              v4 += 2;
            }
            while ( v5 != v4 );
          }
LABEL_10:
          v6 = (volatile signed __int32 **)v3[1];
        }
        if ( !v6 )
          break;
        operator delete(v6);
        if ( v2 == v3 )
        {
          v3 = (_QWORD *)a1[10];
          goto LABEL_14;
        }
      }
    }
    while ( v2 != v3 );
    v3 = (_QWORD *)a1[10];
  }
LABEL_14:
  if ( v3 != a1 + 12 )
    free(v3);
  v8 = (_QWORD *)a1[8];
  v9 = (_QWORD *)a1[7];
  if ( v8 != v9 )
  {
    if ( &_pthread_key_create )
    {
      v10 = (volatile signed __int32 *)v9[1];
      if ( v10 )
        goto LABEL_21;
LABEL_19:
      while ( 1 )
      {
        v9 += 2;
        if ( v8 == v9 )
          break;
        while ( 1 )
        {
          v10 = (volatile signed __int32 *)v9[1];
          if ( !v10 )
            break;
LABEL_21:
          if ( _InterlockedSub(v10 + 2, 1u) )
            goto LABEL_19;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
          if ( _InterlockedSub(v10 + 3, 1u) )
            goto LABEL_19;
          v9 += 2;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 24LL))(v10);
          if ( v8 == v9 )
            goto LABEL_24;
        }
      }
    }
    else
    {
      do
      {
        v15 = (_DWORD *)v9[1];
        if ( v15 )
        {
          v16 = v15[2];
          v15[2] = v16 - 1;
          if ( v16 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 16LL))(v15);
            v14 = v15[3];
            v15[3] = v14 - 1;
            if ( v14 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 24LL))(v15);
          }
        }
        v9 += 2;
      }
      while ( v8 != v9 );
    }
LABEL_24:
    v9 = (_QWORD *)a1[7];
  }
  if ( v9 )
    operator delete(v9);
  nullsub_1238(a1);
  operator delete(a1, 0x168u);
}
