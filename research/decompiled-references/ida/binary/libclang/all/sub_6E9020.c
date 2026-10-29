__int64 __fastcall sub_6E9020(_QWORD *a1)
{
  __int64 v3; // r12
  __int64 v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  char v12; // dl
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdi
  int v18; // eax

  if ( (a1[193] & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
    return a1[193];
  v3 = sub_6BAA70(a1, "objc_super", 0xAu, 0);
  v4 = *(_QWORD *)(a1[264] + 80LL);
  v5 = *(_QWORD *)(v4 + 72);
  v6 = v5 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v5 & 1) != 0 )
  {
LABEL_12:
    v13 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    v8 = (_QWORD *)v13;
    if ( v6 )
      goto LABEL_13;
    goto LABEL_15;
  }
  if ( v6 <= 3 )
  {
    v8 = nullptr;
    goto LABEL_15;
  }
  v7 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
  v8 = v7;
  if ( (v6 & 2) != 0 )
  {
    v9 = v7[2275];
    if ( v9 )
    {
      v10 = v7[274];
      v7[284] += 24LL;
      v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v8[275] >= v11 + 24 && v10 )
        v8[274] = v11 + 24;
      else
        v11 = sub_6A76A0((__int64)(v8 + 274), 24, 3);
      *(_QWORD *)v11 = v9;
      *(_DWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 16) = v4;
      *(_QWORD *)(v4 + 72) = v11 | 5;
      v12 = v11;
      v13 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      v8 = (_QWORD *)v13;
      LOBYTE(v6) = v12 & 0xFA | 4;
LABEL_13:
      if ( (v6 & 4) != 0 && v13 )
      {
        v17 = *v8;
        v18 = *(_DWORD *)(*v8 + 12LL);
        if ( *((_DWORD *)v8 + 2) != v18 )
        {
          *((_DWORD *)v8 + 2) = v18;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 144LL))(v17, v4);
        }
        v8 = (_QWORD *)v8[2];
      }
      goto LABEL_15;
    }
    v6 = v4 & 0xFFFFFFFFFFFFFFFALL;
    v5 = v4 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v4 + 72) = v5;
    goto LABEL_12;
  }
LABEL_15:
  sub_7A0AA0(v8 + 5, v3);
  v14 = *(_QWORD *)(v3 + 48);
  if ( v14 )
  {
    v15 = v14 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v16 = *(_BYTE *)(v3 + 28) & 0x7F;
    if ( (unsigned int)(v16 - 62) > 2 )
    {
      if ( (unsigned int)(v16 - 56) > 3 )
      {
        if ( (*(_BYTE *)(v3 + 28) & 0x7F) == 0x3C )
          v15 = sub_6E8C30((__int64)a1, v3);
        else
          v15 = sub_6C7D80((__int64)a1, v3);
      }
      else
      {
        v15 = sub_6E8B00((__int64)a1, v3);
      }
    }
    else
    {
      v15 = sub_6DE140((__int64)a1, v3, 0);
    }
  }
  a1[193] = v15;
  return a1[193];
}

