unsigned __int64 __fastcall sub_3A67D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r15
  _BYTE *v14; // rax
  __int64 func; // rax
  __int64 v16; // rsi
  __int64 *v17; // r15
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 i; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 j; // rcx
  __int64 *v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 k; // rbx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v35; // [rsp-8h] [rbp-C8h]
  __int64 v36; // [rsp+0h] [rbp-C0h]
  __int64 v37; // [rsp+8h] [rbp-B8h]
  __int64 v38; // [rsp+10h] [rbp-B0h]
  __int64 v39; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+28h] [rbp-98h] BYREF
  __int128 v41; // [rsp+30h] [rbp-90h]
  _QWORD v42[7]; // [rsp+48h] [rbp-78h] BYREF
  unsigned __int64 v43; // [rsp+80h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v41 = 0;
  v42[0] = &off_4E17A0;
  v42[4] = &v40;
  v42[5] = a3;
  v40 = 0;
  v42[3] = 0;
  v42[6] = a4;
  *(__m128i *)&v42[1] = _mm_load_si128((const __m128i *)&xmmword_41F900);
  ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int64, __int64))callui)(1147, v42, 8, a4, a5, a6);
  if ( !(_QWORD)v41 )
  {
    v30 = v40;
    if ( v40 )
      goto LABEL_36;
    return v43 - __readfsqword(0x28u);
  }
  v11 = 0;
  v12 = 0;
  do
  {
    while ( 1 )
    {
      v14 = (_BYTE *)callui(1105, *(unsigned int *)(v40 + 96 * v12 + 40), v7, v8, v9, v10, v35, v36, v37, v38);
      if ( v14 )
      {
        if ( *v14 == 36 && (unsigned int)qsscanf(v14, "$%a", v42) == 1 && v42[0] != -1 )
        {
          func = get_func(v42[0]);
          if ( func )
            break;
        }
      }
LABEL_3:
      ++v11;
      v13 = v41;
      v12 = v11;
      if ( v11 >= (unsigned __int64)v41 )
        goto LABEL_30;
    }
    v16 = *(_QWORD *)(a1 + 40);
    v42[0] = func;
    memset(&v42[1], 0, 24);
    sub_14C800(&v39, v16, v42, nullptr, 0);
    v17 = (__int64 *)v39;
    if ( !v39 )
    {
      if ( v42[1] )
      {
        v42[2] = 0;
        qfree(v42[1]);
      }
      goto LABEL_3;
    }
    if ( (*(_DWORD *)(v39 + 104))-- == 1 )
    {
      sub_258D30(v17);
      v19 = v17[23];
      if ( v19 )
      {
        v20 = v17[24];
        if ( v20 )
        {
          for ( i = 0; i != v20; ++i )
          {
            v22 = (__int64 *)(v19 + 24 * i);
            v23 = *v22;
            if ( *v22 )
            {
              v22[1] = 0;
              v37 = i;
              v36 = v20;
              qfree(v23);
              i = v37;
              v20 = v36;
              v19 = v17[23];
            }
          }
        }
        v17[24] = 0;
        qfree(v19);
      }
      v24 = v17[20];
      if ( v24 )
      {
        v17[21] = 0;
        qfree(v24);
      }
      v16 = v17[16];
      if ( v16 )
      {
        v25 = v17[17];
        if ( v25 )
        {
          for ( j = 0; j != v25; ++j )
          {
            v27 = (__int64 *)(v16 + 32 * j);
            v28 = *v27;
            if ( *v27 )
            {
              v27[1] = 0;
              v37 = v25;
              v36 = j;
              qfree(v28);
              v25 = v37;
              j = v36;
              v16 = v17[16];
            }
          }
        }
        v17[17] = 0;
        qfree(v16);
      }
      sub_255410((__int64)(v17 + 2));
      j__qfree(v17);
      v29 = v42[1];
      if ( v42[1] )
      {
LABEL_28:
        v42[2] = 0;
        qfree(v29);
      }
    }
    else
    {
      v29 = v42[1];
      if ( v42[1] )
        goto LABEL_28;
    }
    sub_2585A0((__int64)v17, v16, v7);
    ++v11;
    v13 = v41;
    v12 = v11;
  }
  while ( v11 < (unsigned __int64)v41 );
LABEL_30:
  v30 = v40;
  if ( v40 )
  {
    if ( v13 )
    {
      for ( k = 0; k != v13; ++k )
      {
        v32 = v30 + 96 * k;
        v33 = *(_QWORD *)(v32 + 8);
        if ( v33 )
        {
          *(_QWORD *)(v32 + 16) = 0;
          qfree(v33);
          v30 = v40;
        }
      }
    }
LABEL_36:
    *(_QWORD *)&v41 = 0;
    qfree(v30);
  }
  return v43 - __readfsqword(0x28u);
}
