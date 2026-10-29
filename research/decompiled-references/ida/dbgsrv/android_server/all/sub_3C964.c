/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C964
// Address: 0x000000000003C964

//----- (000000000003C964) ----------------------------------------------------
__int64 __fastcall sub_3C964(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 *v8; // x23
  __int64 v9; // x9
  __int64 v10; // x10
  _DWORD *v11; // x0
  _DWORD *v12; // x8
  __int64 v13; // x0
  bool v14; // w8
  __int64 v15; // x9
  __int64 v16; // x8
  int v17; // w9
  __int64 v18; // x8
  pthread_mutex_t *v19; // x0
  void *v20; // x24
  const void *v21; // x25
  void *v22; // x1
  int *v23; // x0
  const char *v24; // x0
  unsigned __int64 v26; // x9
  __int64 v27; // x12
  __int64 *v28; // x8
  __int64 v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  int64x2_t v32; // q0
  _QWORD v33[2]; // [xsp+0h] [xbp-2E0h] BYREF
  _QWORD v34[2]; // [xsp+10h] [xbp-2D0h] BYREF
  __int64 v35; // [xsp+20h] [xbp-2C0h] BYREF
  __int64 v36; // [xsp+28h] [xbp-2B8h]
  char v37; // [xsp+30h] [xbp-2B0h]
  void *dest[6]; // [xsp+34h] [xbp-2ACh] BYREF
  int v39; // [xsp+64h] [xbp-27Ch]
  char v40; // [xsp+68h] [xbp-278h] BYREF
  __int64 v41; // [xsp+168h] [xbp-178h]
  int v42[68]; // [xsp+178h] [xbp-168h] BYREF
  __int64 v43; // [xsp+288h] [xbp-58h]

  v43 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = sub_3D2F8(a1, a2);
  v9 = 4LL * *(_QWORD *)(a1 + 1792);
  if ( v9 )
  {
    v10 = 4LL * *(_QWORD *)(a1 + 1792);
    v11 = *(_DWORD **)(a1 + 1784);
    while ( *v11 != a2 )
    {
      v10 -= 4;
      ++v11;
      if ( !v10 )
        goto LABEL_9;
    }
  }
  else
  {
    v11 = *(_DWORD **)(a1 + 1784);
  }
  v12 = (_DWORD *)(*(_QWORD *)(a1 + 1784) + v9);
  if ( v11 == v12 )
  {
LABEL_9:
    v13 = sub_4B230(a1, (int)v42, a2);
    if ( (_DWORD)v13 == -1 )
    {
      v23 = (int *)__errno(v13);
      v24 = (const char *)winerr(*v23);
      sub_3A0D8(a1, "Finish attaching to %d thread: %s\n", a2, v24);
      return 0;
    }
    if ( (_DWORD)v13 != a2 || (~LOBYTE(v42[0]) & 0x7F) != 0 )
      goto LABEL_15;
    v14 = (v42[0] & 0xFF00) == 4864;
    if ( *(_BYTE *)(a1 + 1854) )
      v14 = (v42[0] & 0xFFFF0000) == 0x800000;
    if ( !v14 )
    {
LABEL_15:
      v15 = *(_QWORD *)(a1 + 1744);
      v16 = a1 + 1744;
      do
      {
        if ( *(_DWORD *)(v15 + 32) >= a2 )
          v16 = v15;
        v15 = *(_QWORD *)(v15 + 8LL * (*(_DWORD *)(v15 + 32) < a2));
      }
      while ( v15 );
      v17 = *(_DWORD *)(v16 + 32);
      v18 = v16 + 40;
      if ( v17 > a2 )
        v18 = 0;
      *(_BYTE *)(v18 + 24) = 1;
      if ( (int)v13 >= 1 )
        sub_3D474(a1, v13, v42[0]);
    }
  }
  else
  {
    memmove(v11, v11 + 1, ((char *)(v12 - 1) - (char *)v11) & 0xFFFFFFFFFFFFFFFCLL);
    --*(_QWORD *)(a1 + 1792);
  }
  v35 = 0xFFFFFFFFLL;
  v36 = -1;
  v37 = 0;
  memset(dest, 0, sizeof(dest));
  v39 = 0;
  set_debug_event_code((__int64)&v35, 3);
  if ( (unsigned __int64)(((__int64)dest[0] & 0xFFFFFFF) - 9) >= 2 && ((__int64)dest[0] & 0xFFFFFFF) != 3 )
  {
    if ( !under_debugger )
      v19 = interr(3297);
    __break(1u);
    sub_39134(v19);
  }
  if ( v8 + 4 != (__int64 *)((char *)dest + 4) )
  {
    v20 = (void *)v8[5];
    if ( (unsigned __int64)v20 < 2 )
    {
      *(void **)((char *)&dest[1] + 4) = nullptr;
    }
    else
    {
      v21 = (const void *)v8[4];
      v22 = *(void **)((char *)dest + 4);
      if ( *(void **)((char *)&dest[2] + 4) < v20 )
      {
        v22 = qvector_reserve(
                (pthread_mutex_t *)((char *)dest + 4),
                *(void **)((char *)dest + 4),
                (unsigned __int64)v20,
                1u);
        *(void **)((char *)dest + 4) = v22;
      }
      *(void **)((char *)&dest[1] + 4) = v20;
      memmove(v22, v21, (size_t)v20 - 1);
      (*(_BYTE **)((char *)dest + 4))[(unsigned __int64)v20 - 1] = 0;
    }
  }
  LODWORD(v35) = *(_DWORD *)(a1 + 1844);
  HIDWORD(v35) = a2;
  if ( (a4 & 1) != 0 )
  {
    v33[0] = &v40;
    v33[1] = 272;
    if ( dword_164020 < 0 )
    {
      v34[0] = v42;
      v34[1] = 272;
      dword_164020 = ptrace(PTRACE_GETREGSET, (unsigned int)a2, 1, v34) == 0;
      if ( dword_164020 > 0 )
      {
LABEL_34:
        if ( ptrace(PTRACE_GETREGSET, (unsigned int)a2, 1, v33) )
          a3 = -1;
        else
          a3 = v41;
        goto LABEL_40;
      }
    }
    else if ( dword_164020 > 0 )
    {
      goto LABEL_34;
    }
    a3 = -1;
  }
LABEL_40:
  v37 = 1;
  v36 = a3;
  if ( ((__int64)dest[0] & 0xFFFFFFF) != 0 )
  {
    v26 = *(_QWORD *)(a1 + 152);
    if ( !v26 )
    {
      sub_477B4(a1 + 120);
      v26 = *(_QWORD *)(a1 + 152);
    }
    v27 = *(_QWORD *)(a1 + 128);
    v28 = (__int64 *)(v27 + 8 * (v26 / 0x38));
    v29 = *v28;
    if ( *(_QWORD *)(a1 + 136) == v27 )
    {
      v30 = 0;
      if ( v29 )
        goto LABEL_46;
    }
    else
    {
      v30 = v29 + 72 * (v26 % 0x38);
      if ( v30 != v29 )
      {
LABEL_46:
        *(_QWORD *)(v30 - 72) = 0xFFFFFFFFLL;
        v31 = v30 - 72;
        *(_QWORD *)(v31 + 8) = -1;
        *(_BYTE *)(v31 + 16) = 0;
        *(_DWORD *)(v31 + 20) = 0;
        copy_debug_event(v31, (__int64)&v35);
        v32 = *(int64x2_t *)(a1 + 152);
        *(_BYTE *)(a1 + 1932) = 0;
        *(int64x2_t *)(a1 + 152) = vaddq_s64(v32, (int64x2_t)xmmword_F17F0);
        goto LABEL_47;
      }
    }
    v30 = *(v28 - 1) + 4032;
    goto LABEL_46;
  }
LABEL_47:
  free_debug_event((__int64)&v35);
  return 1;
}
// 3CD50: variable 'v19' is possibly undefined
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// F17F0: using guessed type __int128 xmmword_F17F0;
// 164020: using guessed type int dword_164020;
// 168DF0: using guessed type char under_debugger;
