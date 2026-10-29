__int64 __fastcall sub_7CA7C0(_QWORD *a1, unsigned int a2)
{
  unsigned int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned int *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rsi
  int v14; // r15d
  int v15; // r14d
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r15
  unsigned int v20; // r10d
  __int64 v21; // r11
  __int64 (__fastcall *v22)(__int64); // rax
  _QWORD *v23; // rdi
  __int64 v24; // rax
  char *v25; // r15
  __int64 v26; // rdi
  __int64 v27; // rdx
  unsigned __int8 (__fastcall *v28)(_QWORD *, _QWORD); // rax
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rdx
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rdx
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+20h] [rbp-B8h]
  __int64 v40; // [rsp+20h] [rbp-B8h]
  char v41; // [rsp+2Bh] [rbp-ADh]
  unsigned int v42; // [rsp+2Ch] [rbp-ACh]
  unsigned int v43; // [rsp+2Ch] [rbp-ACh]
  __int64 v44; // [rsp+30h] [rbp-A8h]
  __int64 v45; // [rsp+30h] [rbp-A8h]
  _QWORD *v46; // [rsp+38h] [rbp-A0h]
  __m128i v47; // [rsp+40h] [rbp-98h] BYREF
  __int64 v48; // [rsp+50h] [rbp-88h]
  __m128i v49; // [rsp+60h] [rbp-78h] BYREF
  __int64 v50; // [rsp+70h] [rbp-68h]
  __m128i v51; // [rsp+80h] [rbp-58h] BYREF

  sub_7F1EC0(a1 + 20);
  result = a2 >> 1;
  if ( *((_BYTE *)a1 + 168) )
  {
    v8 = a1[25];
    if ( !v8 )
      return result;
    if ( (unsigned int)result >= *(_DWORD *)(v8 - 4) )
      return result;
    v4 = a2 >> 1;
    if ( !*(_BYTE *)(v8 + (unsigned int)result) )
      return result;
  }
  v9 = a1[291];
  if ( !v9 )
    return result;
  if ( (unsigned int)result >= *(_DWORD *)(v9 - 4) )
    return result;
  v10 = *(unsigned int **)(v9 + 8 * result);
  if ( !v10 )
    return result;
  result = a1[215];
  if ( !result )
    return result;
  v11 = *v10;
  if ( (unsigned int)v11 >= *(_DWORD *)(result - 4) )
    return result;
  v12 = *(_QWORD *)(result + 8 * v11);
  if ( !v12 )
    return result;
  v13 = *(_QWORD *)(result + 8 * v11);
  v46 = a1 + 199;
  v14 = *(_DWORD *)(v12 + 24);
  v41 = a2 & 1;
  v47.m128i_i8[8] = 0;
  v47.m128i_i32[0] = 2;
  v48 = (16 * a2) | 1;
  v15 = (a2 & 1) == 0 ? 1 : -1;
  result = sub_13D74D0((int)a1 + 1592, v13, v15, v4, v5, v6, (__int128)_mm_load_si128(&v47), v48);
  if ( !v14 && *(_BYTE *)(v12 + 13) )
  {
    v16 = v12;
    v19 = 0;
    while ( v19 == v12 )
    {
      if ( v19 == v16 )
        goto LABEL_29;
      result = *(unsigned int *)(v16 + 28);
      if ( (_DWORD)result != 0x7FFFFFFF && v15 != *(_DWORD *)(v16 + 24) )
      {
        result = (a2 & 1) + 2 * (_DWORD)result;
        v20 = result;
        v21 = 4 * result;
        if ( *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4 * result) != 1 )
          goto LABEL_17;
      }
LABEL_22:
      v16 = *(_QWORD *)(v16 + 56);
    }
    result = *(unsigned int *)(v16 + 28);
    if ( (_DWORD)result != 0x7FFFFFFF && v15 != *(_DWORD *)(v16 + 24) )
    {
      result = (a2 & 1) + 2 * (_DWORD)result;
      v20 = result;
      v21 = 4 * result;
      if ( *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4 * result) != 1 )
      {
LABEL_17:
        v22 = *(__int64 (__fastcall **)(__int64))(*a1 + 432LL);
        if ( v22 == sub_79EFF0 )
        {
          v23 = a1 + 268;
        }
        else
        {
          v45 = v16;
          v43 = v20;
          v40 = v21;
          v38 = v22((__int64)a1);
          v16 = v45;
          v20 = v43;
          v21 = v40;
          v23 = (_QWORD *)v38;
        }
        v44 = v16;
        v39 = v21;
        v42 = v20;
        v24 = sub_180C100(v23, 24);
        *(_DWORD *)(v24 + 8) = 2;
        *(_QWORD *)(v24 + 16) = v12;
        *(_QWORD *)v24 = a1;
        sub_7CA4E0((__int64)a1, v42, v24);
        v16 = v44;
        result = *(_QWORD *)(a1[3] + 3288LL);
        if ( *(_DWORD *)(result + v39) == -1 )
          return result;
      }
    }
    if ( !v19 )
      v19 = v16;
    goto LABEL_22;
  }
