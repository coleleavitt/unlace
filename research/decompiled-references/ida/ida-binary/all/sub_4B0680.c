void __fastcall sub_4B0680(__int64 **a1)
{
  __int64 *v1; // rbp
  unsigned __int64 v2; // rax
  __int64 *v3; // rbp
  unsigned __int64 v4; // rax
  __int64 *v5; // rbp
  unsigned __int64 v6; // rax
  char *v7; // r15
  __int64 v8; // r12
  char *v9; // r14
  char *v10; // r13
  unsigned __int64 v11; // rdx
  char *v12; // rbp
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // dx
  char *v15; // rax
  char *v16; // rsi
  _WORD *v17; // rax
  char *v18; // r15
  __int64 v19; // r12
  char *v20; // r14
  char *v21; // r13
  unsigned __int64 v22; // rdx
  char *v23; // rbp
  unsigned __int16 v24; // cx
  unsigned __int16 v25; // dx
  char *v26; // rax
  char *v27; // rsi
  _WORD *v28; // rax
  __int64 v29; // r14
  __int64 v30; // r12
  unsigned __int16 *v31; // r15
  char *v32; // r13
  unsigned __int64 v33; // rdx
  unsigned __int16 *v34; // rbp
  unsigned __int16 v35; // cx
  unsigned __int16 v36; // dx
  unsigned __int16 *v37; // rax
  unsigned __int16 *v38; // rsi
  _WORD *v39; // rax

  v1 = a1[2];
  if ( v1 )
  {
    v2 = v1[1];
    if ( v2 > 1 )
    {
      v29 = *v1;
      v30 = 2 * v2;
      v31 = (unsigned __int16 *)(*v1 + 2 * v2);
      v32 = (char *)*v1;
      if ( v31 == (unsigned __int16 *)*v1 )
      {
LABEL_34:
        v39 = sub_4AFC60((_WORD *)v29, v32);
        v1[1] -= (v32 - (_BYTE *)memmove(v39, v32, *v1 + 2 * v1[1] - (_QWORD)v32)) >> 1;
        goto LABEL_3;
      }
      if ( v30 >> 1 )
      {
        _BitScanReverse64(&v33, v30 >> 1);
        sub_4AFCF0(*v1, v31, 2LL * (int)v33);
        if ( v30 > 32 )
        {
          v34 = (unsigned __int16 *)(v29 + 32);
          sub_4AFB80((char *)v29, (char *)(v29 + 32));
          do
          {
            v35 = *v34;
            v36 = *(v34 - 1);
            v37 = v34 - 1;
            if ( *v34 >= v36 )
            {
              v38 = v34;
            }
            else
            {
              do
              {
                v37[1] = v36;
                v38 = v37;
                v36 = *--v37;
              }
              while ( v35 < v36 );
            }
            ++v34;
            *v38 = v35;
          }
          while ( v31 != v34 );
          goto LABEL_33;
        }
      }
      else
      {
        sub_4AFCF0(*v1, v31, -2);
      }
      sub_4AFB80((char *)v29, (char *)v31);
LABEL_33:
      v1 = a1[2];
      v29 = *v1;
      v32 = (char *)(*v1 + 2 * v1[1]);
      goto LABEL_34;
    }
  }
LABEL_3:
  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3[1];
    if ( v4 > 1 )
    {
      v18 = (char *)*v3;
      v19 = 2 * v4;
      v20 = (char *)(*v3 + 2 * v4);
      v21 = v20;
      if ( (char *)*v3 == v20 )
      {
LABEL_25:
        v28 = sub_4AFC60(v20, v21);
        v3[1] -= (v21 - (_BYTE *)memmove(v28, v21, *v3 + 2 * v3[1] - (_QWORD)v21)) >> 1;
        goto LABEL_5;
      }
      if ( v19 >> 1 )
      {
        _BitScanReverse64(&v22, v19 >> 1);
        sub_4AFCF0(*v3, (unsigned __int16 *)v20, 2LL * (int)v22);
        if ( v19 > 32 )
        {
          v23 = v18 + 32;
          sub_4AFB80(v18, v18 + 32);
          do
          {
            v24 = *(_WORD *)v23;
            v25 = *((_WORD *)v23 - 1);
            v26 = v23 - 2;
            if ( *(_WORD *)v23 >= v25 )
            {
              v27 = v23;
            }
            else
            {
              do
              {
                *((_WORD *)v26 + 1) = v25;
                v27 = v26;
                v25 = *((_WORD *)v26 - 1);
                v26 -= 2;
              }
              while ( v24 < v25 );
            }
            v23 += 2;
            *(_WORD *)v27 = v24;
          }
          while ( v20 != v23 );
          goto LABEL_24;
        }
      }
      else
      {
        sub_4AFCF0(*v3, (unsigned __int16 *)v20, -2);
      }
      sub_4AFB80(v18, v20);
LABEL_24:
      v3 = a1[1];
      v20 = (char *)*v3;
      v21 = (char *)(*v3 + 2 * v3[1]);
      goto LABEL_25;
    }
  }
LABEL_5:
  v5 = *a1;
  if ( *a1 )
  {
    v6 = v5[1];
    if ( v6 > 1 )
    {
      v7 = (char *)*v5;
      v8 = 2 * v6;
      v9 = (char *)(*v5 + 2 * v6);
      v10 = v9;
      if ( (char *)*v5 == v9 )
      {
LABEL_16:
        v17 = sub_4AFC60(v9, v10);
        v5[1] -= (v10 - (_BYTE *)memmove(v17, v10, *v5 + 2 * v5[1] - (_QWORD)v10)) >> 1;
        return;
      }
      if ( v8 >> 1 )
      {
        _BitScanReverse64(&v11, v8 >> 1);
        sub_4AFCF0(*v5, (unsigned __int16 *)v9, 2LL * (int)v11);
        if ( v8 > 32 )
        {
          v12 = v7 + 32;
          sub_4AFB80(v7, v7 + 32);
          do
          {
            v13 = *(_WORD *)v12;
            v14 = *((_WORD *)v12 - 1);
            v15 = v12 - 2;
            if ( *(_WORD *)v12 >= v14 )
            {
              v16 = v12;
            }
            else
            {
              do
              {
                *((_WORD *)v15 + 1) = v14;
                v16 = v15;
                v14 = *((_WORD *)v15 - 1);
                v15 -= 2;
              }
              while ( v13 < v14 );
            }
            v12 += 2;
            *(_WORD *)v16 = v13;
          }
          while ( v9 != v12 );
          goto LABEL_15;
        }
      }
      else
      {
        sub_4AFCF0(*v5, (unsigned __int16 *)v9, -2);
      }
      sub_4AFB80(v7, v9);
LABEL_15:
      v5 = *a1;
      v9 = (char *)**a1;
      v10 = &v9[2 * (*a1)[1]];
      goto LABEL_16;
    }
  }
}
