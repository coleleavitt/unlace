unsigned __int64 __fastcall sub_1E224C0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 v8; // rbx
  unsigned __int16 v10; // dx
  _QWORD *v11; // r8
  char v12; // al
  bool v13; // si
  unsigned __int16 **v14; // rbx
  unsigned __int16 **v15; // r13
  __int64 *v16; // rbp
  _QWORD *v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  void *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  unsigned __int16 *v27; // r15
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  char *v30; // rbx
  unsigned __int64 v31; // rbp
  __int64 v32; // r13
  _BYTE *v33; // rsi
  int v34; // ecx
  unsigned int v35; // r11d
  __int64 v36; // rdi
  unsigned __int64 v37; // [rsp+18h] [rbp-B0h]
  _QWORD *v38; // [rsp+18h] [rbp-B0h]
  _QWORD *v39; // [rsp+20h] [rbp-A8h]
  __int64 v40; // [rsp+28h] [rbp-A0h]
  void *v41; // [rsp+30h] [rbp-98h] BYREF
  __int64 v42; // [rsp+38h] [rbp-90h]
  _BYTE v43[32]; // [rsp+40h] [rbp-88h] BYREF
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __int64 v45; // [rsp+68h] [rbp-60h]
  _BYTE v46[88]; // [rsp+70h] [rbp-58h] BYREF

  if ( (*(_BYTE *)(a2 + 19) & 0x40) != 0 )
  {
    v8 = 1;
    v40 = sub_1E11560(a1, *(unsigned __int16 **)(a2 + 32), a6, a7, a3, a4, a5);
    if ( v40 == 1 )
      return v8;
    v39 = nullptr;
  }
  else
  {
    v40 = 0;
    v39 = sub_1E1F330(a1, *(_QWORD *)(a2 + 8LL * (*(_WORD *)(a2 + 16) & 0x7FFF) + 32), a6, a7);
  }
  v10 = *(_WORD *)(a2 + 16);
  v11 = v43;
  v42 = 0x400000000LL;
  v45 = 0x400000000LL;
  v12 = *(_BYTE *)(a2 + 19);
  v41 = v43;
  ptr = v46;
  v13 = (v12 & 0x40) != 0;
  v14 = (unsigned __int16 **)(a2 + 8LL * v13 + 32);
  v10 &= ~0x8000u;
  v15 = &v14[v10];
  v16 = (__int64 *)(a2 + 8LL * (unsigned __int16)(v10 + v13) + 8LL * ((v12 & 0x40) == 0) + 32);
  if ( v14 == v15 )
  {
    v32 = 0;
    v31 = 0;
    v30 = v46;
  }
  else
  {
    do
    {
      v27 = *v14;
      if ( *v16 )
      {
        v17 = sub_1E1F330(a1, *v16, a6, a7);
        if ( !v17 )
          goto LABEL_20;
        v18 = (unsigned int)v45;
        v19 = (unsigned int)v45 + 1LL;
        if ( v19 > HIDWORD(v45) )
        {
          v38 = v17;
          sub_2237220(&ptr, v46, v19, 8);
          v18 = (unsigned int)v45;
          v17 = v38;
        }
        v20 = ptr;
        *((_QWORD *)ptr + v18) = v17;
        LODWORD(v45) = v45 + 1;
      }
      else
      {
        v28 = (unsigned int)v45;
        v18 = HIDWORD(v45);
        v29 = (unsigned int)v45 + 1LL;
        if ( v29 > HIDWORD(v45) )
        {
          sub_2237220(&ptr, v46, v29, 8);
          v28 = (unsigned int)v45;
        }
        v20 = ptr;
        *((_QWORD *)ptr + v28) = 0;
        LODWORD(v45) = v45 + 1;
      }
      v21 = sub_1E11560(a1, v27, a6, a7, (__int64)v20, v18, (__int64)v11);
      if ( v21 == 1 )
      {
LABEL_20:
        v8 = 1;
        goto LABEL_21;
      }
      v22 = (unsigned int)v42;
      v23 = v21 & 0xFFFFFFFFFFFFFFFELL;
      v24 = (unsigned int)v42 + 1LL;
      if ( v24 > HIDWORD(v42) )
      {
        v37 = v23;
        sub_2237220(&v41, v43, v24, 8);
        v22 = (unsigned int)v42;
        v25 = v41;
        v23 = v37;
      }
      else
      {
        v25 = v41;
      }
      v25[v22] = v23;
      ++v14;
      ++v16;
      v26 = v42 + 1;
      LODWORD(v42) = v42 + 1;
    }
    while ( v15 != v14 );
    v30 = (char *)ptr;
    v31 = (unsigned int)v45;
    v32 = v26;
    v11 = v41;
  }
  v33 = (_BYTE *)*(unsigned int *)(a2 + 4);
  v34 = *(_DWORD *)(a2 + 24);
  v35 = *(_DWORD *)(a2 + 20);
  v36 = *a1;
  if ( v39 )
    v8 = sub_1912620(v36, v33, v35, v34, 0, v39, a6, v30, (_BYTE *)v31, v11, v32);
  else
    v8 = sub_1912620(v36, v33, v35, v34, 1, (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFELL), a6, v30, (_BYTE *)v31, v11, v32);
LABEL_21:
  if ( ptr != v46 )
    free(ptr);
  if ( v41 != v43 )
    free(v41);
  return v8;
}
