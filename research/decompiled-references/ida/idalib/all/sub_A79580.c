unsigned __int64 __fastcall sub_A79580(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbp
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  int v24; // ebp
  unsigned __int64 *v25; // rsi
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // [rsp+8h] [rbp-30h]

  v6 = sub_BAB630(a2);
  if ( v6 )
    sub_A79580(a1, v6, 0, a4);
  if ( !a3 )
  {
    v11 = *(_QWORD *)(a2 + 120);
    if ( v11 )
    {
      v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v12 )
        goto LABEL_12;
    }
    else
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), v7, v8, v9, v10);
      v12 = (_QWORD *)(*(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v12 )
      {
        if ( *(_QWORD *)(a2 + 120) )
          goto LABEL_12;
        sub_A794E0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), 0, v27, v28, v29);
        v12 = (_QWORD *)(*(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v12 )
          goto LABEL_12;
      }
    }
    if ( *v12 )
    {
      result = sub_B8E970(*v12 + 48LL);
      if ( result )
      {
        if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x32 )
        {
LABEL_22:
          v20 = *(unsigned int *)(a4 + 8);
          v21 = 0;
          v22 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v22 )
          {
            while ( (*(_BYTE *)(v22 + 28) & 0x7F) == 0x32 )
            {
LABEL_35:
              ++v21;
              v22 = *(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v22 )
                goto LABEL_27;
            }
            while ( 1 )
            {
              v23 = *(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v22 = v23;
              if ( !v23 )
                break;
              if ( (*(_BYTE *)(v23 + 28) & 0x7F) == 0x32 )
                goto LABEL_35;
            }
          }
LABEL_27:
          v24 = v21 + 1;
          v15 = v20 + v21 + 1;
          if ( v15 > *(unsigned int *)(a4 + 12) )
          {
            v30 = result;
            sub_2237220(a4, a4 + 16, v15, 8);
            v15 = *(unsigned int *)(a4 + 8);
            result = v30;
            v25 = (unsigned __int64 *)(*(_QWORD *)a4 + 8 * v15);
            LODWORD(v15) = v24 + v15;
          }
          else
          {
            v25 = (unsigned __int64 *)(*(_QWORD *)a4 + 8 * v20);
          }
          *v25 = result;
          v26 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v26 )
          {
            while ( 1 )
            {
              result = *(_BYTE *)(v26 + 28) & 0x7F;
              if ( (_BYTE)result != 50 )
                break;
LABEL_41:
              *++v25 = v26;
              v26 = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v26 )
                goto LABEL_14;
            }
            while ( 1 )
            {
              result = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v26 = result;
              if ( !result )
                break;
              result = *(_BYTE *)(result + 28) & 0x7F;
              if ( (_BYTE)result == 50 )
                goto LABEL_41;
            }
          }
          goto LABEL_14;
        }
        while ( 1 )
        {
          v14 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
          result = v14;
          if ( !v14 )
            break;
          if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x32 )
            goto LABEL_22;
        }
      }
    }
LABEL_12:
    result = *(unsigned int *)(a4 + 8);
    LODWORD(v15) = *(_DWORD *)(a4 + 8);
    if ( result > *(unsigned int *)(a4 + 12) )
    {
      result = sub_2237220(a4, a4 + 16, *(unsigned int *)(a4 + 8), 8);
      LODWORD(v15) = *(_DWORD *)(a4 + 8);
    }
LABEL_14:
    *(_DWORD *)(a4 + 8) = v15;
    return result;
  }
  result = sub_BAC730(a2);
  v16 = result;
  if ( result )
  {
    v17 = *(unsigned int *)(a4 + 8);
    v18 = v17 + 1;
    if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
      goto LABEL_21;
LABEL_18:
    *(_QWORD *)(*(_QWORD *)a4 + 8 * v17) = v16;
    while ( 1 )
    {
      result = *(unsigned int *)(a4 + 8);
      v19 = result + 1;
      *(_DWORD *)(a4 + 8) = result + 1;
      v16 = *(_QWORD *)(v16 + 80);
      if ( !v16 )
        break;
      v17 = v19;
      v18 = v19 + 1LL;
      if ( v18 <= *(unsigned int *)(a4 + 12) )
        goto LABEL_18;
LABEL_21:
      sub_2237220(a4, a4 + 16, v18, 8);
      *(_QWORD *)(*(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8)) = v16;
    }
  }
  return result;
}
