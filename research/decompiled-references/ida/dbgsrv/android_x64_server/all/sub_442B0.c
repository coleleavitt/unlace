/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442B0
// Address: 0x00000000000442B0

//----- (00000000000442B0) ----------------------------------------------------
__int64 __fastcall sub_442B0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // r15
  int v8; // r13d
  __int64 v9; // rsi
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rbx
  bool v13; // zf
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 v19; // rdi
  int v20[2]; // [rsp+0h] [rbp-78h] BYREF
  void *ptr; // [rsp+8h] [rbp-70h]
  _DWORD v22[5]; // [rsp+10h] [rbp-68h]
  __int128 v23; // [rsp+24h] [rbp-54h]
  __int128 v24; // [rsp+34h] [rbp-44h]
  int v25; // [rsp+44h] [rbp-34h]
  unsigned __int64 v26; // [rsp+48h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 832);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v2,
      a1 + 840,
      *(unsigned __int8 *)(a1 + 841));
  *(_QWORD *)(a1 + 832) = 0;
  *(_BYTE *)(a1 + 841) = 0;
  v3 = *(_QWORD *)(a1 + 848);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v3,
      a1 + 856,
      *(unsigned __int8 *)(a1 + 857));
  *(_QWORD *)(a1 + 848) = 0;
  *(_BYTE *)(a1 + 857) = 0;
  v4 = *(_QWORD *)(a1 + 864);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v4,
      a1 + 872,
      *(unsigned __int8 *)(a1 + 873));
  *(_QWORD *)(a1 + 864) = 0;
  *(_BYTE *)(a1 + 873) = 0;
  v5 = sub_440A0(a1);
  v6 = *(_QWORD **)(a1 + 1032);
  v7 = a1 + 1040;
  v8 = 0;
  while ( v6 != (_QWORD *)v7 )
  {
    v9 = *((unsigned int *)v6 + 10);
    LOBYTE(v5) = 1;
    if ( (_DWORD)v9 != *(_DWORD *)(a1 + 1140) )
      LODWORD(v5) = v8;
    v8 = v5;
    v5 = ptrace(PTRACE_DETACH, v9, 0, 0);
    v10 = (_QWORD *)v6[1];
    if ( v10 )
    {
      do
      {
        v11 = v10;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 );
    }
    else
    {
      v11 = (_QWORD *)v6[2];
      if ( (_QWORD *)*v11 != v6 )
      {
        v12 = (__int64)(v6 + 2);
        do
        {
          v11 = *(_QWORD **)(*(_QWORD *)v12 + 16LL);
          v13 = *v11 == *(_QWORD *)v12;
          v12 = *(_QWORD *)v12 + 16LL;
        }
        while ( !v13 );
      }
    }
    v6 = v11;
    if ( v5 )
      return 0xFFFFFFFFLL;
  }
  if ( (v8 & 1) != 0 || (v15 = ptrace(PTRACE_DETACH, *(unsigned int *)(a1 + 1140), 0, 0), result = 0xFFFFFFFFLL, !v15) )
  {
    *(_QWORD *)v20 = 0xFFFFFFFFLL;
    ptr = (void *)-1LL;
    LOBYTE(v22[0]) = 0;
    v24 = 0;
    v23 = 0;
    *(_OWORD *)&v22[1] = 0;
    v25 = 0;
    set_debug_event_code((__int64)v20, 12);
    v20[0] = *(_DWORD *)(a1 + 1140);
    v20[1] = v20[0];
    ptr = (void *)-1LL;
    LOBYTE(v22[0]) = 1;
    if ( (v22[1] & 0xFFFFFFF) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 128);
      v17 = 56 * ((*(_QWORD *)(a1 + 136) - v16) >> 3) - 1;
      if ( *(_QWORD *)(a1 + 136) == v16 )
        v17 = *(_QWORD *)(a1 + 136) - v16;
      v18 = *(_QWORD *)(a1 + 152) + *(_QWORD *)(a1 + 160);
      if ( v17 == v18 )
      {
        sub_496D0(a1 + 120);
        v16 = *(_QWORD *)(a1 + 128);
        v18 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
      }
      v19 = *(_QWORD *)(v16 + 8 * (v18 / 0x38)) + 72 * (v18 % 0x38);
      *(_QWORD *)v19 = 0xFFFFFFFFLL;
      *(_QWORD *)(v19 + 8) = -1;
      *(_BYTE *)(v19 + 16) = 0;
      *(_DWORD *)(v19 + 20) = 0;
      copy_debug_event(v19, (__int64)v20);
      ++*(_QWORD *)(a1 + 160);
      *(_BYTE *)(a1 + 1228) = 0;
    }
    *(_BYTE *)(a1 + 1230) = 0;
    *(_BYTE *)(a1 + 1149) = 1;
    sub_488F0(a1 + 1032, *(_QWORD **)(a1 + 1040));
    *(_QWORD *)(a1 + 1032) = v7;
    *(_OWORD *)(a1 + 1040) = 0;
    *(_DWORD *)(a1 + 1140) = -1;
    *(_BYTE *)(a1 + 1148) = 0;
    free_debug_event((__int64)v20);
    return 1;
  }
  return result;
}
