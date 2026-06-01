__int64 __fastcall sub_BDA9C0(__int64 a1, __int64 *a2, __m128 a3, __m128 a4, __m128 a5)
{
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rdx
  int v16; // ebx
  unsigned int v17; // r12d
  __int64 v18; // rax
  unsigned int v19; // r13d
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rdx
  unsigned int v24; // ecx
  __int64 v25; // r12
  __int64 v26; // rax
  int v27; // ebp
  unsigned int i; // ebx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-58h]
  unsigned int v32; // [rsp+Ch] [rbp-4Ch]
  int v33[2]; // [rsp+10h] [rbp-48h]
  __int64 v34; // [rsp+18h] [rbp-40h]

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 264) + 16LL) )
    goto LABEL_2;
  v32 = sub_B30E80(a1);
  v10 = *(_QWORD *)(a1 + 32);
  if ( v10 )
  {
    v11 = *(unsigned int *)(v10 - 4);
    if ( (_DWORD)v11 )
    {
      v34 = v11;
      v12 = 0;
      while ( 1 )
      {
        v13 = *(_QWORD *)(a1 + 256);
        v14 = *(_QWORD *)(v13 + 8 * v12);
        if ( !*(_BYTE *)(v14 + 24) )
          goto LABEL_18;
        v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 448) + 8 * v12) + 32LL);
        *(_QWORD *)v33 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 8 * v12);
        if ( v15 )
        {
          v16 = 0;
          v17 = 0;
          while ( v17 < *(_DWORD *)(v15 - 4) )
          {
            v18 = *(_QWORD *)(v14 + 8);
            if ( v18 )
            {
              v19 = 0;
              v31 = *(_QWORD *)(v15 + 8LL * v17);
              do
              {
                if ( v19 >= *(_DWORD *)(v18 - 4) )
                  break;
                v20 = v19++;
                a2 = *(__int64 **)(v18 + 8 * v20);
                v16 |= sub_BD5FC0(a1, a2, v31, a3, a4, a5);
                v18 = *(_QWORD *)(v14 + 8);
              }
              while ( v18 );
              ++v17;
              v15 = *(_QWORD *)(*(_QWORD *)v33 + 32LL);
              if ( !v15 )
                break;
            }
            else
            {
              ++v17;
            }
          }
          v21 = 1;
          if ( !(_BYTE)v16 )
            v21 = v32;
          v32 = v21;
          if ( !*(_BYTE *)(v14 + 24) )
            goto LABEL_18;
          v13 = *(_QWORD *)(a1 + 256);
        }
        a2 = *(__int64 **)(a1 + 344);
        v22 = v12;
        do
        {
          v23 = v22;
          v24 = v22;
          v22 = *((_DWORD *)a2 + v22);
        }
        while ( v24 != v22 );
        v25 = *(_QWORD *)(v13 + 8 * v23);
        v26 = *(_QWORD *)(v25 + 16);
        if ( v26 )
        {
          v27 = 0;
          for ( i = 0; i < *(_DWORD *)(v26 - 4); ++i )
          {
            a2 = *(__int64 **)(v26 + 8LL * i);
            if ( !*(_BYTE *)(*(_QWORD *)(a1 + 264) + 17LL) || a2 == (__int64 *)a2[3] )
            {
              v27 |= sub_BD8400(a1, (__int64)a2, a3, a4, a5);
              v26 = *(_QWORD *)(v25 + 16);
              if ( !v26 )
                break;
            }
          }
          v29 = 1;
          if ( !(_BYTE)v27 )
            v29 = v32;
          ++v12;
          v32 = v29;
          if ( v12 == v34 )
            break;
        }
        else
        {
LABEL_18:
          if ( ++v12 == v34 )
            break;
        }
      }
    }
  }
  if ( v32 )
  {
    if ( *(_BYTE *)(a1 + 53) )
      return v32;
    v30 = *(_QWORD *)(a1 + 64);
    if ( v30 )
    {
      if ( *(_DWORD *)(a1 + 56) < *(_DWORD *)(v30 - 4) )
        return v32;
    }
    goto LABEL_6;
  }
LABEL_2:
  v6 = *(__int64 **)(a1 + 104);
  if ( !v6 )
  {
    if ( !*(_BYTE *)(a1 + 53) )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( (!v9 || *(_DWORD *)(a1 + 56) >= *(_DWORD *)(v9 - 4)) && !(unsigned __int8)sub_BD4D80(a1) )
        return 0;
    }
    return 2;
  }
  v32 = sub_B57920(v6, (unsigned int *)a2, *(double *)a3.m128_u64);
  if ( !*(_BYTE *)(a1 + 53) )
  {
    v7 = *(_QWORD *)(a1 + 64);
    if ( !v7 || *(_DWORD *)(a1 + 56) >= *(_DWORD *)(v7 - 4) )
    {
LABEL_6:
      if ( !(unsigned __int8)sub_BD4D80(a1) )
        return v32;
    }
  }
  if ( !v32 )
    return 2;
  return v32;
}

