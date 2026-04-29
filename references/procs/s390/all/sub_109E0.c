__int64 __fastcall sub_109E0(__int64 a1)
{
  unsigned __int16 v2; // ax
  int v3; // esi
  unsigned __int64 v4; // r10
  char *v5; // r9
  _WORD *v6; // rcx
  unsigned __int64 v7; // r13
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int16 *v13; // rax
  unsigned __int16 v14; // bx
  unsigned __int64 v15; // r13
  int v16; // eax
  __int64 v17; // rdx
  _WORD *v19; // rcx
  __int64 v20; // r13
  __int64 v21; // rcx
  int v22; // r8d
  char *v23; // r13
  __int64 v24; // rax
  unsigned __int16 v25; // bx
  __int16 v26; // r13
  unsigned __int64 v27; // r13
  char *v28; // rcx
  char *v29; // r8
  unsigned __int16 v30; // r14
  unsigned __int64 v31; // rbx
  __int64 v32; // r8
  unsigned __int64 v33; // rcx
  __int64 v34; // r13
  char *v35; // rbx
  __int64 v36; // r8
  int v37; // ecx
  unsigned __int64 v38; // r13
  char v39; // cl
  unsigned __int64 v40; // rdi
  __int16 v41; // cx
  __int64 v42; // rdx
  char v43; // cl
  int v44; // [rsp+8h] [rbp-50h]
  int v45; // [rsp+Ch] [rbp-4Ch]
  unsigned __int64 v46[9]; // [rsp+10h] [rbp-48h] BYREF

  v46[1] = __readfsqword(0x28u);
  v46[0] = 0;
  v2 = sub_10500(a1, v46);
  *(_WORD *)(a1 + 24) = v2;
  if ( !v2 )
    return 0;
  if ( v2 > 0x8A0u )
  {
    if ( !under_debugger )
      interr(10338);
    BUG();
  }
  v3 = 0;
  v45 = v2;
  v4 = v46[0];
  v5 = &byte_23E40[13 * v2];
  while ( 1 )
  {
    v10 = v3;
    v11 = (unsigned __int8)v5[v3];
    if ( !(_BYTE)v11 )
      break;
    if ( (unsigned __int8)v11 <= 0x4Bu )
    {
      if ( (unsigned __int8)v11 > 0x2Fu )
      {
        *(_BYTE *)(a1 + 40LL * v3 + 41) = 5;
        v29 = (char *)&unk_2AE80 + 16 * v11;
        v30 = *(_WORD *)v29;
        v31 = v4 >> (48 - ((unsigned __int8)*(_WORD *)v29 + (unsigned __int8)*((_WORD *)v29 + 1)));
        if ( (v29[9] & 1) != 0 )
        {
          v44 = -1;
          if ( v30 <= 0x1Fu )
            v44 = (1 << v30) - 1;
          *(_BYTE *)(a1 + 40LL * v3 + 72) = 4;
          v32 = 1LL << ((unsigned __int8)*((_WORD *)&unk_2AE80 + 8 * v11) - 1);
          v33 = (v32 ^ (int)(v31 & v44) & (unsigned __int64)((1LL << *((_WORD *)&unk_2AE80 + 8 * v11)) - 1)) - v32;
        }
        else
        {
          v37 = -1;
          if ( v30 <= 0x1Fu )
            v37 = (1 << v30) - 1;
          v33 = (unsigned int)v31 & v37;
        }
        v34 = a1 + 40LL * v3;
        v35 = (char *)&unk_2AE80 + 16 * v11;
        *(_QWORD *)(v34 + 48) = v33;
        v36 = *((_QWORD *)v35 + 1);
        if ( (v36 & 0x2000) != 0 )
        {
          *(_QWORD *)(v34 + 48) = v33 & 0xFFFFFFFFFFFFFFFELL;
          v36 = *((_QWORD *)v35 + 1);
        }
        if ( (v36 & 0x4000) != 0 )
        {
          *(_QWORD *)(a1 + 40LL * v3 + 48) &= ~2uLL;
          v36 = *((_QWORD *)&unk_2AE80 + 2 * v11 + 1);
        }
        if ( (v36 & 0x8000) != 0 )
          *(_QWORD *)(a1 + 40LL * v3 + 48) &= ~8uLL;
      }
      else if ( (unsigned __int8)v11 > 0x25u )
      {
        if ( (unsigned __int8)(v11 - 42) <= 2u )
        {
          v19 = (_WORD *)((char *)&unk_2AE80 + 16 * (unsigned __int8)v11);
          v20 = v4 >> (48 - ((unsigned __int8)*v19 + (unsigned __int8)v19[1]));
          if ( *v19 <= 0x1Fu )
            v20 = ((1 << *v19) - 1) & (unsigned __int64)v20;
          if ( (*((_QWORD *)&unk_2AE80 + 2 * v11 + 1) & 0x100LL) != 0 )
            v20 = (((v20 >> 8) & 0xFFF | ((_DWORD)v20 << 12) & 0xFF000) ^ 0x80000) - 0x80000;
          v21 = a1 + 40LL * v3;
          *(_QWORD *)(v21 + 56) = v20;
          *(_BYTE *)(v21 + 41) = 3 - ((v20 == 0) - 1);
          if ( v3 == 5 )
            return 0;
          v22 = v3 + 1;
          v23 = (char *)&unk_2AE80 + 16 * (unsigned __int8)v5[v3 + 1];
          v24 = *((_QWORD *)v23 + 1);
          v25 = *(_WORD *)v23;
          v26 = *((_WORD *)v23 + 1);
          if ( (v24 & 0x200) != 0 )
          {
            *(_BYTE *)(v21 + 72) = 1;
            v27 = v4 >> (48 - ((unsigned __int8)v25 + (unsigned __int8)v26));
            if ( v25 <= 0x1Fu )
              v27 &= (1 << v25) - 1;
            *(_QWORD *)(a1 + 40LL * v3 + 48) = v27 + 1;
            goto LABEL_42;
          }
          if ( (v24 & 0x41) != 0 )
          {
            v38 = v4 >> (48 - ((unsigned __int8)v25 + (unsigned __int8)v26));
            v39 = v38;
            if ( v25 <= 0x1Fu )
              v39 = v38 & ((1 << v25) - 1);
            *(_BYTE *)(a1 + 40LL * v3 + 73) = v39;
LABEL_42:
            if ( v3 == 4 )
              return 0;
            v22 = v3 + 2;
            v28 = (char *)&unk_2AE80 + 16 * (unsigned __int8)v5[v3 + 2];
            v25 = *(_WORD *)v28;
            v26 = *((_WORD *)v28 + 1);
            v24 = *((_QWORD *)v28 + 1);
          }
          if ( (v24 & 0x20) == 0 )
            return 0;
          v40 = v4 >> (48 - ((unsigned __int8)v25 + (unsigned __int8)v26));
          v41 = v40;
          if ( v25 <= 0x1Fu )
            v41 = v40 & ((1 << v25) - 1);
          v3 = v22;
          *(_WORD *)(a1 + 40 * v10 + 46) = v41;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 40LL * v3 + 41) = 1;
        v6 = (_WORD *)((char *)&unk_2AE80 + 16 * v11);
        v7 = v4 >> (48 - ((unsigned __int8)*v6 + (unsigned __int8)v6[1]));
        LOWORD(v8) = v7;
        if ( *v6 <= 0x1Fu )
          v8 = v7 & ((1 << *v6) - 1);
        v9 = *((_QWORD *)&unk_2AE80 + 2 * v11 + 1);
        if ( (v9 & 1) != 0 )
        {
          *(_WORD *)(a1 + 40LL * v3 + 46) = v8;
        }
        else if ( (v9 & 2) != 0 )
        {
          *(_WORD *)(a1 + 40LL * v3 + 46) = v8 + 16;
        }
        else if ( (v9 & 4) != 0 )
        {
          *(_WORD *)(a1 + 40LL * v3 + 46) = v8 + 32;
        }
        else if ( (v9 & 8) != 0 )
        {
          *(_WORD *)(a1 + 40LL * v3 + 46) = v8 + 48;
        }
        else if ( (v9 & 0x800) != 0 )
        {
          v42 = a1 + 40LL * v3;
          v43 = *(_BYTE *)(v42 + 40);
          *(_WORD *)(v42 + 46) = v8 + 64;
          if ( (v4 & (2048 >> v43)) != 0 )
            *(_WORD *)(v42 + 46) = v8 + 80;
        }
      }
LABEL_10:
      if ( ++v3 == 6 )
        break;
    }
    else
    {
      if ( (unsigned __int8)v11 <= 0x50u )
      {
        v12 = *(_QWORD *)(a1 + 16);
        *(_BYTE *)(a1 + 40LL * v3 + 41) = 7;
        goto LABEL_15;
      }
      if ( (unsigned __int8)(v11 - 81) > 4u )
        goto LABEL_10;
      v12 = *(_QWORD *)(a1 + 16);
      *(_BYTE *)(a1 + 40LL * v3 + 41) = 2;
LABEL_15:
      v13 = (unsigned __int16 *)((char *)&unk_2AE80 + 16 * v11);
      v14 = *v13;
      v15 = v4 >> (48 - ((unsigned __int8)*v13 + (unsigned __int8)v13[1]));
      v16 = v15;
      if ( v14 > 0x1Fu )
      {
        if ( v14 == 32 )
          goto LABEL_18;
      }
      else
      {
        v16 = v15 & ((1 << v14) - 1);
      }
      v16 = ((1LL << ((unsigned __int8)v14 - 1)) ^ ((1 << v14) - 1) & v16) - (1LL << ((unsigned __int8)v14 - 1));
LABEL_18:
      v17 = 5LL * v3++;
      *(_QWORD *)(a1 + 8 * v17 + 56) = v12 + 2 * v16;
      if ( v3 == 6 )
        break;
    }
  }
  if ( *(_BYTE *)(a1 + 41) )
    *(_BYTE *)(a1 + 45) = byte_23E40[13 * v45 + 7];
  if ( *(_BYTE *)(a1 + 81) )
    *(_BYTE *)(a1 + 85) = byte_23E40[13 * v45 + 8];
  if ( *(_BYTE *)(a1 + 121) )
    *(_BYTE *)(a1 + 125) = byte_23E40[13 * v45 + 9];
  if ( *(_BYTE *)(a1 + 161) )
    *(_BYTE *)(a1 + 165) = byte_23E40[13 * v45 + 10];
  if ( *(_BYTE *)(a1 + 201) )
    *(_BYTE *)(a1 + 205) = byte_23E40[13 * v45 + 11];
  if ( *(_BYTE *)(a1 + 241) )
    *(_BYTE *)(a1 + 245) = byte_23E40[13 * v45 + 12];
  return *(unsigned __int16 *)(a1 + 26);
}
