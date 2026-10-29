__int64 __fastcall sub_1A21840(
        __int64 *a1,
        __int64 a2,
        __m128i *a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // r9
  _QWORD *v10; // r8
  unsigned int v11; // r12d
  _QWORD *v12; // r8
  int v13; // r9d
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  _QWORD *v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  unsigned __int64 v22; // [rsp+0h] [rbp-1FF8h]
  _QWORD *v23; // [rsp+8h] [rbp-1FF0h] BYREF
  _DWORD v24[2042]; // [rsp+10h] [rbp-1FE8h] BYREF

  v7 = 0;
  v10 = a4;
  v23 = a4;
  if ( a4 )
  {
    v7 = 1;
    v10 = &v23;
  }
  sub_1A19220((__int64)v24, *a1, a2, a3, (__int64)v10, v7, a6, a7, 0, 1u);
  v11 = *(unsigned __int8 *)a1[1];
  if ( v24[0] )
  {
    if ( !(_BYTE)v11 )
    {
      LODWORD(v12) = (_DWORD)v23;
      v13 = 0;
      if ( v23 )
      {
        v13 = 1;
        v12 = &v23;
      }
      v14 = sub_1A1D600((unsigned int)v24, *a1, a2, (_DWORD)a3, (_DWORD)v12, v13, 0);
      if ( v14 != 1 )
      {
        v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
        if ( a5 )
        {
          *a5 = v15;
          v11 = 1;
        }
        else
        {
          v20 = a1[3];
          v21 = *(unsigned int *)(v20 + 8);
          if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(v20 + 12) )
          {
            v22 = v15;
            sub_2237220(v20, v20 + 16, v21 + 1, 8);
            v21 = *(unsigned int *)(v20 + 8);
            v15 = v22;
          }
          v11 = 1;
          *(_QWORD *)(*(_QWORD *)v20 + 8 * v21) = v15;
          ++*(_DWORD *)(v20 + 8);
        }
      }
    }
  }
  else if ( (_BYTE)v11 )
  {
    v19 = (_DWORD *)a1[2];
    v11 = 0;
    *v19 = 0;
    v19[46] = 39;
  }
  else
  {
    v17 = v23;
    v18 = 0;
    if ( v23 )
    {
      v18 = 1;
      v17 = &v23;
    }
    sub_1A22930(v24, *a1, a2, a3, v17, v18);
  }
  sub_1A0BB10((__int64)v24);
  return v11;
}
