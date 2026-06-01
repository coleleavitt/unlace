__int64 __fastcall sub_E39E0(int a1, unsigned __int8 a2, double a3, double a4, __m128 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 bpt_kernel_interface; // rax
  int v13; // r12d
  _QWORD *v15; // rdi
  __int64 v16; // r15
  int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __m128i v21; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 *v22; // [rsp+20h] [rbp-68h] BYREF
  __int128 v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  int v25; // [rsp+40h] [rbp-48h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( dword_25274C >= 0 )
    return 0;
  if ( !a1 )
    return 0;
  v6 = qword_252590;
  v7 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
  if ( qword_252590 == v7 )
    return 0;
  while ( a1 != *(_DWORD *)v6 )
  {
    v6 += 256;
    if ( v7 == v6 )
      return 0;
  }
  if ( !v6 )
    return 0;
  v8 = *(_QWORD *)(v6 + 40);
  v22 = nullptr;
  v24 = 0;
  v25 = -1;
  v23 = 0;
  if ( !v8 )
    goto LABEL_23;
  v9 = dword_245174;
  v10 = *(_QWORD *)(v8 + 32LL * dword_245174 + 8);
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v15 = qword_252758;
      if ( qword_252758 )
      {
        *(_QWORD *)qword_252758 = v10;
        v15[1] = v8;
        *((_DWORD *)v15 + 4) = v9;
        if ( (unsigned int)sub_CDCF0((__int64)v15, 11) != 1 )
        {
LABEL_23:
          v10 = -1;
          goto LABEL_11;
        }
        v10 = *(_QWORD *)qword_252758;
      }
    }
  }
LABEL_11:
  v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_2306E0, (__m128i)(unsigned __int64)&v22);
  sub_E3740(nullptr, v10, 3u, (__int64)&v21, 2);
  memset(&v21, 0, 24);
  if ( (unsigned __int8)sub_C0A80(&v22, 0.0, COERCE_DOUBLE(&v22), a5, a2, (__int64)&v21) )
  {
    if ( v21.m128i_i64[1] == 1 )
    {
      v16 = *(_QWORD *)v21.m128i_i64[0];
      if ( !(_QWORD)v23 || !rangeset_t_find_range() )
      {
        if ( v16 == sub_D1F80(*(_QWORD *)(v6 + 40), 1) )
        {
          v13 = sub_D62F0((int *)v6, 1, 0);
          goto LABEL_15;
        }
        v17 = sub_D5CF0(a1, v16, 0, 0);
LABEL_27:
        v13 = v17;
        goto LABEL_15;
      }
    }
    v11 = operator new(0xA8u);
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 16) = 0;
    *(_QWORD *)(v11 + 24) = 96;
    *(_QWORD *)(v11 + 32) = 0;
    *(_QWORD *)(v11 + 56) = -1;
    *(_QWORD *)(v11 + 64) = 0;
    *(_OWORD *)(v11 + 40) = 0;
    *(_QWORD *)(v11 + 80) = -1;
    *(_QWORD *)(v11 + 72) = 0xFFFFFFFFLL;
    *(_QWORD *)(v11 + 88) = 4;
    *(_QWORD *)(v11 + 104) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v11 + 96) = 9;
    *(_QWORD *)(v11 + 112) = 0;
    *(_QWORD *)v11 = &off_230708;
    *(_QWORD *)(v11 + 128) = 0;
    *(_QWORD *)(v11 + 152) = 0;
    *(_DWORD *)(v11 + 160) = -1;
    *(_OWORD *)(v11 + 136) = 0;
    rangeset_t_swap();
    *(_DWORD *)(v11 + 120) = sub_CAEE0(v21.m128i_i64);
    bpt_kernel_interface = get_bpt_kernel_interface();
    (*(void (__fastcall **)(__int64, __int64, char *, _QWORD, _QWORD))(*(_QWORD *)bpt_kernel_interface + 136LL))(
      bpt_kernel_interface,
      v11 + 24,
      "",
      *(unsigned int *)(v11 + 120),
      0);
    if ( (unsigned int)sub_C8400(v6, v11, 0) == 1 )
    {
      if ( (*(_BYTE *)(dbg + 32LL) & 0x10) != 0 )
      {
        v18 = qword_2521D0 + 24LL * *(int *)(v11 + 120);
        v19 = *(_QWORD **)v18;
        v20 = *(_QWORD *)v18 + 8LL * *(_QWORD *)(v18 + 8);
        if ( v19 != (_QWORD *)v20 )
        {
          while ( v10 != *v19 )
          {
            if ( (_QWORD *)v20 == ++v19 )
              goto LABEL_37;
          }
          if ( (_QWORD *)v20 != v19 )
          {
            v13 = sub_D4880(v6, 4097);
            if ( v13 <= 0 )
            {
              byte_252748 = 0;
              sub_C83A0(v11, v6);
              goto LABEL_15;
            }
          }
        }
      }
LABEL_37:
      v17 = sub_D5C00(0, 0);
      goto LABEL_27;
    }
  }
  else
  {
    sub_8F740((__int64)"%a: failed to calculate step addresses!\n", 0.0);
  }
  v13 = 0;
LABEL_15:
  if ( v21.m128i_i64[0] )
  {
    v21.m128i_i64[1] = 0;
    qfree();
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  return (unsigned int)v13;
}

