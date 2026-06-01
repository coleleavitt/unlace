__int64 __fastcall sub_367720(
        int a1,
        _QWORD *a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 v12; // rbp
  int v14; // edi
  int v15; // eax
  int v16; // edx
  bool v17; // sf
  int v18; // eax
  __int64 (__fastcall *v19)(__int64); // rax
  int v20; // r12d
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int *v23; // r14
  int v24; // ebx
  int v25; // eax
  int v26; // edx
  bool v27; // r13
  _BOOL8 v28; // rdx
  __int64 v29; // rax
  double v30; // xmm4_8
  double v31; // xmm5_8
  _DWORD *v32; // rax
  __int64 v33; // rdx
  int v34; // edx
  unsigned int v35; // eax
  unsigned int v36; // edi
  __int64 v37; // rdi
  int v38; // eax
  int v39; // edx
  int v40; // ecx
  int v41; // eax
  __int64 default_encoding_idx; // rdi
  int v43; // ebx
  __int64 v44; // rdi
  int v45; // eax
  int encoding_bpu; // eax
  int v47; // edx
  __int64 v48; // [rsp+8h] [rbp-80h]
  int v49; // [rsp+14h] [rbp-74h]
  __int64 v50; // [rsp+18h] [rbp-70h]
  __int64 v51; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v52[2]; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v53; // [rsp+48h] [rbp-40h]

  v10 = *a2;
  v53 = __readfsqword(0x28u);
  v11 = *(__int64 (__fastcall **)(__int64))(v10 + 72);
  if ( v11 == form_actions_impl_t__::vfunc_9 )
    v12 = a2[4];
  else
    v12 = v11((__int64)a2);
  if ( a1 == 100 )
  {
    v51 = 3;
    memset(v52, 0, 24);
    v29 = qvector_reserve(v52, 0, 7, 1);
    *(_QWORD *)&v52[0] = v29;
    *((_QWORD *)&v52[0] + 1) = 7;
    *(_DWORD *)v29 = 1819898995;
    *(_WORD *)(v29 + 4) = 29541;
    *(_BYTE *)(*(_QWORD *)&v52[0] + 6LL) = 0;
    sub_365A90((unsigned int *)&v51, 0.0, a4, a5, a6, v30, v31, a9, a10);
    sub_34A910(a2);
    if ( *(_QWORD *)&v52[0] )
    {
      *((_QWORD *)&v52[0] + 1) = 0;
      qfree(*(_QWORD *)&v52[0], nullptr);
    }
  }
  else
  {
    if ( a1 > 100 )
    {
      if ( a1 == 101 )
      {
        if ( *(_BYTE *)(v12 + 40) )
        {
          v41 = sub_3672D0(*(unsigned __int8 *)(v12 + 27), 0, 1u);
          default_encoding_idx = (unsigned int)v41;
          if ( v41 >= 0 )
          {
            v43 = (v41 << 24) | *(_DWORD *)(v12 + 24) & 0xFFFFFF;
            if ( !v41 )
            {
              v44 = 2;
              v45 = *(_BYTE *)(v12 + 24) & 3;
              if ( v45 != 1 )
                v44 = 3 * (unsigned int)(v45 == 2) + 1;
              default_encoding_idx = (unsigned int)get_default_encoding_idx(v44);
            }
            encoding_bpu = get_encoding_bpu(default_encoding_idx);
            v47 = 1;
            if ( encoding_bpu != 2 )
              v47 = 2 * (encoding_bpu == 4);
            *(_DWORD *)(v12 + 28) = v47 | v43 & 0xFFFFFFFC;
            (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 64LL))(a2, 1);
          }
        }
        else
        {
          v14 = *(_DWORD *)(v12 + 28);
          if ( v14 != -1 )
            v14 = HIBYTE(*(_DWORD *)(v12 + 28));
          v15 = sub_3672D0(v14, 0, 0);
          v16 = v15 << 24;
          v17 = v15 < 0;
          v18 = -1;
          if ( !v17 )
            v18 = v16;
          *(_DWORD *)(v12 + 28) = v18;
          v19 = *(__int64 (__fastcall **)(__int64))(*a2 + 72LL);
          if ( v19 == form_actions_impl_t__::vfunc_9 )
            v50 = a2[4];
          else
            v50 = v19((__int64)a2);
          v20 = -1;
          v21 = *(_DWORD *)(v50 + 28);
          if ( v21 == -1 )
          {
            v49 = -1;
          }
          else
          {
            v22 = HIBYTE(v21);
            v49 = 0;
            if ( v22 )
            {
              v49 = v22;
              v20 = get_encoding_bpu(v22);
            }
          }
          v48 = *(_QWORD *)v50 + 8LL * *(_QWORD *)(v50 + 8);
          if ( *(_QWORD *)v50 == v48 )
          {
            v24 = -1;
          }
          else
          {
            v23 = *(unsigned int **)v50;
            v24 = -1;
            do
            {
              if ( v20 > 0 )
              {
                v25 = 2;
                v26 = v23[1] & 3;
                if ( v26 != 1 )
                  v25 = 3 * (v26 == 2) + 1;
                v27 = v20 == v25;
                v28 = v20 == v25;
              }
              else
              {
                v28 = 1;
                v27 = 1;
              }
              (*(void (__fastcall **)(_QWORD *, _QWORD, _BOOL8))(*a2 + 16LL))(a2, *v23, v28);
              if ( v24 == -1 && v27 && v49 != -1 )
                v24 = (v49 << 24) | v23[1] & 0xFFFFFF;
              v23 += 2;
            }
            while ( (unsigned int *)v48 != v23 );
          }
          v51 = 0;
          v52[0] = 0;
          sub_34C220((__int64)&v51, v50, 0.0, a4, a5);
          (*(void (__fastcall **)(_QWORD *, __int64, __int64 *))(*a2 + 8LL))(a2, 101, &v51);
          if ( v51 )
          {
            *(_QWORD *)&v52[0] = 0;
            qfree(v51, (_BYTE *)&qword_60 + 5);
          }
          *(_DWORD *)(v12 + 32) = v24;
        }
        return 1;
      }
    }
    else
    {
      if ( a1 == -2 )
      {
        v36 = *(_DWORD *)(v12 + 28);
        if ( v36 )
        {
          v37 = HIBYTE(v36);
          if ( (_DWORD)v37 )
          {
            v38 = get_encoding_bpu(v37);
            v39 = 2;
            v40 = *(_DWORD *)(v12 + 28) & 3;
            if ( v40 != 1 )
              v39 = 3 * (v40 == 2) + 1;
            if ( v38 != v39 )
              *(_DWORD *)(v12 + 28) = *(_DWORD *)(v12 + 32);
          }
        }
        return 1;
      }
      if ( a1 == -1 )
      {
        sub_34A910(a2);
        return 1;
      }
    }
    v32 = *(_DWORD **)v12;
    v33 = *(_QWORD *)v12 + 8LL * *(_QWORD *)(v12 + 8);
    if ( v33 != *(_QWORD *)v12 )
    {
      if ( *v32 == a1 )
      {
LABEL_39:
        v34 = *(_DWORD *)(v12 + 28);
        v35 = v32[1];
        if ( v34 != -1 )
          v35 = v34 & 0xFF000000 | v35 & 0xFFFFFF;
        *(_DWORD *)(v12 + 28) = v35;
        (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 64LL))(a2, 1);
      }
      else
      {
        while ( 1 )
        {
          v32 += 2;
          if ( (_DWORD *)v33 == v32 )
            break;
          if ( *v32 == a1 )
            goto LABEL_39;
        }
      }
    }
  }
  return 1;
}
