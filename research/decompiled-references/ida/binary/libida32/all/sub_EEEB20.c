__int64 __fastcall sub_EEEB20(__int64 a1, _WORD *a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // r12
  __int64 v3; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int8 v9; // al
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  _BYTE *v13; // rdi
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // r12
  __int64 v17; // r14
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // [rsp+Ch] [rbp-16Ch]
  int v22; // [rsp+Ch] [rbp-16Ch]
  _QWORD v23[2]; // [rsp+10h] [rbp-168h] BYREF
  int v24; // [rsp+20h] [rbp-158h]
  void *v25; // [rsp+28h] [rbp-150h]
  __m128i si128; // [rsp+30h] [rbp-148h]
  _BYTE v27[128]; // [rsp+40h] [rbp-138h] BYREF
  void *ptr; // [rsp+C0h] [rbp-B8h]
  __int64 v29; // [rsp+C8h] [rbp-B0h]
  _BYTE v30[168]; // [rsp+D0h] [rbp-A8h] BYREF

  if ( !*(_BYTE *)(a1 + 17) )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, *a2 & 0x1FF);
    v2 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL);
    v3 = sub_C715F0((__int64)a2);
    return v2(a1, v3);
  }
  v5 = sub_C715F0((__int64)a2);
  v6 = *(_QWORD *)(v5 + 128);
  if ( v6 && (*(_BYTE *)(v6 + 10) & 0x20) != 0 )
  {
    v14 = *(_QWORD *)(v6 + 128) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v6 + 128) & 4) != 0 )
    {
      v15 = 0;
      if ( *(_DWORD *)(v14 + 8) )
        v15 = **(_QWORD **)v14;
      v16 = nullptr;
      v17 = v15 + 16LL * ((*(_DWORD *)(v6 + 104) >> 5) & 0x7FFF);
      if ( *(_DWORD *)(v14 + 8) )
        v16 = **(__int64 ***)v14;
    }
    else if ( v14 )
    {
      v16 = (__int64 *)(*(_QWORD *)(v6 + 128) & 0xFFFFFFFFFFFFFFF8LL);
      v17 = v14 + 16LL * ((*(_DWORD *)(v6 + 104) >> 5) & 0x7FFF);
    }
    else
    {
      v16 = nullptr;
      v17 = 16LL * ((*(_DWORD *)(v6 + 104) >> 5) & 0x7FFF);
    }
    for ( ; (__int64 *)v17 != v16; v16 += 2 )
    {
      v18 = *(_QWORD *)(a1 + 8);
      v19 = sub_C71100(v16);
      v20 = *(unsigned int *)(v18 + 8);
      if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(v18 + 12) )
      {
        v21 = v19;
        sub_22134E0(v18, v18 + 16, v20 + 1, 4);
        v20 = *(unsigned int *)(v18 + 8);
        v19 = v21;
      }
      *(_DWORD *)(*(_QWORD *)v18 + 4 * v20) = v19;
      ++*(_DWORD *)(v18 + 8);
      if ( (*v16 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*(_BYTE *)((*v16 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 26 <= 0x1A )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    }
  }
  v23[0] = 0;
  v24 = 0;
  v25 = v27;
  ptr = v30;
  v23[1] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  v29 = 0x2000000000LL;
  v7 = sub_B6AC30(v5 + 64);
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = *(_BYTE *)(v7 + 28) & 0x7F;
      if ( v9 != 71 )
        break;
      v8 = *(_QWORD *)(v7 + 48);
      if ( v8 )
        goto LABEL_8;
LABEL_9:
      v7 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v7 )
        goto LABEL_13;
    }
    if ( (unsigned int)v9 - 34 > 5 )
      goto LABEL_9;
    v8 = v7;
LABEL_8:
    sub_E878C0((__int64)v23, v8, 1);
    goto LABEL_9;
  }
LABEL_13:
  v10 = *(_QWORD *)(a1 + 8);
  v11 = sub_E80C50((__int64)v23);
  v12 = *(unsigned int *)(v10 + 8);
  if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(v10 + 12) )
  {
    v22 = v11;
    sub_22134E0(v10, v10 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(v10 + 8);
    v11 = v22;
  }
  *(_DWORD *)(*(_QWORD *)v10 + 4 * v12) = v11;
  v13 = ptr;
  ++*(_DWORD *)(v10 + 8);
  if ( v13 != v30 )
    free(v13);
  if ( v25 != v27 )
    free(v25);
  return operator delete();
}

