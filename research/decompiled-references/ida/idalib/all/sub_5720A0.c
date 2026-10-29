void __fastcall sub_5720A0(__int64 *a1, char *a2)
{
  char v2; // bp
  char *v3; // r12
  unsigned __int64 v4; // r15
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64 *, char); // rax
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64 *, char); // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r13
  __int64 v14; // r8
  __int64 v15; // rsi
  _QWORD *v16; // r15
  __int64 v17; // rbp
  unsigned __int64 v18; // r13
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-40h]
  __int64 v24; // [rsp+8h] [rbp-40h]
  __int64 v25; // [rsp+8h] [rbp-40h]

  v2 = *a2;
  if ( *a2 )
  {
    v3 = a2;
    do
    {
      while ( 1 )
      {
        v8 = *a1;
        if ( v2 == 1 )
        {
          if ( v3[1] == 33 )
          {
            v11 = *(__int64 (__fastcall **)(__int64 *, char))(v8 + 64);
            if ( v11 != sub_571D10 )
            {
              v11(a1, 33);
              goto LABEL_23;
            }
            v12 = a1[4];
            if ( v12 )
            {
              v13 = v12 + 1;
              v14 = a1[4];
              v15 = a1[3];
              --v12;
              v16 = a1 + 3;
              if ( a1[5] >= v13 )
                goto LABEL_17;
LABEL_27:
              v25 = v14;
              v22 = qvector_reserve(v16, v15, v13, 1);
              v14 = v25;
              a1[3] = v22;
              v15 = v22;
            }
            else
            {
              v15 = a1[3];
              v14 = 1;
              v13 = 2;
              v16 = a1 + 3;
              if ( (unsigned __int64)a1[5] < 2 )
                goto LABEL_27;
            }
LABEL_17:
            a1[4] = v13;
            *(_BYTE *)(v15 + v12) = 1;
            *(_BYTE *)(a1[3] + v14) = 0;
            v17 = a1[4];
            if ( v17 )
            {
              v18 = v17 + 1;
              v19 = a1[4];
              v20 = a1[3];
              --v17;
              if ( a1[5] >= v18 )
              {
LABEL_19:
                a1[4] = v18;
                *(_BYTE *)(v20 + v17) = 33;
                *(_BYTE *)(a1[3] + v19) = 0;
                a1[6] = (a1[4] == 0) + a1[4] - 1;
LABEL_23:
                v3 += 2;
                goto LABEL_5;
              }
            }
            else
            {
              v20 = a1[3];
              v19 = 1;
              v18 = 2;
              if ( (unsigned __int64)a1[5] >= 2 )
                goto LABEL_19;
            }
            v24 = v19;
            v21 = qvector_reserve(v16, v20, v18, 1);
            v19 = v24;
            a1[3] = v21;
            v20 = v21;
            goto LABEL_19;
          }
        }
        else if ( v2 == 2 && v3[1] == 33 )
        {
          (*(void (__fastcall **)(__int64 *, __int64))(v8 + 72))(a1, 33);
          goto LABEL_23;
        }
        v9 = *(__int64 (__fastcall **)(__int64 *, char))(v8 + 96);
        ++v3;
        if ( v9 == sub_35CB90 )
          break;
        v9(a1, v2);
        v2 = *v3;
        if ( !*v3 )
          return;
      }
      v7 = a1[4];
      if ( v7 )
      {
        v4 = v7 + 1;
        v5 = a1[4];
        v6 = a1[3];
        --v7;
        if ( a1[5] < v4 )
          goto LABEL_12;
      }
      else
      {
        v6 = a1[3];
        v5 = 1;
        v4 = 2;
        if ( (unsigned __int64)a1[5] < 2 )
        {
LABEL_12:
          v23 = v5;
          v10 = qvector_reserve(a1 + 3, v6, v4, 1);
          v5 = v23;
          a1[3] = v10;
          v6 = v10;
        }
      }
      a1[4] = v4;
      *(_BYTE *)(v6 + v7) = v2;
      *(_BYTE *)(a1[3] + v5) = 0;
LABEL_5:
      v2 = *v3;
    }
    while ( *v3 );
  }
}
