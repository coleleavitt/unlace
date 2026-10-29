__int64 __fastcall sub_12CA30(int a1, __int64 *a2, double a3, double a4, __m128 a5)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v11; // edi
  int v12; // r12d
  int v13; // eax
  int v14; // edx
  bool v15; // sf
  int v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  unsigned int *v19; // r14
  int v20; // ebp
  int v21; // eax
  int v22; // edx
  bool v23; // r13
  _BOOL8 v24; // rdx
  _DWORD *v25; // rax
  __int64 v26; // rdx
  int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // edi
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  int v33; // eax
  int v34; // ebp
  int encoding_bpu; // eax
  int v36; // edx
  __int64 v37; // [rsp+8h] [rbp-70h]
  int v38; // [rsp+14h] [rbp-64h]
  __int64 v39; // [rsp+18h] [rbp-60h]
  __int64 v40; // [rsp+20h] [rbp-58h] BYREF
  __int128 v41; // [rsp+28h] [rbp-50h]
  unsigned __int64 v42; // [rsp+38h] [rbp-40h]

  v5 = *a2;
  v42 = __readfsqword(0x28u);
  v6 = (*(__int64 (__fastcall **)(__int64 *))(v5 + 72))(a2);
  if ( a1 == 100 )
    return 1;
  v7 = v6;
  if ( a1 > 100 )
  {
    if ( a1 == 101 )
    {
      if ( *(_BYTE *)(v6 + 40) )
      {
        v33 = sub_12C710(*(unsigned __int8 *)(v6 + 27), 0, 1);
        if ( v33 >= 0 )
        {
          v34 = (v33 << 24) | *(_DWORD *)(v7 + 24) & 0xFFFFFF;
          if ( !v33 )
            get_default_encoding_idx();
          encoding_bpu = get_encoding_bpu();
          v36 = 1;
          if ( encoding_bpu != 2 )
            v36 = 2 * (encoding_bpu == 4);
          *(_DWORD *)(v7 + 28) = v36 | v34 & 0xFFFFFFFC;
          (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 64))(a2, 1);
        }
      }
      else
      {
        v11 = *(_DWORD *)(v6 + 28);
        v12 = -1;
        if ( v11 != -1 )
          v11 >>= 24;
        v13 = sub_12C710(v11, 0, 0);
        v14 = v13 << 24;
        v15 = v13 < 0;
        v16 = -1;
        if ( !v15 )
          v16 = v14;
        *(_DWORD *)(v7 + 28) = v16;
        v39 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 72))(a2);
        v17 = *(_DWORD *)(v39 + 28);
        if ( v17 == -1 )
        {
          v38 = -1;
        }
        else
        {
          v18 = HIBYTE(v17);
          v38 = 0;
          if ( v18 )
          {
            v38 = v18;
            v12 = get_encoding_bpu();
          }
        }
        v37 = *(_QWORD *)v39 + 8LL * *(_QWORD *)(v39 + 8);
        if ( *(_QWORD *)v39 == v37 )
        {
          v20 = -1;
        }
        else
        {
          v19 = *(unsigned int **)v39;
          v20 = -1;
          do
          {
            if ( v12 > 0 )
            {
              v21 = 2;
              v22 = v19[1] & 3;
              if ( v22 != 1 )
                v21 = 3 * (v22 == 2) + 1;
              v23 = v12 == v21;
              v24 = v12 == v21;
            }
            else
            {
              v24 = 1;
              v23 = 1;
            }
            (*(void (__fastcall **)(__int64 *, _QWORD, _BOOL8))(*a2 + 16))(a2, *v19, v24);
            if ( v20 == -1 && v23 && v38 != -1 )
              v20 = (v38 << 24) | v19[1] & 0xFFFFFF;
            v19 += 2;
          }
          while ( (unsigned int *)v37 != v19 );
        }
        v40 = 0;
        v41 = 0;
        sub_126AF0((__int64)&v40, v39, 0.0, a4, a5);
        (*(void (__fastcall **)(__int64 *, __int64, __int64 *))(*a2 + 8))(a2, 101, &v40);
        if ( v40 )
        {
          *(_QWORD *)&v41 = 0;
          qfree();
        }
        *(_DWORD *)(v7 + 32) = v20;
      }
      return 1;
    }
  }
  else
  {
    if ( a1 == -2 )
    {
      v29 = *(_DWORD *)(v6 + 28);
      if ( v29 && HIBYTE(v29) )
      {
        v30 = get_encoding_bpu();
        v31 = 2;
        v32 = *(_DWORD *)(v7 + 28) & 3;
        if ( v32 != 1 )
          v31 = 3 * (v32 == 2) + 1;
        if ( v30 != v31 )
          *(_DWORD *)(v7 + 28) = *(_DWORD *)(v7 + 32);
      }
      return 1;
    }
    if ( a1 == -1 )
    {
      v8 = getinf();
      v9 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 72))(a2);
      (*(void (__fastcall **)(__int64 *, _QWORD, bool))(*a2 + 24))(a2, *(unsigned int *)(v9 + 36), BYTE1(v8) != 0);
      return 1;
    }
  }
  v25 = *(_DWORD **)v6;
  v26 = *(_QWORD *)v7 + 8LL * *(_QWORD *)(v7 + 8);
  if ( v26 != *(_QWORD *)v7 )
  {
    if ( *v25 == a1 )
    {
LABEL_32:
      v27 = *(_DWORD *)(v7 + 28);
      v28 = v25[1];
      if ( v27 != -1 )
        v28 = v27 & 0xFF000000 | v28 & 0xFFFFFF;
      *(_DWORD *)(v7 + 28) = v28;
      (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 64))(a2, 1);
    }
    else
    {
      while ( 1 )
      {
        v25 += 2;
        if ( (_DWORD *)v26 == v25 )
          break;
        if ( *v25 == a1 )
          goto LABEL_32;
      }
    }
  }
  return 1;
}

