__int64 __fastcall sub_14F7CE0(__int64 a1, unsigned int a2, __m128i a3)
{
  bool v4; // zf
  unsigned __int16 v5; // cx
  __int64 *v6; // rdi
  char v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int16 v12; // ax
  unsigned __int16 v13; // cx
  __int64 *v14; // rdi
  __int64 v15; // rbx
  __int64 *v17; // rdi
  __int64 v18; // rdi
  __int64 *v19; // rdi
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned __int16 v23; // si
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rsi
  unsigned int v27; // eax
  unsigned __int16 v28; // si
  __int64 v29; // rdx
  __int64 *v30; // rdi
  unsigned __int8 *v32[10]; // [rsp+10h] [rbp-F8h] BYREF
  void *ptr; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-A0h]
  _BYTE v35[152]; // [rsp+70h] [rbp-98h] BYREF

  v4 = *(_WORD *)(a1 + 32) == 20;
  v5 = *(_WORD *)(a1 + 90);
  ptr = v35;
  v34 = 0xC00000000LL;
  if ( v4 )
  {
    *(_WORD *)(a1 + 90) = v5 + 1;
  }
  else
  {
    if ( !v5 )
      goto LABEL_3;
    v22 = *(_DWORD *)(a1 + 2792);
    if ( v22 )
    {
      v23 = *(_WORD *)(a1 + 88);
      v24 = *(_QWORD *)(a1 + 2784) + 24LL * v22 - 24;
      do
      {
        if ( v23 == *(_WORD *)(v24 + 14) )
        {
          if ( *(_DWORD *)(v24 + 16) == *(_DWORD *)(a1 + 90) )
            goto LABEL_24;
        }
        else if ( v23 > *(_WORD *)(v24 + 14) )
        {
          goto LABEL_24;
        }
        if ( v5 <= *(_WORD *)(v24 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v24 + 18) )
          break;
LABEL_24:
        --v22;
        v24 -= 24;
        *(_DWORD *)(a1 + 2792) = v22;
      }
      while ( v22 );
    }
    *(_WORD *)(a1 + 90) = v5 - 1;
  }
LABEL_3:
  v6 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v6, (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) != 21 )
  {
    v7 = 0;
    v8 = sub_14BDAD0(a1, 0, a3);
    if ( v8 == 1 )
    {
LABEL_18:
      v18 = a1;
      LOWORD(v32[0]) = 21;
      v15 = 1;
      sub_15680D0(v18, v32, 1, 1);
      goto LABEL_13;
    }
    while ( 1 )
    {
      v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_WORD *)(a1 + 32) == 27 )
      {
        v19 = *(__int64 **)(a1 + 8);
        v20 = *(_QWORD *)(a1 + 96);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v19, (int *)(a1 + 16));
        v21 = sub_1E53840(v20, v9, *(unsigned int *)(a1 + 40));
        if ( v21 == 1 )
        {
          v9 = 0;
          v7 = 1;
        }
        else
        {
          v9 = v21 & 0xFFFFFFFFFFFFFFFELL;
        }
      }
      v10 = (unsigned int)v34;
      v11 = (unsigned int)v34 + 1LL;
      if ( v11 > HIDWORD(v34) )
      {
        sub_2237220(&ptr, v35, v11, 8);
        v10 = (unsigned int)v34;
      }
      *((_QWORD *)ptr + v10) = v9;
      v12 = *(_WORD *)(a1 + 32);
      LODWORD(v34) = v34 + 1;
      if ( v12 != 66 )
        break;
      v17 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v17, (int *)(a1 + 16));
      if ( *(_WORD *)(a1 + 32) == 21 )
        goto LABEL_10;
      v8 = sub_14BDAD0(a1, 0, a3);
      if ( v8 == 1 )
        goto LABEL_18;
    }
    if ( v12 != 21 )
    {
      v25 = a1 + 16;
      v26 = a1;
      v15 = 1;
      sub_1564840(v32, v26, v25, 17);
      sub_AE9DF0(v32, 21, 4u);
      sub_AE9DF0(v32, 66, 4u);
      sub_AEA040((__int64)v32);
      goto LABEL_13;
    }
LABEL_10:
    v13 = *(_WORD *)(a1 + 90);
    if ( !v13 )
      goto LABEL_11;
    goto LABEL_33;
  }
  v13 = *(_WORD *)(a1 + 90);
  if ( v13 )
  {
    v7 = 0;
LABEL_33:
    v27 = *(_DWORD *)(a1 + 2792);
    if ( !v27 )
    {
LABEL_41:
      *(_WORD *)(a1 + 90) = v13 - 1;
LABEL_11:
      v14 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v14, (int *)(a1 + 16));
      if ( v7 )
      {
        v15 = 1;
        goto LABEL_13;
      }
      goto LABEL_44;
    }
    v28 = *(_WORD *)(a1 + 88);
    v29 = *(_QWORD *)(a1 + 2784) + 24LL * v27 - 24;
    while ( 1 )
    {
      if ( v28 == *(_WORD *)(v29 + 14) )
      {
        if ( *(_DWORD *)(v29 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_36;
      }
      else if ( v28 > *(_WORD *)(v29 + 14) )
      {
        goto LABEL_36;
      }
      if ( *(_WORD *)(v29 + 16) >= v13 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v29 + 18) )
        goto LABEL_41;
LABEL_36:
      --v27;
      v29 -= 24;
      *(_DWORD *)(a1 + 2792) = v27;
      if ( !v27 )
        goto LABEL_41;
    }
  }
  v30 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v30, (int *)(a1 + 16));
LABEL_44:
  v15 = sub_19DC180(
          *(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL),
          ((unsigned __int64)*(unsigned int *)(a1 + 40) << 32) | a2,
          ptr,
          (unsigned int)v34);
LABEL_13:
  if ( ptr != v35 )
    free(ptr);
  return v15;
}
