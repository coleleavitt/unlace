__int64 __fastcall sub_805F00(__int64 a1)
{
  unsigned int **v2; // r15
  unsigned int **v3; // r14
  __int64 *v4; // r12
  __int64 v5; // r13
  __int64 *v6; // rbp
  _QWORD *v7; // rdx
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  int *v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // r12d
  unsigned int v14; // ebp
  unsigned int **v16; // r12
  unsigned int *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // esi
  __int64 *v21; // rdi
  __int64 v22; // rdx
  __int64 *v23; // rcx
  void *v24; // rbp
  unsigned int *v25; // r13
  unsigned int *v26; // rbp
  unsigned int *v27; // rax
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rdi
  unsigned int v32; // ebp
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  void *v36; // rbx
  _QWORD *v37; // [rsp+0h] [rbp-68h]
  int v38; // [rsp+0h] [rbp-68h]
  _QWORD *v39; // [rsp+8h] [rbp-60h]
  unsigned int **v40; // [rsp+8h] [rbp-60h]
  _BYTE v41[16]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v42[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(unsigned int ***)(a1 + 320);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    while ( v3 != v2 )
    {
      v4 = nullptr;
      v5 = sub_7E4F00(a1, *v2);
      v6 = (__int64 *)v5;
      v7 = *(_QWORD **)(*(_QWORD *)(v5 + 176) + 64LL);
      while ( 1 )
      {
        if ( v4 != (__int64 *)v5 )
        {
          if ( (__int64 *)v5 != v6 && !*(_WORD *)(*v6 + 4) )
          {
            v8 = *(_DWORD **)(*(_QWORD *)(*v6 + 16) + 24LL);
            if ( v8 )
            {
              if ( *v8 == *(_DWORD *)(a1 + 136) && v8[1] == 66 )
              {
LABEL_17:
                if ( *(_QWORD **)(v6[22] + 64) != v7 )
                {
                  v37 = v7;
                  v10 = *(int **)(*(_QWORD *)(sub_15D1F10(*v7) + 24) + 8LL);
                  if ( *((_BYTE *)v10 + 8)
                    || (v11 = v37,
                        v38 = *v10,
                        v39 = v11,
                        v12 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(*(_QWORD *)v6[22]) + 24) + 8LL),
                        *(_BYTE *)(v12 + 8)) )
                  {
LABEL_42:
                    sub_A8ADA((__int64)"std::get: wrong index for variant");
                  }
                  v7 = v39;
                  if ( *(_DWORD *)v12 == v38 )
                  {
                    v13 = sub_7E58D0(a1, *(_QWORD *)v5, *v6);
                    v14 = sub_7E58D0(a1, *(_QWORD *)v6[22], **(_QWORD **)(v5 + 176));
                    sub_7F15F0(*(_QWORD *)(a1 + 112) + 160LL, v13);
                    sub_7F15F0(*(_QWORD *)(a1 + 112) + 160LL, v14);
                    sub_7E5400(a1, v13 ^ 1, v14, nullptr);
                    return 1;
                  }
                }
              }
            }
          }
          if ( !v4 )
            v4 = v6;
          goto LABEL_10;
        }
        if ( v4 == v6 )
          break;
        if ( !*(_WORD *)(*v6 + 4) )
        {
          v9 = *(_DWORD **)(*(_QWORD *)(*v6 + 16) + 24LL);
          if ( v9 )
          {
            if ( *(_DWORD *)(a1 + 136) == *v9 && v9[1] == 66 )
              goto LABEL_17;
          }
        }
LABEL_10:
        v6 = (__int64 *)v6[7];
      }
      ++v2;
    }
  }
  v16 = *(unsigned int ***)(a1 + 328);
  if ( !v16 )
    return 0;
  v40 = &v16[*((unsigned int *)v16 - 1)];
  if ( v40 == v16 )
    return 0;
  while ( 1 )
  {
    v25 = *v16;
    sub_7E4F00(a1, *v16);
    v26 = (unsigned int *)sub_16747F0(a1 + 136, v25);
    (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 112) + 480LL))(*(_QWORD *)(a1 + 112), v26);
    v27 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(v25) + 24) + 8LL);
    if ( *((_BYTE *)v27 + 8) )
      goto LABEL_42;
    sub_17F6290(v41, *v27);
    v31 = *(_QWORD *)(a1 + 168);
    if ( !v31 )
    {
      sub_16669E0(a1 + 160);
      v31 = *(_QWORD *)(a1 + 168);
    }
    sub_166A700(v31, (unsigned int)v41, 1, v28, v29, v30);
    v17 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 160));
    (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 112) + 480LL))(*(_QWORD *)(a1 + 112), v17);
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 1720LL);
    if ( !v18 )
      BUG();
    v19 = *v26;
    v20 = *(_DWORD *)(v18 - 4);
    v21 = nullptr;
    v22 = *v17;
    if ( (unsigned int)v19 < v20 )
      v21 = *(__int64 **)(v18 + 8 * v19);
    v23 = nullptr;
    if ( (unsigned int)v22 < v20 )
      v23 = *(__int64 **)(v18 + 8 * v22);
    if ( v23[8] != v21[8] )
      break;
    ++v16;
    v24 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v41);
    sub_182CBA0(v24, v42);
    if ( v40 == v16 )
      return 0;
  }
  v32 = sub_7E58D0(a1, *v21, *v23);
  sub_7F15F0(*(_QWORD *)(a1 + 112) + 160LL, v32);
  sub_7E5160(a1, v32, nullptr, v33, v34, v35);
  v36 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v41);
  sub_182CBA0(v36, v42);
  return 1;
}

