__int64 __fastcall sub_FCE8E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r12d
  __int64 *v5; // rax
  _QWORD *v6; // rax
  const void *v7; // r13
  size_t v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r15d
  __int64 *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // eax
  __int64 *v21; // rbx
  __int64 v23; // [rsp+0h] [rbp-78h]
  int v24; // [rsp+14h] [rbp-64h]
  __int64 v25; // [rsp+18h] [rbp-60h]
  __int64 *v27[8]; // [rsp+38h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 256);
  v4 = *(_DWORD *)(a1 + 292);
  v23 = a1 + 280;
  v24 = (*(_QWORD *)(a1 + 264) - v3) >> 3;
  if ( v24 != v4 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD **)(v3 + 8LL * v4);
      v7 = (const void *)*v6;
      v8 = v6[1];
      v9 = sub_2220DF0(*v6, v8);
      v10 = sub_2220F70(v23, v7, v8, v9);
      v14 = v10;
      v15 = (__int64 *)(*(_QWORD *)(a1 + 280) + 8LL * v10);
      if ( *v15 )
      {
        if ( *v15 != -8 )
        {
          sub_E138D0(v27, v15, 0);
          v5 = v27[0];
          goto LABEL_4;
        }
        --*(_DWORD *)(a1 + 296);
      }
      v16 = sub_220C370(v8 + 17, 8, v10, v11, v12, v13);
      v17 = v16;
      if ( v8 )
      {
        v25 = v16;
        memcpy((void *)(v16 + 16), v7, v8);
        v17 = v25;
      }
      *(_BYTE *)(v17 + v8 + 16) = 0;
      *(_QWORD *)v17 = v8;
      *(_DWORD *)(v17 + 8) = 0;
      *v15 = v17;
      ++*(_DWORD *)(a1 + 292);
      v18 = sub_2221390(v23, v14);
      sub_E138D0(v27, (__int64 *)(*(_QWORD *)(a1 + 280) + 8LL * v18), 0);
      v5 = v27[0];
LABEL_4:
      *(_DWORD *)(*v5 + 8) = v4++;
      if ( v24 == v4 )
        break;
      v3 = *(_QWORD *)(a1 + 256);
    }
  }
  v19 = sub_2220DF0(a2, a3);
  v20 = sub_2221120(v23, a2, a3, v19);
  if ( v20 == -1 )
    sub_E138D0(v27, (__int64 *)(*(_QWORD *)(a1 + 280) + 8LL * *(unsigned int *)(a1 + 288)), 1);
  else
    sub_E138D0(v27, (__int64 *)(*(_QWORD *)(a1 + 280) + 8LL * v20), 1);
  v21 = v27[0];
  sub_E138D0(v27, (__int64 *)(*(_QWORD *)(a1 + 280) + 8LL * *(unsigned int *)(a1 + 288)), 1);
  if ( v27[0] == v21 )
    return 0;
  else
    return *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * *(unsigned int *)(*v21 + 8));
}

