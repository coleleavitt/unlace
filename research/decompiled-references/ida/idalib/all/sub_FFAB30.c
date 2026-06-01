void __fastcall sub_FFAB30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r14
  __int64 *v4; // r13
  __int64 v5; // rbx
  __int64 *v6; // rax
  _QWORD *v7; // rbx
  size_t v8; // r12
  __int64 *v9; // r15
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rax
  unsigned int v18; // r9d
  __int64 *v19; // rcx
  __int64 v20; // r15
  unsigned int v21; // eax
  __int64 v22; // r15
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 *v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r9d
  __int64 *v30; // rcx
  __int64 v31; // r15
  unsigned int v32; // eax
  unsigned int v34; // [rsp+14h] [rbp-54h]
  unsigned int v35; // [rsp+14h] [rbp-54h]
  __int64 *v36; // [rsp+18h] [rbp-50h]
  __int64 *v37; // [rsp+18h] [rbp-50h]
  __int64 *v38[8]; // [rsp+28h] [rbp-40h] BYREF

  sub_EC0F90(v38, *(__int64 **)a2, *(_DWORD *)(a2 + 8) == 0);
  v3 = v38[0];
  sub_EC0F90(v38, (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8)), 1);
  v4 = v38[0];
  if ( v3 != v38[0] )
  {
    v5 = *v3;
    if ( *(_BYTE *)(*v3 + 8) )
      goto LABEL_8;
    while ( 1 )
    {
      v5 = v3[1];
      v6 = v3 + 1;
      if ( v5 != -8 )
        goto LABEL_5;
      do
      {
        do
          v5 = *++v6;
        while ( *v6 == -8 );
LABEL_5:
        ;
      }
      while ( !v5 );
      if ( v4 == v6 )
        return;
      v3 = v6;
      if ( *(_BYTE *)(v5 + 8) )
      {
LABEL_8:
        v7 = (_QWORD *)(v5 + 16);
        v8 = *(v7 - 2);
        sub_FF7E30(v38, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
        v9 = v38[0];
        v10 = sub_2244B30(v7, v8);
        v11 = sub_2244E60(a1, v7, v8, v10);
        if ( v11 == -1 )
          sub_FF7E30(v38, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
        else
          sub_FF7E30(v38, (__int64 *)(*(_QWORD *)a1 + 8LL * v11), 1);
        if ( v38[0] != v9 )
        {
          v12 = sub_2244B30(v7, v8);
          v13 = (unsigned int)sub_2244CB0(a1, v7, v8, v12);
          v15 = (__int64 *)(*(_QWORD *)a1 + 8 * v13);
          if ( !*v15 )
            goto LABEL_17;
          if ( *v15 == -8 )
          {
            --*(_DWORD *)(a1 + 16);
LABEL_17:
            v36 = v15;
            v34 = v13;
            v17 = sub_22300B0(v8 + 33, 8, v13, v15, v14, v13);
            v18 = v34;
            v19 = v36;
            v20 = v17;
            if ( v8 )
            {
              memcpy((void *)(v17 + 32), v7, v8);
              v19 = v36;
              v18 = v34;
            }
            *(_BYTE *)(v20 + v8 + 32) = 0;
            *(_WORD *)(v20 + 24) = 0;
            *(_QWORD *)v20 = v8;
            *(_BYTE *)(v20 + 8) = 0;
            *(_DWORD *)(v20 + 12) = 100;
            *(_QWORD *)(v20 + 16) = 0;
            *v19 = v20;
            ++*(_DWORD *)(a1 + 12);
            v21 = sub_22450D0(a1, v18);
            sub_FFA5C0(v38, (__int64 *)(*(_QWORD *)a1 + 8LL * v21), 0);
            v16 = v38[0];
            goto LABEL_20;
          }
          sub_FFA5C0(v38, v15, 0);
          v16 = v38[0];
LABEL_20:
          v22 = *v16;
          if ( (unsigned int)sub_FEAA90(a3) >= *(_DWORD *)(v22 + 12) )
          {
            v23 = sub_2244B30(v7, v8);
            v24 = (unsigned int)sub_2244CB0(a1, v7, v8, v23);
            v26 = (__int64 *)(*(_QWORD *)a1 + 8 * v24);
            if ( *v26 )
            {
              if ( *v26 != -8 )
              {
                sub_FFA5C0(v38, v26, 0);
                v27 = v38[0];
                goto LABEL_24;
              }
              --*(_DWORD *)(a1 + 16);
            }
            v37 = v26;
            v35 = v24;
            v28 = sub_22300B0(v8 + 33, 8, v24, v26, v25, v24);
            v29 = v35;
            v30 = v37;
            v31 = v28;
            if ( v8 )
            {
              memcpy((void *)(v28 + 32), v7, v8);
              v30 = v37;
              v29 = v35;
            }
            *(_BYTE *)(v31 + v8 + 32) = 0;
            *(_QWORD *)v31 = v8;
            *(_BYTE *)(v31 + 8) = 0;
            *(_DWORD *)(v31 + 12) = 100;
            *(_QWORD *)(v31 + 16) = 0;
            *(_WORD *)(v31 + 24) = 0;
            *v30 = v31;
            ++*(_DWORD *)(a1 + 12);
            v32 = sub_22450D0(a1, v29);
            sub_FFA5C0(v38, (__int64 *)(*(_QWORD *)a1 + 8LL * v32), 0);
            v27 = v38[0];
LABEL_24:
            *(_BYTE *)(*v27 + 24) = 1;
          }
        }
      }
    }
  }
}
