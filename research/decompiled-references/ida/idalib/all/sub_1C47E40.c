unsigned __int64 __fastcall sub_1C47E40(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4, __m128 a5, __m128 a6)
{
  __int64 *v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 *v14; // r13
  unsigned __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdx
  char v19; // al
  size_t v20; // rax
  char *v21; // rdx
  signed __int64 v22; // r14
  __int64 v23; // rax
  size_t v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rax
  unsigned __int64 v32; // [rsp+0h] [rbp-E8h]
  char *v33; // [rsp+0h] [rbp-E8h]
  _BYTE *v34; // [rsp+0h] [rbp-E8h]
  __int64 v35; // [rsp+8h] [rbp-E0h]
  int v36; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v37; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v38[2]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD *v39; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v40; // [rsp+40h] [rbp-A8h] BYREF
  char v41; // [rsp+98h] [rbp-50h]
  unsigned int v42; // [rsp+A0h] [rbp-48h]
  char v43; // [rsp+A4h] [rbp-44h]

  if ( a3 == 1 )
    return 1;
  v9 = *(__int64 **)(a1 + 608);
  if ( v9 )
  {
    v10 = *((_DWORD *)v9 + 2);
    if ( (v10 & 0x10000000) != 0 )
    {
LABEL_30:
      sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), a2, 0xB39u, 0);
      v36 = 1;
      v23 = sub_1587D10((__int64)v38, &v36);
      LODWORD(v37) = 0;
      sub_1587D10(v23, (int *)&v37);
      sub_15F7200(v38);
      return 1;
    }
    if ( (v10 & 0xDE1) == 0 )
    {
      do
      {
        v9 = (__int64 *)*v9;
        if ( !v9 )
          break;
        v11 = *((_DWORD *)v9 + 2);
        if ( (v11 & 0x10000000) != 0 )
          goto LABEL_30;
      }
      while ( (v11 & 0xDE1) == 0 );
    }
  }
  v12 = *(unsigned int *)(a1 + 40);
  if ( !(_DWORD)v12 )
    BUG();
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v12 - 8);
  if ( !*(_DWORD *)(v13 + 16) && *(_DWORD *)(v13 + 12) )
  {
    sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), a2, 0x1357u, 0);
    sub_15F7200(v38);
    sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), *(_DWORD *)(v13 + 12), 0x16F0u, 0);
    v19 = (*(_BYTE *)(v13 + 10) >> 2) & 3;
    if ( v19 == 1 )
    {
      v24 = j__strlen("co_await");
      v21 = "co_await";
      v22 = v24;
    }
    else
    {
      if ( v19 )
      {
        v20 = j__strlen("co_yield");
        v21 = "co_yield";
      }
      else
      {
        v20 = j__strlen("co_return");
        v21 = "co_return";
      }
      v22 = v20;
    }
    if ( v41 )
    {
      sub_AEC220(&v40, v21, v22);
    }
    else if ( v43 )
    {
      v33 = v21;
      v25 = sub_168B9E0(v38);
      v28 = (__int64)v33;
      v29 = v25;
      v30 = (__int64)v39;
      if ( v39 )
      {
        v35 = v29;
        v30 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, char *))(*v39 + 32LL))(v39, *v39, v33);
        v29 = v35;
        v28 = (__int64)v33;
      }
      v34 = (_BYTE *)v28;
      v37 = v30;
      v31 = sub_1587BC0(v29, &v37, v28, v29, v26, v27);
      sub_AEC220((unsigned __int8 **)(*v31 + 32LL * v42 + 8), v34, v22);
    }
    sub_15F7200(v38);
  }
  v14 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFFELL);
  sub_16CDEE0(a1, (unsigned __int64)v14, 3u, *(double *)a5.m128_u64);
  result = sub_1C46CA0(a1, a2, v14, 1, a5, a6);
  if ( result != 1 )
  {
    v16 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
    if ( *(_DWORD *)v16 != 2 && ((unsigned int)(*(_DWORD *)v16 - 4) > 3 || !*(_BYTE *)(v16 + 596)) )
    {
      v17 = 0;
      if ( (*(_WORD *)(result & 0xFFFFFFFFFFFFFFFELL) & 0x200) != 0 )
        v17 = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFFELL) + 16);
      v32 = result;
      sub_15ED440(a4, v17);
      v18 = *(unsigned int *)(a1 + 11176);
      result = v32;
      if ( (_DWORD)v18 )
      {
        if ( *(_WORD *)(a4[3] + 12) < *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 11168) + 8 * v18 - 8) + 12LL) )
        {
          sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), a2, 0x1B9Cu, 0);
          sub_15F7200(v38);
          return v32;
        }
      }
    }
  }
  return result;
}
