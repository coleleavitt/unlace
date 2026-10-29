__int64 __fastcall sub_13C05F0(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4, void **a5)
{
  int v7; // r14d
  unsigned int v8; // eax
  int v9; // edx
  size_t v10; // rax
  void *v11; // r15
  size_t v12; // rcx
  char *v13; // rdx
  __int64 v14; // rdi
  size_t v15; // r14
  char *v16; // rdi
  _BYTE *v17; // rax
  _BYTE *v18; // rsi
  _QWORD *v21; // [rsp+8h] [rbp-A0h]
  _BYTE v22[16]; // [rsp+10h] [rbp-98h] BYREF
  void *src; // [rsp+20h] [rbp-88h]
  size_t n; // [rsp+28h] [rbp-80h]
  _BYTE v25[104]; // [rsp+40h] [rbp-68h] BYREF

  sub_22892D0(v22, a1, a2, 0);
  sub_2289320(v25, a1, a2);
  v7 = 0;
  *a3 = 0;
  v21 = a5 + 3;
  while ( 1 )
  {
    v8 = sub_22895C0(v22, v25);
    if ( (_BYTE)v8 )
      break;
    v10 = n;
    v11 = src;
    if ( n == 7 )
    {
      if ( *(_DWORD *)src == 1684104520 && *((_WORD *)src + 2) == 29285 && *((_BYTE *)src + 6) == 115 )
      {
        ++v7;
        goto LABEL_4;
      }
    }
    else
    {
      if ( n == 14 )
      {
        if ( *(_QWORD *)src == 0x4865746176697250LL
          && *((_DWORD *)src + 2) == 1701077349
          && *((_WORD *)src + 6) == 29554 )
        {
          ++v7;
          *a3 = 1;
          goto LABEL_4;
        }
      }
      else if ( n <= 9 )
      {
        if ( v7 <= 1 )
          goto LABEL_4;
        goto LABEL_22;
      }
      v12 = n - 10;
      v13 = (char *)src + n - 10;
      if ( *(_QWORD *)v13 == 0x6F77656D6172662ELL && *((_WORD *)v13 + 4) == 27506 )
      {
        a4[1] = 0;
        if ( v10 <= v12 )
          v12 = v10;
        v14 = 0;
        v15 = v12;
        if ( a4[2] < v12 )
        {
          sub_2236E10(a4, a4 + 3, v12, 1);
          v14 = a4[1];
        }
        if ( v15 )
        {
          memcpy((void *)(*a4 + v14), v11, v15);
          a4[1] += v15;
          a5[1] = nullptr;
          if ( (unsigned __int64)a5[2] < v15 )
          {
            sub_2236E10(a5, v21, v15, 1);
            v16 = (char *)a5[1] + (_QWORD)*a5;
          }
          else
          {
            v16 = (char *)*a5;
          }
          memcpy(v16, v11, v15);
          v15 += (size_t)a5[1];
        }
        else
        {
          a4[1] = v14;
          a5[1] = nullptr;
        }
        a5[1] = (void *)v15;
        v7 = 1;
        goto LABEL_4;
      }
    }
    if ( v7 <= 1 )
      goto LABEL_4;
LABEL_22:
    v17 = a5[1];
    if ( v17 + 1 > a5[2] )
    {
      sub_2236E10(a5, v21, v17 + 1, 1);
      v17 = a5[1];
    }
    v17[(_QWORD)*a5] = 47;
    v18 = src;
    a5[1] = (char *)a5[1] + 1;
    sub_A1FE50(a5, v18, &v18[n]);
LABEL_4:
    sub_2289340(v22);
  }
  LOBYTE(v8) = a4[1] != 0;
  LOBYTE(v9) = v7 > 1;
  return v9 & v8;
}
