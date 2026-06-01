__int64 __fastcall sub_36E510(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 result; // rax
  unsigned __int64 v4; // rax
  __int64 linput; // r12
  unsigned int idcv_attr; // [rsp+Ch] [rbp-5Ch]
  char v7[8]; // [rsp+10h] [rbp-58h] BYREF
  __int128 v8; // [rsp+18h] [rbp-50h]
  __int64 v9; // [rsp+28h] [rbp-40h]
  unsigned __int64 v10; // [rsp+38h] [rbp-30h]

  v2 = *(_BYTE *)a1 == 5;
  v10 = __readfsqword(0x28u);
  if ( v2 )
  {
    v7[0] = 2;
    v9 = 0;
    v8 = 0;
    idcv_attr = get_idcv_attr(v7, a1, "li", 0);
    if ( idcv_attr )
    {
      free_idcv(v7);
      return idcv_attr;
    }
    linput = v8;
    free_idcv(v7);
  }
  else
  {
    result = idcv_long();
    if ( (_DWORD)result )
      return result;
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 >= (unsigned __int64)xmmword_2CCB488 || !*(_QWORD *)(qword_2CCB480 + 8 * v4) )
    {
      *(_QWORD *)(a2 + 8) = -1;
      return 0;
    }
    linput = make_linput();
  }
  if ( !linput )
    return 0;
  *(_QWORD *)(a2 + 8) = (int)file2base(
                               linput,
                               *(_QWORD *)(a1 + 40),
                               *(_QWORD *)(a1 + 72),
                               *(_QWORD *)(a1 + 72) + *(_QWORD *)(a1 + 104),
                               0);
  if ( *(_BYTE *)a1 != 2 )
    return 0;
  unmake_linput(linput);
  return 0;
}
