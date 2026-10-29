__int64 __fastcall sub_C23D80(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 v6; // rbp
  __int64 v7; // r12
  _QWORD *v8; // r12
  __int64 v9; // rsi
  void *v10; // rdi
  void *v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdx
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
  *(_QWORD *)a1 = &off_2B4B448;
  for ( i = v4 + 32 * v3; i != v4; v4 += 32 )
  {
    a1 = *(_QWORD *)(v4 + 24);
    if ( (unsigned int)sub_F65A30(a1) )
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
      sub_C11150(v2 + 848, a2);
      v7 = *(_QWORD *)(v6 + 16);
      if ( *(_DWORD *)(v6 + 40) > 1u )
      {
        sub_A4F8E0((int *)(v6 + 40));
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
  if ( !*(_DWORD *)(v2 + 840) )
  {
    v8 = *(_QWORD **)(v2 + 824);
    v9 = 0;
    goto LABEL_15;
  }
  v29 = nullptr;
  v28[0] = sub_A4F710();
  v28[1] = v15;
  v30 = 0;
  v16 = sub_A4F720(a1, a2);
  v17 = *(_QWORD **)(v2 + 824);
  v32 = nullptr;
  v31[0] = v16;
  v18 = *(unsigned int *)(v2 + 840);
  v31[1] = v19;
  v33 = 0;
  v9 = 40 * v18;
  v8 = &v17[5 * v18];
  if ( v17 != v8 )
  {
    while ( sub_A4F650(v17, v28) )
    {
      v24 = v17[3];
      if ( v24 != v30 )
        break;
      v25 = (_QWORD *)v17[2];
      v26 = &v25[v24];
      if ( v25 == v26 )
      {
LABEL_34:
        v17 += 5;
        if ( v8 == v17 )
          goto LABEL_35;
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
            goto LABEL_27;
        }
        v17 += 5;
        if ( v8 == v17 )
        {
LABEL_35:
          v8 = *(_QWORD **)(v2 + 824);
          v9 = 40LL * *(unsigned int *)(v2 + 840);
          goto LABEL_15;
        }
      }
    }
LABEL_27:
    if ( sub_A4F650(v17, v31) )
    {
      v20 = v17[3];
      if ( v20 == v33 )
      {
        v21 = (_QWORD *)v17[2];
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
    goto LABEL_34;
  }
LABEL_15:
  operator delete(v8, v9, 8);
  v10 = *(void **)(v2 + 264);
  if ( v10 != (void *)(v2 + 280) )
    free(v10);
  *(_QWORD *)(v2 + 56) = &off_2B4B4E0;
  --*(_DWORD *)(*(_QWORD *)(v2 + 64) + 40LL);
  *(_QWORD *)(*(_QWORD *)(v2 + 64) + 32LL) = *(_QWORD *)(v2 + 72);
  operator delete(*(_QWORD *)(v2 + 224), 16LL * *(unsigned int *)(v2 + 240), 8);
  v11 = *(void **)(v2 + 192);
  if ( v11 != (void *)(v2 + 208) )
    free(v11);
  v12 = *(_QWORD *)(v2 + 144);
  if ( v12 )
  {
    while ( 1 )
    {
      sub_C23B90(v2 + 128, *(_QWORD *)(v12 + 24));
      v13 = *(_QWORD *)(v12 + 16);
      if ( *(_DWORD *)(v12 + 48) > 1u )
      {
        sub_A4F8E0((int *)(v12 + 48));
        operator delete((void *)v12);
        if ( !v13 )
          return nullsub_502(v2);
      }
      else
      {
        operator delete((void *)v12);
        if ( !v13 )
          return nullsub_502(v2);
      }
      v12 = v13;
    }
  }
  return nullsub_502(v2);
}
