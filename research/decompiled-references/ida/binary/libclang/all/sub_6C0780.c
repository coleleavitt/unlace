unsigned __int64 __fastcall sub_6C0780(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 i; // rbx
  __int64 *v16; // rbx
  __int64 *j; // r13
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  char v25; // dl
  unsigned __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 *v28; // r14
  __int64 v29; // rsi
  __int64 v30; // rbx
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // r14
  __int64 v34; // rsi
  _DWORD *v35; // rax
  __int64 v36; // rbx
  unsigned __int64 v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  __int64 v40; // rsi
  unsigned __int64 v41; // rax
  _DWORD *v42; // rax
  __int64 v43; // rdi
  int v44; // edx
  __int64 v45; // rdi
  int v46; // edx

  result = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (_BYTE)result == 18 )
  {
    v7 = *(_QWORD *)(a2 + 120);
    if ( v7 )
    {
      if ( v7 <= 7 )
        goto LABEL_24;
    }
    else
    {
      sub_6B0350((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96));
      v7 = *(_QWORD *)(a2 + 120);
      if ( v7 <= 7 )
        goto LABEL_32;
    }
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
    {
      v9 = *(unsigned int *)(v8 + 48);
      if ( (_DWORD)v9 )
      {
        v10 = *(__int64 **)(v8 + 40);
        v11 = (__int64)&v10[v9];
        goto LABEL_7;
      }
      goto LABEL_61;
    }
    sub_7B7DB0(a2);
    v7 = *(_QWORD *)(a2 + 120);
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    v22 = *(unsigned int *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 48);
    if ( (_DWORD)v22 )
    {
      v10 = *(__int64 **)(v8 + 40);
      v11 = (__int64)&v10[v22];
      if ( v7 )
      {
LABEL_7:
        if ( v7 > 7 )
        {
          if ( (*(_BYTE *)(v8 + 72) & 1) == 0 )
            goto LABEL_9;
          goto LABEL_52;
        }
LABEL_36:
        v10 = nullptr;
        do
        {
LABEL_10:
          v12 = *v10++;
          sub_6C0780(a1, v12, a3);
        }
        while ( (__int64 *)v11 != v10 );
        v7 = *(_QWORD *)(a2 + 120);
LABEL_12:
        if ( v7 )
        {
LABEL_13:
          if ( v7 > 7 )
          {
            v13 = v7 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_BYTE *)(v13 + 72) & 1) != 0 )
            {
              sub_7B7DB0(a2);
              v13 = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
            }
            v14 = *(_QWORD *)(v13 + 56);
            if ( v14 )
            {
              while ( *(char *)(v14 + 28) < 0 || (*(_BYTE *)(v14 + 8) & 6) != 0 )
              {
                v14 = *(_QWORD *)(v14 + 128);
                if ( !v14 )
                  goto LABEL_24;
              }
LABEL_22:
              sub_6C0780(a1, v14, a3);
              while ( 1 )
              {
                v14 = *(_QWORD *)(v14 + 128);
                if ( !v14 )
                  break;
                if ( *(char *)(v14 + 28) >= 0 && (*(_BYTE *)(v14 + 8) & 6) == 0 )
                  goto LABEL_22;
              }
            }
          }
          goto LABEL_24;
        }
LABEL_35:
        sub_6B0350((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96));
        v7 = *(_QWORD *)(a2 + 120);
        goto LABEL_13;
      }
      sub_6B0350((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96));
      v7 = *(_QWORD *)(a2 + 120);
      if ( v7 <= 7 )
        goto LABEL_36;
LABEL_49:
      v23 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
      {
        if ( !*(_DWORD *)(v23 + 48) )
        {
LABEL_56:
          v24 = v7 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_BYTE *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
          {
            sub_7B7DB0(a2);
            v7 = *(_QWORD *)(a2 + 120);
            v24 = v7 & 0xFFFFFFFFFFFFFFF8LL;
          }
          v10 = *(__int64 **)(v24 + 16);
          goto LABEL_9;
        }
        goto LABEL_51;
      }
