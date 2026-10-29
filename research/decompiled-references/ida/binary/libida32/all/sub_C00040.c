__int64 __fastcall sub_C00040(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 v6; // rbp
  __int64 v7; // r12
  void *v8; // rdi
  __int64 v9; // rsi
  void *v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // r12
  __int64 v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  _QWORD v28[2]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v29; // [rsp+10h] [rbp-58h]
  __int64 v30; // [rsp+18h] [rbp-50h]
  _QWORD v31[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v32; // [rsp+30h] [rbp-38h]
  __int64 v33; // [rsp+38h] [rbp-30h]

  v2 = a1;
  v3 = *(unsigned int *)(a1 + 272);
  v4 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)a1 = &off_2B214A8;
  for ( i = v4 + 32 * v3; i != v4; v4 += 32 )
  {
    a1 = *(_QWORD *)(v4 + 24);
    if ( (unsigned int)sub_F41CF0(a1) )
    {
      **(_BYTE **)(v2 + 24) = 1;
      if ( *(_DWORD *)(v2 + 916) <= 2u && !*(_BYTE *)(v2 + 914) && !*(_BYTE *)(v2 + 915) )
        break;
    }
  }
  v6 = *(_QWORD *)(v2 + 864);
  *(_DWORD *)(v2 + 272) = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      a2 = *(_QWORD *)(v6 + 24);
      sub_BED410(v2 + 848, a2);
      v7 = *(_QWORD *)(v6 + 16);
      if ( *(_DWORD *)(v6 + 40) > 1u )
      {
        sub_A2BBA0((int *)(v6 + 40));
        a1 = v6;
        operator delete((void *)v6);
        if ( !v7 )
          break;
      }
      else
      {
        a1 = v6;
        operator delete((void *)v6);
        if ( !v7 )
          break;
      }
      v6 = v7;
    }
  }
  if ( *(_DWORD *)(v2 + 840) )
  {
    v29 = nullptr;
    v28[0] = sub_A2B9D0();
    v28[1] = v14;
    v30 = 0;
    v15 = sub_A2B9E0(a1, a2);
    v16 = *(_QWORD **)(v2 + 824);
    v32 = nullptr;
    v31[0] = v15;
    v17 = *(unsigned int *)(v2 + 840);
    v31[1] = v18;
    v33 = 0;
    v19 = &v16[5 * v17];
    if ( v16 != v19 )
    {
      while ( sub_A2B910(v16, v28) )
      {
        v24 = v16[3];
        if ( v24 != v30 )
          break;
        v25 = (_QWORD *)v16[2];
        v26 = &v25[v24];
        if ( v25 == v26 )
        {
LABEL_33:
          v16 += 5;
          if ( v19 == v16 )
            goto LABEL_14;
        }
        else
        {
          v27 = v29;
          if ( *v25 != *v29 )
            break;
          while ( 1 )
          {
            ++v25;
            ++v27;
            if ( v26 == v25 )
              break;
            if ( *v25 != *v27 )
              goto LABEL_26;
          }
          v16 += 5;
          if ( v19 == v16 )
            goto LABEL_14;
        }
      }
LABEL_26:
      if ( sub_A2B910(v16, v31) )
      {
        v20 = v16[3];
        if ( v20 == v33 )
        {
          v21 = (_QWORD *)v16[2];
          v22 = &v21[v20];
          if ( v21 != v22 )
          {
            v23 = v32;
            if ( *v21 == *v32 )
            {
              do
              {
                ++v21;
                ++v23;
              }
              while ( v22 != v21 && *v21 == *v23 );
            }
          }
        }
      }
      goto LABEL_33;
    }
  }
LABEL_14:
  operator delete();
  v8 = *(void **)(v2 + 264);
  if ( v8 != (void *)(v2 + 280) )
    free(v8);
  *(_QWORD *)(v2 + 56) = &off_2B21540;
  --*(_DWORD *)(*(_QWORD *)(v2 + 64) + 40LL);
  *(_QWORD *)(*(_QWORD *)(v2 + 64) + 32LL) = *(_QWORD *)(v2 + 72);
  v9 = 16LL * *(unsigned int *)(v2 + 240);
  operator delete();
  v10 = *(void **)(v2 + 192);
  if ( v10 != (void *)(v2 + 208) )
    free(v10);
  v11 = *(_QWORD *)(v2 + 144);
  if ( v11 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v11 + 24);
      sub_BFFE50(v2 + 128, v9);
      v12 = *(_QWORD *)(v11 + 16);
      if ( *(_DWORD *)(v11 + 48) > 1u )
      {
        sub_A2BBA0((int *)(v11 + 48));
        operator delete((void *)v11);
        if ( !v12 )
          return nullsub_481(v2, v9);
      }
      else
      {
        operator delete((void *)v11);
        if ( !v12 )
          return nullsub_481(v2, v9);
      }
      v11 = v12;
    }
  }
  return nullsub_481(v2, v9);
}

