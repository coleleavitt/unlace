__int64 __fastcall sub_62A80(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbx
  unsigned __int64 **v6; // rbp
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 *v11; // rdi
  __int64 *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 *v16; // rdi
  __int64 *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // [rsp+8h] [rbp-40h]
  __int64 v20; // [rsp+8h] [rbp-40h]
  __int64 v21; // [rsp+8h] [rbp-40h]
  __int64 v22; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+8h] [rbp-40h]
  __int64 v24; // [rsp+8h] [rbp-40h]

  result = *((unsigned int *)a1 + 6);
  if ( (_DWORD)result )
  {
    if ( !under_debugger )
      sub_37E160(50444);
    BUG();
  }
  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = (unsigned __int64 **)(v3 + 24 * v5);
        v7 = *v6;
        if ( *v6 )
          break;
LABEL_18:
        if ( v4 == ++v5 )
          goto LABEL_19;
      }
      v8 = *v7;
      if ( !v6[1] )
      {
        *v7 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL | *v7 & 3;
        *(__m128i *)(*v6 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v6, (__m128i)(unsigned __int64)*v6);
        **v6 &= ~1uLL;
        **v6 |= 2u;
LABEL_15:
        if ( *v6 )
          qfree(*v6);
        v3 = *a1;
        goto LABEL_18;
      }
      v9 = v8 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      {
LABEL_28:
        *v7 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL | v8 & 3;
        *(__m128i *)(*v6 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v6, (__m128i)(unsigned __int64)*v6);
        **v6 &= ~1uLL;
        **v6 |= 2u;
        v6[1] = nullptr;
        goto LABEL_15;
      }
      v10 = *(_QWORD *)(v9 + 8);
      if ( (*(_BYTE *)v10 & 2) != 0 )
      {
        v14 = *(_QWORD *)(v9 + 16);
        if ( (*(_BYTE *)v14 & 2) != 0 )
        {
          v15 = *(_QWORD *)(v9 + 24);
          if ( !v15 )
            goto LABEL_24;
          goto LABEL_23;
        }
        goto LABEL_35;
      }
      v11 = *(__int64 **)(v10 + 8);
      if ( (*(_BYTE *)v11 & 2) != 0 )
      {
        v12 = *(__int64 **)(v10 + 16);
        if ( (*(_BYTE *)v12 & 2) != 0 )
        {
LABEL_11:
          v13 = *(_QWORD *)(v10 + 24);
          if ( v13 )
          {
            *(_QWORD *)(v10 + 32) = 0;
            v19 = v10;
            qfree(v13);
            v10 = v19;
          }
          *(_QWORD *)v10 |= 2uLL;
LABEL_32:
          if ( v10 )
            qfree(v10);
          v14 = *(_QWORD *)(v9 + 16);
          if ( (*(_BYTE *)v14 & 2) != 0 )
          {
LABEL_40:
            if ( (*(_BYTE *)v9 & 2) != 0 )
              goto LABEL_25;
            v15 = *(_QWORD *)(v9 + 24);
            if ( !v15 )
            {
LABEL_24:
              *(_QWORD *)v9 |= 2uLL;
LABEL_25:
              if ( v8 > 3 )
                qfree(v8 & 0xFFFFFFFFFFFFFFFCLL);
              v7 = *v6;
              v8 = **v6;
              goto LABEL_28;
            }
LABEL_23:
            *(_QWORD *)(v9 + 32) = 0;
            qfree(v15);
            goto LABEL_24;
          }
LABEL_35:
          v16 = *(__int64 **)(v14 + 8);
          if ( (*(_BYTE *)v16 & 2) != 0 )
          {
            v17 = *(__int64 **)(v14 + 16);
            if ( (*(_BYTE *)v17 & 2) != 0 )
              goto LABEL_45;
          }
          else
          {
            v22 = v14;
            sub_61E90(v16);
            v14 = v22;
            v17 = *(__int64 **)(v22 + 16);
            if ( (*(_BYTE *)v17 & 2) != 0 )
              goto LABEL_37;
          }
          v23 = v14;
          sub_61E90(v17);
          v14 = v23;
LABEL_37:
          if ( (*(_BYTE *)v14 & 2) != 0 )
          {
LABEL_38:
            if ( v14 )
              qfree(v14);
            goto LABEL_40;
          }
LABEL_45:
          v18 = *(_QWORD *)(v14 + 24);
          if ( v18 )
          {
            *(_QWORD *)(v14 + 32) = 0;
            v24 = v14;
            qfree(v18);
            v14 = v24;
          }
          *(_QWORD *)v14 |= 2uLL;
          goto LABEL_38;
        }
      }
      else
      {
        v20 = *(_QWORD *)(v9 + 8);
        sub_61E90(v11);
        v10 = v20;
        v12 = *(__int64 **)(v20 + 16);
        if ( (*(_BYTE *)v12 & 2) != 0 )
          goto LABEL_31;
      }
      v21 = v10;
      sub_61E90(v12);
      v10 = v21;
LABEL_31:
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_32;
      goto LABEL_11;
    }
LABEL_19:
    a1[1] = 0;
    return qfree(v3);
  }
  return result;
}
