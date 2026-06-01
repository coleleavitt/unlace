__int64 __fastcall sub_1681E90(__int64 a1, _QWORD *a2, __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r14d
  unsigned __int8 v14; // dl
  __int64 *v15; // rdx
  __int64 v16; // rax
  __int64 i; // r14
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // r15
  __int64 v22; // r15
  size_t v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  __int64 v29; // r15
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  _DWORD *v38; // rax
  __int64 v39; // rdi
  int v40; // edx
  __int64 v41; // r15
  size_t v42; // rax
  __int64 v43; // r9
  __int64 v44; // [rsp+8h] [rbp-40h]

LABEL_1:
  v13 = sub_B90D60((__int64)a2, a3, nullptr, 0, 0, a6);
  v14 = *((_BYTE *)a2 + 28) & 0x7F;
  if ( (unsigned int)v14 - 64 <= 2 && !v13 )
  {
    v15 = (__int64 *)(a2[10] & 0xFFFFFFFFFFFFFFF8LL);
    if ( (a2[10] & 4) != 0 )
      v16 = v15[1];
    else
      v16 = *v15;
    for ( i = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL); ; i = v27 )
    {
      v18 = *(unsigned __int8 *)(i + 16);
      if ( (unsigned int)(v18 - 47) <= 1 )
      {
        a2 = sub_F60F10(i, (__int64)a3, v18, v10, v11, v12);
        goto LABEL_1;
      }
      if ( (_BYTE)v18 == 46 )
        break;
      v27 = *(_QWORD *)(sub_F6B0F0(i, (__int64)a3, v18, v10, v11) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v27 == i )
        break;
    }
    v13 = 0;
    v14 = *((_BYTE *)a2 + 28) & 0x7F;
  }
  if ( v14 == 70 )
  {
    a2 = (_QWORD *)a2[6];
    v13 = sub_B90D60((__int64)a2, a3, nullptr, 0, 0, v12);
    v14 = *((_BYTE *)a2 + 28) & 0x7F;
  }
  if ( v14 != 20 )
    goto LABEL_16;
  v19 = a2[15];
  if ( v19 )
  {
    v20 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v20 )
      return v13;
  }
  else
  {
    v29 = a2[12];
    v30 = *(_QWORD *)(v29 + 88);
    v31 = v30 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v30 & 1) == 0 )
    {
      v32 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v30 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v30 & 2) == 0 )
          return v13;
        v33 = v32[2295];
        v34 = v29 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v33 )
        {
          v35 = v32[294];
          v32[304] += 24LL;
          v36 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v32[295] >= v36 + 24 && v35 )
          {
            v32[294] = v36 + 24;
            v37 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v44 = v33;
            v37 = sub_986170((__int64)(v32 + 294), 24, 24, 3, v33, v12);
            v33 = v44;
            v36 = v37 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v37 = v33;
          v34 = v36 | 4;
          *(_DWORD *)(v37 + 8) = 0;
          *(_QWORD *)(v37 + 16) = v29;
        }
        v31 = v34 & 0xFFFFFFFFFFFFFFFELL;
        v30 = v31 | 1;
        *(_QWORD *)(v29 + 88) = v31 | 1;
      }
    }
    if ( v31 )
    {
      if ( (v31 & 4) != 0 )
      {
        v38 = (_DWORD *)(v30 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v38 )
        {
          v39 = *(_QWORD *)v38;
          v40 = *(_DWORD *)(*(_QWORD *)v38 + 12LL);
          if ( v38[2] != v40 )
          {
            v38[2] = v40;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 152LL))(v39, v29);
          }
        }
      }
    }
    v20 = (__int64 *)(a2[15] & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v20 )
      goto LABEL_48;
  }
  v21 = *v20;
  if ( *v20 )
  {
    a2 = (_QWORD *)*v20;
    v13 = sub_B90D60(*v20, a3, nullptr, 0, 0, v12);
    v14 = *(_BYTE *)(v21 + 28) & 0x7F;
    goto LABEL_16;
  }
LABEL_48:
  v14 = *((_BYTE *)a2 + 28) & 0x7F;
LABEL_16:
  if ( v14 == 33 && !v13 )
  {
    v28 = a2[2] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (a2[2] & 4) != 0 )
    {
      v28 = *(_QWORD *)v28;
      v13 = 0;
      if ( (*(_BYTE *)(v28 + 8) & 0x7F) != 0x3E )
        return v13;
    }
    else
    {
      v13 = 0;
      if ( (*(_BYTE *)(v28 + 8) & 0x7F) != 0x3E )
        return v13;
    }
    if ( v28 == 64 )
      return v13;
    v13 = sub_B90D60(v28 - 64, a3, nullptr, 0, 0, v28 - 64);
    v14 = *(_BYTE *)(v28 - 36) & 0x7F;
    a2 = (_QWORD *)(v28 - 64);
  }
  if ( v14 == 18 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 736) + 88LL);
    if ( v22 )
    {
      if ( a4 )
      {
        v23 = j__strlen("init");
        v24 = sub_E93340(v22, "init", v23, v22 + 656);
        v25 = sub_BAD910(a4, v24, 1, 0, 1, 0);
        if ( v25 )
        {
          if ( !v13 && (*((_BYTE *)a2 + 58) & 2) == 0 )
          {
            v41 = *(_QWORD *)(*(_QWORD *)(a1 + 736) + 88LL);
            v42 = j__strlen("new");
            if ( a2[5] == sub_E93340(v41, "new", v42, v41 + 664) && sub_BAA480((__int64)a2, *(_QWORD *)(a1 + 248)) )
              return (unsigned int)sub_B90D60(v25, a3, nullptr, 0, 0, v43);
          }
        }
      }
    }
  }
  return v13;
}
