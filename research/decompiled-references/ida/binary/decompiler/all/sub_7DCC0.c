__int64 __fastcall sub_7DCC0(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  int v4; // r13d
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 *v7; // rax
  __int64 *v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // rsi
  __int64 *v12; // r13
  __int64 *v13; // r12
  int *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 *v18; // rsi
  unsigned __int64 v19; // r12
  __int64 *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-58h] BYREF
  __int128 v24; // [rsp+8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v3 = sub_7C790(a2);
  if ( v3 < 0 )
    return 0;
  v4 = v3;
  v5 = v3;
  v6 = *(_QWORD *)(a1 + 80);
  v7 = *(__int64 **)(a1 + 72);
  v8 = v7;
  if ( v5 != v6 )
  {
    v23 = 0;
    v24 = 0;
    if ( v5 < v6 )
    {
      v19 = v5;
      do
      {
        v20 = &v7[3 * v19];
        if ( *v20 )
        {
          v20[1] = 0;
          qfree();
          v7 = *(__int64 **)(a1 + 72);
        }
        ++v19;
      }
      while ( v19 < v6 );
      *(_QWORD *)(a1 + 80) = v5;
      v8 = v7;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 88);
      if ( &v23 < v7 || &v23 >= &v7[3 * v9] )
      {
        if ( v9 < v5 )
        {
          v21 = qvector_reserve();
          v6 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 72) = v21;
          v8 = (__int64 *)v21;
        }
        if ( v6 < v5 )
        {
          v10 = 3 * v6;
          do
          {
            v11 = &v8[v10];
            ++v6;
            v10 += 3;
            *v11 = 0;
            *(_OWORD *)(v11 + 1) = 0;
            v8 = *(__int64 **)(a1 + 72);
          }
          while ( v5 != v6 );
        }
      }
      else
      {
        if ( v9 < v5 )
        {
          v22 = qvector_reserve();
          v6 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 72) = v22;
          v8 = (__int64 *)v22;
        }
        if ( v6 < v5 )
        {
          v17 = 3 * v6;
          do
          {
            v18 = &v8[v17];
            ++v6;
            v17 += 3;
            *v18 = 0;
            *(_OWORD *)(v18 + 1) = 0;
            v8 = *(__int64 **)(a1 + 72);
          }
          while ( v5 != v6 );
        }
      }
      *(_QWORD *)(a1 + 80) = v5;
    }
  }
  *(_DWORD *)(a1 + 144) = v4;
  v12 = v8;
  v13 = &v8[3 * v5];
  if ( v13 != v8 )
  {
    while ( (unsigned __int8)sub_7C8D0(a2, v12) )
    {
      v14 = (int *)*v12;
      v15 = *v12 + 4 * v12[1];
      if ( v15 != *v12 )
      {
        while ( *v14 >= 0 && *v14 < *(_DWORD *)(a1 + 144) )
        {
          if ( (int *)v15 == ++v14 )
            goto LABEL_19;
        }
        return 0;
      }
LABEL_19:
      v12 += 3;
      if ( v13 == v12 )
        return 1;
    }
    return 0;
  }
  return 1;
}
