/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461430
// Address: 0x0000000000461430

//----- (0000000000461430) ----------------------------------------------------
__int64 __fastcall sub_461430(_QWORD *a1, int *a2, __int64 a3, int a4)
{
  __int64 v5; // x20
  unsigned __int64 *v6; // x22
  __int64 v7; // x24
  unsigned __int64 v8; // x25
  unsigned __int64 *v9; // x1
  unsigned __int64 *v10; // x28
  __int64 v11; // x26
  unsigned __int64 *v12; // x19
  __int64 v13; // x27
  unsigned __int64 *v14; // x0
  unsigned __int64 *v15; // x1
  unsigned __int64 *v16; // x25
  _BOOL4 v17; // w0
  unsigned __int64 v18; // x4
  size_t v19; // x25
  void *v20; // x25
  size_t v21; // x27
  void *v22; // x0
  unsigned __int64 *v24; // x27
  unsigned __int64 *v25; // x19
  unsigned __int64 v26; // x0
  bool v27; // cf
  _BOOL4 v28; // w2
  unsigned __int64 *v30; // x0
  void *v31; // x0
  void *v32; // x0
  unsigned __int64 *v33; // x0
  unsigned __int64 *i; // x2
  __int64 v36; // x28
  int *v37; // x19
  void *v38; // x0
  void *v39; // x0
  const void *v40; // x26
  void *v41; // x0
  unsigned __int64 v44; // [xsp+78h] [xbp-8h]

  if ( a4 > 0 )
  {
    v5 = a3 + 8;
    v6 = a1 + 49;
    v7 = a3 + 440 + 432LL * (unsigned int)(a4 - 1);
    do
    {
      v8 = *(_QWORD *)(v5 - 8);
      v9 = (unsigned __int64 *)a1[50];
      if ( *(_QWORD *)(v5 + 8) > 1u )
      {
        v10 = a1 + 49;
        if ( !v9 )
          goto LABEL_9;
        do
        {
          while ( v8 <= v9[4] )
          {
            v10 = v9;
            v9 = (unsigned __int64 *)v9[2];
            if ( !v9 )
              goto LABEL_7;
          }
          v9 = (unsigned __int64 *)v9[3];
        }
        while ( v9 );
LABEL_7:
        if ( v6 != v10 && v8 >= v10[4] )
        {
          v12 = v10 + 5;
          v13 = (__int64)(v10 + 6);
        }
        else
        {
LABEL_9:
          v11 = (__int64)v10;
          v10 = (unsigned __int64 *)sub_49E050(0x1D8u);
          v12 = v10 + 5;
          v10[4] = v8;
          v13 = (__int64)(v10 + 6);
          memset(v10 + 5, 0, 0x1B0u);
          v14 = v10 + 18;
          v10[13] = -1;
          v10[14] = -1;
          v10[15] = -1;
          do
          {
            *(_BYTE *)v14 = 0;
            *((_BYTE *)v14 + 1) = 0;
            *((_BYTE *)v14 + 2) = 0;
            *((_BYTE *)v14 + 3) = 0;
            *((_BYTE *)v14 + 4) = 0;
            *((_BYTE *)v14 + 5) = 0;
            *((_WORD *)v14 + 3) = 0;
            v14[1] = 0;
            v14[2] = 0;
            v14 += 5;
            *(v14 - 2) = 0;
            *((_BYTE *)v14 - 8) = 0;
            *((_BYTE *)v14 - 7) = 0;
            *((_BYTE *)v14 - 6) = 0;
            *((_BYTE *)v14 - 5) = 0;
          }
          while ( v14 != v10 + 58 );
          v16 = sub_4612E8(a1 + 48, v11, v10 + 4);
          if ( v15 )
          {
            v17 = v6 == v15;
            if ( v16 )
              v17 = 1;
            if ( !v17 )
              LOBYTE(v17) = v10[4] < v15[4];
            sub_49F830(v17, (__int64)v10, v15, a1 + 49);
            ++a1[53];
          }
          else
          {
            v31 = (void *)v10[10];
            if ( v31 )
            {
              v10[11] = 0;
              j__free(v31);
            }
            v32 = *(void **)v13;
            if ( *(_QWORD *)v13 )
            {
              v10[7] = 0;
              j__free(v32);
            }
            v33 = v10;
            v12 = v16 + 5;
            v10 = v16;
            v13 = (__int64)(v16 + 6);
            j__free_0(v33);
          }
          v8 = *(_QWORD *)(v5 - 8);
        }
        *v12 = v8;
        if ( v13 != v5 )
        {
          v18 = *(_QWORD *)(v5 + 8);
          if ( v18 && (v19 = v18 - 1, v18 != 1) )
          {
            v40 = *(const void **)v5;
            v41 = *(void **)v13;
            if ( v18 > *(_QWORD *)(v13 + 16) )
            {
              v44 = *(_QWORD *)(v5 + 8);
              v41 = sub_491288(v13, *(void **)v13, v44, 1u);
              v18 = v44;
              *(_QWORD *)v13 = v41;
            }
            *(_QWORD *)(v13 + 8) = v18;
            memmove(v41, v40, v19);
            *(_BYTE *)(v10[6] + v19) = 0;
          }
          else
          {
            v10[7] = 0;
          }
        }
        v20 = nullptr;
        *((_DWORD *)v12 + 8) = *(_DWORD *)(v5 + 24);
        v21 = *(_QWORD *)(v5 + 40);
        if ( v21 )
        {
          v20 = sub_491248(*(_QWORD *)(v5 + 40));
          memcpy(v20, *(const void **)(v5 + 32), v21);
        }
        v22 = (void *)v10[10];
        if ( v22 )
        {
          v10[11] = 0;
          j__free(v22);
        }
        v10[10] = (unsigned __int64)v20;
        v10[11] = v21;
        v10[12] = v21;
        memcpy(v10 + 13, (const void *)(v5 + 56), 0x168u);
        *((_BYTE *)v12 + 424) = *(_BYTE *)(v5 + 416);
        *((_DWORD *)v12 + 107) = *(_DWORD *)(v5 + 420);
        goto LABEL_27;
      }
      v24 = a1 + 49;
      if ( v9 )
      {
        v25 = (unsigned __int64 *)a1[50];
        while ( 1 )
        {
          while ( 1 )
          {
            v26 = v25[4];
            v27 = v8 >= v26;
            if ( v8 <= v26 )
              break;
            v25 = (unsigned __int64 *)v25[3];
            if ( !v25 )
              goto LABEL_37;
          }
          v30 = (unsigned __int64 *)v25[2];
          if ( v27 )
            break;
          v24 = v25;
          v25 = (unsigned __int64 *)v25[2];
          if ( !v30 )
          {
LABEL_37:
            v28 = v6 == v24;
            goto LABEL_38;
          }
        }
        for ( i = (unsigned __int64 *)v25[3]; v30; v30 = (unsigned __int64 *)v30[3] )
        {
          while ( v8 <= v30[4] )
          {
            v25 = v30;
            v30 = (unsigned __int64 *)v30[2];
            if ( !v30 )
              goto LABEL_56;
          }
        }
LABEL_56:
        while ( i )
        {
          while ( v8 < i[4] )
          {
            v24 = i;
            i = (unsigned __int64 *)i[2];
            if ( !i )
              goto LABEL_59;
          }
          i = (unsigned __int64 *)i[3];
        }
LABEL_59:
        if ( (unsigned __int64 *)a1[51] != v25 || v6 != v24 )
        {
          if ( v25 != v24 )
          {
            do
            {
              v36 = sub_49F748(v25);
              v37 = sub_49FAC0((int *)v25, a1 + 49);
              v38 = *((void **)v37 + 10);
              if ( v38 )
              {
                *((_QWORD *)v37 + 11) = 0;
                j__free(v38);
              }
              v39 = *((void **)v37 + 6);
              if ( v39 )
              {
                *((_QWORD *)v37 + 7) = 0;
                j__free(v39);
              }
              j__free_0(v37);
              v25 = (unsigned __int64 *)v36;
              --a1[53];
            }
            while ( (unsigned __int64 *)v36 != v24 );
          }
          goto LABEL_27;
        }
      }
      else
      {
        v28 = 1;
LABEL_38:
        if ( !v28 || a1[51] != (_QWORD)v24 )
          goto LABEL_27;
      }
      sub_40D318((__int64)(a1 + 48), v9);
      a1[50] = 0;
      a1[51] = a1 + 49;
      a1[52] = a1 + 49;
      a1[53] = 0;
LABEL_27:
      v5 += 432;
    }
    while ( v5 != v7 );
  }
  if ( a2 )
    *a2 = a4;
  return 1;
}
// 46155C: variable 'v15' is possibly undefined
// 49F748: using guessed type __int64 __fastcall sub_49F748(_QWORD);