LABEL_52:
      sub_7B7DB0(a2);
      v7 = *(_QWORD *)(a2 + 120);
      v23 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !*(_DWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 48) )
      {
        if ( !v7 )
        {
          sub_6B0350((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96));
          v7 = *(_QWORD *)(a2 + 120);
        }
        v10 = nullptr;
        if ( v7 > 7 )
          goto LABEL_56;
LABEL_9:
        if ( (__int64 *)v11 == v10 )
          goto LABEL_12;
        goto LABEL_10;
      }
LABEL_51:
      v10 = *(__int64 **)(v23 + 40);
      goto LABEL_9;
    }
    if ( v7 )
    {
      if ( v7 > 7 )
      {
LABEL_61:
        if ( (*(_BYTE *)(v8 + 72) & 1) != 0 )
        {
          sub_7B7DB0(a2);
          v7 = *(_QWORD *)(a2 + 120);
          v11 = *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 16)
              + 8LL * *(unsigned int *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 24);
          if ( !v7 )
          {
            sub_6B0350((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96));
            v7 = *(_QWORD *)(a2 + 120);
          }
          v10 = nullptr;
          if ( v7 <= 7 )
            goto LABEL_9;
        }
        else
        {
          v11 = *(_QWORD *)(v8 + 16) + 8LL * *(unsigned int *)(v8 + 24);
        }
        goto LABEL_49;
      }
LABEL_24:
      result = sub_7BACE0(a2);
      for ( i = result; result; i = result )
      {
        sub_6C0780(a1, i, a3);
        result = sub_7BACE0(i);
      }
      return result;
    }
    sub_6B0350((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96));
    v7 = *(_QWORD *)(a2 + 120);
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v7 > 7 )
      goto LABEL_61;
LABEL_32:
    if ( !v7 )
    {
      v11 = 0;
      sub_6B0350((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96));
      v7 = *(_QWORD *)(a2 + 120);
      if ( v7 > 7 )
        goto LABEL_49;
      if ( !v7 )
        goto LABEL_35;
    }
    goto LABEL_24;
  }
  if ( (_BYTE)result == 21 )
  {
    v16 = *(__int64 **)(a2 + 104);
    result = *(unsigned int *)(a2 + 112);
    for ( j = &v16[result]; j != v16; result = sub_6C0780(a1, v18, a3) )
      v18 = *v16++;
    return result;
  }
  if ( (_BYTE)result != 17 )
    return result;
  v19 = *(_QWORD *)(a2 + 96);
  if ( !*(_BYTE *)(a3 + 20) )
    goto LABEL_63;
  result = *(_QWORD *)a3;
  v20 = *(unsigned int *)(a3 + 12);
  v21 = (_QWORD *)(*(_QWORD *)a3 + 8 * v20);
  if ( (_QWORD *)result != v21 )
  {
    while ( v19 != *(_QWORD *)result )
    {
      result += 8LL;
      if ( v21 == (_QWORD *)result )
        goto LABEL_98;
    }
    return result;
  }
