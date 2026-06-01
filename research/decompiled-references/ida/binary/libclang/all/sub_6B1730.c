unsigned __int64 __fastcall sub_6B1730(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // r12
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rcx
  _DWORD *v17; // rdx
  __int64 v18; // rdi
  int v19; // eax

  v3 = *(_QWORD *)(a2 + 120);
  if ( !v3 )
  {
    v10 = *(_QWORD *)(a2 + 96);
    v11 = 0;
    v12 = *(_QWORD *)(v10 + 88);
    v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v12 & 1) != 0 )
    {
      if ( v13 )
        goto LABEL_21;
    }
    else if ( v13 <= 3 )
    {
      if ( v13 )
      {
LABEL_24:
        v3 = v11;
        goto LABEL_2;
      }
    }
    else if ( (v12 & 2) != 0 )
    {
      v14 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
      v15 = v14[2275];
      if ( !v15 )
      {
        *(_QWORD *)(v10 + 88) = v10 & 0xFFFFFFFFFFFFFFFALL | 1;
        if ( (v10 & 0xFFFFFFFFFFFFFFFALL) == 0 )
        {
LABEL_27:
          v3 = *(_QWORD *)(a2 + 120);
          goto LABEL_2;
        }
        goto LABEL_23;
      }
      v16 = v14[274];
      v14[284] += 24LL;
      v13 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v14[275] >= v13 + 24 && v16 )
        v14[274] = v13 + 24;
      else
        v13 = sub_6A76A0((__int64)(v14 + 274), 24, 3);
      *(_QWORD *)v13 = v15;
      *(_DWORD *)(v13 + 8) = 0;
      v12 = v13 | 5;
      *(_QWORD *)(v13 + 16) = v10;
      *(_QWORD *)(v10 + 88) = v13 | 5;
      LOBYTE(v13) = v13 & 0xFA | 4;
LABEL_21:
      if ( (v13 & 4) != 0 )
      {
        v17 = (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v17 )
        {
          v18 = *(_QWORD *)v17;
          v19 = *(_DWORD *)(*(_QWORD *)v17 + 12LL);
          if ( v17[2] != v19 )
          {
            v17[2] = v19;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 144LL))(v18, v10);
            goto LABEL_27;
          }
        }
      }
LABEL_23:
      v11 = *(_QWORD *)(a2 + 120);
      goto LABEL_24;
    }
LABEL_19:
    v4 = a2;
    goto LABEL_4;
  }
LABEL_2:
  if ( v3 <= 7 )
    goto LABEL_19;
  v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v4 )
    goto LABEL_19;
LABEL_4:
  v5 = *(_QWORD *)(a1 + 2192);
  *(_QWORD *)(a1 + 2272) += 48LL;
  v6 = (v5 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2200) >= v6 + 48 && v5 )
  {
    *(_QWORD *)(a1 + 2192) = v6 + 48;
    v7 = (v5 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v7 = sub_6A76A0(a1 + 2192, 48, 4);
    v6 = v7;
  }
  *(_BYTE *)(v7 + 20) &= ~1u;
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(v7 + 24) = v7 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 16) = 35;
  *(_QWORD *)(v7 + 40) = v4;
  *(_QWORD *)(v4 + 104) = v7;
  v8 = *(unsigned int *)(a1 + 16);
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v8 + 1) )
  {
    sub_25D6060(a1 + 8, a1 + 24, v8 + 1, 8);
    v8 = *(unsigned int *)(a1 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v8) = v6;
  ++*(_DWORD *)(a1 + 16);
  return v7 & 0xFFFFFFFFFFFFFFF0LL;
}

