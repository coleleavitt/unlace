void __fastcall sub_8FDD80(__int64 *a1)
{
  char *v1; // rbp
  _BYTE *v2; // r12
  unsigned int v4; // edi
  _BYTE *v5; // rsi
  char *v6; // r13
  __int64 v7; // rax

  v1 = (char *)a1[1];
  if ( !v1 )
    return;
  v2 = (_BYTE *)*a1;
  v4 = *(char *)*a1;
  if ( (_BYTE)v4 == 47 )
  {
    v4 = 47;
    if ( !v2[1] )
      return;
LABEL_8:
    if ( isalpha(v4) && v2[1] == 58 && v2[2] == 47 && !v2[3] )
      return;
    goto LABEL_4;
  }
  if ( v4 <= 0x7F )
    goto LABEL_8;
LABEL_4:
  if ( v1 != (_BYTE *)&dword_0 + 1 )
  {
    v5 = v2;
    if ( v1[(_QWORD)v2 - 2] == 47 )
    {
      v6 = v1 - 1;
      if ( (__int64)(v1 - 1) <= 1 )
      {
        if ( v2 )
        {
          a1[1] = 0;
          qfree(v2);
          *a1 = 0;
          a1[2] = 0;
        }
      }
      else
      {
        if ( a1[2] < (unsigned __int64)v6 )
        {
          v7 = qvector_reserve(a1, v2, v1 - 1, 1);
          *a1 = v7;
          v5 = (_BYTE *)v7;
        }
        a1[1] = (__int64)v6;
        v1[(_QWORD)v5 - 2] = 0;
      }
    }
  }
}
