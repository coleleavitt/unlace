__int64 __fastcall sub_239260(_QWORD *a1, _BYTE *a2, double a3, __m128 a4, __m128 a5)
{
  __int64 v5; // rcx
  unsigned int v6; // r13d
  const __m128i *v7; // rbp
  __int64 v9; // rax
  __int64 v10; // r15
  const __m128i *v11; // rbp
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // dl
  __int64 v19; // [rsp+8h] [rbp-1C0h] BYREF
  _QWORD v20[5]; // [rsp+10h] [rbp-1B8h] BYREF
  char v21; // [rsp+38h] [rbp-190h]
  __int64 v22; // [rsp+40h] [rbp-188h]
  int v23; // [rsp+48h] [rbp-180h]
  __int64 v24; // [rsp+50h] [rbp-178h] BYREF
  __int64 v25; // [rsp+58h] [rbp-170h]
  const __m128i *v26; // [rsp+60h] [rbp-168h]
  __int64 v27; // [rsp+90h] [rbp-138h]
  int v28; // [rsp+A0h] [rbp-128h]
  char v29; // [rsp+A4h] [rbp-124h]
  char v30; // [rsp+A5h] [rbp-123h]
  __int64 v31; // [rsp+A8h] [rbp-120h]
  __int64 v32; // [rsp+B0h] [rbp-118h]
  char v33; // [rsp+D8h] [rbp-F0h]
  char v34; // [rsp+180h] [rbp-48h]
  unsigned __int64 v35; // [rsp+188h] [rbp-40h]

  v5 = a1[100];
  v35 = __readfsqword(0x28u);
  sub_232080((__int64)&v24, (__int64)a1, (unsigned __int64)(a1 + 54), v5);
  v6 = sub_2077B0(a1, v27, a3, a4, a5);
  if ( v6 )
  {
LABEL_2:
    if ( !v32 )
      goto LABEL_9;
    goto LABEL_3;
  }
  v9 = v25;
  v10 = 0;
  if ( *(int *)(v25 + 64) > 0 )
  {
    while ( 1 )
    {
      v11 = *(const __m128i **)(*(_QWORD *)(v9 + 528) + 8 * v10);
      v28 = *(_QWORD *)(v9 + 440);
      v30 = 0;
      v26 = v11;
      do
      {
        v12 = sub_11B0F0(v11, (__int64)&v24);
        if ( v12 >= 0 )
        {
          if ( v30 )
            goto LABEL_17;
        }
        else
        {
          if ( v12 != -36 )
            goto LABEL_18;
          if ( v30 )
          {
LABEL_17:
            v12 = -36;
LABEL_18:
            v6 = v12;
            goto LABEL_2;
          }
        }
      }
      while ( v12 == -36 );
      if ( v12 )
      {
        if ( !under_debugger )
          sub_37DDE0(52214);
        BUG();
      }
      v9 = v25;
      v16 = (unsigned int)(v10 + 1);
      v17 = *(unsigned int *)(v25 + 64);
      if ( (int)v17 <= (int)v16 )
        break;
      if ( (unsigned int)++v10 >= (unsigned int)v17 )
        sub_222240(v11, &v24, v17, v16, v13, v14);
    }
  }
  if ( v32 )
  {
    if ( (*(_DWORD *)a1 & 0x8000000) != 0 )
    {
LABEL_3:
      if ( v34 )
      {
        v20[3] = 0;
        v20[4] = 0;
        v20[2] = v26;
        v7 = *(const __m128i **)(v25 + 520);
        v20[1] = v25;
        v21 = 0;
        v20[0] = &off_4B22A0;
        v22 = v27;
        v23 = 0;
        if ( v7 )
        {
          do
          {
            while ( (unsigned int)sub_11B0F0(v7, (__int64)v20) )
              ;
            v7 = (const __m128i *)v7->m128i_i64[1];
          }
          while ( v7 );
          if ( v23 )
            v6 = -36;
        }
      }
      goto LABEL_9;
    }
    v15 = 0;
    if ( v31 )
      v15 = *(_QWORD *)(v31 + 8);
    if ( v15 == v31 )
    {
LABEL_27:
      if ( (*(_DWORD *)v25 & 0x40000) != 0 || !(unsigned int)sub_22B000((__int64)&v24) )
        goto LABEL_2;
    }
    else
    {
      while ( 1 )
      {
        v19 = v15;
        if ( !(unsigned __int8)sub_2388F0((__int64)&v24, &v19) )
          break;
        v15 = v19;
        if ( v19 == v31 )
        {
          v18 = sub_2385B0((__int64)&v24, &v19);
          v15 = v19;
          if ( !v18 )
            break;
        }
        if ( v15 == v31 )
          goto LABEL_27;
      }
      if ( (v33 & 4) == 0
        || (*(_DWORD *)v25 & 0x40000) == 0 && !(unsigned int)sub_22B000((__int64)&v24) && (v33 & 4) == 0 )
      {
        v6 = -10;
        goto LABEL_2;
      }
    }
    v6 = -36;
    goto LABEL_2;
  }
LABEL_9:
  *a2 = v29;
  sub_2228F0(&v24);
  return v6;
}
