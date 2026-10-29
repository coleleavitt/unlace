unsigned __int64 __fastcall sub_3E74C0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r13
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  char v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-68h] BYREF
  char v20; // [rsp+8h] [rbp-60h]
  __int64 v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+18h] [rbp-50h]
  __int128 v23; // [rsp+20h] [rbp-48h]
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]

  v3 = a1[1];
  v24 = __readfsqword(0x28u);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( a2 < v3 )
  {
    v14 = a2;
    do
    {
      v15 = *a1 + 48 * v14;
      v16 = *(void **)(v15 + 24);
      if ( v16 )
      {
        *(_QWORD *)(v15 + 32) = 0;
        qfree(v16);
      }
      ++v14;
    }
    while ( v3 != v14 );
    a1[1] = a2;
  }
  else
  {
    if ( v3 >= a2 )
      return v24 - __readfsqword(0x28u);
    v6 = *a1;
    v7 = a1[2];
    if ( (unsigned __int64)&v19 >= *a1 && (unsigned __int64)&v19 < v6 + 48 * v7 )
    {
      if ( v7 >= a2 || (v18 = qvector_reserve(a1, v6, a2, 48), v3 = a1[1], *a1 = v18, v6 = v18, v3 < a2) )
      {
        v8 = 48 * v3;
        while ( 1 )
        {
          v9 = v6 + v8;
          v8 += 48;
          *(_QWORD *)v9 = 0;
          *(_QWORD *)(v9 + 8) = 0;
          *(_QWORD *)(v9 + 16) = 0;
          *(_QWORD *)(v9 + 24) = 0;
          *(_OWORD *)(v9 + 32) = 0;
          if ( 48 * a2 == v8 )
            break;
          v6 = *a1;
        }
      }
      goto LABEL_10;
    }
    if ( v7 < a2 )
    {
      v17 = qvector_reserve(a1, v6, a2, 48);
      v3 = a1[1];
      *a1 = v17;
      v6 = v17;
      if ( v3 >= a2 )
      {
LABEL_10:
        a1[1] = a2;
        return v24 - __readfsqword(0x28u);
      }
    }
    v10 = v20;
    v11 = 48 * v3;
    while ( 1 )
    {
      v12 = v19;
      v13 = v6 + v11;
      v11 += 48;
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)v13 = v12;
      *(_BYTE *)(v13 + 8) = v10;
      *(_QWORD *)(v13 + 24) = 0;
      *(_OWORD *)(v13 + 32) = 0;
      if ( 48 * a2 == v11 )
        break;
      v6 = *a1;
    }
    a1[1] = a2;
  }
  return v24 - __readfsqword(0x28u);
}
