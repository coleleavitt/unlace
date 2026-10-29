__int64 __fastcall sub_1F68FC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rdx
  _QWORD *v13; // r14
  int v14; // r12d
  __int64 v15; // r15
  bool v16; // zf
  unsigned __int64 v17; // rax
  int v18; // r13d
  unsigned __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // r8
  size_t v22; // rbp
  void *v23; // r11
  __int64 v24; // rax
  char *v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rbp
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  int v39; // [rsp+4h] [rbp-7Ch]
  char *v40; // [rsp+10h] [rbp-70h]
  unsigned __int64 v41; // [rsp+10h] [rbp-70h]
  void *v42; // [rsp+10h] [rbp-70h]
  char *v43; // [rsp+10h] [rbp-70h]
  unsigned __int64 v44; // [rsp+10h] [rbp-70h]
  __int64 v45; // [rsp+18h] [rbp-68h]
  __int64 v46; // [rsp+20h] [rbp-60h]
  void *src; // [rsp+28h] [rbp-58h] BYREF
  size_t n; // [rsp+30h] [rbp-50h]
  __int64 v49; // [rsp+38h] [rbp-48h] BYREF

  v2 = a1 + 32;
  v3 = a1;
  v4 = a1 + 152;
  *(_QWORD *)(v4 - 136) = v2;
  *(_WORD *)(v4 - 24) = 0;
  *(_OWORD *)(v4 - 152) = 0;
  *(_QWORD *)(v4 - 128) = 0x400000000LL;
  *(_QWORD *)(v3 + 144) = 0x400000000LL;
  v5 = *(unsigned int *)(a2 + 24);
  *(_QWORD *)(v3 + 136) = v4;
  v45 = v4;
  *(_DWORD *)(a2 + 24) = v5 + 1;
  *(_BYTE *)(v3 + 128) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v5) != 0;
  v6 = *(unsigned int *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = v6 + 1;
  *(_BYTE *)(v3 + 129) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v6) != 0;
  if ( !*(_BYTE *)(v3 + 128) )
  {
    v7 = *(unsigned int *)(a2 + 24);
    v8 = *(_QWORD *)(a2 + 32);
    v10 = *(_QWORD *)(a2 + 8);
    v11 = v7 + 1;
    v12 = *(_QWORD *)(v8 + 8 * v7);
    v13 = *(_QWORD **)(v10 + 144);
    *(_DWORD *)(a2 + 24) = v11;
    v39 = v12;
    if ( (_DWORD)v12 )
    {
      v14 = 0;
      v15 = v3;
      v46 = v3 + 136;
      while ( 1 )
      {
        v32 = v11 + 1;
        v20 = *(_QWORD *)(a2 + 16);
        v16 = *(_QWORD *)(v8 + 8LL * v11) == 0;
        *(_DWORD *)(a2 + 24) = v32;
        if ( !v16 )
          break;
        v33 = sub_1F68F80(v10, v20);
        v34 = *(unsigned int *)(v15 + 144);
        v35 = *(unsigned int *)(v15 + 148);
        if ( v34 >= v35 )
        {
          v38 = v33 & 0xFFFFFFFFFFFFFFFDLL;
          if ( v35 < v34 + 1 )
          {
            v44 = v38;
            sub_2237220(v46, v45, v34 + 1, 8);
            v34 = *(unsigned int *)(v15 + 144);
            v38 = v44;
          }
          *(_QWORD *)(*(_QWORD *)(v15 + 136) + 8 * v34) = v38;
          ++*(_DWORD *)(v15 + 144);
          goto LABEL_22;
        }
        ++v14;
        *(_QWORD *)(*(_QWORD *)(v15 + 136) + 8 * v34) = v33 & 0xFFFFFFFFFFFFFFFDLL;
        ++*(_DWORD *)(v15 + 144);
        if ( v39 == v14 )
          return v15;
LABEL_23:
        v10 = *(_QWORD *)(a2 + 8);
        v11 = *(_DWORD *)(a2 + 24);
        v8 = *(_QWORD *)(a2 + 32);
      }
      v16 = *(_QWORD *)(v20 + 856) == 0;
      *(_DWORD *)(a2 + 24) = v11 + 2;
      v17 = *(_QWORD *)(v8 + 8 * v32);
      if ( !v16 )
      {
        v41 = *(_QWORD *)(v8 + 8 * v32);
        sub_1EDF870(v10, v20);
        v17 = v41;
      }
      v18 = __ROR4__(v17, 1);
      v19 = HIDWORD(v17);
      if ( v19 )
        v20 = *(_QWORD *)(*(_QWORD *)(v20 + 3320) + 8LL * (unsigned int)(v19 - 1));
      if ( v18 )
        v18 = v18 + *(_DWORD *)(v20 + 1648) - 2;
      sub_1EAC540((__m128i **)&src, (__int64 *)(a2 + 32), (_DWORD *)(a2 + 24));
      v22 = n;
      v23 = src;
      v24 = v13[294];
      v13[304] += n;
      v25 = (char *)((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v13[295] >= (unsigned __int64)&v25[v22] && v24 )
      {
        v13[294] = &v25[v22];
      }
      else
      {
        v42 = v23;
        v37 = sub_986170((__int64)(v13 + 294), v22, v22, 3, v21, (__int64)v25);
        v23 = v42;
        v25 = (char *)v37;
      }
      if ( v22 )
        v25 = (char *)memmove(v25, v23, v22);
      if ( src != &v49 )
      {
        v40 = v25;
        operator delete(src);
        v25 = v40;
      }
      v26 = v13[294];
      v13[304] += 24LL;
      v27 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v13[295] >= v27 + 24 && v26 )
      {
        v13[294] = v27 + 24;
        v28 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v43 = v25;
        v28 = sub_986170((__int64)(v13 + 294), 24, 24, 3, v21, (__int64)v25);
        v25 = v43;
        v27 = v28 & 0xFFFFFFFFFFFFFFFDLL;
      }
      *(_QWORD *)(v28 + 16) = v22;
      *(_DWORD *)v28 = v18;
      v29 = v27 | 2;
      *(_QWORD *)(v28 + 8) = v25;
      v30 = *(unsigned int *)(v15 + 144);
      v31 = *(unsigned int *)(v15 + 148);
      if ( v30 >= v31 && v31 < v30 + 1 )
      {
        sub_2237220(v46, v45, v30 + 1, 8);
        v30 = *(unsigned int *)(v15 + 144);
      }
      *(_QWORD *)(*(_QWORD *)(v15 + 136) + 8 * v30) = v29;
      ++*(_DWORD *)(v15 + 144);
LABEL_22:
      if ( v39 == ++v14 )
        return v15;
      goto LABEL_23;
    }
  }
  return v3;
}
