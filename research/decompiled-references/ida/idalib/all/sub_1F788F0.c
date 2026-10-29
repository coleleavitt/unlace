_QWORD *__fastcall sub_1F788F0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  int *v7; // rsi
  int v8; // edi
  int *v9; // rax
  char v10; // r8
  __int64 v11; // rcx
  int *v12; // rdx
  unsigned __int64 v13; // rbx
  int *v14; // rdx
  __int64 i; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int v19; // r11d
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  char v23; // r9
  __int64 v24; // r9
  __int64 v25; // rax
  char v26; // r9
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // r15
  int v31; // r11d
  int v32; // eax
  int v33; // r11d
  unsigned __int64 v34; // rdx
  int v36; // r14d
  unsigned __int64 v37; // [rsp+0h] [rbp-278h]
  unsigned __int64 v38; // [rsp+10h] [rbp-268h]
  __int64 v39; // [rsp+10h] [rbp-268h]
  unsigned __int64 v40; // [rsp+10h] [rbp-268h]
  unsigned __int64 v41; // [rsp+10h] [rbp-268h]
  __int64 v42; // [rsp+10h] [rbp-268h]
  unsigned __int64 v43; // [rsp+18h] [rbp-260h]
  __m128 v44; // [rsp+20h] [rbp-258h] BYREF
  void *ptr; // [rsp+30h] [rbp-248h] BYREF
  __int64 v46; // [rsp+38h] [rbp-240h]
  _BYTE v47[568]; // [rsp+40h] [rbp-238h] BYREF

  sub_A25970(a1[2], 0xEu, 3u);
  if ( *(_BYTE *)(*(_QWORD *)(a1[5] + 40LL) + 233LL) )
  {
    v4 = a1[7];
    if ( !v4 || (v5 = *(_DWORD *)(v4 + 36), v5 > 7) || ((1LL << v5) & 0xBC) == 0 )
    {
      v6 = *(unsigned int *)(a2 + 18408);
      v7 = *(int **)(a2 + 18392);
      v8 = *(_DWORD *)(a2 + 18400);
      ptr = v47;
      v46 = 0x4000000000LL;
      v9 = &v7[14 * v6];
      if ( v8 )
      {
        v10 = 0;
        v11 = a2 + 18392;
        v12 = &v7[14 * v6];
      }
      else
      {
        v10 = 1;
        v11 = a2 + 18392;
        v12 = &v7[14 * v6];
        v7 = v9;
      }
      sub_1F78890(&v44, v7, v12, v11, v10);
      v37 = v44.m128_u64[1];
      v13 = v44.m128_u64[0];
      v14 = (int *)(*(_QWORD *)(a2 + 18392) + 56LL * *(unsigned int *)(a2 + 18408));
      sub_1F78890(&v44, v14, v14, a2 + 18392, 1);
      v43 = v44.m128_u64[0];
      while ( v13 != v43 )
      {
        for ( i = *(_QWORD *)(v13 + 32); v13 + 16 != i; i = std::_Rb_tree_increment(i) )
        {
          v30 = *(_QWORD *)(i + 40);
          LODWORD(v46) = 0;
          v31 = *(_DWORD *)v30;
          v36 = *(_DWORD *)(v30 + 4);
          if ( *(_DWORD *)v30 )
          {
            v32 = sub_1F6E410(a1, v31 & 0x7FFFFFFF);
            v31 = v33 - v32;
          }
          v16 = sub_1F6E500((__int64)a1, v31);
          v17 = 0;
          if ( !HIDWORD(v46) )
          {
            v38 = v16;
            sub_2237220(&ptr, v47, 1, 8);
            v16 = v38;
            v17 = 8LL * (unsigned int)v46;
          }
          *(_QWORD *)((char *)ptr + v17) = v16;
          LODWORD(v46) = v46 + 1;
          if ( v36 )
            v36 -= sub_1F6E410(a1, v36 & 0x7FFFFFFF);
          v18 = sub_1F6E500((__int64)a1, v36);
          v20 = v19;
          v21 = v19 + 1LL;
          if ( v21 > HIDWORD(v46) )
          {
            v40 = v18;
            sub_2237220(&ptr, v47, v21, 8);
            v20 = (unsigned int)v46;
            v18 = v40;
          }
          *((_QWORD *)ptr + v20) = v18;
          v23 = *(_BYTE *)(v30 + 32) >> 2;
          LODWORD(v46) = v46 + 1;
          v22 = (unsigned int)v46;
          v24 = v23 & 7;
          if ( (unsigned __int64)(unsigned int)v46 + 1 > HIDWORD(v46) )
          {
            v39 = v24;
            sub_2237220(&ptr, v47, (unsigned int)v46 + 1LL, 8);
            v22 = (unsigned int)v46;
            v24 = v39;
          }
          *((_QWORD *)ptr + v22) = v24;
          v26 = *(_BYTE *)(v30 + 32) >> 6;
          LODWORD(v46) = v46 + 1;
          v25 = (unsigned int)v46;
          v27 = v26 & 1;
          if ( (unsigned __int64)(unsigned int)v46 + 1 > HIDWORD(v46) )
          {
            v42 = v27;
            sub_2237220(&ptr, v47, (unsigned int)v46 + 1LL, 8);
            v25 = (unsigned int)v46;
            v27 = v42;
          }
          *((_QWORD *)ptr + v25) = v27;
          v28 = (unsigned __int64)*(char *)(v30 + 32) >> 63;
          LODWORD(v46) = v46 + 1;
          if ( (unsigned __int64)(unsigned int)v46 + 1 > HIDWORD(v46) )
          {
            v41 = v28;
            sub_2237220(&ptr, v47, (unsigned int)v46 + 1LL, 8);
            *((_QWORD *)ptr + (unsigned int)v46) = v41;
          }
          else
          {
            *((_QWORD *)ptr + (unsigned int)v46) = v28;
          }
          v29 = a1[2];
          LODWORD(v46) = v46 + 1;
          sub_1F6EB90(v29, 0, (__int64)&ptr);
        }
        if ( v13 + 56 != v37 )
        {
          if ( (unsigned int)(*(_DWORD *)(v13 + 56) + 1) > 1 )
          {
            v13 += 56LL;
            continue;
          }
          v34 = v13 + 112;
          while ( 1 )
          {
            v13 = v34;
            if ( v34 == v37 )
              break;
            v34 += 56LL;
            if ( (unsigned int)(*(_DWORD *)v13 + 1) > 1 )
              goto LABEL_31;
          }
        }
        v13 = v37;
LABEL_31:
        ;
      }
      if ( ptr != v47 )
        free(ptr);
    }
  }
  return sub_A25550(a1[2]);
}
