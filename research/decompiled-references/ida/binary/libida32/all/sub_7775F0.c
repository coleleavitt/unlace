unsigned __int64 __fastcall sub_7775F0(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r12
  __int64 v14; // rdi
  char v15[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v4 = a1[1];
  v18 = __readfsqword(0x28u);
  if ( a2 < v4 )
  {
    v13 = a2;
    do
    {
      v14 = v13++;
      free_idcv(*a1 + 32 * v14);
    }
    while ( v4 != v13 );
    a1[1] = a2;
  }
  else if ( v4 < a2 )
  {
    v6 = *a1;
    v7 = a1[2];
    if ( a3 < v6 || a3 >= v6 + 32 * v7 )
    {
      if ( v7 >= a2 || (v10 = qvector_reserve(a1, v6, a2, 32), v4 = a1[1], *a1 = v10, v6 = v10, v4 < a2) )
      {
        while ( 1 )
        {
          v11 = v4++;
          v12 = 32 * v11 + v6;
          *(_BYTE *)v12 = 2;
          *(_QWORD *)(v12 + 24) = 0;
          *(_OWORD *)(v12 + 8) = 0;
          copy_idcv(v12);
          if ( v4 >= a2 )
            break;
          v6 = *a1;
        }
        a1[1] = a2;
      }
      else
      {
        a1[1] = a2;
      }
    }
    else
    {
      v15[0] = 2;
      v17 = 0;
      v16 = 0;
      copy_idcv(v15);
      if ( a1[2] < a2 )
        *a1 = qvector_reserve(a1, *a1, a2, 32);
      v8 = a1[1];
      if ( v8 < a2 )
      {
        do
        {
          v9 = *a1 + 32 * v8;
          *(_BYTE *)v9 = 2;
          *(_QWORD *)(v9 + 24) = 0;
          *(_OWORD *)(v9 + 8) = 0;
          copy_idcv(v9);
          ++v8;
        }
        while ( a2 != v8 );
      }
      a1[1] = a2;
      free_idcv(v15);
    }
  }
  return v18 - __readfsqword(0x28u);
}

