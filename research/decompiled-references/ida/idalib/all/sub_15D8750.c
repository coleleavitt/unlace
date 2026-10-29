void __fastcall sub_15D8750(void **p_ptr, __int64 a2, __int64 a3)
{
  const __m128i *v3; // r15
  unsigned __int64 v5; // rdx
  __int16 v6; // ax
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  unsigned __int16 v10; // ax
  __m128i *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v17; // [rsp+18h] [rbp-60h]
  _BYTE v18[88]; // [rsp+20h] [rbp-58h] BYREF

  v3 = (const __m128i *)p_ptr;
  v5 = *((unsigned __int16 *)p_ptr + 28);
  v17 = 0x400000000LL;
  v6 = v5;
  ptr = v18;
  if ( v5 > 4 )
  {
    p_ptr = &ptr;
    sub_2237220(&ptr, v18, v5, 8);
    v6 = v3[3].m128i_i16[4];
  }
  if ( v6 )
  {
    v7 = (unsigned int)v17;
    v8 = 0;
    do
    {
      v9 = v3[5].m128i_i64[v8] & 0xFFFFFFFFFFFFFFFCLL;
      if ( v7 + 1 > (unsigned __int64)HIDWORD(v17) )
      {
        p_ptr = &ptr;
        sub_2237220(&ptr, v18, v7 + 1, 8);
        *((_QWORD *)ptr + (unsigned int)v17) = v9;
      }
      else
      {
        *((_QWORD *)ptr + v7) = v9;
      }
      v5 = v3[3].m128i_u16[4];
      ++v8;
      v7 = (unsigned int)(v17 + 1);
      LODWORD(v17) = v17 + 1;
    }
    while ( (unsigned int)v5 > (unsigned int)v8 );
  }
  v10 = *(_WORD *)(v3[4].m128i_i64[1] + 8);
  if ( v10 == 27 )
  {
    v11 = sub_B2D810(*(_QWORD *)(a2 + 248), ptr, v17, v3);
  }
  else if ( v10 <= 0x1Bu )
  {
    if ( v10 == 14 )
    {
      v11 = sub_B2D210(*(_QWORD *)(a2 + 248), ptr, v17, v3);
    }
    else if ( v10 <= 0xEu )
    {
      if ( v10 != 12 )
        goto LABEL_35;
      v11 = sub_B37EB0(*(_QWORD *)(a2 + 248), ptr, v17, v3);
    }
    else if ( v10 == 15 )
    {
      v11 = sub_B2D360(*(_QWORD *)(a2 + 248), ptr, v17, v3);
    }
    else
    {
      if ( v10 != 26 )
        goto LABEL_35;
      v11 = sub_B2D530(*(_QWORD *)(a2 + 248), ptr, v17, v3);
    }
  }
  else if ( v10 == 328 )
  {
    v11 = sub_B38010(*(_QWORD *)(a2 + 248), ptr, v17, v3);
  }
  else
  {
    if ( v10 <= 0x148u )
    {
      if ( v10 == 45 )
      {
        v11 = sub_B37E00(*(_QWORD *)(a2 + 248), ptr, v17, v3);
        goto LABEL_14;
      }
      if ( v10 == 182 )
      {
        v11 = sub_B2EE50(*(_QWORD *)(a2 + 248), ptr, v17, v3);
        goto LABEL_14;
      }
LABEL_35:
      sub_15D8A10(p_ptr, v18, v5);
      return;
    }
    if ( v10 == 331 )
    {
      v11 = sub_B37F60(*(_QWORD *)(a2 + 248), ptr, v17, v3);
    }
    else
    {
      if ( v10 != 381 )
        goto LABEL_35;
      v11 = sub_B380C0(*(_QWORD *)(a2 + 248), ptr, v17, v3);
    }
  }
LABEL_14:
  sub_B8CC60(a3, (__int64)v11, v12, v13, v14, v15);
  if ( ptr != v18 )
    free(ptr);
}
