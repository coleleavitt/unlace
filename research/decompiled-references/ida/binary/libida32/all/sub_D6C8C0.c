__int64 __fastcall sub_D6C8C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rsi
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // r13d
  unsigned int v24; // edi
  unsigned int v25; // r9d
  unsigned int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rsi
  unsigned int v29; // esi
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rdx
  void *v33; // rax
  unsigned __int64 v34; // rdx
  int v35; // eax
  void *v36; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v37; // [rsp+8h] [rbp-70h]
  void *v38; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v39; // [rsp+18h] [rbp-60h]
  void *v40; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v41; // [rsp+28h] [rbp-50h]
  void *v42; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v43; // [rsp+38h] [rbp-40h]

  if ( *(_DWORD *)(a2 + 16) != 2 )
    return 0;
  if ( !sub_9C8B50(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          a3,
          a4,
          a5) )
    return 0;
  LOBYTE(v12) = sub_9C8B50(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL),
                  a2,
                  v9,
                  v10,
                  v11);
  v5 = v12;
  if ( !(_BYTE)v12 )
    return 0;
  v15 = a1[23];
  v16 = 13;
  v17 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  v18 = *(_QWORD *)(a2 + v17 + 32);
  if ( (*(_BYTE *)(v18 + 1) & 6) == 0 )
  {
    v35 = sub_D66A20(v15, v18, v17, v13, v14);
    v15 = a1[23];
    v16 = v35;
    v17 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  }
  v19 = *(_QWORD *)(a2 + v17 + 40);
  v20 = 13;
  if ( (*(_BYTE *)(v19 + 1) & 6) == 0 )
    v20 = sub_D66A20(v15, v19, 13, v13, v14);
  sub_D67460((__int64)&v36, a1[22], v20);
  sub_D67460((__int64)&v38, a1[22], v16);
  v23 = v39;
  v41 = v39;
  if ( v39 > 0x40 )
  {
    sub_21E1730(&v40, 0, 0);
    v22 = v39;
    v24 = v41;
    goto LABEL_13;
  }
  v40 = nullptr;
  if ( v39 )
  {
    v24 = v39;
    v22 = v39;
LABEL_13:
    if ( v37 <= 0x40 )
    {
      v29 = 0;
      v30 = 0;
      do
      {
        v21 = v30;
        v31 = 1LL << v30;
        if ( ((1LL << v30) & (unsigned __int64)v36) != 0 )
        {
          v21 = (__int64)v38;
          if ( (unsigned int)v22 > 0x40 )
            v21 = *((_QWORD *)v38 + (v29 >> 6));
          if ( (v21 & (1LL << v29)) != 0 )
          {
            if ( v24 > 0x40 )
            {
              v21 = v30 >> 6;
              *((_QWORD *)v40 + v21) |= v31;
              ++v29;
            }
            else
            {
              ++v29;
              v40 = (void *)((unsigned __int64)v40 | v31);
            }
          }
          else
          {
            v32 = ~v31;
            if ( v24 > 0x40 )
            {
              v21 = v30 >> 6;
              *((_QWORD *)v40 + v21) &= v32;
              ++v29;
            }
            else
            {
              ++v29;
              v40 = (void *)((unsigned __int64)v40 & v32);
            }
          }
        }
        ++v30;
      }
      while ( v23 != v30 );
    }
    else
    {
      v25 = 0;
      v26 = 0;
      do
      {
        v28 = 1LL << v26;
        v21 = (__int64)v36;
        if ( ((1LL << v26) & *((_QWORD *)v36 + (v26 >> 6))) != 0 )
        {
          v21 = (__int64)v38;
          if ( (unsigned int)v22 > 0x40 )
            v21 = *((_QWORD *)v38 + (v25 >> 6));
          if ( ((1LL << v25) & v21) != 0 )
          {
            if ( v24 <= 0x40 )
            {
              ++v25;
              v40 = (void *)((unsigned __int64)v40 | v28);
            }
            else
            {
              *((_QWORD *)v40 + (v26 >> 6)) |= v28;
              ++v25;
            }
          }
          else
          {
            v27 = ~v28;
            if ( v24 <= 0x40 )
            {
              ++v25;
              v40 = (void *)(v27 & (unsigned __int64)v40);
            }
            else
            {
              *((_QWORD *)v40 + (v26 >> 6)) &= v27;
              ++v25;
            }
          }
        }
        ++v26;
      }
      while ( v23 != v26 );
    }
    v33 = v40;
    goto LABEL_35;
  }
  v24 = 0;
  v33 = nullptr;
LABEL_35:
  v34 = *(_QWORD *)(a2 + 8);
  v43 = v24;
  v42 = v33;
  v41 = 0;
  sub_D6C820(a1, (__int64)&v42, v34, v21, v22);
  if ( v43 > 0x40 && v42 )
    operator delete[](v42);
  if ( v41 > 0x40 && v40 )
    operator delete[](v40);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  if ( v37 > 0x40 && v36 )
    operator delete[](v36);
  return v5;
}

