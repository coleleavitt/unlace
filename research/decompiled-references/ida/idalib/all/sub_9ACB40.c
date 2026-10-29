unsigned __int8 __fastcall sub_9ACB40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  unsigned __int8 result; // al
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rdx
  unsigned __int64 v19; // rax
  __int64 *v20; // rcx
  __int32 v21; // eax
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // [rsp+8h] [rbp-90h] BYREF
  __m128i v27[2]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v28; // [rsp+30h] [rbp-68h] BYREF
  __m128i v29; // [rsp+38h] [rbp-60h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 25 > 1 )
    v8 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
  v9 = sub_B8C330(a3);
  v28 = *(_QWORD *)(v8 + 24);
  v26 = sub_F67970(&v28, v9);
  v13 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
    v26 = sub_F68450(v13, v9, v10, v11, v12);
  result = sub_9AA2D0(&v26);
  if ( result )
  {
    if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
    {
      v15 = sub_B8C3D0(a3);
      v18 = *(__int64 **)v15;
      v19 = *(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8);
      if ( (unsigned __int64)v18 >= v19 )
      {
        if ( v18 != (__int64 *)v19 )
        {
          if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) == 350 )
          {
LABEL_14:
            v22 = *v18;
            if ( *(_WORD *)(*v18 + 36) != 350 )
            {
              v23 = v18 + 1;
              do
                v22 = *v23++;
              while ( *(_WORD *)(v22 + 36) != 350 );
            }
            v21 = dword_23DAF78[*(unsigned int *)(v22 + 40)];
            goto LABEL_12;
          }
          v24 = (__int64 *)(v19 + 8);
          while ( v18 != v24 )
          {
            v25 = *v24++;
            if ( *(_WORD *)(v25 + 36) == 350 )
              goto LABEL_14;
          }
        }
      }
      else
      {
        v20 = v18;
        while ( *(_WORD *)(*v20 + 36) != 350 )
        {
          if ( (__int64 *)v19 == ++v20 )
            goto LABEL_11;
        }
        if ( (__int64 *)v19 != v20 )
          goto LABEL_14;
      }
    }
LABEL_11:
    v21 = sub_9A9F60(v26);
LABEL_12:
    v29.m128i_i32[2] = v21;
    v28 = a2;
    v29.m128i_i32[0] = 1;
    return (unsigned __int8)sub_9AC3A0(v27, a1 + 16, &v28, &v29, v16, v17);
  }
  return result;
}
