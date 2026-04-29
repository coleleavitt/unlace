__int64 __fastcall sub_131740(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r12
  __int64 v8; // rbx
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 *v16; // r12
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // rbx

  v3 = *(__int64 **)(a1 + 1336);
  if ( !v3 )
    return 0;
  if ( a3 == 9 )
    a3 = *(_DWORD *)(a1 + 312);
  if ( (int)a3 >= (unsigned __int64)v3[1] )
    return 0;
  v5 = *v3;
  v6 = 3LL * a3;
  v7 = (_QWORD *)(v5 + 8 * v6);
  if ( !v7 )
    return 0;
  v8 = sub_1315F0((__int64 *)(v5 + 8 * v6), a2);
  if ( v8 == *v7 + 112LL * v7[1] )
    return 0;
  sub_1166E0(v8 + 88);
  sub_1166E0(v8 + 72);
  sub_1166E0(v8 + 56);
  memmove((void *)v8, (const void *)(v8 + 112), *v7 + 112LL * v7[1] - v8 - 112);
  if ( v7[1]-- == 1 )
  {
    while ( 1 )
    {
      v11 = *(__int64 **)(a1 + 1336);
      v12 = v11[1];
      if ( !v12 )
        break;
      v13 = *v11;
      v14 = *(_QWORD *)(*v11 + 24 * v12 - 16);
      if ( v14 )
        break;
      v15 = v12 - 1;
      v11[1] = v15;
      v16 = (__int64 *)(v13 + 24 * v15);
      v17 = *v16;
      if ( *v16 )
      {
        v18 = v16[1];
        if ( v18 )
        {
          v19 = 0;
          do
          {
            v20 = v17 + v19;
            ++v14;
            v19 += 112;
            sub_1166E0(v20 + 88);
            sub_1166E0(v20 + 72);
            sub_1166E0(v20 + 56);
            v17 = *v16;
          }
          while ( v18 != v14 );
        }
        v16[1] = 0;
        qfree(v17);
      }
    }
  }
  return 1;
}
