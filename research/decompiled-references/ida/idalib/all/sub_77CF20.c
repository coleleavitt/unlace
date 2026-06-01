__int64 __fastcall sub_77CF20(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r12
  char v5; // r13
  __int64 v6; // rax
  char v7; // r13
  __int64 v8; // rbx
  char v9; // r11
  __int64 v10; // r10
  __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  unsigned __int64 *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r9
  char v18; // al
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 *v23; // rbx
  unsigned __int64 *v24; // rdi
  __int64 v26; // rax
  __int64 v27; // r9
  void (__fastcall *v28)(__int64, __int64, __int64, __int64, unsigned __int64); // rax
  __int64 v29; // rax
  char v30; // al
  __int64 *v31; // r12
  __int64 v32; // [rsp+0h] [rbp-C8h]
  char v33; // [rsp+18h] [rbp-B0h]
  __int64 v34; // [rsp+18h] [rbp-B0h]
  __int64 v35; // [rsp+18h] [rbp-B0h]
  char v36; // [rsp+20h] [rbp-A8h]
  __int64 v37; // [rsp+30h] [rbp-98h]
  unsigned __int64 v38; // [rsp+38h] [rbp-90h]
  char v39; // [rsp+47h] [rbp-81h]
  void *s; // [rsp+50h] [rbp-78h] BYREF
  __int64 v41; // [rsp+58h] [rbp-70h]
  void *v42; // [rsp+60h] [rbp-68h]
  __int64 v43; // [rsp+68h] [rbp-60h]
  int v44; // [rsp+70h] [rbp-58h]
  __int64 v45; // [rsp+78h] [rbp-50h]
  __int64 v46; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v47; // [rsp+88h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1[5] + 8LL) & 1) == 0 || !a1[7] )
    return v47 - __readfsqword(0x28u);
  v39 = 0;
  v37 = 0;
  v38 = 0;
  do
  {
    v44 = 1065353216;
    v45 = 0;
    v4 = a1[6] + v37;
    v5 = *(_BYTE *)(v4 + 168);
    s = &v46;
    v46 = 0;
    v6 = *(_QWORD *)(v4 + 32);
    v41 = 1;
    v42 = nullptr;
    v7 = (v5 & 4) != 0;
    v43 = 0;
    v32 = v6;
    if ( !v6 )
      goto LABEL_24;
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = 9 * v8;
      v11 = 9 * v8 + *(_QWORD *)(v4 + 24);
      if ( !*(_BYTE *)(v11 + 8) )
      {
        v12 = *(_QWORD *)(a2 + 8);
        v13 = *(_QWORD *)v11;
        if ( !v12 )
          goto LABEL_12;
        v14 = *(unsigned __int64 **)a2;
        v15 = 0;
        while ( 1 )
        {
          v16 = *v14;
          if ( v13 >= *v14 )
          {
            v17 = v14[2];
            if ( v13 < v16 + v17 )
              break;
          }
          ++v15;
          v14 += 3;
          if ( v12 == v15 )
            goto LABEL_12;
        }
        if ( v14
          && (v36 = v9, v26 = correct_address(v13, v16, v14[1], v17, 0), v9 = v36, v27 = v26, v10 = 9 * v8, v13 != v26) )
        {
          v28 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, unsigned __int64))(*a1 + 120LL);
          if ( v28 == sub_773D30 )
          {
            v29 = a1[6] + v37;
            if ( (*(_BYTE *)(v29 + 168) & 4) == 0 )
            {
              v34 = v27;
              sub_773820((_QWORD *)(v29 + 48), v13);
              v9 = v36;
              v27 = v34;
              v10 = 9 * v8;
            }
          }
          else
          {
            v35 = v27;
            v28((__int64)a1, (__int64)&s, v38, v8, v13);
            v10 = 9 * v8;
            v9 = v36;
            v27 = v35;
          }
          v30 = v9;
          *(_QWORD *)v11 = v27;
          v9 = 1;
          *(_DWORD *)(v4 + 168) |= 1u;
          v18 = v30 ^ 1;
          v39 = 1;
        }
        else
        {
LABEL_12:
          v18 = v9;
          v9 = 0;
        }
        v19 = v7 & v18;
        if ( v19 )
        {
          if ( !v8 || (*(_BYTE *)(v4 + 168) & 4) == 0 )
            goto LABEL_36;
          v20 = *(_QWORD *)(v4 + 24);
          v21 = v20 + v10 - 9;
          v7 = *(_BYTE *)(v21 + 8);
          if ( v7 )
            goto LABEL_20;
          v22 = v10 + v20;
          if ( *(_BYTE *)(v22 + 8) || *(_QWORD *)v21 >= *(_QWORD *)v22 )
          {
            v33 = v9;
            sub_777F00(a1, v38, 4, 0, 0);
            v9 = v33;
          }
          else
          {
LABEL_36:
            v7 = v19;
          }
        }
      }
LABEL_20:
      ++v8;
    }
    while ( v32 != v8 );
    v23 = (unsigned __int64 *)v42;
    if ( (*(_BYTE *)(v4 + 168) & 4) != 0 )
    {
LABEL_22:
      while ( v23 )
      {
        v24 = v23;
        v23 = (unsigned __int64 *)*v23;
        operator delete(v24, 0x10u);
      }
    }
    else
    {
      v31 = (__int64 *)(v4 + 48);
      if ( v42 )
      {
        do
        {
          sub_7740F0(v31, v23 + 1);
          v23 = (unsigned __int64 *)*v23;
        }
        while ( v23 );
        v23 = (unsigned __int64 *)v42;
        goto LABEL_22;
      }
    }
LABEL_24:
    memset(s, 0, 8 * v41);
    v43 = 0;
    v42 = nullptr;
    if ( s != &v46 )
      operator delete(s, 8 * v41);
    ++v38;
    v37 += 176;
  }
  while ( v38 < a1[7] );
  if ( v39 )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 64LL))(a1);
    sub_39ADA0(0x47u, a1[4]);
    return sub_774BB0((__int64)a1, 71);
  }
  return v47 - __readfsqword(0x28u);
}
