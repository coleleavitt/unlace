__int64 __fastcall sub_176D360(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v4; // rbx
  unsigned __int16 v6; // dx
  _BYTE *v7; // r8
  char v8; // al
  bool v9; // si
  unsigned __int16 **v10; // rbx
  unsigned __int16 **v11; // r13
  void ***v12; // rbp
  void **v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  unsigned __int16 *v22; // r15
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  _BYTE *v25; // rbx
  __int64 v26; // rbp
  __int64 v27; // r13
  int v28; // esi
  int v29; // ecx
  int v30; // r11d
  __int64 v31; // rdi
  unsigned __int64 v32; // [rsp+18h] [rbp-B0h]
  void **v33; // [rsp+18h] [rbp-B0h]
  void **v34; // [rsp+20h] [rbp-A8h]
  __int64 v35; // [rsp+28h] [rbp-A0h]
  void *v36; // [rsp+30h] [rbp-98h] BYREF
  __int64 v37; // [rsp+38h] [rbp-90h]
  _BYTE v38[32]; // [rsp+40h] [rbp-88h] BYREF
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __int64 v40; // [rsp+68h] [rbp-60h]
  _BYTE v41[88]; // [rsp+70h] [rbp-58h] BYREF

  if ( (*(_BYTE *)(a2 + 19) & 0x40) != 0 )
  {
    v4 = 1;
    v35 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 32));
    if ( v35 == 1 )
      return v4;
    v34 = nullptr;
  }
  else
  {
    LODWORD(v35) = 0;
    v34 = sub_176A140(a1, *(void ***)(a2 + 8LL * (*(_WORD *)(a2 + 16) & 0x7FFF) + 32), a3);
  }
  v6 = *(_WORD *)(a2 + 16);
  v7 = v38;
  v37 = 0x400000000LL;
  v40 = 0x400000000LL;
  v8 = *(_BYTE *)(a2 + 19);
  v36 = v38;
  ptr = v41;
  v9 = (v8 & 0x40) != 0;
  v10 = (unsigned __int16 **)(a2 + 8LL * v9 + 32);
  v6 &= ~0x8000u;
  v11 = &v10[v6];
  v12 = (void ***)(a2 + 8LL * (unsigned __int16)(v6 + v9) + 8LL * ((v8 & 0x40) == 0) + 32);
  if ( v10 == v11 )
  {
    v27 = 0;
    v26 = 0;
    v25 = v41;
  }
  else
  {
    do
    {
      v22 = *v10;
      if ( *v12 )
      {
        v13 = sub_176A140(a1, *v12, a3);
        if ( !v13 )
          goto LABEL_20;
        v14 = (unsigned int)v40;
        v15 = (unsigned int)v40 + 1LL;
        if ( v15 > HIDWORD(v40) )
        {
          v33 = v13;
          sub_2237220(&ptr, v41, v15, 8);
          v14 = (unsigned int)v40;
          v13 = v33;
        }
        *((_QWORD *)ptr + v14) = v13;
        LODWORD(v40) = v40 + 1;
      }
      else
      {
        v23 = (unsigned int)v40;
        v24 = (unsigned int)v40 + 1LL;
        if ( v24 > HIDWORD(v40) )
        {
          sub_2237220(&ptr, v41, v24, 8);
          v23 = (unsigned int)v40;
        }
        *((_QWORD *)ptr + v23) = 0;
        LODWORD(v40) = v40 + 1;
      }
      v16 = sub_175B800(a1, v22);
      if ( v16 == 1 )
      {
LABEL_20:
        v4 = 1;
        goto LABEL_21;
      }
      v17 = (unsigned int)v37;
      v18 = v16 & 0xFFFFFFFFFFFFFFFELL;
      v19 = (unsigned int)v37 + 1LL;
      if ( v19 > HIDWORD(v37) )
      {
        v32 = v18;
        sub_2237220(&v36, v38, v19, 8);
        v17 = (unsigned int)v37;
        v20 = v36;
        v18 = v32;
      }
      else
      {
        v20 = v36;
      }
      v20[v17] = v18;
      ++v10;
      ++v12;
      v21 = v37 + 1;
      LODWORD(v37) = v37 + 1;
    }
    while ( v11 != v10 );
    v25 = ptr;
    v26 = (unsigned int)v40;
    v27 = v21;
    v7 = v36;
  }
  v28 = *(_DWORD *)(a2 + 4);
  v29 = *(_DWORD *)(a2 + 24);
  v30 = *(_DWORD *)(a2 + 20);
  v31 = *a1;
  if ( v34 )
    v4 = sub_1912620(v31, v28, v30, v29, 0, (_DWORD)v34, (__int64)v25, v26, (__int64)v7, v27);
  else
    v4 = sub_1912620(v31, v28, v30, v29, 1, (unsigned int)v35 & 0xFFFFFFFE, (__int64)v25, v26, (__int64)v7, v27);
LABEL_21:
  if ( ptr != v41 )
    free(ptr);
  if ( v36 != v38 )
    free(v36);
  return v4;
}
