void __fastcall sub_6632B0(__int64 a1, int a2, __int64 a3, double a4, double a5, __m128 a6)
{
  char **exception; // rbx
  __int64 *v7; // r14
  __int64 v9; // rbp
  unsigned int v10; // r12d
  char v11; // al
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // edx
  int v15; // ecx
  __int64 v16; // r15
  unsigned __int64 v17; // r12
  __int64 v18; // rdx
  unsigned int i; // r12d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rsi
  int v26; // eax
  __int64 *v27; // rsi
  unsigned int v28; // r8d
  size_t v29; // rsi
  unsigned int v30; // r15d
  unsigned int *v31; // rax
  __int64 v32; // rsi
  _QWORD *v33; // rax
  _QWORD *v34; // rcx
  int v35; // [rsp+0h] [rbp-78h]
  int v36; // [rsp+4h] [rbp-74h]
  int v37[2]; // [rsp+8h] [rbp-70h]
  int v38; // [rsp+10h] [rbp-68h]
  int v39; // [rsp+18h] [rbp-60h]
  __int64 v40; // [rsp+20h] [rbp-58h] BYREF
  int v41; // [rsp+28h] [rbp-50h]
  int v42; // [rsp+30h] [rbp-48h]
  void *v43; // [rsp+38h] [rbp-40h]

  v7 = *(__int64 **)(a3 + 24);
  if ( v7 )
  {
    for ( *(_QWORD *)v37 = &v7[*((unsigned int *)v7 - 1)]; *(__int64 **)v37 != v7; ++v7 )
    {
      v9 = *v7;
      *(_QWORD *)(a1 + 176) = *v7;
      v10 = *(_DWORD *)(v9 + 56);
      v36 = *(_DWORD *)(v9 + 68);
      v11 = sub_62A4D0(v9);
      v14 = v36;
      if ( v11 )
      {
        v23 = *(_QWORD **)(a1 + 240);
        *(_BYTE *)(a1 + 257) = 0;
        if ( v23 )
        {
          v24 = *((_DWORD *)v23 - 1);
          if ( v24 == *((_DWORD *)v23 - 2) )
          {
            v28 = (3 * v24 + 1) >> 1;
            v29 = 8 * v28 + 8;
            v30 = v28;
            if ( 8 * v24 + 8 >= (unsigned int)v29 || v24 >= v28 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v40, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v40);
              sub_233E40((__int64)&v40);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v31 = (unsigned int *)sub_186B300(v23 - 1, v29);
            v14 = v36;
            v32 = v31[1];
            v23 = v31 + 2;
            *v31 = v30;
            *(_QWORD *)(a1 + 240) = v31 + 2;
            LODWORD(v31) = v32;
            v27 = &v23[v32];
            v26 = (_DWORD)v31 + 1;
          }
          else
          {
            v25 = v24;
            v26 = v24 + 1;
            v27 = &v23[v25];
          }
        }
        else
        {
          v33 = (_QWORD *)sub_186B270(0x18u);
          v14 = v36;
          v34 = v33;
          *v33 = 2;
          v26 = 1;
          v23 = v34 + 1;
          *(_QWORD *)(a1 + 240) = v23;
          v27 = v23;
        }
        *v27 = v9;
        *((_DWORD *)v23 - 1) = v26;
      }
      if ( v14 < v10 )
      {
        v15 = v14;
        v16 = v9 + 8LL * v14;
        v17 = v9 + 8 * (v14 + (unsigned __int64)(v10 - 1 - v14)) + 8;
        do
        {
          v18 = *(_QWORD *)(v16 + 80);
          v16 += 8;
          sub_6642E0(a1, a2, v18 & 0xFFFFFFF8, v15, v12, v13, v35, v37[0], v38, v39, v40, v41, v42, v43);
        }
        while ( v17 != v16 );
      }
      if ( *(_BYTE *)(a1 + 168) && !*(_QWORD *)(v9 + 48) )
        sub_62F900(*(_QWORD **)(a1 + 8), v9, a4, a5, a6);
      for ( i = 0; ; ++i )
      {
        v20 = *(_QWORD *)(a1 + 248);
        if ( v20 )
        {
          if ( *(_DWORD *)(v20 - 4) )
            break;
        }
        v21 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 16LL);
        if ( i >= *(_DWORD *)(v21 + 32) )
          break;
        v22 = i;
        sub_65F1B0(a1, *(_QWORD *)(v21 + 8 * v22 + 48));
      }
    }
  }
}

