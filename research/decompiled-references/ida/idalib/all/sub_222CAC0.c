unsigned __int64 __fastcall sub_222CAC0(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 v8; // rsi
  unsigned __int64 result; // rax
  __int64 v10; // rsi
  __int64 *v11; // r12
  __int64 *v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rdi
  _DWORD *v15; // rdx
  char v16; // al
  const char *v17; // rbp
  __int64 v18; // rbx
  _QWORD *v19; // rsi
  __int16 v20; // ax
  __int64 v21; // rdi
  void *v22; // rax
  unsigned __int64 v23; // rdi
  char *v24; // rsi
  const char *v25; // rbp
  unsigned int v26; // ecx
  unsigned int v27; // edx
  __int64 v28; // rsi
  const char *v29; // [rsp+0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+8h] [rbp-50h]
  void *v31[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v32; // [rsp+20h] [rbp-38h]
  int v33; // [rsp+28h] [rbp-30h]
  __int64 v34; // [rsp+38h] [rbp-20h]
  __int64 v35; // [rsp+40h] [rbp-18h]

  v4 = *a2;
  v35 = v3;
  v34 = v2;
  switch ( v4 )
  {
    case 0LL:
      sub_2229740(a1);
      v14 = *(_QWORD *)(a1 + 160);
      v15 = *(_DWORD **)(v14 + 32);
      result = *(_QWORD *)(v14 + 24) - (_QWORD)v15;
      if ( result > 3 )
      {
        *v15 = 1819047278;
        *(_QWORD *)(v14 + 32) += 4LL;
      }
      else
      {
        result = sub_227BF10(v14, "null", 4);
      }
      break;
    case 1LL:
      sub_2229740(a1);
      v16 = 0;
      if ( *a2 == 1 )
        v16 = *((_BYTE *)a2 + 8);
      v17 = "true";
      v18 = *(_QWORD *)(a1 + 160);
      if ( !v16 )
        v17 = "false";
      result = strlen(v17);
      v19 = *(_QWORD **)(v18 + 32);
      if ( result <= *(_QWORD *)(v18 + 24) - (_QWORD)v19 )
      {
        if ( (unsigned int)result >= 8 )
        {
          v23 = (unsigned __int64)(v19 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          *v19 = *(_QWORD *)v17;
          *(_QWORD *)((char *)v19 + (unsigned int)result - 8) = *(_QWORD *)&v17[(unsigned int)result - 8];
          v24 = (char *)v19 - v23;
          v25 = (const char *)(v17 - v24);
          if ( (((_DWORD)result + (_DWORD)v24) & 0xFFFFFFF8) >= 8 )
          {
            v26 = (result + (_DWORD)v24) & 0xFFFFFFF8;
            v27 = 0;
            do
            {
              v28 = v27;
              v27 += 8;
              *(_QWORD *)(v23 + v28) = *(_QWORD *)&v25[v28];
            }
            while ( v27 < v26 );
          }
        }
        else if ( (result & 4) != 0 )
        {
          *(_DWORD *)v19 = *(_DWORD *)v17;
          *(_DWORD *)((char *)v19 + (unsigned int)result - 4) = *(_DWORD *)&v17[(unsigned int)result - 4];
        }
        else if ( (_DWORD)result )
        {
          *(_BYTE *)v19 = *v17;
          if ( (result & 2) != 0 )
            *(_WORD *)((char *)v19 + (unsigned int)result - 2) = *(_WORD *)&v17[(unsigned int)result - 2];
        }
        *(_QWORD *)(v18 + 32) += result;
      }
      else
      {
        result = sub_227BF10(v18, v17, result);
      }
      break;
    case 2LL:
    case 3LL:
    case 4LL:
      sub_2229740(a1);
      v20 = *a2;
      if ( *a2 == 3 )
      {
        result = sub_227B930(*(_QWORD *)(a1 + 160), *((_QWORD *)a2 + 1));
      }
      else if ( v20 == 4 )
      {
        result = sub_227B910(*(_QWORD *)(a1 + 160), *((_QWORD *)a2 + 1));
      }
      else
      {
        v21 = *(_QWORD *)(a1 + 160);
        if ( v20 == 2 )
          v30 = *((_QWORD *)a2 + 1);
        v33 = 17;
        v32 = v30;
        v29 = "%.*g";
        *(__m128 *)v31 = _mm_loadh_ps((const double *)&v29);
        result = sub_227C560(v21, v31);
      }
      break;
    case 5LL:
    case 6LL:
      sub_2229740(a1);
      if ( *a2 == 6 )
      {
        v22 = *((void **)a2 + 2);
        v31[0] = *((void **)a2 + 1);
        v31[1] = v22;
      }
      else if ( *a2 == 5 )
      {
        *(__m128i *)v31 = _mm_loadu_si128((const __m128i *)(a2 + 4));
      }
      result = (unsigned __int64)sub_2228440(*(_QWORD *)(a1 + 160), (unsigned __int8 *)v31[0], (__int64)v31[1]);
      break;
    case 7LL:
      sub_22299F0(a1);
      v10 = (__int64)(a2 + 4);
      if ( *a2 != 7 )
        v10 = 0;
      sub_222C7D0((__int64)v31, v10);
      v11 = (__int64 *)v31[0];
      v12 = (__int64 *)v31[1];
      if ( v31[0] != v31[1] )
      {
        do
        {
          v13 = *v11++;
          sub_222AB70(a1, *(char **)(v13 + 8), *(_QWORD *)(v13 + 16));
          sub_222CAC0(a1, v13 + 24);
          --*(_DWORD *)(a1 + 8);
        }
        while ( v12 != v11 );
        v12 = (__int64 *)v31[0];
      }
      if ( v12 )
        operator delete(v12);
      result = (unsigned __int64)sub_2229B60((__int64 *)a1);
      break;
    case 8LL:
      sub_22297F0(a1);
      if ( *a2 != 8 )
        BUG();
      v6 = *((_QWORD *)a2 + 2);
      for ( i = *((_QWORD *)a2 + 1); v6 != i; i += 40 )
      {
        v8 = i;
        sub_222CAC0(a1, v8);
      }
      result = (unsigned __int64)sub_2229960((__int64 *)a1);
      break;
    default:
      result = (unsigned __int64)&unk_26F8640;
      break;
  }
  return result;
}
