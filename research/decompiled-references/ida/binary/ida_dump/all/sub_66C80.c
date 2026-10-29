__int64 __fastcall sub_66C80(__int64 *a1)
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
  __int64 v13; // rax
  __int64 *v14; // rdi
  __int64 *v15; // rdi
  __int64 v16; // [rsp+8h] [rbp-40h]
  __int64 v17; // [rsp+8h] [rbp-40h]
  __int64 v18; // [rsp+8h] [rbp-40h]
  __int64 v19; // [rsp+8h] [rbp-40h]
  __int64 v20; // [rsp+8h] [rbp-40h]
  __int64 v21; // [rsp+8h] [rbp-40h]

  result = *((unsigned int *)a1 + 6);
  if ( (_DWORD)result )
  {
    if ( !under_debugger )
      sub_383060(50444);
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
          qfree();
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
        v13 = *(_QWORD *)(v9 + 16);
        if ( (*(_BYTE *)v13 & 2) != 0 )
        {
          if ( !*(_QWORD *)(v9 + 24) )
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
          if ( *(_QWORD *)(v10 + 24) )
          {
            *(_QWORD *)(v10 + 32) = 0;
            v16 = v10;
            qfree();
            v10 = v16;
          }
          *(_QWORD *)v10 |= 2uLL;
LABEL_32:
          if ( v10 )
            qfree();
          v13 = *(_QWORD *)(v9 + 16);
          if ( (*(_BYTE *)v13 & 2) != 0 )
          {
LABEL_40:
            if ( (*(_BYTE *)v9 & 2) != 0 )
              goto LABEL_25;
            if ( !*(_QWORD *)(v9 + 24) )
            {
LABEL_24:
              *(_QWORD *)v9 |= 2uLL;
LABEL_25:
              if ( v8 > 3 )
                qfree();
              v7 = *v6;
              v8 = **v6;
              goto LABEL_28;
            }
LABEL_23:
            *(_QWORD *)(v9 + 32) = 0;
            qfree();
            goto LABEL_24;
          }
LABEL_35:
          v14 = *(__int64 **)(v13 + 8);
          if ( (*(_BYTE *)v14 & 2) != 0 )
          {
            v15 = *(__int64 **)(v13 + 16);
            if ( (*(_BYTE *)v15 & 2) != 0 )
              goto LABEL_45;
          }
          else
          {
            v19 = v13;
            sub_66090(v14);
            v13 = v19;
            v15 = *(__int64 **)(v19 + 16);
            if ( (*(_BYTE *)v15 & 2) != 0 )
              goto LABEL_37;
          }
          v20 = v13;
          sub_66090(v15);
          v13 = v20;
LABEL_37:
          if ( (*(_BYTE *)v13 & 2) != 0 )
          {
LABEL_38:
            if ( v13 )
              qfree();
            goto LABEL_40;
          }
LABEL_45:
          if ( *(_QWORD *)(v13 + 24) )
          {
            *(_QWORD *)(v13 + 32) = 0;
            v21 = v13;
            qfree();
            v13 = v21;
          }
          *(_QWORD *)v13 |= 2uLL;
          goto LABEL_38;
        }
      }
      else
      {
        v17 = *(_QWORD *)(v9 + 8);
        sub_66090(v11);
        v10 = v17;
        v12 = *(__int64 **)(v17 + 16);
        if ( (*(_BYTE *)v12 & 2) != 0 )
          goto LABEL_31;
      }
      v18 = v10;
      sub_66090(v12);
      v10 = v18;
LABEL_31:
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_32;
      goto LABEL_11;
    }
LABEL_19:
    a1[1] = 0;
    return qfree();
  }
  return result;
}
