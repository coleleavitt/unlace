void __fastcall sub_212F220(int **a1, unsigned int a2)
{
  int **v2; // r12
  int v3; // edx
  __int64 *v4; // rax
  __int64 v5; // r14
  __int64 v6; // rbx
  int v7; // eax
  int *v8; // rbp
  _BYTE *v9; // rsi
  size_t v10; // r13
  void *v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rax
  size_t v14; // rdx
  size_t v15; // r11
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rdx
  size_t v18; // rbx
  __int64 v19; // r12
  char v20; // r14
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rdx
  char v24; // [rsp+Fh] [rbp-89h]
  unsigned __int64 v25; // [rsp+18h] [rbp-80h]
  __int64 v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+28h] [rbp-70h]
  int **v28; // [rsp+38h] [rbp-60h]
  void *v29; // [rsp+40h] [rbp-58h] BYREF
  size_t v30; // [rsp+48h] [rbp-50h]
  _QWORD v31[9]; // [rsp+50h] [rbp-48h] BYREF

  v2 = a1;
  v24 = 0;
  v3 = **a1;
  if ( v3 )
  {
    v24 = *(_BYTE *)(*(_QWORD *)a1[1] + 48LL * *((_QWORD *)a1[1] + 1) - 7);
    if ( v24 )
      v24 = v3 - 1 == a2;
  }
  v4 = (__int64 *)(*(_QWORD *)a1[2] + 24LL * a2);
  v5 = v4[1];
  v6 = *v4;
  if ( v5 != *v4 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)v6;
      v8 = v2[4];
      if ( !*((_BYTE *)v2[3] + 863) )
        goto LABEL_11;
      v9 = *(_BYTE **)(v6 + 8);
      if ( *v9 == 37 )
      {
        if ( v7 == 4 )
        {
          v12 = *(_QWORD **)(v6 + 24);
          if ( *(_DWORD *)(v6 + 32) > 0x40u )
            v12 = (_QWORD *)*v12;
          sub_227B930(v2[4], v12);
          goto LABEL_7;
        }
LABEL_11:
        v10 = *(_QWORD *)(v6 + 16);
        if ( v7 != 3 || v24 )
        {
          v9 = *(_BYTE **)(v6 + 8);
          goto LABEL_14;
        }
        if ( v10 >= 2 )
        {
          v11 = *((void **)v8 + 4);
          v10 -= 2LL;
          v9 = (_BYTE *)(*(_QWORD *)(v6 + 8) + 1LL);
          if ( *((_QWORD *)v8 + 3) - (_QWORD)v11 < v10 )
            goto LABEL_15;
          if ( v10 )
          {
LABEL_20:
            memcpy(v11, v9, v10);
            *((_QWORD *)v8 + 4) += v10;
          }
        }
LABEL_7:
        v6 += 40;
        if ( v5 == v6 )
          return;
      }
      else
      {
        if ( *v9 != 60 )
          goto LABEL_11;
        if ( v7 == 3 )
        {
          v13 = sub_212C8F0(v6);
          LOBYTE(v31[0]) = 0;
          v30 = 0;
          v15 = v14;
          v16 = v31;
          v29 = v31;
          if ( v14 )
          {
            v27 = v6;
            v17 = 0;
            v18 = 0;
            v28 = v2;
            v19 = v13;
            v26 = v5;
            while ( 1 )
            {
              v20 = *(_BYTE *)(v19 + v17);
              v21 = v17 + 1;
              if ( v20 == 33 )
              {
                v20 = *(_BYTE *)(v17 + v19 + 1);
                v21 = v17 + 2;
              }
              v22 = v18 + 1;
              if ( v16 == v31 )
                v23 = 15;
              else
                v23 = v31[0];
              if ( v22 <= v23 )
              {
                *((_BYTE *)v16 + v18) = v20;
                v30 = v18 + 1;
                *((_BYTE *)v29 + v22) = 0;
                if ( v21 >= v15 )
                  goto LABEL_37;
              }
              else
              {
                v25 = v15;
                sub_998B30((__int64)&v29, v18, 0, nullptr, 1u);
                v15 = v25;
                *((_BYTE *)v29 + v18) = v20;
                v30 = v18 + 1;
                *((_BYTE *)v29 + v22) = 0;
                if ( v21 >= v25 )
                {
LABEL_37:
                  v5 = v26;
                  v6 = v27;
                  v2 = v28;
                  v14 = v30;
                  v16 = v29;
                  break;
                }
              }
              v18 = v30;
              v16 = v29;
              v17 = v21;
            }
          }
          sub_227BF10(v8, v16, v14);
          if ( v29 != v31 )
            operator delete(v29);
          goto LABEL_7;
        }
        v10 = *(_QWORD *)(v6 + 16);
LABEL_14:
        v11 = *((void **)v8 + 4);
        if ( *((_QWORD *)v8 + 3) - (_QWORD)v11 >= v10 )
        {
          if ( v10 )
            goto LABEL_20;
          goto LABEL_7;
        }
LABEL_15:
        v6 += 40;
        sub_227BF10(v2[4], v9, v10);
        if ( v5 == v6 )
          return;
      }
    }
  }
}
