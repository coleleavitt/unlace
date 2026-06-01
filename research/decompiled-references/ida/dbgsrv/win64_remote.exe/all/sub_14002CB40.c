/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002CB40
// Address: 0x000000014002CB40

//----- (000000014002CB40) ----------------------------------------------------
void __fastcall sub_14002CB40(void **a1, const void *a2, size_t a3)
{
  char *v4; // rsi
  char *v7; // rdi
  char *v8; // rdx
  char *j; // rcx
  char *i; // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a3 )
  {
    v4 = (char *)a1[1];
    v7 = &v4[a3];
    if ( &v4[a3] >= v4 )
    {
      if ( &v4[a3] > v4 )
      {
        v8 = (char *)*a1;
        if ( v11 < *a1 || v11 >= (char *)a1[2] + (unsigned __int64)v8 )
        {
          if ( v7 > a1[2] )
            *a1 = sub_14005ABE0((__int64)a1, v8, (unsigned __int64)&v4[a3], 1u);
          for ( i = (char *)a1[1]; i < v7; ++i )
            *((_BYTE *)*a1 + (_QWORD)i) = 0;
        }
        else
        {
          if ( v7 > a1[2] )
            *a1 = sub_14005ABE0((__int64)a1, v8, (unsigned __int64)&v4[a3], 1u);
          for ( j = (char *)a1[1]; j < v7; ++j )
            *((_BYTE *)*a1 + (_QWORD)j) = 0;
        }
        a1[1] = v7;
      }
    }
    else
    {
      a1[1] = v7;
    }
    memcpy((char *)*a1 + (_QWORD)v4, a2, a3);
  }
}
