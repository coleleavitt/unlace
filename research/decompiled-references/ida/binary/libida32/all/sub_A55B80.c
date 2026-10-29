__int64 __fastcall sub_A55B80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 *v12; // r14
  __int64 *v13; // rbx
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  __int64 i; // rbx
  __int64 *v18; // rbx
  __int64 *j; // r13
  __int64 v20; // rsi
  __int64 v21; // rsi
  _QWORD *v22; // rax
  __int64 v23; // rdi
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  char v26; // dl
  char v27; // bl
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 *v33; // rbx
  __int64 *v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9

  result = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (_BYTE)result == 20 )
  {
    v10 = *(_QWORD *)(a2 + 120);
    if ( v10 )
    {
      v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v10 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_41;
    }
    else
    {
      sub_A557A0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), a3, a4, a5, a6);
      v10 = *(_QWORD *)(a2 + 120);
      v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v10 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_41;
    }
    if ( (*(_BYTE *)(v11 + 72) & 1) == 0 )
    {
      a4 = *(unsigned int *)(v11 + 48);
      if ( (_DWORD)a4 )
      {
LABEL_6:
        v11 = *(_QWORD *)(v11 + 40);
        v12 = (__int64 *)(v11 + 8 * a4);
        goto LABEL_7;
      }
LABEL_59:
      if ( (*(_BYTE *)(v11 + 72) & 1) != 0 )
      {
        sub_B84BC0(a2);
        v10 = *(_QWORD *)(a2 + 120);
        v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      }
      a4 = *(unsigned int *)(v11 + 24);
      v11 = *(_QWORD *)(v11 + 16);
      v12 = (__int64 *)(v11 + 8 * a4);
LABEL_7:
      if ( v10 )
        goto LABEL_8;
      goto LABEL_43;
    }
    sub_B84BC0(a2);
    v10 = *(_QWORD *)(a2 + 120);
    v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    a4 = *(unsigned int *)((v10 & 0xFFFFFFFFFFFFFFF8LL) + 48);
    if ( (_DWORD)a4 )
      goto LABEL_6;
    if ( v10 )
    {
      if ( v11 )
        goto LABEL_59;
LABEL_15:
      if ( !v10 )
      {
        sub_A557A0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), v11, a4, a5, a6);
        v10 = *(_QWORD *)(a2 + 120);
      }
      v15 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v15 )
      {
        if ( (*(_BYTE *)(v15 + 72) & 1) != 0 )
        {
          sub_B84BC0(a2);
          v15 = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v16 = *(_QWORD *)(v15 + 56);
        if ( v16 )
        {
          while ( *(char *)(v16 + 28) < 0 || (*(_BYTE *)(v16 + 8) & 6) != 0 )
          {
            v16 = *(_QWORD *)(v16 + 128);
            if ( !v16 )
              goto LABEL_24;
          }
LABEL_27:
          sub_A55B80(a1, v16, a3);
          while ( 1 )
          {
            v16 = *(_QWORD *)(v16 + 128);
            if ( !v16 )
              break;
            if ( *(char *)(v16 + 28) >= 0 && (*(_BYTE *)(v16 + 8) & 6) == 0 )
              goto LABEL_27;
          }
        }
      }
LABEL_24:
      result = sub_B878F0(a2);
      for ( i = result; result; i = result )
      {
        sub_A55B80(a1, i, a3);
        result = sub_B878F0(i);
      }
      return result;
    }
    sub_A557A0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), v11, a4, a5, a6);
    v10 = *(_QWORD *)(a2 + 120);
    v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v10 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      goto LABEL_59;
LABEL_41:
    if ( !v10 )
    {
      v12 = nullptr;
LABEL_43:
      sub_A557A0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), v11, a4, a5, a6);
      v10 = *(_QWORD *)(a2 + 120);
LABEL_8:
      v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v10 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        v13 = nullptr;
LABEL_12:
        if ( v13 != v12 )
        {
          do
          {
            v14 = *v13++;
            sub_A55B80(a1, v14, a3);
          }
          while ( v12 != v13 );
          v10 = *(_QWORD *)(a2 + 120);
        }
        goto LABEL_15;
      }
      if ( (*(_BYTE *)(v11 + 72) & 1) != 0 )
      {
        sub_B84BC0(a2);
        v10 = *(_QWORD *)(a2 + 120);
        v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_DWORD *)((v10 & 0xFFFFFFFFFFFFFFF8LL) + 48) )
          goto LABEL_11;
        if ( !v10 )
        {
          sub_A557A0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), v11, a4, a5, a6);
          v10 = *(_QWORD *)(a2 + 120);
          v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        }
        v13 = nullptr;
        if ( !v11 )
          goto LABEL_12;
      }
      else
      {
        a4 = *(unsigned int *)(v11 + 48);
        if ( (_DWORD)a4 )
        {
LABEL_11:
          v13 = *(__int64 **)(v11 + 40);
          goto LABEL_12;
        }
      }
      if ( (*(_BYTE *)(v11 + 72) & 1) != 0 )
      {
        sub_B84BC0(a2);
        v10 = *(_QWORD *)(a2 + 120);
        v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      }
      v13 = *(__int64 **)(v11 + 16);
      goto LABEL_12;
    }
    goto LABEL_15;
  }
  if ( (_BYTE)result == 23 )
  {
    v18 = *(__int64 **)(a2 + 104);
    result = *(unsigned int *)(a2 + 112);
    for ( j = &v18[result]; j != v18; result = sub_A55B80(a1, v20, a3) )
      v20 = *v18++;
    return result;
  }
  if ( (_BYTE)result != 19 )
    return result;
  v21 = *(_QWORD *)(a2 + 96);
  if ( !*(_BYTE *)(a3 + 20) )
    goto LABEL_62;
  v22 = *(_QWORD **)a3;
  v23 = *(unsigned int *)(a3 + 12);
  v24 = (_QWORD *)(*(_QWORD *)a3 + 8 * v23);
  if ( v22 == v24 )
  {
LABEL_73:
    if ( (unsigned int)v23 < *(_DWORD *)(a3 + 8) )
    {
      *(_DWORD *)(a3 + 12) = v23 + 1;
      *v24 = v21;
      sub_A4AE50((__int64 *)a3, (_QWORD *)(*(_QWORD *)a3 + 8 * v23));
      goto LABEL_63;
    }
LABEL_62:
    v25 = (_QWORD *)sub_2212A20(a3, v21);
    v27 = v26;
    result = sub_A4AE50((__int64 *)a3, v25);
    if ( !v27 )
      return result;
LABEL_63:
    v32 = *(_QWORD *)(a2 + 104);
    if ( v32 )
    {
      result = v32 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !result )
        return result;
    }
    else
    {
      sub_A55AE0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), v28, v29, v30, v31);
      result = *(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !result )
      {
        if ( *(_QWORD *)(a2 + 104) )
          return result;
        sub_A55AE0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), 0, v36, v37, v38);
        result = *(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !result )
          return result;
        v33 = *(__int64 **)(result + 8);
        v34 = nullptr;
        goto LABEL_66;
      }
    }
    v33 = *(__int64 **)(result + 8);
    result = *(unsigned int *)(result + 16);
    v34 = &v33[result];
LABEL_66:
    while ( v34 != v33 )
    {
      v35 = *v33++;
      result = sub_A55B80(a1, v35, a3);
    }
    return result;
  }
  while ( v21 != *v22 )
  {
    if ( v24 == ++v22 )
      goto LABEL_73;
  }
  return sub_A4AE50((__int64 *)a3, v22);
}

