__int64 __fastcall sub_F7D0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  unsigned __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 *v27; // rax
  __int64 func; // rsi
  _QWORD *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // rbp
  __int64 v34; // rax
  __int64 v35; // [rsp+8h] [rbp-D0h]
  __int64 v36; // [rsp+10h] [rbp-C8h]
  __m128i v37; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+38h] [rbp-A0h]
  __int64 v40; // [rsp+48h] [rbp-90h] BYREF
  __int128 v41; // [rsp+50h] [rbp-88h]
  __int64 v42; // [rsp+70h] [rbp-68h]
  __int64 v43; // [rsp+78h] [rbp-60h]
  __int16 v44; // [rsp+90h] [rbp-48h]
  char v45; // [rsp+92h] [rbp-46h]
  unsigned __int64 v46; // [rsp+98h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  LOBYTE(v5) = a2 == -1 || a4 == -1;
  if ( (_BYTE)v5 )
    return v5;
  LOBYTE(v5) = a2 >= a3 || a3 == -1;
  if ( (_BYTE)v5 )
    return v5;
  if ( !*(_BYTE *)(a1 + 572) )
    *(_BYTE *)(a1 + 572) = 1;
  v44 = 104;
  v45 = 0;
  v38 = 0;
  LOBYTE(v40) = 0;
  v39 = 0;
  v38 = qvector_reserve(&v38, 0, 1, 16);
  v11 = (unsigned __int64 *)(16 * v39 + v38);
  *v11 = a2;
  v11[1] = a3;
  *(_QWORD *)&v39 = v39 + 1;
  if ( HIBYTE(v44) == 2 )
  {
    v21 = v40;
    if ( v40 )
    {
      v22 = v41;
      if ( (_QWORD)v41 )
      {
        v23 = 0;
        v24 = 0;
        do
        {
          v25 = *(_QWORD *)(v21 + v23);
          if ( v25 )
          {
            *(_QWORD *)(v21 + v23 + 8) = 0;
            v36 = v23;
            v35 = v22;
            qfree(v25);
            v21 = v40;
            v23 = v36;
            v22 = v35;
          }
          ++v24;
          v23 += 56;
        }
        while ( v24 != v22 );
      }
      *(_QWORD *)&v41 = 0;
      qfree(v21);
      v40 = 0;
      v26 = 0;
      *((_QWORD *)&v41 + 1) = 0;
    }
    else
    {
      v26 = *((_QWORD *)&v41 + 1);
    }
    v14 = v41;
    v12 = v41 + 1;
    if ( v26 >= (__int64)v41 + 1 )
    {
      v13 = 0;
      goto LABEL_9;
    }
  }
  else
  {
    if ( HIBYTE(v44) == 1 )
    {
      if ( v42 )
      {
        v43 = 0;
        qfree(v42);
      }
      if ( v40 )
      {
        *(_QWORD *)&v41 = 0;
        qfree(v40);
      }
    }
    v40 = 0;
    v12 = 1;
    HIBYTE(v44) = 2;
    v41 = 0;
  }
  v13 = qvector_reserve(&v40, 0, v12, 56);
  v40 = v13;
  v14 = v41;
LABEL_9:
  v37.m128i_i64[0] = a4;
  v37.m128i_i64[1] = -1;
  v15 = v13 + 56 * v14;
  *(_OWORD *)(v15 + 8) = 0;
  *(_QWORD *)v15 = 0;
  *(_QWORD *)(v15 + 32) = 0xFFFFFFFFLL;
  *(_QWORD *)(v15 + 24) = -1;
  *(_QWORD *)&v41 = v41 + 1;
  v16 = *(_QWORD *)(v15 + 8);
  v17 = *(_QWORD *)v15;
  v18 = *(_QWORD *)(v15 + 16);
  *(_OWORD *)(v15 + 40) = -1;
  v19 = v16 + 1;
  if ( (unsigned __int64)&v37 >= v17 && (unsigned __int64)&v37 < v17 + 16 * v18 )
  {
    if ( v18 < v19 )
    {
      v17 = qvector_reserve(v15, v17, v16 + 1, 16);
      *(_QWORD *)v15 = v17;
      v16 = *(_QWORD *)(v15 + 8);
    }
    v27 = (__int64 *)(v17 + 16 * v16);
    *v27 = a4;
    v27[1] = -1;
  }
  else
  {
    if ( v18 < v19 )
    {
      v17 = qvector_reserve(v15, v17, v16 + 1, 16);
      *(_QWORD *)v15 = v17;
      v16 = *(_QWORD *)(v15 + 8);
    }
    *(__m128i *)(v17 + 16 * v16) = _mm_load_si128(&v37);
  }
  ++*(_QWORD *)(v15 + 8);
  *(_QWORD *)(v15 + 48) = a5;
  if ( !(unsigned int)add_tryblk(&v38) )
  {
    if ( (unsigned __int8)is_loaded(a4) )
    {
      if ( (unsigned __int8)sub_1B1A0(a1) )
      {
        sub_1B460(a1, a4, 1);
      }
      else
      {
        set_abits(a4, 0x20000000);
        func = get_func(a2);
        if ( func )
        {
          if ( (unsigned __int8)sub_EB40(a1, func, a4) )
          {
            v29 = (_QWORD *)get_func(a2);
            sub_EAB0(v29);
          }
        }
        else
        {
          auto_apply_tail(a4, a2);
        }
      }
    }
    v5 = 1;
  }
  if ( HIBYTE(v44) == 2 )
  {
    v30 = v40;
    if ( !v40 )
      goto LABEL_19;
    v31 = v41;
    if ( (_QWORD)v41 )
    {
      v32 = 0;
      v33 = 0;
      do
      {
        v34 = *(_QWORD *)(v30 + v32);
        if ( v34 )
        {
          *(_QWORD *)(v30 + v32 + 8) = 0;
          qfree(v34);
          v30 = v40;
        }
        ++v33;
        v32 += 56;
      }
      while ( v31 != v33 );
    }
  }
  else
  {
    if ( HIBYTE(v44) != 1 )
      goto LABEL_19;
    if ( v42 )
    {
      v43 = 0;
      qfree(v42);
    }
    v30 = v40;
    if ( !v40 )
      goto LABEL_19;
  }
  *(_QWORD *)&v41 = 0;
  qfree(v30);
LABEL_19:
  HIBYTE(v44) = 0;
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  return v5;
}
