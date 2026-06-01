__int64 __fastcall sub_222E000(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v5; // rsi
  char *v6; // rax
  __int64 v7; // r12
  unsigned __int8 *v9; // rax
  int v10; // r14d
  unsigned __int8 *v11; // rcx
  int v12; // edi
  int v13; // edx
  char v14; // si
  int v15; // ebx
  int v16; // r13d
  __m128 *v17; // rax
  bool v18; // zf
  unsigned __int8 *v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  const char *v23; // [rsp+8h] [rbp-A0h] BYREF
  unsigned __int8 *v24; // [rsp+18h] [rbp-90h] BYREF
  __int64 v25; // [rsp+20h] [rbp-88h] BYREF
  char v26; // [rsp+28h] [rbp-80h]
  unsigned __int8 *v27; // [rsp+30h] [rbp-78h]
  unsigned __int8 *v28; // [rsp+38h] [rbp-70h]
  unsigned __int8 *v29; // [rsp+40h] [rbp-68h]
  __int16 v30[44]; // [rsp+50h] [rbp-58h] BYREF

  v27 = a2;
  v28 = a2;
  v5 = &a2[a3];
  v26 = 0;
  v29 = v5;
  v30[0] = 0;
  if ( v5 != a2 )
  {
    if ( (*a2 & 0x80u) != 0 )
    {
LABEL_6:
      v24 = a2;
      if ( !(unsigned __int8)sub_22189B0(&v24, v5) )
      {
        v9 = v27;
        v10 = (_DWORD)v24 - (_DWORD)a2;
        v11 = &v27[v24 - a2];
        v28 = v11;
        if ( v27 >= v11 )
        {
          v16 = (_DWORD)v24 - (_DWORD)a2;
          v15 = 1;
        }
        else
        {
          v12 = (int)v27;
          v13 = 1;
          do
          {
            v14 = *v9++;
            if ( v14 == 10 )
            {
              ++v13;
              v12 = (int)v9;
            }
          }
          while ( v11 != v9 );
          v15 = v13;
          v16 = (_DWORD)v11 - v12;
        }
        v17 = (__m128 *)operator new(0x20u);
        v18 = v26 == 0;
        v7 = (__int64)v17;
        v17[1].m128_i32[0] = v15;
        v23 = "Invalid UTF-8 sequence";
        v17[1].m128_i32[1] = v16;
        v17[1].m128_i32[2] = v10;
        *v17 = _mm_loadh_ps((const double *)&v23);
        if ( !v18 )
        {
          v26 = 0;
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
        }
        v26 = 1;
        goto LABEL_9;
      }
    }
    else
    {
      v6 = (char *)a2;
      while ( v5 != (unsigned __int8 *)++v6 )
      {
        if ( *v6 < 0 )
          goto LABEL_6;
      }
    }
  }
  if ( (unsigned __int8)sub_222CE40(&v25, v30) )
  {
    v19 = v28;
    if ( v29 != v28 )
    {
      v20 = *v28;
      if ( (unsigned __int8)v20 <= 0x20u && (v21 = 0x100002600LL, _bittest64(&v21, v20)) )
      {
        while ( 1 )
        {
          v28 = ++v19;
          if ( v29 == v19 )
            break;
          v22 = *v19;
          if ( (unsigned __int8)v22 > 0x20u || !_bittest64(&v21, v22) )
            goto LABEL_26;
        }
      }
      else
      {
LABEL_26:
        if ( !(unsigned __int8)sub_22286E0(&v25, (__int64)"Text after end of document") )
          goto LABEL_8;
      }
    }
    *(_BYTE *)(a1 + 40) &= ~1u;
    sub_2229580(a1, (unsigned __int16 *)v30);
    goto LABEL_10;
  }
LABEL_8:
  v7 = v25;
LABEL_9:
  *(_BYTE *)(a1 + 40) |= 1u;
  v25 = 0;
  *(_QWORD *)a1 = v7;
LABEL_10:
  sub_222B2A0(v30);
  sub_20CE5C0(&v25);
  return a1;
}
