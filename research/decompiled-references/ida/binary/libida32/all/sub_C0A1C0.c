__int64 __fastcall sub_C0A1C0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  unsigned int v12; // r13d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // r15
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r15
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rbp
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rbp
  unsigned int v32; // esi
  __int64 v33; // r8
  unsigned int v34; // ecx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int8 **v38; // rax
  int v39; // r11d
  __int64 v40; // r10
  int v41; // edi
  bool v42; // zf
  __int64 v43; // [rsp+8h] [rbp-50h]
  __int64 v44; // [rsp+10h] [rbp-48h] BYREF
  __int64 v45[8]; // [rsp+18h] [rbp-40h] BYREF

  v8 = *(_QWORD *)(**(_QWORD **)(a5 + 16) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_QWORD *)(v8 + 8) & 7LL | (*(__int64 *)(v8 + 8) >> 3) & 1 )
    v8 = sub_F411C0(**(_QWORD **)(a5 + 16));
  v9 = sub_F3F530(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL));
  v11 = v9;
  if ( (*(_BYTE *)(a5 + 12) & 1) == 0 )
    return (unsigned int)sub_C04040(a1, a2, a3, a4, v9, 0);
  if ( (*(_BYTE *)(a3 + 24) & 1) == 0 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v14 + 16) - 43 <= 1
      || (v37 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
          (unsigned int)v37 <= 1)
      && (v14 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF0LL), a2, v37, v10)) != 0 )
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(v14 + 32);
        if ( (*(_BYTE *)(v14 + 18) & 0x10) == 0 )
          break;
        while ( 1 )
        {
          v14 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
          v16 = (unsigned int)*(unsigned __int8 *)(v14 + 16) - 43;
          if ( (unsigned int)v16 <= 1 )
            break;
          v17 = sub_F3F310(v14, a2, v16, v10);
          v15 = *(_QWORD *)(v17 + 32);
          if ( (*(_BYTE *)(v17 + 18) & 0x10) == 0 )
            goto LABEL_11;
        }
      }
    }
    else
    {
      v15 = *(_QWORD *)(a3 + 40);
    }
LABEL_11:
    v18 = sub_F3F530(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL));
    v12 = sub_C03020(a1, a2, a3, v18, *(_DWORD *)(a3 + 24) >> 4);
    if ( (_BYTE)v12 )
    {
      if ( *(char *)(v18 + 28) >= 0 )
      {
        v22 = sub_EBA840(*(_QWORD *)(a1 + 16), v18);
        v23 = (*(_BYTE *)(v11 + 28) & 0x7F) - 49;
        v24 = 2LL * (v23 < 3);
        if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
          goto LABEL_20;
        v25 = 2461;
        v43 = 2LL * (v23 < 3);
        if ( (*(_BYTE *)(a3 + 128) & 1) == 0 )
        {
          if ( !sub_BEC880(a3 + 24) )
          {
            sub_A2B940(v45, v11 | 4);
            v26 = *(unsigned int *)(a3 + 56);
            v20 = *(unsigned int *)(a3 + 60);
            v27 = v45[0];
            if ( v26 + 1 > v20 )
            {
              sub_22134E0(a3 + 48, a3 + 64, v26 + 1, 8);
              v26 = *(unsigned int *)(a3 + 56);
            }
            *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8 * v26) = v27;
            v28 = *(_DWORD *)(a3 + 56) + 1;
            *(_DWORD *)(a3 + 56) = v28;
            v19 = (*(_BYTE *)(v11 + 28) & 0x7Fu) - 49;
            if ( (unsigned int)v19 <= 2 )
            {
              v29 = *(_QWORD *)(v11 + 48);
              *(_BYTE *)(a3 + 24) &= ~8u;
              *(_QWORD *)(a3 + 32) = 0;
              *(_QWORD *)(a3 + 40) = v29;
              v19 = *(_DWORD *)(a3 + 24) & 0xF;
              *(_DWORD *)(a3 + 24) = v19 | (16 * v28);
            }
            goto LABEL_20;
          }
          v25 = 2466;
        }
        v38 = (unsigned __int8 **)sub_E0FF50(a1, a2, v25, 0);
        if ( v38 )
          sub_BED5E0(v38, v43);
        *(_BYTE *)(a3 + 24) |= 1u;
        *(_DWORD *)(a3 + 56) = 0;
LABEL_20:
        v30 = *(_QWORD *)(v11 + 128);
        v44 = v11;
        if ( v30
          || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v11 + 104) + 96LL), *(_QWORD *)(v11 + 104), v19, v20, v24, v21),
              (v30 = *(_QWORD *)(v11 + 128)) != 0) )
        {
          v30 = *(_QWORD *)(v30 + 88);
        }
        v31 = *(_QWORD *)(v22 + 72);
        v44 = v30;
        v32 = *(_DWORD *)(v31 + 104);
        if ( v32 )
        {
          v21 = v32 - 1;
          v33 = *(_QWORD *)(v31 + 88);
          v34 = v21 & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
          v19 = v33 + 24LL * v34;
          v35 = *(_QWORD *)v19;
          if ( v30 == *(_QWORD *)v19 )
          {
LABEL_24:
            v36 = *(_QWORD *)(v19 + 8);
LABEL_25:
            *(_QWORD *)(a3 + 16) += v36;
            return v12;
          }
          v39 = 1;
          v40 = 0;
          if ( v35 != -4096 )
          {
            while ( 1 )
            {
              if ( !v40 && v35 == -8192 )
                v40 = v19;
              v34 = v21 & (v39 + v34);
              v19 = v33 + 24LL * v34;
              v35 = *(_QWORD *)v19;
              if ( v30 == *(_QWORD *)v19 )
                goto LABEL_24;
              if ( v35 == -4096 )
              {
                if ( v40 )
                  v19 = v40;
                break;
              }
              ++v39;
            }
          }
          v41 = *(_DWORD *)(v31 + 96);
          v45[0] = v19;
          v20 = (unsigned int)(v41 + 1);
          v24 = (unsigned int)(4 * v20);
          if ( (unsigned int)v24 < 3 * v32 )
          {
            v24 = v32 >> 3;
            if ( v32 - *(_DWORD *)(v31 + 100) - (unsigned int)v20 > (unsigned int)v24 )
            {
LABEL_39:
              v42 = *(_QWORD *)v19 == -4096;
              *(_DWORD *)(v31 + 96) = v20;
              if ( !v42 )
                --*(_DWORD *)(v31 + 100);
              *(_QWORD *)v19 = v30;
              v36 = 0;
              *(_QWORD *)(v19 + 8) = 0;
              *(_BYTE *)(v19 + 16) = 0;
              goto LABEL_25;
            }
LABEL_44:
            sub_A6E490((__int64 **)(v31 + 88), v32, v19, v20, v24, v21);
            sub_A4A0A0((__int64 *)(v31 + 88), &v44, v45);
            v30 = v44;
            v19 = v45[0];
            LODWORD(v20) = *(_DWORD *)(v31 + 96) + 1;
            goto LABEL_39;
          }
        }
        else
        {
          v45[0] = 0;
        }
        v32 *= 2;
        goto LABEL_44;
      }
    }
  }
  return 0;
}

