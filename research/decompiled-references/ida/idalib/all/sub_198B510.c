unsigned __int64 __fastcall sub_198B510(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int16 v7; // dx
  _QWORD *v8; // r8
  char v9; // al
  bool v10; // si
  unsigned __int16 **v11; // rbx
  unsigned __int16 **v12; // r13
  __int64 *v13; // rbp
  _QWORD *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  unsigned __int16 *v23; // r15
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  char *v26; // rbx
  unsigned __int64 v27; // rbp
  __int64 v28; // r13
  _BYTE *v29; // rsi
  int v30; // ecx
  unsigned int v31; // r11d
  __int64 v32; // rdi
  unsigned __int64 v33; // [rsp+18h] [rbp-B0h]
  _QWORD *v34; // [rsp+18h] [rbp-B0h]
  _QWORD *v35; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v36; // [rsp+28h] [rbp-A0h]
  void *v37; // [rsp+30h] [rbp-98h] BYREF
  __int64 v38; // [rsp+38h] [rbp-90h]
  _BYTE v39[32]; // [rsp+40h] [rbp-88h] BYREF
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __int64 v41; // [rsp+68h] [rbp-60h]
  _BYTE v42[88]; // [rsp+70h] [rbp-58h] BYREF

  if ( (*(_BYTE *)(a2 + 19) & 0x40) != 0 )
  {
    v5 = 1;
    v36 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 32), *(double *)a3.m128_u64, a4);
    if ( v36 == 1 )
      return v5;
    v35 = nullptr;
  }
  else
  {
    v36 = 0;
    v35 = sub_1988430(a1, *(_QWORD *)(a2 + 8LL * (*(_WORD *)(a2 + 16) & 0x7FFF) + 32), a3, a4);
  }
  v7 = *(_WORD *)(a2 + 16);
  v8 = v39;
  v38 = 0x400000000LL;
  v41 = 0x400000000LL;
  v9 = *(_BYTE *)(a2 + 19);
  v37 = v39;
  ptr = v42;
  v10 = (v9 & 0x40) != 0;
  v11 = (unsigned __int16 **)(a2 + 8LL * v10 + 32);
  v7 &= ~0x8000u;
  v12 = &v11[v7];
  v13 = (__int64 *)(a2 + 8LL * (unsigned __int16)(v7 + v10) + 8LL * ((v9 & 0x40) == 0) + 32);
  if ( v11 == v12 )
  {
    v28 = 0;
    v27 = 0;
    v26 = v42;
  }
  else
  {
    do
    {
      v23 = *v11;
      if ( *v13 )
      {
        v14 = sub_1988430(a1, *v13, a3, a4);
        if ( !v14 )
          goto LABEL_20;
        v15 = (unsigned int)v41;
        v16 = (unsigned int)v41 + 1LL;
        if ( v16 > HIDWORD(v41) )
        {
          v34 = v14;
          sub_2237220(&ptr, v42, v16, 8);
          v15 = (unsigned int)v41;
          v14 = v34;
        }
        *((_QWORD *)ptr + v15) = v14;
        LODWORD(v41) = v41 + 1;
      }
      else
      {
        v24 = (unsigned int)v41;
        v25 = (unsigned int)v41 + 1LL;
        if ( v25 > HIDWORD(v41) )
        {
          sub_2237220(&ptr, v42, v25, 8);
          v24 = (unsigned int)v41;
        }
        *((_QWORD *)ptr + v24) = 0;
        LODWORD(v41) = v41 + 1;
      }
      v17 = sub_190CCA0(a1, v23, *(double *)a3.m128_u64, a4);
      if ( v17 == 1 )
      {
LABEL_20:
        v5 = 1;
        goto LABEL_21;
      }
      v18 = (unsigned int)v38;
      v19 = v17 & 0xFFFFFFFFFFFFFFFELL;
      v20 = (unsigned int)v38 + 1LL;
      if ( v20 > HIDWORD(v38) )
      {
        v33 = v19;
        sub_2237220(&v37, v39, v20, 8);
        v18 = (unsigned int)v38;
        v21 = v37;
        v19 = v33;
      }
      else
      {
        v21 = v37;
      }
      v21[v18] = v19;
      ++v11;
      ++v13;
      v22 = v38 + 1;
      LODWORD(v38) = v38 + 1;
    }
    while ( v12 != v11 );
    v26 = (char *)ptr;
    v27 = (unsigned int)v41;
    v28 = v22;
    v8 = v37;
  }
  v29 = (_BYTE *)*(unsigned int *)(a2 + 4);
  v30 = *(_DWORD *)(a2 + 24);
  v31 = *(_DWORD *)(a2 + 20);
  v32 = *a1;
  if ( v35 )
    v5 = sub_1912620(v32, v29, v31, v30, 0, v35, a3, v26, (_BYTE *)v27, v8, v28);
  else
    v5 = sub_1912620(v32, v29, v31, v30, 1, (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFELL), a3, v26, (_BYTE *)v27, v8, v28);
LABEL_21:
  if ( ptr != v42 )
    free(ptr);
  if ( v37 != v39 )
    free(v37);
  return v5;
}
