unsigned __int64 __fastcall sub_15BCC0(__int64 a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // r14
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  _QWORD *v9; // r13
  int v10; // edx
  __int64 v11; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD v16[2]; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v17; // [rsp+10h] [rbp-B8h]
  __int64 v18; // [rsp+20h] [rbp-A8h]
  __int128 v19; // [rsp+28h] [rbp-A0h]
  __int64 v20; // [rsp+38h] [rbp-90h]
  int v21; // [rsp+40h] [rbp-88h]
  int v22; // [rsp+50h] [rbp-78h]
  __int64 v23; // [rsp+58h] [rbp-70h]
  __int128 v24; // [rsp+60h] [rbp-68h]
  __int64 v25; // [rsp+70h] [rbp-58h]
  __int128 v26; // [rsp+78h] [rbp-50h]
  __int64 v27; // [rsp+88h] [rbp-40h]
  int v28; // [rsp+90h] [rbp-38h]
  unsigned __int64 v29; // [rsp+98h] [rbp-30h]

  v1 = *(int *)(a1 + 24);
  v29 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 8);
  if ( v1 != v2 )
  {
    v16[0] = 0;
    v16[1] = 0;
    v18 = 0;
    v20 = 0;
    v21 = 0;
    v17 = 0;
    v19 = 0;
    if ( v1 >= v2 )
    {
      v3 = *(_QWORD *)a1;
      v4 = *(_QWORD *)(a1 + 16);
      if ( (unsigned __int64)v16 < *(_QWORD *)a1 || (unsigned __int64)v16 >= v3 + 72 * v4 )
      {
        if ( v4 >= v1 || (v3 = qvector_reserve(), v2 = *(_QWORD *)(a1 + 8), *(_QWORD *)a1 = v3, v2 < v1) )
        {
          v13 = v20;
          v14 = 72 * v2;
          while ( 1 )
          {
            v15 = v14 + v3;
            ++v2;
            v14 += 72;
            *(_DWORD *)v15 = 0;
            *(_QWORD *)(v15 + 8) = 0;
            *(_QWORD *)(v15 + 32) = 0;
            *(_QWORD *)(v15 + 56) = v13;
            *(_DWORD *)(v15 + 64) = 0;
            *(_OWORD *)(v15 + 16) = 0;
            *(_OWORD *)(v15 + 40) = 0;
            if ( v1 == v2 )
              break;
            v3 = *(_QWORD *)a1;
          }
        }
      }
      else
      {
        v24 = 0;
        v22 = 0;
        v23 = 0;
        v25 = 0;
        v27 = v20;
        v28 = 0;
        v26 = 0;
        if ( v4 >= v1 || (v3 = qvector_reserve(), v2 = *(_QWORD *)(a1 + 8), *(_QWORD *)a1 = v3, v2 < v1) )
        {
          v5 = v27;
          v6 = 72 * v2;
          while ( 1 )
          {
            v7 = v6 + v3;
            ++v2;
            v6 += 72;
            *(_DWORD *)v7 = 0;
            *(_QWORD *)(v7 + 8) = 0;
            *(_QWORD *)(v7 + 32) = 0;
            *(_QWORD *)(v7 + 56) = v5;
            *(_DWORD *)(v7 + 64) = 0;
            *(_OWORD *)(v7 + 16) = 0;
            *(_OWORD *)(v7 + 40) = 0;
            if ( v1 == v2 )
              break;
            v3 = *(_QWORD *)a1;
          }
        }
      }
      *(_QWORD *)(a1 + 8) = v1;
LABEL_17:
      v10 = 0;
      v11 = 0;
      do
      {
        *(_DWORD *)(*(_QWORD *)a1 + 72 * v11) = v10++;
        v11 = v10;
      }
      while ( (unsigned __int64)v10 < *(_QWORD *)(a1 + 8) );
      return v29 - __readfsqword(0x28u);
    }
    v8 = v1;
    do
    {
      v9 = (_QWORD *)(*(_QWORD *)a1 + 72 * v8);
      if ( v9[4] )
      {
        v9[5] = 0;
        qfree();
      }
      if ( v9[1] )
      {
        v9[2] = 0;
        qfree();
      }
      ++v8;
    }
    while ( v8 < v2 );
    *(_QWORD *)(a1 + 8) = v1;
    if ( v1 )
      goto LABEL_17;
  }
  return v29 - __readfsqword(0x28u);
}

