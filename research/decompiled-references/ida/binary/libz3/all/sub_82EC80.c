_DWORD *__fastcall sub_82EC80(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax
  unsigned int v5; // r12d
  __int64 v6; // rax
  unsigned int v7; // ebp
  char v8; // r15
  __int64 v9; // rcx
  unsigned int v10; // esi
  int v11; // eax
  unsigned int v12; // r13d
  __int64 v13; // rax
  __m128 *v14; // rax
  unsigned int v15; // ebp
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rsi
  char *v19; // rdi
  int v20; // edx
  __int64 v21; // rsi
  char *v22; // rcx
  char *v23; // rax
  unsigned int v24; // r15d
  unsigned int v25; // r15d
  _QWORD *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  unsigned int v29; // esi
  void *v30; // [rsp+0h] [rbp-58h]
  __int64 *v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+10h] [rbp-48h]
  __int64 *v33; // [rsp+18h] [rbp-40h]

  result = (_DWORD *)sub_FF9E10(*(_QWORD *)(a1 + 496), *(unsigned int *)(a2 + 32));
  if ( (_DWORD)result != -1 )
  {
    v5 = (unsigned int)result;
    sub_82C970(a1, (unsigned int)result);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 328) + 4LL * v5)
      || (result = (_DWORD *)sub_8297C0(a1), (_DWORD)result == 2)
      && (result = *(_DWORD **)(a1 + 24), result[904] == result[903]) )
    {
      v31 = (__int64 *)(*(_QWORD *)(a1 + 320) + 8LL * v5);
      v6 = *v31;
      if ( *v31 )
      {
        v7 = 0;
        v8 = 1;
        v33 = (__int64 *)(a1 + 776);
        while ( 1 )
        {
          if ( v7 >= *(_DWORD *)(v6 - 4) )
            goto LABEL_16;
          v9 = *(_QWORD *)(v6 + 8LL * v7);
          if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4LL * *(unsigned int *)(v9 + 8)) )
            break;
LABEL_15:
          ++v7;
          if ( !v6 )
            goto LABEL_16;
        }
        if ( *(_BYTE *)(a2 + 36) )
        {
          v10 = 1;
          v11 = 2;
        }
        else
        {
          v10 = -1;
          v11 = -2;
        }
        if ( !*(_BYTE *)(a2 + 37) )
          v10 = v11;
        v12 = sub_82A290(a1, v10, a2, v9);
        if ( v12 == -2 )
        {
LABEL_14:
          v6 = *v31;
          goto LABEL_15;
        }
        v13 = sub_FF9A10(*(_QWORD *)(a1 + 496));
        ++*(_DWORD *)(v13 + 80);
        if ( !v8 )
        {
LABEL_13:
          v8 = 0;
          sub_82C220(a1, v5, -1);
          ++*(_DWORD *)(a1 + 428);
          v14 = (__m128 *)sub_880FA0(a1, 1, v12);
          sub_82D690(a1, v12, (const void **)(a1 + 752), v33, v14);
          goto LABEL_14;
        }
        sub_829BD0((_QWORD *)a1);
        v16 = *(_QWORD *)(a1 + 720);
        if ( v16 )
        {
          v17 = *(unsigned int *)(v16 - 4);
          if ( (_DWORD)v17 )
          {
            v32 = v16 + 40 * v17;
            do
            {
              v30 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v16 + 8);
              v18 = v16 + 24;
              v16 += 40;
              sub_182CBA0(v30, v18);
            }
            while ( v32 != v16 );
            v16 = *(_QWORD *)(a1 + 720);
          }
          *(_DWORD *)(v16 - 4) = 0;
        }
        if ( !*(_DWORD *)(a1 + 740) && !*(_DWORD *)(a1 + 744) )
        {
LABEL_46:
          sub_83C270(*(_QWORD *)(a1 + 496), a2, a1 + 560);
          goto LABEL_13;
        }
        v19 = *(char **)(a1 + 728);
        v20 = 0;
        v21 = *(unsigned int *)(a1 + 736);
        v22 = &v19[12 * v21];
        v23 = v19;
        if ( v19 == v22 )
          goto LABEL_45;
        do
        {
          while ( *((_DWORD *)v23 + 1) )
          {
            *((_DWORD *)v23 + 1) = 0;
            v23 += 12;
            if ( v22 == v23 )
              goto LABEL_34;
          }
          v23 += 12;
          ++v20;
        }
        while ( v22 != v23 );
LABEL_34:
        if ( (unsigned int)v21 <= 0x10 || 3 * (int)v21 >= (unsigned int)(4 * v20) )
        {
LABEL_45:
          *(_QWORD *)(a1 + 740) = 0;
          goto LABEL_46;
        }
        if ( v19 )
        {
          sub_186B220(v19);
          v24 = *(_DWORD *)(a1 + 736);
          *(_QWORD *)(a1 + 728) = 0;
          v25 = v24 >> 1;
          *(_DWORD *)(a1 + 736) = v25;
          v26 = (_QWORD *)sub_186B270(12LL * v25);
          v27 = (__int64)v26;
          if ( !v25 )
          {
LABEL_44:
            *(_QWORD *)(a1 + 728) = v27;
            goto LABEL_45;
          }
          if ( v25 == 1 )
          {
LABEL_43:
            *v26 = 0;
            goto LABEL_44;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 728) = 0;
          v29 = (unsigned int)v21 >> 1;
          *(_DWORD *)(a1 + 736) = v29;
          v25 = v29;
          v27 = sub_186B270(12LL * v29);
        }
        v28 = (_QWORD *)v27;
        do
        {
          *v28 = 0;
          v28 += 3;
          *(_QWORD *)((char *)v28 - 12) = 0;
        }
        while ( v28 != (_QWORD *)(v27 + 24LL * (v25 >> 1)) );
        if ( (v25 & 1) == 0 )
          goto LABEL_44;
        v26 = (_QWORD *)(v27 + 12LL * (v25 & 0x7FFFFFFE));
        goto LABEL_43;
      }
      v8 = 1;
LABEL_16:
      v15 = *(_DWORD *)(a1 + 392);
      result = (_DWORD *)sub_7E4EB0(a1);
      if ( v15 < result[86] )
      {
        result = (_DWORD *)sub_7E4EB0(a1);
        if ( result[67] == 2 )
        {
          result = *(_DWORD **)(a1 + 24);
          if ( result[903] == result[904] )
          {
            if ( v8 )
              return (_DWORD *)sub_82E540(a1, v5, a2);
          }
        }
      }
    }
  }
  return result;
}

