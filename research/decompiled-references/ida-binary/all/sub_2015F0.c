__int64 __fastcall sub_2015F0(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebp
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rbx
  void *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdi
  struct _Unwind_Exception *v27; // rbx
  __int64 v28; // [rsp+10h] [rbp-88h] BYREF
  int v29; // [rsp+18h] [rbp-80h] BYREF
  __int64 v30; // [rsp+20h] [rbp-78h]
  __int128 v31; // [rsp+28h] [rbp-70h]
  __int128 v32; // [rsp+38h] [rbp-60h] BYREF
  __int128 v33; // [rsp+48h] [rbp-50h]
  int v34; // [rsp+58h] [rbp-40h]
  __int64 v35; // [rsp+60h] [rbp-38h]
  __int128 v36; // [rsp+68h] [rbp-30h]
  unsigned __int64 v37; // [rsp+78h] [rbp-20h]

  v7 = *(unsigned __int8 *)(a1 + 880);
  v37 = __readfsqword(0x28u);
  if ( (_BYTE)v7 || !*(_BYTE *)(a1 + 968) )
    return v7;
  if ( !*(_QWORD *)(a1 + 424) )
  {
    sub_1E69C0(a5, a1, (__int64)a2, a3, a4);
    goto LABEL_34;
  }
  v9 = *(_DWORD *)(a1 + 416);
  switch ( v9 )
  {
    case 2:
      v10 = *(_QWORD *)(a1 + 896);
      break;
    case 3:
      v10 = *(_QWORD *)(a1 + 904);
      break;
    case 1:
      v10 = *(_QWORD *)(a1 + 888);
      break;
    default:
      return v7;
  }
  if ( v10 )
  {
    v7 = *(unsigned __int8 *)(v10 + 29);
    if ( (_BYTE)v7 )
    {
      sub_1FE430(a1, a2, a3, a4);
      a5 = 0.0;
      v13 = *(_BYTE *)(a1 + 881) == 0;
      v28 = a1;
      v29 = 40;
      v30 = 0;
      v34 = 0;
      v35 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v36 = 0;
      if ( !v13 )
        goto LABEL_36;
      *(_BYTE *)(a1 + 881) = 1;
      sub_1F4650(a1, (__int64)&v29, (__int64)a2, v12, 0.0);
      a2 = (__m128i *)((char *)&v32 + 8);
      v7 = sub_1F4780(a1, (__int64)&v32 + 8, (__int64)&v29, v14, 0.0);
      if ( (_BYTE)v7 )
      {
        a2 = (__m128i *)((char *)&v32 + 8);
        sub_1F4820(a1, (__int64)&v32 + 8);
        *(_BYTE *)(a1 + 880) = 1;
      }
      if ( *(_BYTE *)(v28 + 881) )
      {
        v17 = v35;
        *(_BYTE *)(v28 + 881) = 0;
        if ( v17 )
        {
          *(_QWORD *)&v36 = 0;
          a5 = qfree(v17, (const char *)&v32 + 8);
        }
        v18 = v33;
        v19 = *((_QWORD *)&v32 + 1);
        if ( (_QWORD)v33 )
        {
          v20 = 0;
          do
          {
            v21 = *(void **)(v19 + 8 * v20);
            if ( v21 )
            {
              a2 = (__m128i *)&off_18;
              operator delete(v21, 0x18u);
              v19 = *((_QWORD *)&v32 + 1);
            }
            ++v20;
          }
          while ( v18 != v20 );
        }
        if ( v19 )
        {
          *(_QWORD *)&v33 = 0;
          a5 = qfree(v19, a2->m128i_i8, a5);
        }
        v22 = v30;
        if ( v30 )
        {
          v23 = v31;
          if ( (_QWORD)v31 )
          {
            v24 = 0;
            do
            {
              v25 = (__int64 *)(v22 + 24 * v24);
              v26 = *v25;
              if ( *v25 )
              {
                v25[1] = 0;
                a5 = qfree(v26, a2->m128i_i8, a5);
                v22 = v30;
              }
              ++v24;
            }
            while ( v23 != v24 );
          }
          *(_QWORD *)&v31 = 0;
          qfree(v22, a2->m128i_i8, a5);
        }
        return v7;
      }
LABEL_34:
      if ( under_debugger )
        goto LABEL_38;
      interr(40732, a2, v15, v16, a5);
LABEL_36:
      if ( !under_debugger )
      {
        v27 = (struct _Unwind_Exception *)interr(40731, a2, v11, v12, a5);
        sub_1E7570(&v28, a2->m128i_i8, v5, v6, a5);
        _Unwind_Resume(v27);
      }
LABEL_38:
      BUG();
    }
  }
  return v7;
}
