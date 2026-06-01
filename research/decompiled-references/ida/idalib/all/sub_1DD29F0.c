unsigned __int64 __fastcall sub_1DD29F0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // r9
  unsigned __int16 v12; // dx
  _QWORD *v13; // r8
  char v14; // al
  bool v15; // si
  unsigned __int64 *v16; // rbx
  unsigned __int64 *v17; // r13
  __int64 *v18; // rbp
  _QWORD *v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  void *v22; // rdx
  unsigned __int16 *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  unsigned __int64 v29; // r15
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  char *v32; // rbx
  unsigned __int64 v33; // rbp
  __int64 v34; // r13
  _BYTE *v35; // rsi
  int v36; // ecx
  unsigned int v37; // r11d
  __int64 v38; // rdi
  unsigned __int64 v39; // [rsp+18h] [rbp-B0h]
  _QWORD *v40; // [rsp+18h] [rbp-B0h]
  _QWORD *v41; // [rsp+20h] [rbp-A8h]
  unsigned __int16 *v42; // [rsp+28h] [rbp-A0h]
  void *v43; // [rsp+30h] [rbp-98h] BYREF
  __int64 v44; // [rsp+38h] [rbp-90h]
  _BYTE v45[32]; // [rsp+40h] [rbp-88h] BYREF
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __int64 v47; // [rsp+68h] [rbp-60h]
  _BYTE v48[88]; // [rsp+70h] [rbp-58h] BYREF

  if ( (*(_BYTE *)(a2 + 19) & 0x40) != 0 )
  {
    v9 = 1;
    v42 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 32), a3, a4, a5, a6, a7, a8);
    if ( v42 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      return v9;
    v41 = nullptr;
  }
  else
  {
    v42 = nullptr;
    v41 = sub_1DD1930((__int64)a1, *(_QWORD *)(a2 + 8LL * (*(_WORD *)(a2 + 16) & 0x7FFF) + 32), a7, a8);
  }
  v12 = *(_WORD *)(a2 + 16);
  v13 = v45;
  v44 = 0x400000000LL;
  v47 = 0x400000000LL;
  v14 = *(_BYTE *)(a2 + 19);
  v43 = v45;
  ptr = v48;
  v15 = (v14 & 0x40) != 0;
  v16 = (unsigned __int64 *)(a2 + 8LL * v15 + 32);
  v12 &= ~0x8000u;
  v17 = &v16[v12];
  v18 = (__int64 *)(a2 + 8LL * (unsigned __int16)(v12 + v15) + 8LL * ((v14 & 0x40) == 0) + 32);
  if ( v16 == v17 )
  {
    v34 = 0;
    v33 = 0;
    v32 = v48;
  }
  else
  {
    do
    {
      v29 = *v16;
      if ( *v18 )
      {
        v19 = sub_1DD1930((__int64)a1, *v18, a7, a8);
        if ( !v19 )
          goto LABEL_20;
        v20 = (unsigned int)v47;
        v21 = (unsigned int)v47 + 1LL;
        if ( v21 > HIDWORD(v47) )
        {
          v40 = v19;
          sub_2237220(&ptr, v48, v21, 8);
          v20 = (unsigned int)v47;
          v19 = v40;
        }
        v22 = ptr;
        *((_QWORD *)ptr + v20) = v19;
        LODWORD(v47) = v47 + 1;
      }
      else
      {
        v30 = (unsigned int)v47;
        v20 = HIDWORD(v47);
        v31 = (unsigned int)v47 + 1LL;
        if ( v31 > HIDWORD(v47) )
        {
          sub_2237220(&ptr, v48, v31, 8);
          v30 = (unsigned int)v47;
        }
        v22 = ptr;
        *((_QWORD *)ptr + v30) = 0;
        LODWORD(v47) = v47 + 1;
      }
      v23 = sub_1DC71F0(a1, v29, (unsigned __int64)v22, v20, (__int64)v13, v10, a7, a8);
      if ( v23 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      {
LABEL_20:
        v9 = 1;
        goto LABEL_21;
      }
      v24 = (unsigned int)v44;
      v25 = (unsigned __int64)v23 & 0xFFFFFFFFFFFFFFFELL;
      v26 = (unsigned int)v44 + 1LL;
      if ( v26 > HIDWORD(v44) )
      {
        v39 = v25;
        sub_2237220(&v43, v45, v26, 8);
        v24 = (unsigned int)v44;
        v27 = v43;
        v25 = v39;
      }
      else
      {
        v27 = v43;
      }
      v27[v24] = v25;
      ++v16;
      ++v18;
      v28 = v44 + 1;
      LODWORD(v44) = v44 + 1;
    }
    while ( v17 != v16 );
    v32 = (char *)ptr;
    v33 = (unsigned int)v47;
    v34 = v28;
    v13 = v43;
  }
  v35 = (_BYTE *)*(unsigned int *)(a2 + 4);
  v36 = *(_DWORD *)(a2 + 24);
  v37 = *(_DWORD *)(a2 + 20);
  v38 = *a1;
  if ( v41 )
    v9 = sub_1912620(v38, v35, v37, v36, 0, v41, a7, v32, (_BYTE *)v33, v13, v34);
  else
    v9 = sub_1912620(
           v38,
           v35,
           v37,
           v36,
           1,
           (_QWORD *)((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFFELL),
           a7,
           v32,
           (_BYTE *)v33,
           v13,
           v34);
LABEL_21:
  if ( ptr != v48 )
    free(ptr);
  if ( v43 != v45 )
    free(v43);
  return v9;
}
