__int64 __fastcall fwritebytes(FILE *s, _DWORD *a2, signed int a3, int a4)
{
  __int64 v4; // rbx
  _DWORD *v5; // rax
  _BYTE *v6; // rdx
  char v7; // cl
  _BYTE *v9; // r9
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  _BYTE v14[40]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  v4 = a3;
  if ( (unsigned __int64)a3 <= 0x20 )
  {
    if ( a4 )
    {
      v5 = (_DWORD *)((char *)a2 + a3);
      if ( a3 )
      {
        v6 = v14;
        do
        {
          v7 = *((_BYTE *)v5 - 1);
          v5 = (_DWORD *)((char *)v5 - 1);
          *v6++ = v7;
        }
        while ( a2 != v5 );
      }
      return (unsigned int)-(v4 != qfwrite(s, v14));
    }
    if ( !a3 )
      return (unsigned int)-(v4 != qfwrite(s, v14));
    v9 = v14;
    v10 = a2;
    if ( (unsigned int)a3 >= 8 )
    {
      LODWORD(v12) = 0;
      do
      {
        v13 = (unsigned int)v12;
        v12 = (unsigned int)(v12 + 8);
        *(_QWORD *)&v14[v13] = *(_QWORD *)((char *)a2 + v13);
      }
      while ( (unsigned int)v12 < (a3 & 0xFFFFFFF8) );
      v9 = &v14[v12];
      v10 = (_DWORD *)((char *)a2 + v12);
    }
    v11 = 0;
    if ( (a3 & 4) != 0 )
    {
      *(_DWORD *)v9 = *v10;
      v11 = 4;
      if ( (a3 & 2) == 0 )
      {
LABEL_11:
        if ( (a3 & 1) != 0 )
LABEL_12:
          v9[v11] = *((_BYTE *)v10 + v11);
        return (unsigned int)-(v4 != qfwrite(s, v14));
      }
    }
    else if ( (a3 & 2) == 0 )
    {
      goto LABEL_11;
    }
    *(_WORD *)&v9[v11] = *(_WORD *)((char *)v10 + v11);
    v11 += 2;
    if ( (a3 & 1) == 0 )
      return (unsigned int)-(v4 != qfwrite(s, v14));
    goto LABEL_12;
  }
  return 0xFFFFFFFFLL;
}
