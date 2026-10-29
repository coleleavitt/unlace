__int64 __fastcall sub_BE07B0(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  unsigned int v7; // ebp
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r12
  __m128i v12; // rax
  __int16 v13; // si
  __int64 v14; // rcx
  _DWORD *v15; // rdx
  unsigned __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // r13
  __int64 *v20; // [rsp+8h] [rbp-80h] BYREF
  __m128i v21; // [rsp+10h] [rbp-78h] BYREF
  __int64 v22; // [rsp+20h] [rbp-68h]
  __m128i v23; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+40h] [rbp-48h]
  __int64 v25; // [rsp+48h] [rbp-40h]
  __int64 v26; // [rsp+50h] [rbp-38h]

  v20 = a1;
  if ( !(unsigned __int8)sub_BC9860(&v20, a2) )
    return 0;
  v3 = v20;
  v4 = *v20;
  v5 = *(__int64 (**)())(*v20 + 4064);
  if ( v5 != sub_BC6110 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v20, a2) )
      return 0;
    v3 = v20;
    v4 = *v20;
  }
  v6 = *(__int64 (**)())(v4 + 4072);
  if ( v6 != sub_BC6120 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(v3, a2) )
      return 0;
    v3 = v20;
    v4 = *v20;
  }
  v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v4 + 88))(v3, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  if ( (_BYTE)v7 )
  {
    v9 = *(_QWORD *)a2;
    if ( (*(_QWORD *)a2 & 0x80000) == 0 )
      goto LABEL_8;
    v13 = *(_WORD *)a2 & 0x1FF;
    v14 = 8LL * *(unsigned int *)(a2 + 4);
    v15 = (_DWORD *)(a2 + v14 + 80);
    if ( v13 == 24 )
      v15 = (_DWORD *)(a2 + v14 + 64);
    if ( !*v15 || (v9 & 0x80000) == 0 )
    {
LABEL_8:
      sub_EE9E50(&v23, a2);
      v12.m128i_i64[0] = v23.m128i_i64[0];
      v10 = v25;
      v21 = _mm_load_si128(&v23);
      v11 = v26;
      v22 = v24;
      v12.m128i_i64[1] = v21.m128i_i64[1];
      while ( v12.m128i_i64[0] == v10 )
      {
        while ( 1 )
        {
          if ( v11 == v12.m128i_i64[1] )
            return v7;
          if ( (v12.m128i_i8[8] & 3) != 0 )
LABEL_16:
            v12.m128i_i64[0] = sub_EF2B30(&v21);
LABEL_11:
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v20 + 96))(v20, *(_QWORD *)v12.m128i_i64[0]) )
            return 0;
          v12.m128i_i64[1] = v21.m128i_i64[1];
          if ( (v21.m128i_i8[8] & 3) != 0 )
            break;
          v12.m128i_i64[0] = v21.m128i_i64[0] + 8;
          v21.m128i_i64[0] = v12.m128i_i64[0];
          if ( v12.m128i_i64[0] != v10 )
            goto LABEL_10;
        }
        if ( (v21.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960(&v21);
        else
          sub_EF2750(&v21, 1);
        v12 = v21;
      }
LABEL_10:
      if ( (v12.m128i_i8[8] & 3) != 0 )
        goto LABEL_16;
      goto LABEL_11;
    }
    v16 = v9 >> 16;
    v17 = v15[3];
    if ( (v16 & 8) == 0 )
      BUG();
    if ( v13 == 24 )
    {
      if ( *(_DWORD *)(a2 + v14 + 64) )
      {
        v18 = a2 + v14 + 16LL * ((v16 & 8) != 0) + 64;
        goto LABEL_29;
      }
    }
    else if ( *(_DWORD *)(a2 + v14 + 80) )
    {
      v18 = a2 + v14 + 16LL * ((v16 & 8) != 0) + 80;
      goto LABEL_29;
    }
    v18 = 0;
LABEL_29:
    if ( v17 )
    {
      v19 = v18 + 32LL * (unsigned int)(v17 - 1) + 32;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*v20 + 112))(v20, v18) )
      {
        v18 += 32;
        if ( v19 == v18 )
          goto LABEL_8;
      }
      return 0;
    }
    goto LABEL_8;
  }
  return 0;
}
