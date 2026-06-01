__int64 __fastcall sub_D90990(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  unsigned int v22; // r13d
  __int64 v23; // r8
  unsigned int v24; // r9d
  unsigned int v25; // esi
  unsigned int v26; // eax
  __int64 v27; // rdx
  unsigned __int64 v28; // r14
  __int64 v29; // rdx
  unsigned int v30; // edx
  unsigned int v31; // eax
  unsigned __int64 v32; // rdi
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
  if ( !sub_9EC890(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          a3,
          a4,
          a5) )
    return 0;
  LOBYTE(v12) = sub_9EC890(
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
    v35 = sub_D8A760(v15, v18, v17, v13, v14);
    v15 = a1[23];
    v16 = v35;
    v17 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  }
  v19 = *(_QWORD *)(a2 + v17 + 40);
  v20 = 13;
  if ( (*(_BYTE *)(v19 + 1) & 6) == 0 )
    v20 = sub_D8A760(v15, v19, 13, v13, v14);
  sub_D8B1A0((__int64)&v36, a1[22], v20);
  sub_D8B1A0((__int64)&v38, a1[22], v16);
  v22 = v39;
  v41 = v39;
  if ( v39 > 0x40 )
  {
    sub_2205470(&v40, 0, 0);
    v24 = v39;
    v23 = v41;
    goto LABEL_13;
  }
  v40 = nullptr;
  if ( v39 )
  {
    v23 = v39;
    v24 = v39;
LABEL_13:
    if ( v37 <= 0x40 )
    {
      v30 = 0;
      v31 = 0;
      do
      {
        v21 = v31;
        if ( ((1LL << v31) & (unsigned __int64)v36) != 0 )
        {
          v32 = (unsigned __int64)v38;
          if ( v24 > 0x40 )
            v32 = *((_QWORD *)v38 + (v31 >> 6));
          v21 = 1LL << v30;
          if ( (v32 & (1LL << v31)) != 0 )
          {
            if ( (unsigned int)v23 > 0x40 )
            {
              *((_QWORD *)v40 + (v30 >> 6)) |= 1LL << v30;
              ++v30;
            }
            else
            {
              v21 |= (unsigned __int64)v40;
              ++v30;
              v40 = (void *)v21;
            }
          }
          else
          {
            v21 = ~v21;
            if ( (unsigned int)v23 > 0x40 )
            {
              *((_QWORD *)v40 + (v30++ >> 6)) &= v21;
            }
            else
            {
              v21 &= (unsigned __int64)v40;
              ++v30;
              v40 = (void *)v21;
            }
          }
        }
        ++v31;
      }
      while ( v22 != v31 );
    }
    else
    {
      v25 = 0;
      v26 = 0;
      do
      {
        v21 = (__int64)v36;
        v27 = v26 >> 6;
        if ( ((1LL << v26) & *((_QWORD *)v36 + v27)) != 0 )
        {
          v28 = (unsigned __int64)v38;
          if ( v24 > 0x40 )
            v28 = *((_QWORD *)v38 + v27);
          v21 = v25;
          v29 = 1LL << v25;
          if ( ((1LL << v26) & v28) != 0 )
          {
            if ( (unsigned int)v23 <= 0x40 )
            {
              ++v25;
              v40 = (void *)((unsigned __int64)v40 | v29);
            }
            else
            {
              *((_QWORD *)v40 + (v25++ >> 6)) |= v29;
            }
          }
          else
          {
            v21 = ~v29;
            if ( (unsigned int)v23 <= 0x40 )
            {
              ++v25;
              v40 = (void *)(v21 & (unsigned __int64)v40);
            }
            else
            {
              *((_QWORD *)v40 + (v25++ >> 6)) &= v21;
            }
          }
        }
        ++v26;
      }
      while ( v22 != v26 );
    }
    v33 = v40;
    goto LABEL_35;
  }
  v23 = 0;
  v33 = nullptr;
LABEL_35:
  v34 = *(_QWORD *)(a2 + 8);
  v43 = v23;
  v42 = v33;
  v41 = 0;
  sub_D90560(a1, (__int64)&v42, v34, v21, v23);
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