LABEL_98:
  if ( (unsigned int)v20 < *(_DWORD *)(a3 + 8) )
  {
    *(_DWORD *)(a3 + 12) = v20 + 1;
    *v21 = v19;
  }
  else
  {
LABEL_63:
    result = sub_25D5540(a3, v19);
    if ( !v25 )
      return result;
  }
  result = *(_QWORD *)(a2 + 104);
  if ( result )
  {
    if ( result <= 7 )
      return result;
    goto LABEL_66;
  }
  v30 = *(_QWORD *)(a2 + 96);
  result = *(_QWORD *)(v30 + 88);
  v31 = result & 0xFFFFFFFFFFFFFFFELL;
  if ( (result & 1) != 0 )
  {
    if ( !v31 )
      return result;
    goto LABEL_78;
  }
  if ( v31 > 3 )
  {
    if ( (result & 2) == 0 )
      return result;
    v32 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL);
    v33 = v32[2275];
    if ( !v33 )
    {
      *(_QWORD *)(v30 + 88) = v30 & 0xFFFFFFFFFFFFFFFALL | 1;
      result = *(_QWORD *)(a2 + 104);
LABEL_81:
      if ( result > 7 )
      {
LABEL_66:
        v26 = result & 0xFFFFFFFFFFFFFFF8LL;
        v27 = *(__int64 **)(v26 + 8);
        result = *(unsigned int *)(v26 + 16);
        v28 = &v27[result];
        goto LABEL_67;
      }
      if ( result )
        return result;
      goto LABEL_83;
    }
    v34 = v32[274];
    v32[284] += 24LL;
    v31 = (v34 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v32[275] >= v31 + 24 && v34 )
      v32[274] = v31 + 24;
    else
      v31 = sub_6A76A0((__int64)(v32 + 274), 24, 3);
    *(_QWORD *)v31 = v33;
    result = v31 | 5;
    *(_DWORD *)(v31 + 8) = 0;
    *(_QWORD *)(v31 + 16) = v30;
    *(_QWORD *)(v30 + 88) = v31 | 5;
    LOBYTE(v31) = v31 & 0xFA | 4;
LABEL_78:
    if ( (v31 & 4) != 0 )
    {
      v35 = (_DWORD *)(result & 0xFFFFFFFFFFFFFFF8LL);
      if ( v35 )
      {
        v45 = *(_QWORD *)v35;
        v46 = *(_DWORD *)(*(_QWORD *)v35 + 12LL);
        if ( v35[2] != v46 )
        {
          v35[2] = v46;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v45 + 144LL))(v45, v30);
        }
      }
    }
    result = *(_QWORD *)(a2 + 104);
    goto LABEL_81;
  }
  if ( !v31 )
    return result;
LABEL_83:
  v36 = *(_QWORD *)(a2 + 96);
  result = *(_QWORD *)(v36 + 88);
  v37 = result & 0xFFFFFFFFFFFFFFFELL;
  if ( (result & 1) != 0 )
  {
    if ( !v37 || (result & 4) == 0 )
      return result;
  }
  else
  {
    if ( v37 <= 3 || (result & 2) == 0 )
      return result;
    v38 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL);
    v28 = (__int64 *)v38[2275];
    v39 = v38;
    if ( !v28 )
    {
      *(_QWORD *)(v36 + 88) = v36 & 0xFFFFFFFFFFFFFFFALL | 1;
      result = *(_QWORD *)(a2 + 104);
      if ( result <= 7 )
        return result;
      result &= 0xFFFFFFFFFFFFFFF8LL;
      v27 = *(__int64 **)(result + 8);
      goto LABEL_67;
    }
    v40 = v38[274];
    v38[284] += 24LL;
    v41 = (v40 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v39[275] >= v41 + 24 && v40 )
      v39[274] = v41 + 24;
    else
      v41 = sub_6A76A0((__int64)(v39 + 274), 24, 3);
    *(_QWORD *)v41 = v28;
    *(_DWORD *)(v41 + 8) = 0;
    *(_QWORD *)(v41 + 16) = v36;
    result = v41 | 5;
    *(_QWORD *)(v36 + 88) = result;
  }
  v42 = (_DWORD *)(result & 0xFFFFFFFFFFFFFFF8LL);
  if ( v42 )
  {
    v43 = *(_QWORD *)v42;
    v44 = *(_DWORD *)(*(_QWORD *)v42 + 12LL);
    if ( v42[2] != v44 )
    {
      v42[2] = v44;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 144LL))(v43, v36);
    }
  }
  result = *(_QWORD *)(a2 + 104);
  if ( result > 7 )
  {
    result &= 0xFFFFFFFFFFFFFFF8LL;
    v28 = nullptr;
    v27 = *(__int64 **)(result + 8);
LABEL_67:
    while ( v28 != v27 )
    {
      v29 = *v27++;
      result = sub_6C0780(a1, v29, a3);
    }
  }
  return result;
}

