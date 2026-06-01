__int64 __fastcall sub_14660A0(__int64 a1, unsigned int a2, __m128i a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 result; // rax
  char v13; // dl
  __int64 v14; // rdi
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  _QWORD *v17; // r12
  __int64 *v18; // rdi
  __int64 v19; // rcx
  _DWORD *v20; // rax
  _DWORD *v21; // rdx
  __int64 v22; // [rsp+8h] [rbp-50h] BYREF
  __int64 v23[4]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v24; // [rsp+30h] [rbp-28h]

  v23[0] = (__int64)"<scratch space>";
  v24 = 259;
  if ( a2 < 0xFDC )
    a2 = 4060;
  *(double *)a3.m128i_i64 = sub_2230700(&v22, a2, v23);
  v4 = v22;
  v5 = *(_QWORD **)a1;
  v22 = 0;
  v6 = *(_QWORD *)(v4 + 8);
  v23[0] = v4;
  *(_QWORD *)(a1 + 8) = v6;
  v7 = (unsigned int)sub_10270C0(v5, v23, 0, 0, 0, 0, a3);
  if ( v23[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23[0] + 8LL))(v23[0]);
  v10 = *(_QWORD **)a1;
  LOBYTE(v23[0]) = 0;
  if ( (unsigned int)(v7 + 1) <= 1 )
    goto LABEL_13;
  if ( (int)v7 < 0 )
  {
    v15 = (unsigned int)(-2 - v7);
    v16 = *(_QWORD *)(v10[40] + 8LL * ((unsigned int)v15 >> 6));
    if ( _bittest64(&v16, v15) )
    {
      v17 = (_QWORD *)(v10[34] + 8 * ((unsigned __int64)(int)v15 >> 5));
      if ( *v17 )
      {
        v11 = *v17 + 24 * (v15 & 0x1F);
        goto LABEL_8;
      }
      v18 = (__int64 *)(v10[36] & 0xFFFFFFFFFFFFFFF8LL);
      v19 = *v18;
      v18[10] += 768;
      v20 = (_DWORD *)((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v18[1] >= (unsigned __int64)(v20 + 192) && v19 )
        *v18 = (__int64)(v20 + 192);
      else
        v20 = (_DWORD *)sub_986170((__int64)v18, 768, 768, 3, v8, v9);
      *v17 = v20;
      v21 = v20 + 192;
      do
      {
        *v20 = 0;
        v20 += 6;
        *((_OWORD *)v20 - 1) = 0;
        *((_QWORD *)v20 - 1) = 0;
      }
      while ( v20 != v21 );
      v13 = v23[0];
      v11 = *v17 + 24 * (v15 & 0x1F);
    }
    else
    {
      v11 = sub_101F930((__int64)v10, v15, v23);
      v13 = v23[0];
    }
    if ( v13 )
      goto LABEL_13;
    goto LABEL_8;
  }
  v11 = v10[23] + 24 * v7;
LABEL_8:
  if ( v11 && *(char *)(v11 + 3) >= 0 )
  {
    result = *(_DWORD *)v11 & 0x7FFFFFFF;
    goto LABEL_14;
  }
LABEL_13:
  result = 0;
LABEL_14:
  v14 = v22;
  *(_DWORD *)(a1 + 16) = result;
  *(_DWORD *)(a1 + 20) = 0;
  if ( v14 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  return result;
}
