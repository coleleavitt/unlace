__int64 __fastcall sub_7F1490(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r14d
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // r15
  __m128i v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r15
  __m128i v24; // [rsp+0h] [rbp-98h]
  __m128i v25; // [rsp+10h] [rbp-88h] BYREF
  __int64 v26; // [rsp+20h] [rbp-78h]
  __m128i v27; // [rsp+30h] [rbp-68h] BYREF
  __int64 v28; // [rsp+40h] [rbp-58h]
  __int64 v29; // [rsp+48h] [rbp-50h]
  __int64 v30; // [rsp+50h] [rbp-48h]

  v24 = 0;
  if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
    v24 = _mm_loadu_si128((const __m128i *)(a2 + 32));
  if ( (unsigned __int8)sub_7EF1F0((__int64)a1, v24.m128i_i64[0], v24.m128i_i64[1], a4, a5, a6) )
  {
    v7 = sub_7F0C20(a1, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL), *(__int64 **)(a2 + 24));
    if ( (_BYTE)v7 )
    {
      v11 = *(_BYTE *)(a2 + 2);
      if ( (v11 & 0x10) != 0
        && (v19 = 16LL * ((v11 & 8) != 0) + 8LL * ((v11 & 0x20) != 0),
            v20 = *(unsigned int *)(a2 + v19 + 32),
            (_DWORD)v20)
        && (v21 = *(unsigned int *)(a2 + v19 + 44), v22 = a2 + v19 + 48, (_DWORD)v21) )
      {
        v23 = v22 + 32 * v21;
        while ( (unsigned __int8)sub_7EF520(a1, v22, v19, v20, v9, v10) )
        {
          v22 += 32;
          if ( v22 == v23 )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        sub_AC4830(&v27);
        v15 = v29;
        v16 = v30;
        v26 = v28;
        v17 = _mm_load_si128(&v27);
        v25 = v17;
LABEL_9:
        if ( v15 == v17.m128i_i64[0] )
        {
LABEL_15:
          if ( v16 == v17.m128i_i64[1] )
            return v7;
        }
        v18 = v17.m128i_i8[8] & 3;
        if ( (_DWORD)v18 )
          v17.m128i_i64[0] = sub_ACE280(&v25, a2, v18, v12, v13, v14);
        while ( 1 )
        {
          a2 = *(_QWORD *)v17.m128i_i64[0];
          if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v17.m128i_i64[0], a3) )
            break;
          v17.m128i_i64[1] = v25.m128i_i64[1];
          if ( (v25.m128i_i8[8] & 3) != 0 )
          {
            if ( v25.m128i_i64[1] <= 3uLL )
            {
              a2 = 1;
              sub_ACE0F0(&v25, 1);
            }
            else
            {
              sub_ACE150(&v25);
            }
            v17 = v25;
            goto LABEL_9;
          }
          v17.m128i_i64[0] = v25.m128i_i64[0] + 8;
          v25.m128i_i64[0] = v17.m128i_i64[0];
          if ( v15 == v17.m128i_i64[0] )
            goto LABEL_15;
        }
      }
    }
  }
  return 0;
}

