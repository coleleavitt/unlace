__int64 __fastcall sub_84DED0(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  __int64 v4; // rbx
  int v6; // ebp
  _QWORD *v7; // rax
  int v8; // r10d
  _QWORD *v9; // r14
  int v10; // r10d
  int i; // r13d
  int v12; // edx
  _QWORD *v13; // r13
  int j; // r15d
  int v15; // edx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  char *v21; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __m128 *v26; // rax
  __m128 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __m128 *v31; // rax
  __m128 *v32; // rax
  unsigned __int8 v33; // dl
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rsi
  __m128 *v37; // rax
  __m128 *v38; // rax
  _QWORD *v39; // [rsp+0h] [rbp-58h]
  int v40; // [rsp+0h] [rbp-58h]
  int v41; // [rsp+0h] [rbp-58h]
  _QWORD *v42; // [rsp+8h] [rbp-50h]
  unsigned __int8 v43; // [rsp+8h] [rbp-50h]
  unsigned __int64 v44; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)a1;
  v44 = __readfsqword(0x28u);
  if ( a2 == a3 )
  {
    v6 = 0;
    goto LABEL_37;
  }
  v6 = 2;
  if ( ((unsigned __int8)(a2 ^ a3) & ((unsigned __int8)(a2 ^ a3) - 1)) != 0 )
  {
LABEL_37:
    v9 = sub_84A700((unsigned int *)v4, 3, 2, 0, 13, 0);
    if ( *(_DWORD *)(a1 + 168) != 1 )
    {
      sub_848B50((unsigned int *)v4, 2, 127, 16843009 * a2);
      if ( a2 != a3 )
      {
LABEL_39:
        v10 = a3;
        goto LABEL_5;
      }
LABEL_40:
      sub_847F60((unsigned int *)v4, 32, 4, 0, 2, 0);
      sub_847EA0(v4, 2, 2);
      goto LABEL_6;
    }
    v33 = a2;
    v8 = 0;
LABEL_53:
    if ( *(_DWORD *)v4 )
      goto LABEL_58;
    v34 = *(_QWORD *)(v4 + 80);
    v35 = *(_QWORD *)(v34 + 8);
    v36 = v35 + 16;
    if ( (unsigned __int64)(v35 + 16) <= 0xFF0 )
    {
      v38 = (__m128 *)(v34 + v35 + 16);
      *(_QWORD *)(v34 + 8) = v36;
      if ( v38 )
        goto LABEL_57;
    }
    else
    {
      v43 = v33;
      v40 = v8;
      v37 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v4 + 56))(
                        4096,
                        *(_QWORD *)(*(_QWORD *)(v4 + 56) + 16LL));
      v8 = v40;
      v33 = v43;
      if ( v37 )
      {
        v37->m128_u64[0] = *(_QWORD *)(v4 + 80);
        *(_QWORD *)(v4 + 80) = v37;
        v38 = v37 + 1;
        v38[-1].m128_u64[1] = 16;
LABEL_57:
        *v38 = _mm_loadh_ps((const double *)(a1 + 368));
        *(_QWORD *)(a1 + 368) = v38;
        goto LABEL_58;
      }
      *(_DWORD *)v4 = 2;
    }
LABEL_58:
    v41 = v8;
    sub_848B50((unsigned int *)v4, 2, 127, 16843009 * v33);
    v10 = v41;
    if ( a2 != a3 )
    {
      if ( v41 )
        goto LABEL_5;
      goto LABEL_39;
    }
    goto LABEL_40;
  }
  v7 = sub_84A700((unsigned int *)v4, 3, 2, 0, 13, 0);
  v8 = (unsigned __int8)(a2 ^ a3);
  v9 = v7;
  if ( *(_DWORD *)(a1 + 168) == 1 )
  {
    v6 = 1;
    v33 = a2 | a3;
    goto LABEL_53;
  }
  v6 = 1;
  sub_848B50((unsigned int *)v4, 2, 127, 16843009 * (unsigned __int8)(a3 | a2));
  v10 = (unsigned __int8)(a2 ^ a3);
LABEL_5:
  sub_848B50((unsigned int *)v4, 3, 127, 16843009 * v10);
  sub_847F60((unsigned int *)v4, 32, 4, 0, 2, 0);
  sub_847EA0(v4, 2, 2);
  sub_847EA0(v4, 3, 3);
