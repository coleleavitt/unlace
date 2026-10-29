void __fastcall sub_18A1910(__int64 *a1, __int64 a2, __m128i *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  _QWORD *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // edx
  unsigned __int64 v18; // r8
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  char v24; // al
  __int64 *v25; // r14
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v32; // [rsp+10h] [rbp-158h]
  __int64 v33; // [rsp+18h] [rbp-150h] BYREF
  void *ptr; // [rsp+20h] [rbp-148h] BYREF
  __int64 v35; // [rsp+28h] [rbp-140h]
  _BYTE v36[312]; // [rsp+30h] [rbp-138h] BYREF

  v33 = a5;
  v9 = (_QWORD *)sub_168B6C0((__int64)a1);
  v10 = sub_1897000(a1, &v33, a4, 0);
  if ( v10 )
  {
    v11 = v10;
    if ( byte_26430D8[*(unsigned int *)(sub_168B6E0((__int64)a1) + 368)] )
    {
      sub_168B9F0((__int64)&ptr, a1, a4, 0xC2Eu, 0);
      sub_15F7200(&ptr);
    }
    else
    {
      ptr = v36;
      v35 = 0x2000000000LL;
      sub_A79580((__int64)v9, v11, 1, (__int64)&ptr);
      if ( (_DWORD)v35 )
      {
        v12 = 0;
        v13 = 0;
        do
        {
          while ( 1 )
          {
            v19 = 0;
            v23 = *((_QWORD *)ptr + v13);
            v24 = *(_BYTE *)(v23 + 68);
            if ( (a3[1].m128i_i8[12] & 0x7Fu) - 58 <= 3 )
              v19 = (__int64)a3;
            if ( (v24 & 1) != 0 )
            {
              v14 = *(_QWORD *)(v23 + 72);
              if ( (v24 & 0xC) != 0xC && (v24 & 0xC) != 0 )
                v14 = *(_QWORD *)(v14 + 8);
            }
            else
            {
              v14 = 0;
            }
            v15 = *(_QWORD *)(v23 + 40);
            v16 = *(_QWORD *)(v23 + 48);
            v17 = *(_DWORD *)(v23 + 24);
            v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v15 & 7) != 0 )
              v18 = 0;
            if ( v19 )
              v19 += 64;
            v20 = sub_BA9E90(v9, v19, v17, v17, v18, v16, v14);
            v21 = *(unsigned int *)(a6 + 8);
            if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
              break;
            *(_QWORD *)(*(_QWORD *)a6 + 8 * v21) = v20;
            v13 = (unsigned int)(v12 + 1);
            v12 = v13;
            v22 = *(_DWORD *)(a6 + 8) + 1;
            *(_DWORD *)(a6 + 8) = v22;
            if ( (unsigned int)v13 >= (unsigned int)v35 )
              goto LABEL_19;
          }
          v32 = v20;
          sub_2237220(a6, a6 + 16, v21 + 1, 8);
          *(_QWORD *)(*(_QWORD *)a6 + 8LL * *(unsigned int *)(a6 + 8)) = v32;
          v13 = (unsigned int)(v12 + 1);
          v12 = v13;
          v22 = *(_DWORD *)(a6 + 8) + 1;
          *(_DWORD *)(a6 + 8) = v22;
        }
        while ( (unsigned int)v35 > (unsigned int)v13 );
      }
      else
      {
        v22 = *(_DWORD *)(a6 + 8);
      }
LABEL_19:
      v25 = *(__int64 **)a6;
      if ( v22 )
      {
        do
        {
          v26 = *v25;
          if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) != 0 )
          {
            sub_17B7670(*a1, v26, a2, 1, v29, v30);
          }
          else if ( (a3[1].m128i_i8[12] & 0x7Fu) - 58 <= 3 )
          {
            sub_B94AD0(a3 + 4, v26, v27, v28, v29, v30);
          }
          ++v25;
        }
        while ( v25 != (__int64 *)(*(_QWORD *)a6 + 8LL * *(unsigned int *)(a6 + 8)) );
      }
      if ( ptr != v36 )
        free(ptr);
    }
  }
  else
  {
    sub_168B9F0((__int64)&ptr, a1, a4, 0x14E8u, 0);
    sub_17AE460((__int64)&ptr, &v33);
    sub_15F7200(&ptr);
  }
}