LABEL_29:
  v25 = (char *)(v12 + 88);
  if ( *(int *)(v12 + 88) >> 8 != -1 )
  {
    do
    {
      v26 = *(_QWORD *)(a1[300] + 8LL * (unsigned int)*v25);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 112LL))(v26, a2);
      v25 = *((char **)v25 + 1);
    }
    while ( v25 );
  }
  if ( *(_BYTE *)(v12 + 14) )
  {
    if ( *(_DWORD *)(v12 + 32) > 1u
      || (v37 = *(_QWORD *)(v12 + 48)) != 0 && *(_DWORD *)(v37 - 4)
      || (result = *(unsigned int *)(v12 + 152), (_DWORD)result) )
    {
      v27 = a1[18];
      v28 = *(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 392LL);
      if ( v41 )
      {
        if ( !v28(a1, *(_QWORD *)(v27 + 864)) )
        {
          sub_1872CE0("");
          sub_1873130(114, 643);
        }
        v32 = a1[215];
        if ( !v32 )
          goto LABEL_38;
        v33 = **(unsigned int **)(a1[18] + 864LL);
        if ( (unsigned int)v33 < *(_DWORD *)(v32 - 4) )
          goto LABEL_37;
      }
      else
      {
        if ( !v28(a1, *(_QWORD *)(v27 + 856)) )
        {
          sub_1872CE0("");
          sub_1873130(114, 638);
        }
        v32 = a1[215];
        if ( !v32 )
          goto LABEL_38;
        v33 = **(unsigned int **)(a1[18] + 856LL);
        if ( (unsigned int)v33 < *(_DWORD *)(v32 - 4) )
        {
LABEL_37:
          v32 = *(_QWORD *)(v32 + 8 * v33);
LABEL_38:
          v49.m128i_i32[0] = 2;
          v49.m128i_i8[8] = 0;
          v50 = (16 * a2) | 1;
          v34 = _mm_load_si128(&v49);
          result = sub_13D9120((_DWORD)v46, v12, v32, v29, v30, v31, v34.m128i_i32[0], v34.m128i_i32[2], v50);
          goto LABEL_39;
        }
      }
      LODWORD(v32) = 0;
      goto LABEL_38;
    }
  }
LABEL_39:
  if ( *(_BYTE *)(v12 + 15) )
  {
    if ( v41 )
    {
      return sub_13D7320(v46, v12);
    }
    else
    {
      v51.m128i_i32[0] = 2;
      v35 = *(_QWORD *)(v12 + 184);
      v51.m128i_i8[8] = 0;
      v36 = _mm_load_si128(&v51);
      return sub_13D9120(
               (_DWORD)v46,
               *(_QWORD *)(v12 + 176),
               v35,
               v16,
               v17,
               v18,
               v36.m128i_i32[0],
               v36.m128i_i32[2],
               (16 * a2) | 1);
    }
  }
  return result;
}

