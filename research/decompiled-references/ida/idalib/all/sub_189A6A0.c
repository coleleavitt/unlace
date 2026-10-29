void __fastcall sub_189A6A0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  unsigned int v20; // r14d
  unsigned int v21; // esi
  int v22; // eax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r15
  int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rdi
  unsigned int v30; // r13d
  unsigned int v31; // esi
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r15
  int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // r15
  unsigned __int64 v39; // rax
  int v41; // esi
  __int64 *v42; // r10
  int v43; // esi
  __int64 v44; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v45; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v46; // [rsp+28h] [rbp-E0h]
  unsigned int v47; // [rsp+30h] [rbp-D8h]
  _QWORD v48[25]; // [rsp+40h] [rbp-C8h] BYREF

  if ( a3 )
  {
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v5 = sub_B8E970(a3 + 48);
    v10 = v5;
    if ( !v5 )
      goto LABEL_7;
    if ( (*(_BYTE *)(v5 + 28) & 0x7F) != 0x12 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v10 = v11;
        if ( !v11 )
          break;
        if ( (*(_BYTE *)(v11 + 28) & 0x7F) == 0x12 )
          goto LABEL_14;
      }
LABEL_7:
      if ( !(_DWORD)v46 || (v12 = sub_B8E970(a2 + 48), (v17 = v12) == 0) )
      {
LABEL_13:
        operator delete(v45, 16LL * v47, 8);
        return;
      }
      if ( (*(_BYTE *)(v12 + 28) & 0x7F) != 0x12 )
      {
        do
        {
          v18 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v17 = v18;
          if ( !v18 )
            goto LABEL_13;
        }
        while ( (*(_BYTE *)(v18 + 28) & 0x7F) != 0x12 );
      }
LABEL_32:
      v29 = *(_QWORD *)(v17 + 40);
      v30 = v47;
      v44 = v29;
      if ( v47 )
      {
        v34 = v45;
        v35 = sub_FDE780(v29);
        v14 = v30 - 1;
        v15 = v44;
        v36 = v14 & v35;
        v13 = v34 + 16LL * v36;
        v37 = *(_QWORD *)v13;
        if ( v44 == *(_QWORD *)v13 )
          goto LABEL_40;
        v31 = v47;
        if ( v37 != -1 )
        {
          v43 = 1;
          v16 = 0;
          while ( 1 )
          {
            if ( v37 == -2 && !v16 )
              v16 = v13;
            v36 = v14 & (v43 + v36);
            v13 = v34 + 16LL * v36;
            v37 = *(_QWORD *)v13;
            if ( v44 == *(_QWORD *)v13 )
              goto LABEL_40;
            if ( v37 == -1 )
            {
              v31 = v47;
              v30 = v47;
              if ( !v16 )
                break;
              v13 = v16;
              goto LABEL_50;
            }
            ++v43;
          }
        }
        v30 = v31;
LABEL_50:
        v48[0] = v13;
        v32 = v46 + 1;
        v15 = (unsigned int)(4 * (v46 + 1));
        if ( (unsigned int)v15 < 3 * v31 )
        {
          v14 = v31 >> 3;
          if ( v31 - (v32 + HIDWORD(v46)) > (unsigned int)v14 )
            goto LABEL_36;
          goto LABEL_35;
        }
      }
      else
      {
        v48[0] = 0;
      }
      v31 = 2 * v30;
LABEL_35:
      sub_1898590((__int64)&v45, v31, v13, v14, v15, v16);
      sub_18958C0(&v45, &v44, v48);
      v13 = v48[0];
      v32 = v46 + 1;
LABEL_36:
      LODWORD(v46) = v32;
      if ( *(_QWORD *)v13 != -1 )
        --HIDWORD(v46);
      v33 = v44;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)v13 = v33;
LABEL_40:
      v38 = v13 + 8;
      v13 = *(_QWORD *)(v13 + 8);
      if ( v13 )
      {
        v14 = (*(_BYTE *)(v17 + 58) & 2) != 0;
        if ( (_BYTE)v14 == ((*(_BYTE *)(v13 + 58) & 2) != 0) && !(unsigned __int8)sub_1896130((__int64)a1, v17, v13, 1u) )
        {
          sub_168B9F0((__int64)v48, a1, *(_DWORD *)(v17 + 24), 0xE84u, 0);
          v44 = *(_QWORD *)(v17 + 40);
          sub_15894B0((__int64)v48, &v44);
          sub_15F7200(v48);
          sub_168B9F0((__int64)v48, a1, *(_DWORD *)(*(_QWORD *)v38 + 24LL), 0x70u, 0);
          sub_15F7200(v48);
        }
      }
      while ( 1 )
      {
        v39 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v17 = v39;
        if ( !v39 )
          goto LABEL_13;
        if ( (*(_BYTE *)(v39 + 28) & 0x7F) == 0x12 )
          goto LABEL_32;
      }
    }
LABEL_14:
    v19 = *(_QWORD *)(v10 + 40);
    v20 = v47;
    v44 = v19;
    if ( v47 )
    {
      v25 = v45;
      v26 = sub_FDE780(v19);
      v8 = v20 - 1;
      v9 = v44;
      v27 = v8 & v26;
      v6 = (__int64 *)(v25 + 16LL * v27);
      v28 = *v6;
      if ( v44 == *v6 )
        goto LABEL_21;
      v21 = v47;
      if ( v28 != -1 )
      {
        v41 = 1;
        v42 = nullptr;
        while ( 1 )
        {
          if ( v28 == -2 && !v42 )
            v42 = v6;
          v27 = v8 & (v41 + v27);
          v6 = (__int64 *)(v25 + 16LL * v27);
          v28 = *v6;
          if ( v44 == *v6 )
            goto LABEL_21;
          if ( v28 == -1 )
          {
            v21 = v47;
            v20 = v47;
            if ( !v42 )
              break;
            v6 = v42;
            goto LABEL_28;
          }
          ++v41;
        }
      }
      v20 = v21;
LABEL_28:
      v48[0] = v6;
      v22 = v46 + 1;
      v9 = (unsigned int)(4 * (v46 + 1));
      if ( (unsigned int)v9 < 3 * v21 )
      {
        v8 = v21 - (v22 + HIDWORD(v46));
        if ( (unsigned int)v8 > v21 >> 3 )
          goto LABEL_18;
        goto LABEL_17;
      }
    }
    else
    {
      v48[0] = 0;
    }
    v21 = 2 * v20;
LABEL_17:
    sub_1898590((__int64)&v45, v21, (__int64)v6, v7, v8, v9);
    sub_18958C0(&v45, &v44, v48);
    v6 = (__int64 *)v48[0];
    v22 = v46 + 1;
LABEL_18:
    LODWORD(v46) = v22;
    if ( *v6 != -1 )
      --HIDWORD(v46);
    v23 = v44;
    v6[1] = 0;
    *v6 = v23;
LABEL_21:
    *++v6 = v10;
    while ( 1 )
    {
      v24 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v10 = v24;
      if ( !v24 )
        goto LABEL_7;
      if ( (*(_BYTE *)(v24 + 28) & 0x7F) == 0x12 )
        goto LABEL_14;
    }
  }
}
