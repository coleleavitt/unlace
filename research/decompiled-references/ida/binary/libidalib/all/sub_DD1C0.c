unsigned __int64 __fastcall sub_DD1C0(int *a1, __int16 *a2)
{
  __int16 v2; // ax
  __m128i *v5; // rsi
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rsi
  int dtype_size; // r12d
  const char *v10; // rsi
  _BYTE *v11; // rsi
  __int64 v12; // rbx
  size_t v13; // r13
  __int64 v14; // r8
  __int64 v15; // [rsp+0h] [rbp-D8h]
  void *src; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v17; // [rsp+18h] [rbp-C0h]
  const char *v18; // [rsp+30h] [rbp-A8h]
  __int128 v19; // [rsp+38h] [rbp-A0h]
  int v20; // [rsp+50h] [rbp-88h] BYREF
  TView *v21; // [rsp+58h] [rbp-80h]
  __int128 v22; // [rsp+60h] [rbp-78h]
  char v23; // [rsp+70h] [rbp-68h]
  __int128 v24; // [rsp+78h] [rbp-60h]
  __int64 v25; // [rsp+88h] [rbp-50h]
  unsigned __int64 v26; // [rsp+98h] [rbp-40h]

  v2 = *a2;
  v26 = __readfsqword(0x28u);
  v20 = -2;
  v21 = (TView *)-1LL;
  v22 = 0;
  if ( v2 != 1 )
  {
    if ( v2 != 256 )
    {
LABEL_3:
      TWindow::handleEvent();
      goto LABEL_4;
    }
    switch ( a2[4] )
    {
      case 5007:
        sub_D3120(a1[32], 4u);
        goto LABEL_3;
      case 5008:
        sub_D3120(a1[32], 3u);
        goto LABEL_3;
      case 5009:
        if ( !(unsigned __int8)sub_CFEA0(dword_252588, a1[32], (__int64)&v20) )
          goto LABEL_3;
        v6 = a1[32];
        src = nullptr;
        v17 = 0;
        if ( v6 < 0 || v6 >= (unsigned __int64)xmmword_2524F8 )
        {
          sub_DCE10((__int64 *)&src, (__int64)&v20, v6);
          goto LABEL_20;
        }
        v7 = qword_2524F0 + 56LL * v6;
        sub_DCE10((__int64 *)&src, (__int64)&v20, v6);
        if ( !v7 || !(unsigned __int8)sub_C72E0(v7) )
        {
LABEL_20:
          while ( (unsigned int)sub_8F810(
                                  (__int64)"Modify register\n"
                                           "\n"
                                           "Please enter the new register value\n"
                                           "\n"
                                           "<Value:q:500:40:::>\n"
                                           "\n",
                                  &src) )
          {
            v23 = 2;
            v24 = 0;
            v25 = 0;
            v18 = nullptr;
            v19 = 0;
            v8 = xmmword_2528A0;
            if ( (unsigned __int8)eval_expr() )
            {
              if ( v23 == 2 )
              {
                v21 = (TView *)v24;
LABEL_30:
                sub_D2780(dword_252588, (unsigned int)a1[32], (__int64)&v20);
                if ( v18 )
                {
                  *(_QWORD *)&v19 = 0;
                  qfree();
                }
                free_idcv();
                break;
              }
              if ( v23 == 3 )
              {
                dtype_size = get_dtype_size();
                if ( v20 >= -1 && v21 )
                {
                  *(_QWORD *)&v22 = 0;
                  qfree();
                }
                v21 = nullptr;
                v20 = -1;
                v22 = 0;
                if ( dtype_size )
                {
                  v21 = (TView *)qvector_reserve();
                  memset((char *)v21 + v22, 0, dtype_size - (_QWORD)v22);
                  *(_QWORD *)&v22 = dtype_size;
                }
                ieee2cpu();
                goto LABEL_30;
              }
              sub_92200((__int64)"ICON ERROR\nAUTOHIDE NONE\nPlease enter an integer or floating point value", v8);
            }
            else
            {
              v10 = s1;
              if ( (_QWORD)v19 )
                v10 = v18;
              sub_92200((__int64)"ICON ERROR\nAUTOHIDE NONE\nBad register value: %s", v10);
            }
            if ( v18 )
            {
              *(_QWORD *)&v19 = 0;
              qfree();
            }
            free_idcv();
          }
          if ( src )
          {
            *(_QWORD *)&v17 = 0;
            qfree();
          }
          goto LABEL_3;
        }
        v11 = src;
        if ( (_QWORD)v17 )
        {
          v12 = v17 + 2;
          v13 = v17 - 1;
          v14 = v17 + 1;
          if ( *((_QWORD *)&v17 + 1) >= (unsigned __int64)(v17 + 2) )
            goto LABEL_49;
        }
        else
        {
          if ( *((_QWORD *)&v17 + 1) > 2u )
          {
            *(_QWORD *)&v17 = 3;
            *((_BYTE *)src + 2) = 0;
LABEL_51:
            *(_WORD *)src = 30768;
            goto LABEL_20;
          }
          v13 = 0;
          v12 = 3;
          v14 = 2;
        }
        v15 = v14;
        src = (void *)qvector_reserve();
        v14 = v15;
        v11 = src;
LABEL_49:
        *(_QWORD *)&v17 = v12;
        v11[v14] = 0;
        if ( v13 )
          memmove((char *)src + 2, src, v13);
        goto LABEL_51;
      case 5010:
        sub_D3120(a1[32], 1u);
        goto LABEL_3;
      case 5011:
        sub_D3120(a1[32], 2u);
        goto LABEL_3;
      default:
        goto LABEL_3;
    }
  }
  if ( (a2[8] & 2) != 0 || *((_BYTE *)a2 + 24) != 2 )
    goto LABEL_3;
  TView::select((TView *)a1);
  v5 = sub_CC850((__int64)a1);
  if ( v5 )
    sub_144B60(a2 + 4, v5);
  TView::clearEvent(a1, a2);
LABEL_4:
  if ( v20 >= -1 && v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return v26 - __readfsqword(0x28u);
}

