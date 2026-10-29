unsigned __int64 __fastcall sub_67B300(__int64 a1, unsigned __int64 *a2, char a3, int a4, __int64 a5)
{
  char v5; // dl
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  int v13; // eax
  unsigned __int16 v14; // ax
  int v15; // r15d
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // r14
  int v20; // ebp
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+8h] [rbp-40h]

  v5 = a3 & 3;
  v29 = __readfsqword(0x28u);
  switch ( v5 )
  {
    case 2:
      v17 = a2[1];
      if ( v17 == 1 )
      {
        v18 = *a2;
        v15 = 1;
      }
      else
      {
        v28 = 0;
        v18 = *a2;
        if ( v17 <= 1 )
        {
          v15 = 1;
          v16 = 1;
          goto LABEL_18;
        }
        a2[1] = 1;
        v15 = 1;
      }
LABEL_12:
      v19 = v18 + 8LL * v15;
      do
      {
        v18 += 8LL;
        v20 = a4 + unpack_dd(a5);
        *(_DWORD *)(v18 - 8) = v20;
        *(_DWORD *)(v18 - 4) = v20 + unpack_dd(a5);
      }
      while ( v18 != v19 );
      return v29 - __readfsqword(0x28u);
    case 3:
      v14 = unpack_dw(a5, *(_QWORD *)(a5 + 8));
      v15 = v14;
      v16 = v14;
      v17 = a2[1];
      if ( v16 == v17 )
      {
        v18 = *a2;
LABEL_11:
        if ( !v15 )
          return v29 - __readfsqword(0x28u);
        goto LABEL_12;
      }
      v28 = 0;
      v18 = *a2;
      if ( v16 < v17 )
      {
LABEL_10:
        a2[1] = v16;
        goto LABEL_11;
      }
LABEL_18:
      v21 = a2[2];
      if ( (unsigned __int64)&v28 < v18 || (unsigned __int64)&v28 >= v18 + 8 * v21 )
      {
        if ( v21 < v16 )
        {
          v26 = qvector_reserve(a2, v18, v16, 8);
          *a2 = v26;
          v18 = v26;
          v17 = a2[1];
        }
        if ( v17 < v16 )
        {
          v24 = v28;
          v25 = 8 * v17;
          do
          {
            *(_QWORD *)(v18 + v25) = v24;
            v25 += 8;
            v18 = *a2;
          }
          while ( v25 != 8 * v16 );
        }
      }
      else
      {
        if ( v21 < v16 )
        {
          v27 = qvector_reserve(a2, v18, v16, 8);
          *a2 = v27;
          v18 = v27;
          v17 = a2[1];
        }
        if ( v17 < v16 )
        {
          v22 = 8 * v17;
          do
          {
            *(_QWORD *)(v18 + v22) = 0;
            v22 += 8;
            v18 = *a2;
          }
          while ( 8 * v16 != v22 );
        }
      }
      goto LABEL_10;
    case 1:
      v10 = a2[1];
      v11 = *a2;
      if ( a2[2] < v10 + 1 )
      {
        v23 = qvector_reserve(a2, v11, v10 + 1, 8);
        *a2 = v23;
        v11 = v23;
        v10 = a2[1];
      }
      v12 = v11 + 8 * v10;
      *(_QWORD *)v12 = 0;
      ++a2[1];
      v13 = unpack_dd(a5);
      *(_DWORD *)(v12 + 4) = -1;
      *(_DWORD *)v12 = a4 + v13;
      break;
  }
  return v29 - __readfsqword(0x28u);
}

