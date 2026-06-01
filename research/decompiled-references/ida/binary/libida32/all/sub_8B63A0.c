unsigned __int64 __fastcall sub_8B63A0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-78h] BYREF
  __int64 v17; // [rsp+8h] [rbp-70h] BYREF
  __int128 v18; // [rsp+10h] [rbp-68h]
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h] BYREF
  __int128 v21; // [rsp+30h] [rbp-48h]
  unsigned __int64 v22; // [rsp+48h] [rbp-30h]

  v3 = a1[1];
  v22 = __readfsqword(0x28u);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( a2 < v3 )
  {
    v11 = a2;
    do
    {
      v12 = *a1 + 32 * v11;
      v13 = *(void **)(v12 + 8);
      if ( v13 )
      {
        *(_QWORD *)(v12 + 16) = 0;
        qfree(v13);
      }
      ++v11;
    }
    while ( v3 != v11 );
    a1[1] = a2;
  }
  else
  {
    if ( v3 >= a2 )
      return v22 - __readfsqword(0x28u);
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)&v16 >= v5 && (unsigned __int64)&v16 < v5 + 32 * v6 )
    {
      v19 = 0;
      v20 = 0;
      v21 = 0;
      if ( v6 >= a2 || (v15 = qvector_reserve(a1, v5, a2, 32), v3 = a1[1], *a1 = v15, v5 = v15, v3 < a2) )
      {
        v7 = 32 * v3;
        while ( 1 )
        {
          v8 = v7 + v5;
          v7 += 32;
          *(_QWORD *)v8 = 0;
          v8 += 8;
          *(_QWORD *)v8 = 0;
          *(_OWORD *)(v8 + 8) = 0;
          sub_8B2290((_QWORD *)v8, (__int64)&v20);
          if ( v7 == 32 * a2 )
            break;
          v5 = *a1;
        }
      }
      goto LABEL_10;
    }
    if ( v6 < a2 )
    {
      v14 = qvector_reserve(a1, v5, a2, 32);
      v3 = a1[1];
      *a1 = v14;
      v5 = v14;
      if ( v3 >= a2 )
      {
LABEL_10:
        a1[1] = a2;
        return v22 - __readfsqword(0x28u);
      }
    }
    v9 = 32 * v3;
    while ( 1 )
    {
      v10 = v9 + v5;
      v9 += 32;
      *(_QWORD *)v10 = 0;
      v10 += 8;
      *(_QWORD *)v10 = 0;
      *(_OWORD *)(v10 + 8) = 0;
      sub_8B2290((_QWORD *)v10, (__int64)&v17);
      if ( v9 == 32 * a2 )
        break;
      v5 = *a1;
    }
    a1[1] = a2;
  }
  return v22 - __readfsqword(0x28u);
}

