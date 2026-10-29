_BYTE *__fastcall sub_13AC900(_QWORD *a1, char a2, unsigned __int8 *a3, size_t a4, int a5, unsigned int a6, char a7)
{
  _QWORD *v7; // r15
  _BYTE *v11; // rax
  size_t v12; // rax
  int v13; // r11d
  size_t v14; // rbx
  unsigned int v15; // eax
  int v16; // r11d
  unsigned int v17; // r15d
  size_t v18; // r12
  int v19; // eax
  _BYTE *v20; // rax
  size_t v21; // rdx
  size_t v22; // rdx
  _BYTE *result; // rax
  _BYTE *v24; // rax
  size_t v25; // rdx
  char v26; // [rsp+4h] [rbp-74h]
  unsigned int v28; // [rsp+Ch] [rbp-6Ch]
  int v29; // [rsp+1Ch] [rbp-5Ch]
  int v30; // [rsp+1Ch] [rbp-5Ch]
  size_t v31; // [rsp+20h] [rbp-58h]
  size_t v32; // [rsp+28h] [rbp-50h]
  _BYTE v33[57]; // [rsp+3Fh] [rbp-39h] BYREF

  v7 = a1;
  if ( a2 == 1 || !a7 )
  {
    v26 = 0;
    if ( a6 )
    {
LABEL_4:
      v31 = a4;
      if ( a4 )
      {
        v11 = memchr(a3, 10, a4);
        if ( v11 )
        {
          v12 = v11 - a3;
          if ( v12 > a4 )
            LODWORD(v12) = a4;
        }
        else
        {
          LODWORD(v12) = a4;
        }
        v28 = v12;
        v33[0] = 1;
        v32 = (unsigned int)v12;
        if ( (_DWORD)v12 )
        {
          v13 = a5;
          v14 = 0;
          do
          {
            do
            {
              if ( (byte_2411740[2 * a3[(unsigned int)v14]] & 7) == 0 )
                break;
              v14 = (unsigned int)(v14 + 1);
            }
            while ( v28 > (unsigned int)v14 );
            if ( v28 == (_DWORD)v14 )
              break;
            v29 = v13;
            v15 = sub_13ABCB0(v14, (__int64)a3, a4, v28, v13, a6);
            v16 = v29;
            v17 = v15;
            v18 = v15 - (unsigned int)v14;
            v19 = v18 + v29;
            if ( a6 > (int)v18 + v29 )
            {
              if ( (_DWORD)v14 )
              {
                v24 = (_BYTE *)a1[4];
                if ( (unsigned __int64)v24 >= a1[3] )
                {
                  sub_227BA10(a1, 32);
                  v16 = v29;
                }
                else
                {
                  a1[4] = v24 + 1;
                  *v24 = 32;
                }
                v19 = v18 + v16 + 1;
              }
              if ( v14 > a4 )
                v14 = a4;
              v30 = v19;
              v25 = a4 - v14;
              if ( a4 - v14 > v18 )
                v25 = v18;
              sub_13ABAA0(a1, (char *)&a3[v14], v25, v33, v26);
              v13 = v30;
            }
            else
            {
              v20 = (_BYTE *)a1[4];
              if ( (unsigned __int64)v20 >= a1[3] )
              {
                sub_227BA10(a1, 10);
              }
              else
              {
                a1[4] = v20 + 1;
                *v20 = 10;
              }
              sub_227D090(a1, 6);
              if ( v14 > a4 )
                v14 = a4;
              v21 = a4 - v14;
              if ( a4 - v14 > (unsigned int)v18 )
                v21 = (unsigned int)v18;
              sub_13ABAA0(a1, (char *)&a3[v14], v21, v33, v26);
              v13 = v18 + 6;
            }
            v14 = v17;
          }
          while ( v28 > v17 );
          v7 = a1;
        }
        v22 = 0;
        if ( v32 > a4 )
        {
LABEL_24:
          sub_13ABAA0(v7, (char *)&a3[v31], v22, v33, v26);
          if ( !a7 )
            goto LABEL_25;
LABEL_29:
          (*(void (__fastcall **)(_QWORD *))(*v7 + 32LL))(v7);
          result = (_BYTE *)v7[4];
          if ( (unsigned __int64)result < v7[3] )
            goto LABEL_26;
          return (_BYTE *)sub_227BA10(v7, 10);
        }
      }
      else
      {
        v33[0] = 1;
        v32 = 0;
      }
      v22 = a4 - v32;
      v31 = v32;
      goto LABEL_24;
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*a1 + 24LL))(a1, 16, 1, 0);
    v26 = 1;
    if ( a6 )
      goto LABEL_4;
  }
  v33[0] = 1;
  sub_13ABAA0(a1, (char *)a3, a4, v33, v26);
  if ( a7 )
    goto LABEL_29;
LABEL_25:
  result = (_BYTE *)v7[4];
  if ( (unsigned __int64)result < v7[3] )
  {
LABEL_26:
    v7[4] = result + 1;
    *result = 10;
    return result;
  }
  return (_BYTE *)sub_227BA10(v7, 10);
}