LABEL_6:
  if ( !*(_DWORD *)v4 )
  {
    *(_DWORD *)(v4 + 144) = 0;
    sub_8498A0((unsigned int *)v4, 0x25232120u, 2, 0, 2, 0, 127, -16);
    if ( !*(_DWORD *)v4 )
    {
      *(_DWORD *)(v4 + 144) = 0;
      sub_8498A0((unsigned int *)v4, 0x25232120u, 4, 0, 4, 0, 127, 15);
    }
  }
  sub_847A70(v4, 67125248, 1, 0);
  for ( i = 0; i != 4; ++i )
  {
    v12 = i;
    sub_848E80((unsigned int *)v4, v6, v12, 0, 1u, 2u, 3u);
  }
  sub_848FF0((unsigned int *)v4);
  sub_849F80((unsigned int *)v4, 0x40u, 2, 0, 2, 0, 4u, 0);
  if ( !*(_DWORD *)v4 )
  {
    *(_DWORD *)(v4 + 144) = 0;
    sub_849DA0((unsigned int *)v4, 40, 0, 1, 0, 1, 0, 4, 0);
  }
  v13 = sub_84A700((unsigned int *)v4, 1, 1, 0, 127, 0);
  sub_849F80((unsigned int *)v4, 0x42u, 2, 0, 2, 0, 4u, 0);
  v39 = sub_845240(v4);
  sub_849F80((unsigned int *)v4, 0x40u, 2, 0, 2, 0, 0x7Fu, 16);
  v42 = sub_84A700((unsigned int *)v4, 3, 2, 0, 13, 0);
  if ( *(_DWORD *)(a1 + 168) == 1 && !*(_DWORD *)v4 )
  {
    v28 = *(_QWORD *)(v4 + 80);
    v29 = *(_QWORD *)(v28 + 8);
    v30 = v29 + 16;
    if ( (unsigned __int64)(v29 + 16) <= 0xFF0 )
    {
      v32 = (__m128 *)(v28 + v29 + 16);
      *(_QWORD *)(v28 + 8) = v30;
      if ( !v32 )
        goto LABEL_14;
    }
    else
    {
      v31 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v4 + 56))(
                        4096,
                        *(_QWORD *)(*(_QWORD *)(v4 + 56) + 16LL));
      if ( !v31 )
      {
        *(_DWORD *)v4 = 2;
        goto LABEL_14;
      }
      v31->m128_u64[0] = *(_QWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 80) = v31;
      v32 = v31 + 1;
      v32[-1].m128_u64[1] = 16;
    }
    *v32 = _mm_loadh_ps((const double *)(a1 + 368));
    *(_QWORD *)(a1 + 368) = v32;
  }
LABEL_14:
  sub_847A70(v4, 67125248, 1, 0);
  for ( j = 0; j != 4; ++j )
  {
    v15 = j;
    sub_848E80((unsigned int *)v4, v6, v15, 0, 1u, 2u, 3u);
  }
  sub_848FF0((unsigned int *)v4);
  v16 = sub_84A700((unsigned int *)v4, 0, 1, 0, 127, 0);
  if ( v16 && v39 )
  {
    v16[2] &= ~1uLL;
    v16[3] = v39;
  }
  v17 = sub_845240(v4);
  if ( v17 && v13 )
  {
    v13[2] &= ~1uLL;
    v13[3] = v17;
  }
  if ( !*(_DWORD *)v4 )
  {
    v18 = sub_8441E0(v4, 4);
    if ( v18 )
    {
      *(_BYTE *)v18 = 3;
      *(_QWORD *)(v4 + 120) += 3LL;
      *(_WORD *)((char *)v18 + 1) = -17393;
      *((_BYTE *)v18 + 3) = -64;
    }
  }
  sub_849F80((unsigned int *)v4, 0x40u, 2, 0, 2, 0, 1u, 0);
  if ( *(_DWORD *)(a1 + 168) == 1 )
  {
    sub_84A700((unsigned int *)v4, 3, 2, 0, 13, 0);
    if ( !*(_DWORD *)v4 )
    {
      v23 = *(_QWORD *)(v4 + 80);
      v24 = *(_QWORD *)(v23 + 8);
      v25 = v24 + 16;
      if ( (unsigned __int64)(v24 + 16) <= 0xFF0 )
      {
        v27 = (__m128 *)(v23 + v24 + 16);
        *(_QWORD *)(v23 + 8) = v25;
        if ( !v27 )
          return v44 - __readfsqword(0x28u);
      }
      else
      {
        v26 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v4 + 56))(
                          4096,
                          *(_QWORD *)(*(_QWORD *)(v4 + 56) + 16LL));
        if ( !v26 )
        {
          *(_DWORD *)v4 = 2;
          return v44 - __readfsqword(0x28u);
        }
        v26->m128_u64[0] = *(_QWORD *)(v4 + 80);
        *(_QWORD *)(v4 + 80) = v26;
        v27 = v26 + 1;
        v27[-1].m128_u64[1] = 16;
      }
      *v27 = _mm_loadh_ps((const double *)(a1 + 368));
      *(_QWORD *)(a1 + 368) = v27;
    }
    return v44 - __readfsqword(0x28u);
  }
  v19 = sub_845240(v4);
  if ( v9 && v19 )
  {
    v9[2] &= ~1uLL;
    v9[3] = v19;
  }
  v20 = sub_845240(v4);
  if ( v20 && v42 )
  {
    v42[2] &= ~1uLL;
    v42[3] = v20;
  }
  if ( !*(_DWORD *)v4 )
  {
    *(_DWORD *)(v4 + 144) = 0;
    v21 = sub_844340(v4, 1u, 2, 0, 13, 0);
    if ( v21 )
      *v21 = 59;
  }
  return sub_847920((unsigned int *)v4, 4, 2, 13, 0, 2);
}

