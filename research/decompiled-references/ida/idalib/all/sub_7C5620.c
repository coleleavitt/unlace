unsigned __int64 __fastcall sub_7C5620(__int64 *a1, unsigned __int8 *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v6; // ebx
  unsigned __int8 *v8; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // rax
  size_t v16; // rax
  __int64 v17; // rbx
  size_t v18; // r8
  size_t v19; // r9
  __int64 v20; // rsi
  size_t v21; // rdx
  __int64 v23; // rax
  size_t v24; // [rsp+8h] [rbp-60h]
  size_t v25; // [rsp+10h] [rbp-58h]
  size_t v26; // [rsp+18h] [rbp-50h]
  char s[4]; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v6 = *a2;
  v28 = __readfsqword(0x28u);
  if ( (_BYTE)v6 )
  {
    v8 = a2;
    while ( 1 )
    {
      ++v8;
      if ( (_BYTE)v6 == 32 )
      {
        LOBYTE(v6) = 43;
        goto LABEL_8;
      }
      if ( (unsigned __int8)(v6 - 33) > 0x3Eu )
      {
        v14 = (char)v6;
        if ( (unsigned int)(char)v6 <= 0x7F )
          goto LABEL_19;
LABEL_13:
        qsnprintf((unsigned int)s, 4, (unsigned int)"%%%02X", (unsigned __int8)v6, a5, a6);
        v16 = strlen(s);
        v17 = a1[1];
        v18 = v16;
        v19 = v16;
        if ( v17 )
        {
          --v17;
          v19 = v16 + v17;
        }
        v20 = *a1;
        v21 = v19 + 1;
        if ( a1[2] < v19 + 1 )
        {
          v26 = v16;
          v25 = v19;
          v24 = v19 + 1;
          v23 = qvector_reserve(a1, v20, v21, 1);
          v18 = v26;
          v19 = v25;
          *a1 = v23;
          v21 = v24;
          v20 = v23;
        }
        a1[1] = v21;
        *(_BYTE *)(v20 + v19) = 0;
        memmove((void *)(v17 + *a1), s, v18);
        v6 = *v8;
        if ( !(_BYTE)v6 )
          return v28 - __readfsqword(0x28u);
      }
      else
      {
        v13 = 0x4000000000003BC9LL;
        v14 = (char)v6;
        if ( _bittest64(&v13, (unsigned int)(v6 - 33)) )
          goto LABEL_8;
LABEL_19:
        if ( !isalnum(v14) )
          goto LABEL_13;
LABEL_8:
        v12 = a1[1];
        if ( v12 )
        {
          v9 = v12 + 1;
          v10 = a1[1];
          v11 = *a1;
          --v12;
          if ( a1[2] < v9 )
            goto LABEL_10;
        }
        else
        {
          v11 = *a1;
          v10 = 1;
          v9 = 2;
          if ( (unsigned __int64)a1[2] < 2 )
          {
LABEL_10:
            v15 = qvector_reserve(a1, v11, v9, 1);
            *a1 = v15;
            v11 = v15;
          }
        }
        a1[1] = v9;
        *(_BYTE *)(v11 + v12) = v6;
        *(_BYTE *)(*a1 + v10) = 0;
        v6 = *v8;
        if ( !(_BYTE)v6 )
          return v28 - __readfsqword(0x28u);
      }
    }
  }
  return v28 - __readfsqword(0x28u);
}
