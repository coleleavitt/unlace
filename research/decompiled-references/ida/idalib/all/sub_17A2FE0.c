__int64 __fastcall sub_17A2FE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rbx
  unsigned __int8 v12; // al
  __int64 *v13; // rcx
  __int64 v14; // rdi
  __int64 *v15; // rdx
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 *v18; // rax
  __int64 *v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // rdi
  __int64 *v22; // rdx
  __int64 *v23; // rax
  __int64 *v24; // rcx
  __int64 *v25; // rax
  __int64 *v26; // rdx

  result = sub_B8BF30(a3);
  if ( result )
  {
    v6 = result;
    v7 = result + 72;
    *(_QWORD *)(a1 + 544) = v7;
    *(_QWORD *)(a2 + 360) = v7;
    result = sub_B76070(v6, a2, v4, v5);
    if ( (_DWORD)result )
    {
      v8 = 0;
      v9 = a1 + 2608;
      v10 = 8LL * (unsigned int)(result - 1) + 8;
      while ( 1 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v6 + 120) + v8);
        result = *(_QWORD *)(v11 + 40);
        if ( (result & 7) == 0 && (result & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          break;
LABEL_4:
        v8 += 8;
        if ( v10 == v8 )
          return result;
      }
      v12 = *(_BYTE *)(v11 + 28) & 0x7F;
      if ( (unsigned int)v12 - 40 > 6 || v12 == 43 )
        goto LABEL_25;
      if ( !*(_BYTE *)(a2 + 452) )
        goto LABEL_18;
      v13 = *(__int64 **)(a2 + 432);
      v14 = *(unsigned int *)(a2 + 444);
      v15 = &v13[v14];
      if ( v13 != v15 )
      {
        v16 = *(__int64 **)(a2 + 432);
        if ( v11 == *v13 )
          goto LABEL_17;
        do
        {
          if ( v15 == ++v16 )
            break;
        }
        while ( v11 != *v16 );
      }
      if ( (unsigned int)v14 < *(_DWORD *)(a2 + 440) )
      {
        *(_DWORD *)(a2 + 444) = v14 + 1;
        *v15 = v11;
        v13 = *(__int64 **)(a2 + 432);
        v16 = &v13[v14];
      }
      else
      {
LABEL_18:
        v16 = (__int64 *)sub_2236760(a2 + 432, *(_QWORD *)(*(_QWORD *)(v6 + 120) + v8));
        v13 = *(__int64 **)(a2 + 432);
        if ( !*(_BYTE *)(a2 + 452) )
        {
          v17 = &v13[*(unsigned int *)(a2 + 440)];
          goto LABEL_20;
        }
      }
LABEL_17:
      v17 = &v13[*(unsigned int *)(a2 + 444)];
LABEL_20:
      if ( v17 != v16 && (unsigned __int64)*v16 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v18 = v16 + 1;
        do
        {
          v19 = v18;
          if ( v17 == v18 )
            break;
          ++v18;
        }
        while ( (unsigned __int64)*v19 >= 0xFFFFFFFFFFFFFFFELL );
      }
LABEL_25:
      if ( !*(_BYTE *)(a2 + 100) )
        goto LABEL_35;
      v20 = *(__int64 **)(a2 + 80);
      v21 = *(unsigned int *)(a2 + 92);
      v22 = &v20[v21];
      if ( v20 != v22 )
      {
        v23 = *(__int64 **)(a2 + 80);
        if ( v11 == *v20 )
          goto LABEL_33;
        while ( v22 != ++v23 )
        {
          if ( v11 == *v23 )
            goto LABEL_33;
        }
      }
      if ( (unsigned int)v21 < *(_DWORD *)(a2 + 88) )
      {
        *(_DWORD *)(a2 + 92) = v21 + 1;
        *v22 = v11;
        v20 = *(__int64 **)(a2 + 80);
        v23 = &v20[v21];
      }
      else
      {
LABEL_35:
        v23 = (__int64 *)sub_2236760(a2 + 80, v11);
        v20 = *(__int64 **)(a2 + 80);
        if ( !*(_BYTE *)(a2 + 100) )
        {
          v24 = &v20[*(unsigned int *)(a2 + 88)];
LABEL_37:
          if ( v24 != v23 && (unsigned __int64)*v23 >= 0xFFFFFFFFFFFFFFFELL )
          {
            v25 = v23 + 1;
            do
            {
              v26 = v25;
              if ( v24 == v25 )
                break;
              ++v25;
            }
            while ( (unsigned __int64)*v26 >= 0xFFFFFFFFFFFFFFFELL );
          }
          result = sub_15C17C0(v9, v11);
          goto LABEL_4;
        }
      }
LABEL_33:
      v24 = &v20[*(unsigned int *)(a2 + 92)];
      goto LABEL_37;
    }
  }
  return result;
}
