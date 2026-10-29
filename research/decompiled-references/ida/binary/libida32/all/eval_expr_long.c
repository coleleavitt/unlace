__int64 __fastcall eval_expr_long(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  char v6[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v6[0] = 2;
  v8 = 0;
  v7 = 0;
  v4 = eval_expr(v6, a2, a3, a4);
  if ( (_BYTE)v4 )
  {
    idcv_long(v6, a2);
    *a1 = v7;
  }
  free_idcv(v6);
  return v4;
}

