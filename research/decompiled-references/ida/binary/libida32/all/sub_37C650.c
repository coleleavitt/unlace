unsigned __int64 __fastcall sub_37C650(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // r13
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r14
  void *v10; // rdi
  __int64 v11; // r14
  _QWORD *v12; // r13
  unsigned __int64 v13; // rdx
  size_t v14; // r9
  __int64 v15; // r8
  size_t v16; // r11
  __int64 v17; // rsi
  __int64 v18; // rsi
  _QWORD **v19; // rax
  __int64 (__fastcall *v20)(__int64, __int64, unsigned int, __int64, unsigned int, unsigned int, __int64); // r11
  unsigned __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  size_t v25; // [rsp+0h] [rbp-80h]
  __int64 v26; // [rsp+8h] [rbp-78h]
  size_t v27; // [rsp+10h] [rbp-70h]
  unsigned __int64 v28; // [rsp+18h] [rbp-68h]
  void *src; // [rsp+30h] [rbp-50h] BYREF
  __int128 v31; // [rsp+38h] [rbp-48h]
  unsigned __int64 v32; // [rsp+48h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 96) )
    return v32 - __readfsqword(0x28u);
  v3 = *(_QWORD **)(qword_2CA1698 + 1440);
  v4 = v3;
  if ( !v3[3] )
    return v32 - __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 120);
  v7 = v3[4];
  if ( !v6 )
  {
    if ( !v7 )
      goto LABEL_6;
LABEL_32:
    if ( !under_debugger )
      interr(1408);
    BUG();
  }
  if ( v6 - 1 < v7 )
    goto LABEL_32;
  if ( v7 )
  {
    v21 = v7 + 1;
    if ( v6 < v7 + 1 )
    {
      v23 = *(_QWORD *)(a1 + 112);
      if ( *(_QWORD *)(a1 + 128) < v21 )
      {
        v24 = qvector_reserve(a1 + 112, v23, v7 + 1, 1);
        v6 = *(_QWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 112) = v24;
        v23 = v24;
      }
      memset((void *)(v23 + v6), 0, v21 - v6);
      *(_QWORD *)(a1 + 120) = v21;
    }
    else if ( v6 != v7 + 1 )
    {
      *(_QWORD *)(a1 + 120) = v21;
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 112) + v7) = 0;
    goto LABEL_8;
  }
LABEL_6:
  v10 = *(void **)(a1 + 112);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 128) = 0;
  }
LABEL_8:
  v11 = *v4 + 32LL * v4[1];
  if ( v11 != *v4 )
  {
    v12 = (_QWORD *)*v4;
    do
    {
      src = nullptr;
      v18 = *(unsigned int *)(a1 + 16);
      v31 = 0;
      v19 = (_QWORD **)v12[2];
      v20 = (__int64 (__fastcall *)(__int64, __int64, unsigned int, __int64, unsigned int, unsigned int, __int64))(*v19)[2];
      if ( v20 == sub_37C520 )
        ((void (__fastcall *)(void **, __int64, _QWORD, _QWORD, __int64))v19[1])(
          &src,
          v18,
          (unsigned int)*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL),
          a3,
          a2);
      else
        v20(v12[2], (__int64)&src, v18, a1 + 212, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL), a3, a2);
      (*(void (__fastcall **)(__int64, void **, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, &src, *v12);
      v13 = v31;
      if ( (_QWORD)v31 )
      {
        v14 = v31 - 1;
        if ( (_QWORD)v31 != 1 )
        {
          v15 = *(_QWORD *)(a1 + 120);
          v16 = v31 - 1;
          if ( v15 )
          {
            --v15;
            v16 = v14 + v15;
            v13 = v31 + v15;
          }
          v17 = *(_QWORD *)(a1 + 112);
          if ( *(_QWORD *)(a1 + 128) < v13 )
          {
            v25 = v16;
            v26 = v15;
            v27 = v31 - 1;
            v28 = v13;
            v22 = qvector_reserve(a1 + 112, v17, v13, 1);
            v16 = v25;
            v15 = v26;
            *(_QWORD *)(a1 + 112) = v22;
            v17 = v22;
            v14 = v27;
            v13 = v28;
          }
          *(_QWORD *)(a1 + 120) = v13;
          *(_BYTE *)(v17 + v16) = 0;
          memcpy((void *)(v15 + *(_QWORD *)(a1 + 112)), src, v14);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v31 = 0;
        qfree(src);
      }
      v12 += 4;
    }
    while ( (_QWORD *)v11 != v12 );
  }
  return v32 - __readfsqword(0x28u);
}

