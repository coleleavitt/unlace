void __fastcall sub_1E017F0(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // rbp
  const __m128i **v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const __m128i *v18; // r14
  __int64 *v19; // rax
  __int64 *v20; // rax
  unsigned __int64 *v21; // rax

  if ( (a2[1].m128i_i8[13] & 1) != 0 )
  {
    v7 = sub_B8C3D0((__int64)a2, (__int64)a2, a3, a4, a5, a6);
    v11 = *((unsigned int *)v7 + 2);
    v12 = *v7 + 8 * v11;
    if ( (a2[1].m128i_i8[13] & 1) != 0 )
      v13 = (const __m128i **)*sub_B8C3D0((__int64)a2, (__int64)a2, v11, v8, v9, v10);
    else
      v13 = nullptr;
    while ( 1 )
    {
      if ( (const __m128i **)v12 == v13 )
        return;
      v18 = *v13;
      if ( (*v13)[2].m128i_i16[2] == 362 )
      {
        if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
          goto LABEL_4;
        v19 = sub_B8C3D0(a3, (__int64)a2, v11, v8, v9, v10);
        v8 = *v19;
        v11 = *v19 + 8LL * *((unsigned int *)v19 + 2);
        if ( *v19 >= v11 )
        {
          if ( v8 == v11 )
            goto LABEL_4;
          if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 362 )
          {
            v21 = (unsigned __int64 *)(v11 + 8);
            while ( v21 != (unsigned __int64 *)v8 )
            {
              v11 = *v21++;
              if ( *(_WORD *)(v11 + 36) == 362 )
                goto LABEL_5;
            }
LABEL_4:
            a2 = sub_B2B750(v18, *(_QWORD *)(a1 + 248));
            sub_B8CC60(a3, (__int64)a2, v14, v15, v16, v17);
          }
        }
        else
        {
          v20 = (__int64 *)*v19;
          while ( 1 )
          {
            v8 = *v20;
            if ( *(_WORD *)(*v20 + 36) == 362 )
              break;
            if ( (__int64 *)v11 == ++v20 )
              goto LABEL_4;
          }
          if ( (__int64 *)v11 == v20 )
            goto LABEL_4;
        }
      }
LABEL_5:
      ++v13;
    }
  }
}
