__int64 __fastcall sub_8A7AA0(void *dest, _WORD *a2, _WORD *a3, _WORD *a4)
{
  unsigned int v6; // r13d
  __int16 v7; // di
  char *v8; // rdx
  char *v9; // rax
  char v10; // cl
  char v11; // si
  int v12; // eax
  int v13; // esi
  __int64 v14; // r8
  __int64 v15; // rsi
  _WORD v17[84]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v18; // [rsp+A8h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v6 = sub_8A7280(v17, a2, a3, a4);
  if ( !v6 )
  {
    v7 = word_2CD7282;
    v8 = (char *)v17;
    v9 = (char *)v17 + (__int16)(2 * word_2CD7282) - 1;
    if ( v17 < (_WORD *)v9 )
    {
      do
      {
        v10 = *v8;
        v11 = *v9;
        ++v8;
        --v9;
        *(v8 - 1) = v11;
        v9[1] = v10;
      }
      while ( v8 < v9 );
    }
    v12 = sub_8A6CE0((__int64)a4);
    v13 = 2 * v7;
    v14 = v13;
    v6 = ((v12 + 7) >> 3) - 1;
    v15 = (int)(v13 - v6);
    if ( (char *)v17 + v14 < (char *)v17 + v15 )
      return (unsigned int)-1;
    else
      memcpy(dest, (char *)v17 + v15, v14 - v15);
  }
  return v6;
}
