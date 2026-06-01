__int64 __fastcall sub_34D6E0(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // r12
  unsigned int v5; // r13d
  __int64 *i; // r14
  __int64 v7; // rsi
  __int64 v8; // rax
  void (__fastcall ***v9)(void *); // r14
  __int64 v10; // r12
  void *v11; // r13
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r13
  __int64 v15; // r15
  void *v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  void *v19; // r13
  int v21; // eax
  bool v22; // zf
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rsi
  int v26; // r15d
  void (__fastcall ***v27)(void *); // r13
  __int64 v28; // rdi
  _QWORD *v29; // rdx
  _QWORD *v30; // rbp
  _QWORD *v31; // r13
  unsigned __int8 v32; // al
  __int64 v33; // rax
  void *v34; // rbx
  void *v35; // [rsp+8h] [rbp-60h]
  void *v36; // [rsp+8h] [rbp-60h]
  void *v37; // [rsp+8h] [rbp-60h]
  int v38; // [rsp+10h] [rbp-58h] BYREF
  char v39; // [rsp+14h] [rbp-54h]
  __int64 v40; // [rsp+18h] [rbp-50h]
  int v41; // [rsp+20h] [rbp-48h] BYREF
  char v42; // [rsp+24h] [rbp-44h]
  __int64 v43; // [rsp+28h] [rbp-40h]

  if ( *(_BYTE *)(a1 + 551) )
  {
    *(_BYTE *)(a1 + 551) = 0;
    sub_36FA10(a1 + 344);
    *(_BYTE *)(a1 + 551) = 1;
  }
  sub_1360B80(*a2 + 128LL, 1);
  v4 = *(__int64 **)(a1 + 192);
  if ( v4 )
  {
    v5 = 0;
    for ( i = &v4[*((unsigned int *)v4 - 1)]; i != v4; v5 += (unsigned __int8)sub_13742D0(*a2, v7) )
      v7 = *v4++;
  }
  else
  {
    v5 = 0;
  }
  v8 = *a2;
  v9 = *(void (__fastcall ****)(void *))(a1 + 320);
  v10 = *a2;
  if ( v9 )
  {
    if ( v5 >= *(_DWORD *)(a1 + 528) )
      goto LABEL_8;
    if ( v8 )
      ++*(_DWORD *)(v8 + 16);
    v22 = (*((_DWORD *)v9 + 4))-- == 1;
    if ( v22 )
    {
      (**v9)(v9);
      sub_186B220(v9);
      v8 = *a2;
    }
  }
  else if ( v8 )
  {
    ++*(_DWORD *)(v8 + 16);
  }
  *(_QWORD *)(a1 + 320) = v8;
  v10 = *a2;
  *(_DWORD *)(a1 + 528) = v5;
LABEL_8:
  v39 &= 0xFCu;
  v42 &= 0xFCu;
  v38 = 0;
  v11 = qword_1C7F2C0;
  v40 = 0;
  v41 = 1;
  v43 = 0;
  if ( (*(_BYTE *)(a1 + 644) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v38, a1 + 640);
    if ( (*(_BYTE *)(a1 + 660) & 1) == 0 )
      goto LABEL_10;
LABEL_55:
    sub_182C690(v11, &v41, a1 + 656);
    goto LABEL_11;
  }
  v38 = *(_DWORD *)(a1 + 640);
  if ( (*(_BYTE *)(a1 + 660) & 1) != 0 )
    goto LABEL_55;
LABEL_10:
  v12 = *(_DWORD *)(a1 + 656);
  v42 &= ~1u;
  v41 = v12;
LABEL_11:
  v13 = **(_QWORD **)(a1 + 32);
  if ( v13 )
  {
    v14 = v13 + 56LL * *(unsigned int *)(v13 - 4);
    if ( v13 != v14 )
    {
      v15 = **(_QWORD **)(a1 + 32);
      while ( 1 )
      {
        if ( (unsigned __int8)sub_1374270(v10, *(_QWORD *)v15) )
          goto LABEL_14;
        v16 = qword_1C7F2C0;
        v17 = *(_DWORD *)(v15 + 16);
        if ( !v17 )
        {
          if ( (v39 & 1) != 0 )
          {
            v36 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, &v38, &v38);
            v16 = v36;
          }
          else
          {
            v39 &= ~1u;
          }
          if ( (v42 & 1) != 0 )
            sub_182C690(v16, &v41, &v41);
          else
            v42 &= ~1u;
          goto LABEL_14;
        }
        v18 = v15 + 16;
        if ( v38 )
        {
          if ( (v42 & 1) == 0 && v41 == 1 && (*(_BYTE *)(v15 + 36) & 1) == 0 && *(_DWORD *)(v15 + 32) == 1 )
          {
            v35 = qword_1C7F2C0;
            sub_1831A80(qword_1C7F2C0, &v38, v18, &v38);
            sub_182CBA0(v35, &v41);
            v42 &= ~1u;
            v41 = 1;
            goto LABEL_14;
          }
          sub_1851D20(qword_1C7F2C0, &v38, v18, &v38);
          v15 += 56;
          if ( v14 == v15 )
            break;
        }
        else
        {
          if ( (*(_BYTE *)(v15 + 20) & 1) != 0 )
          {
            v37 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, &v38, v18);
            v16 = v37;
            if ( (*(_BYTE *)(v15 + 36) & 1) != 0 )
            {
LABEL_61:
              sub_182C690(v16, &v41, v15 + 32);
              goto LABEL_14;
            }
          }
          else
          {
            v39 &= ~1u;
            v38 = v17;
            if ( (*(_BYTE *)(v15 + 36) & 1) != 0 )
              goto LABEL_61;
          }
          v21 = *(_DWORD *)(v15 + 32);
          v42 &= ~1u;
          v41 = v21;
LABEL_14:
          v15 += 56;
          if ( v14 == v15 )
            break;
        }
      }
    }
  }
  v19 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a1 + 124) & 1) != 0 || *(_DWORD *)(a1 + 120) != 1 || (v42 & 1) != 0 || v41 != 1 )
  {
    if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, a1 + 104, &v38) )
    {
LABEL_25:
      v19 = qword_1C7F2C0;
LABEL_26:
      sub_182CBA0(v19, &v38);
      return sub_182CBA0(v19, &v41);
    }
  }
  else if ( (*(_BYTE *)(a1 + 108) & 1) != 0 || (v39 & 1) != 0 )
  {
    if ( (int)sub_182C7B0(qword_1C7F2C0, a1 + 104, &v38) < 0 )
      goto LABEL_25;
  }
  else if ( *(_DWORD *)(a1 + 104) < v38 )
  {
    goto LABEL_26;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(**(_QWORD **)(a1 + 16) + 96LL))(
          *(_QWORD *)(a1 + 16),
          *(unsigned int *)(a1 + 24),
          *a2,
          &v38) )
    goto LABEL_25;
  v23 = sub_2FF8B0(a1);
  v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 232LL))(v23);
  v25 = *a2;
  v26 = v24;
  if ( *a2 )
    ++*(_DWORD *)(v25 + 16);
  v27 = *(void (__fastcall ****)(void *))(a1 + 136);
  if ( v27 )
  {
    v22 = (*((_DWORD *)v27 + 4))-- == 1;
    if ( v22 )
    {
      (**v27)(v27);
      sub_186B220(v27);
      v25 = *a2;
    }
  }
  v28 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 136) = v25;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 128LL))(v28);
  v29 = **(_QWORD ***)(a1 + 32);
  if ( v29 )
  {
    v30 = &v29[7 * *((unsigned int *)v29 - 1)];
    if ( v30 != v29 )
    {
      v31 = **(_QWORD ***)(a1 + 32);
      do
      {
        v32 = sub_1374270(*(_QWORD *)(a1 + 136), *v31);
        v31 += 7;
        *((_DWORD *)v31 - 2) = v32;
      }
      while ( v30 != v31 );
    }
  }
  v33 = sub_2FF8B0(a1);
  if ( v26 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v33 + 232LL))(v33) )
    sub_27B950((__int64)qword_1C7F2C0, a1 + 104, &v38);
  sub_302130(a1, *(const char **)(a1 + 560));
  sub_34CEE0(a1);
  v34 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v38);
  return sub_182CBA0(v34, &v41);
}

