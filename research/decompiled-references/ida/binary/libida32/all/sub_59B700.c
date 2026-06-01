__int64 __fastcall sub_59B700(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v6)(__int64); // rax
  unsigned __int64 *v7; // rax
  __int64 (__fastcall *v9)(unsigned __int64 *, unsigned __int64, int); // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  _QWORD *v12; // rdx
  _QWORD *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // r12d
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r14
  void *v22; // rdi
  void *v23; // rbx
  __m128i v24; // xmm1
  __m128i v25; // xmm1
  void *v26; // rdi
  __m128i v27; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __m128i v29; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v6 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
  if ( v6 == sub_3D58E0 )
    v7 = a2 + 2;
  else
    v7 = (unsigned __int64 *)v6((__int64)a2);
  if ( a3 >= *v7 && a3 < v7[1] )
  {
    v9 = *(__int64 (__fastcall **)(unsigned __int64 *, unsigned __int64, int))(*a2 + 40);
    if ( v9 == sub_5993A0 )
    {
      if ( a2[10] )
      {
        v10 = (_QWORD *)a2[7];
        v11 = a2 + 6;
        v12 = v10;
        if ( v10 )
        {
          v13 = a2 + 6;
          do
          {
            while ( 1 )
            {
              v14 = v12[2];
              v15 = v12[3];
              if ( v12[4] >= a3 )
                break;
              v12 = (_QWORD *)v12[3];
              if ( !v15 )
                goto LABEL_13;
            }
            v13 = v12;
            v12 = (_QWORD *)v12[2];
          }
          while ( v14 );
LABEL_13:
          if ( v11 != v13 && a3 == v13[4] )
          {
            v16 = a3;
            v17 = a2 + 6;
            a3 = (unsigned int)a3;
            goto LABEL_21;
          }
        }
      }
    }
    else if ( a3 == v9(a2, a3, 0) )
    {
      v10 = (_QWORD *)a2[7];
      v16 = a3;
      v11 = a2 + 6;
      a3 = (unsigned int)a3;
      if ( !v10 )
        goto LABEL_25;
      v17 = a2 + 6;
      do
      {
LABEL_21:
        while ( 1 )
        {
          v18 = v10[2];
          v19 = v10[3];
          if ( v10[4] >= a3 )
            break;
          v10 = (_QWORD *)v10[3];
          if ( !v19 )
            goto LABEL_23;
        }
        v11 = v10;
        v10 = (_QWORD *)v10[2];
      }
      while ( v18 );
LABEL_23:
      if ( v11 == v17 || a3 < v11[4] )
      {
LABEL_25:
        if ( !under_debugger )
          interr(2451);
        BUG();
      }
      v20 = *((_DWORD *)v11 + 10);
      *((_DWORD *)a2 + 34) = v20;
      if ( v20 != -1 )
      {
        v21 = switch_dbctx(*((int *)a2 + 2));
        a2[12] = 0;
        a2[15] = 0;
        sub_79B6F0(*(_QWORD *)(v21 + 1480) + 2352LL, **(_QWORD **)(v21 + 1480), a2 + 11, v16, 83);
        sub_79B6F0(*(_QWORD *)(v21 + 1480) + 2352LL, **(_QWORD **)(v21 + 1480), a2 + 14, v16, 70);
        sub_59B4B0((__int64)&ptr, v16, *((unsigned int *)a2 + 34), (__int64)(a2 + 11), (__int64)(a2 + 14));
        v22 = *(void **)a1;
        v23 = ptr;
        ptr = nullptr;
        v24 = _mm_loadu_si128(&v29);
        v29 = 0;
        if ( v22 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          v27 = v24;
          qfree(v22);
          v25 = _mm_load_si128(&v27);
          v26 = ptr;
          *(_QWORD *)a1 = v23;
          *(__m128i *)(a1 + 8) = v25;
          if ( v26 )
          {
            v29.m128i_i64[0] = 0;
            qfree(v26);
          }
        }
        else
        {
          *(_QWORD *)a1 = v23;
          *(__m128i *)(a1 + 8) = v24;
        }
      }
    }
  }
  return a1;
}

