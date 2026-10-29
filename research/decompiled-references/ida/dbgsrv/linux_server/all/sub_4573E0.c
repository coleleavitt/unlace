/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4573E0
// Address: 0x00000000004573E0

//----- (00000000004573E0) ----------------------------------------------------
__int64 __fastcall sub_4573E0(_BYTE *a1, char **a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // r13
  char *v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  char *v13; // rdi
  size_t v14; // rdx
  unsigned __int64 v15; // rdx
  char *v16; // rax
  char *v17; // rcx
  char *v18; // rax
  char *v19; // rax
  char v20; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-30h]

  v4 = (int)a4;
  v21 = __readfsqword(0x28u);
  a2[1] = nullptr;
  if ( (a1[800] & 0x10) != 0 )
  {
    v20 = 0;
    if ( a4 )
    {
      v10 = *a2;
      v11 = (unsigned __int64)a2[2];
      if ( &v20 < v10 || &v20 >= &v10[v11] )
      {
        v15 = 0;
        if ( v11 >= v4
          || (v18 = (char *)sub_481540((__int64)a2, v10, v4, 1u),
              v15 = (unsigned __int64)a2[1],
              *a2 = v18,
              v10 = v18,
              v15 < v4) )
        {
          while ( 1 )
          {
            v10[v15++] = v20;
            if ( v4 == v15 )
              break;
            v10 = *a2;
          }
        }
      }
      else
      {
        v12 = 0;
        if ( v11 >= v4
          || (v19 = (char *)sub_481540((__int64)a2, v10, v4, 1u),
              *a2 = v19,
              v10 = v19,
              v12 = (unsigned __int64)a2[1],
              v12 < v4) )
        {
          while ( 1 )
          {
            v10[v12++] = 0;
            if ( v4 == v12 )
              break;
            v10 = *a2;
          }
        }
      }
      a2[1] = (char *)v4;
    }
    return a4;
  }
  if ( a4 )
  {
    v13 = *a2;
    v14 = (int)a4;
    if ( (unsigned __int64)a2[2] < (int)a4 )
    {
      v16 = (char *)sub_481540((__int64)a2, *a2, (int)a4, 1u);
      v17 = a2[1];
      *a2 = v16;
      v14 = v4 - (_QWORD)v17;
      v13 = &v17[(_QWORD)v16];
    }
    memset(v13, 0, v14);
    a2[1] = (char *)v4;
  }
  if ( (*(__int64 (__fastcall **)(_BYTE *, __int64, char *, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
         a1,
         a3,
         *a2,
         v4,
         0) > 0 )
    return a4;
  return 0xFFFFFFFFLL;
}
