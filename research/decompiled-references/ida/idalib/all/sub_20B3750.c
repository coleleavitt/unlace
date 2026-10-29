bool __fastcall sub_20B3750(__int64 *a1, int a2)
{
  bool result; // al
  __int64 v3; // r12
  __int64 v6; // rdi
  _QWORD **v7; // r15
  _DWORD *v8; // rbx
  __int64 v9; // r15
  _DWORD *v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // r13
  int v13; // eax
  __int64 v14; // r11
  _QWORD *v15; // rsi
  _QWORD *v16; // rsi
  __int64 v17; // r11
  __int64 v18; // r14
  _QWORD *v19; // r13
  _QWORD **v20; // rbx
  _QWORD *v21; // rsi
  _QWORD *v22; // rsi
  _QWORD *v23; // rsi

  result = 0;
  v3 = *((unsigned int *)a1 + 2);
  if ( (_DWORD)v3 )
  {
    v6 = *a1;
    if ( v3 != 1 )
    {
      v7 = (_QWORD **)(v6 + 16 * v3);
      if ( (16 * v3) >> 6 )
      {
        if ( a2 == *(_DWORD *)v6 )
        {
          v8 = (_DWORD *)v6;
          goto LABEL_24;
        }
        v8 = (_DWORD *)(v6 + 16);
        if ( a2 == *(_DWORD *)(v6 + 16) )
          goto LABEL_24;
        v8 = (_DWORD *)(v6 + 32);
        if ( a2 == *(_DWORD *)(v6 + 32) )
          goto LABEL_24;
        v10 = (_DWORD *)v6;
        v8 = (_DWORD *)(v6 + 48);
        if ( a2 == *(_DWORD *)(v6 + 48) )
          goto LABEL_24;
        while ( 1 )
        {
          v8 = v10 + 16;
          if ( (_DWORD *)(v6 + ((16 * v3) >> 6 << 6)) == v10 + 16 )
            break;
          if ( a2 == v10[16] )
            goto LABEL_24;
          if ( a2 == v10[20] )
          {
            v8 = v10 + 20;
            goto LABEL_24;
          }
          if ( a2 == v10[24] )
          {
            v8 = v10 + 24;
            goto LABEL_24;
          }
          if ( a2 == v10[28] )
          {
            v8 = v10 + 28;
            goto LABEL_24;
          }
          v10 += 16;
        }
      }
      else
      {
        v8 = (_DWORD *)v6;
      }
      v11 = ((char *)v7 - (char *)v8) >> 4;
      if ( v11 != 2 )
      {
        if ( v11 != 3 )
        {
          if ( v11 != 1 )
            goto LABEL_5;
LABEL_4:
          if ( a2 != *v8 )
          {
LABEL_5:
            v9 = ((__int64)v7 - v6) >> 4;
            *((_DWORD *)a1 + 2) = v9;
            return (unsigned int)v9 != v3;
          }
LABEL_24:
          if ( v8 != (_DWORD *)v7 )
          {
            v12 = v8 + 6;
            if ( v7 == (_QWORD **)(v8 + 4) )
            {
              v17 = (__int64)v7;
              v7 = (_QWORD **)v8;
              goto LABEL_44;
            }
            do
            {
              v13 = *((_DWORD *)v12 - 2);
              if ( a2 != v13 )
              {
                v14 = (__int64)(v8 + 2);
                *v8 = v13;
                if ( v8 + 2 != (_DWORD *)v12 )
                {
                  v15 = *((_QWORD **)v8 + 1);
                  if ( v15 )
                    sub_20A0850((__int64)(v8 + 2), v15);
                  v16 = (_QWORD *)*v12;
                  *((_QWORD *)v8 + 1) = *v12;
                  if ( v16 )
                  {
                    sub_20B3430((__int64)v12, v16, v14);
                    *v12 = 0;
                  }
                }
                v8 += 4;
              }
              v12 += 2;
            }
            while ( v7 + 1 != v12 );
            v6 = *a1;
            v17 = *a1 + 16LL * *((unsigned int *)a1 + 2);
            v18 = (v17 - (__int64)v7) >> 4;
            if ( v17 - (__int64)v7 <= 0 )
            {
              v7 = (_QWORD **)v8;
            }
            else
            {
              v19 = v7 + 1;
              v20 = (_QWORD **)(v8 + 2);
              do
              {
                *((_DWORD *)v20 - 2) = *((_DWORD *)v19 - 2);
                if ( v20 != v19 )
                {
                  if ( *v20 )
                    sub_20A0850((__int64)v20, *v20);
                  v21 = (_QWORD *)*v19;
                  *v20 = (_QWORD *)*v19;
                  if ( v21 )
                  {
                    sub_20B3430((__int64)v19, v21, (__int64)v20);
                    *v19 = 0;
                  }
                }
                v7 = v20 + 1;
                v19 += 2;
                v20 += 2;
                --v18;
              }
              while ( v18 );
              v6 = *a1;
              v17 = *a1 + 16LL * *((unsigned int *)a1 + 2);
            }
            if ( v7 != (_QWORD **)v17 )
            {
              do
              {
LABEL_44:
                while ( 1 )
                {
                  v17 -= 16;
                  v22 = *(_QWORD **)(v17 + 8);
                  if ( !v22 )
                    break;
                  sub_20A0850(v17 + 8, v22);
                  if ( (_QWORD **)v17 == v7 )
                  {
                    v6 = *a1;
                    goto LABEL_5;
                  }
                }
              }
              while ( (_QWORD **)v17 != v7 );
              v6 = *a1;
            }
          }
          goto LABEL_5;
        }
        if ( a2 == *v8 )
          goto LABEL_24;
        v8 += 4;
      }
      if ( a2 == *v8 )
        goto LABEL_24;
      v8 += 4;
      goto LABEL_4;
    }
    v7 = (_QWORD **)(v6 + 16);
    v8 = (_DWORD *)v6;
    if ( *(_DWORD *)v6 != a2 )
      goto LABEL_4;
    v23 = *(_QWORD **)(v6 + 8);
    *((_DWORD *)a1 + 2) = 0;
    if ( v23 )
      sub_20A0850(v6 + 8, v23);
    return 1;
  }
  return result;
}
