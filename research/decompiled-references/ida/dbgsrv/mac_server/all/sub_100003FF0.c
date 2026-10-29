/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100003FF0
// Address: 0x0000000100003FF0

//----- (0000000100003FF0) ----------------------------------------------------
__int64 __fastcall sub_100003FF0(__int64 a1, double a2, double a3)
{
  __int64 *v3; // r12
  __int64 *v4; // r13
  unsigned __int64 v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // r14
  bool v8; // zf
  __int64 v9; // rdx
  __int128 *v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rcx
  size_t v14; // r15
  bool v15; // cf
  size_t v16; // rcx
  void *v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int128 *v23; // r14
  unsigned __int64 v25; // rax
  __int64 *v26; // rdx
  __int64 *v27; // rcx
  __int128 *v28; // rcx
  __int128 *v29; // rax
  _Unwind_Exception *v30; // rax
  _Unwind_Exception *v31; // rbx
  void *__src; // [rsp+8h] [rbp-B8h]
  void (__fastcall **v33[3])(_QWORD, __int64, __int64, _BYTE *, __int128 *); // [rsp+18h] [rbp-A8h] BYREF
  __int128 *v34; // [rsp+30h] [rbp-90h] BYREF
  __int128 v35; // [rsp+38h] [rbp-88h] BYREF
  __int64 v36; // [rsp+48h] [rbp-78h] BYREF
  __int64 v37; // [rsp+50h] [rbp-70h]
  char v38; // [rsp+58h] [rbp-68h]
  _DWORD v39[8]; // [rsp+5Ch] [rbp-64h] BYREF
  __int128 v40; // [rsp+7Ch] [rbp-44h]
  int v41; // [rsp+8Ch] [rbp-34h]

  if ( *(_QWORD *)(a1 + 920) != -1 && *(_QWORD *)(a1 + 936) != -1 && (unsigned __int8)sub_10001A120(a1 + 864) )
  {
    sub_10001A410(a1 + 864, a2, a3);
    if ( !*(_DWORD *)(a1 + 952) )
    {
      if ( under_debugger != 1 )
      {
        interr(0x7598u);
        v31 = v30;
        sub_10000C700((__int64)&v34, (_QWORD *)v35);
        _Unwind_Resume(v31);
      }
LABEL_62:
      BUG();
    }
    v35 = 0;
    v34 = &v35;
    v33[0] = (void (__fastcall **)(_QWORD, __int64, __int64, _BYTE *, __int128 *))&off_1000A7590;
    v33[1] = (void (__fastcall **)(_QWORD, __int64, __int64, _BYTE *, __int128 *))&v34;
    v33[2] = (void (__fastcall **)(_QWORD, __int64, __int64, _BYTE *, __int128 *))a1;
    if ( sub_10001A5D0(a1 + 864, *(_DWORD *)(a1 + 956), *(_QWORD *)(a1 + 960), v33) )
    {
      v3 = *(__int64 **)(a1 + 1136);
      v4 = (__int64 *)(a1 + 1144);
      if ( v3 != (__int64 *)(a1 + 1144) )
      {
        do
        {
          v5 = v3[4];
          if ( *(_QWORD *)(a1 + 920) == v5 )
            goto LABEL_10;
          v9 = v35;
          if ( !(_QWORD)v35 )
            goto LABEL_22;
          v10 = &v35;
          do
          {
            if ( *(_QWORD *)(v9 + 32) >= v5 )
              v10 = (__int128 *)v9;
            v9 = *(_QWORD *)(v9 + 8LL * (*(_QWORD *)(v9 + 32) < v5));
          }
          while ( v9 );
          if ( v10 != &v35 && *((_QWORD *)v10 + 4) <= v5 )
          {
LABEL_10:
            v6 = (__int64 *)v3[1];
            if ( v6 )
            {
              do
              {
                v7 = v6;
                v6 = (__int64 *)*v6;
              }
              while ( v6 );
            }
            else
            {
              do
              {
                v7 = (__int64 *)v3[2];
                v8 = *v7 == (_QWORD)v3;
                v3 = v7;
              }
              while ( !v8 );
            }
          }
          else
          {
LABEL_22:
            v36 = 0xFFFFFFFFLL;
            v37 = -1;
            v38 = 0;
            v40 = 0;
            memset(v39, 0, sizeof(v39));
            v41 = 0;
            set_debug_event_code((__int64)&v36, 9);
            v11 = v39[0] & 0xFFFFFFF;
            v12 = (v39[0] & 0xFFFFFFF) - 9;
            if ( v12 >= 2 && v11 != 3
              || (LODWORD(v36) = *(_DWORD *)(a1 + 528),
                  HIDWORD(v36) = *(_DWORD *)(*(_QWORD *)(a1 + 1208) + 32LL),
                  v37 = -1,
                  v38 = 1,
                  v12 >= 2)
              && v11 != 3 )
            {
              if ( under_debugger != 1 )
                interr(0xCE1u);
              goto LABEL_62;
            }
            if ( &v39[1] != (_DWORD *)(v3 + 7) )
            {
              v13 = v3[8];
              v14 = 0;
              v15 = v13 == 0;
              v16 = v13 - 1;
              if ( !v15 )
                v14 = v16;
              if ( v15 || v16 == 0 )
              {
                *(_QWORD *)&v39[3] = 0;
              }
              else
              {
                __src = (void *)v3[7];
                v17 = *(void **)&v39[1];
                if ( *(_QWORD *)&v39[5] <= v14 )
                {
                  v17 = qvector_reserve((__int64)&v39[1], *(void **)&v39[1], v14 + 1, 1u);
                  *(_QWORD *)&v39[1] = v17;
                }
                *(_QWORD *)&v39[3] = v14 + 1;
                memmove(v17, __src, v14);
                *(_BYTE *)(*(_QWORD *)&v39[1] + v14) = 0;
              }
            }
            v18 = *(_QWORD *)(a1 + 152);
            if ( !v18 )
            {
              sub_10000A5A0(a1 + 120);
              v18 = *(_QWORD *)(a1 + 152);
            }
            v19 = v18 / 0x38;
            v20 = *(_QWORD *)(a1 + 128);
            v21 = *(_QWORD *)(v20 + 8 * (v18 / 0x38));
            v22 = v21 + 72 * (v18 % 0x38);
            if ( *(_QWORD *)(a1 + 136) == v20 )
              v22 = 0;
            if ( v22 == v21 )
              v22 = *(_QWORD *)(v20 + 8 * v19 - 8) + 4032LL;
            *(_QWORD *)(v22 - 72) = 0xFFFFFFFFLL;
            *(_QWORD *)(v22 - 64) = -1;
            *(_BYTE *)(v22 - 56) = 0;
            *(_DWORD *)(v22 - 52) = 0;
            ((void (__fastcall *)(__int64, __int64 *))copy_debug_event)(v22 - 72, &v36);
            *(__m128i *)(a1 + 152) = _mm_add_epi64(
                                       _mm_loadu_si128((const __m128i *)(a1 + 152)),
                                       (__m128i)xmmword_10008FE10);
            v7 = sub_10000CD60(a1 + 1136, v3);
            free_debug_event((__int64)&v36);
          }
          v3 = v7;
        }
        while ( v7 != v4 );
      }
      v23 = v34;
      if ( v34 != &v35 )
      {
        do
        {
          v25 = *((_QWORD *)v23 + 5);
          if ( v25 )
          {
            v26 = (__int64 *)*v4;
            if ( !*v4 )
              goto LABEL_53;
            v27 = (__int64 *)(a1 + 1144);
            do
            {
              if ( v26[4] >= v25 )
                v27 = v26;
              v26 = (__int64 *)v26[v26[4] < v25];
            }
            while ( v26 );
            if ( v27 == v4 || v25 < v27[4] )
LABEL_53:
              sub_100005380(a1, (__int128 *)((char *)v23 + 40));
          }
          v28 = *((__int128 **)v23 + 1);
          if ( v28 )
          {
            do
            {
              v29 = v28;
              v28 = *(__int128 **)v28;
            }
            while ( v28 );
          }
          else
          {
            do
            {
              v29 = *((__int128 **)v23 + 2);
              v8 = *(_QWORD *)v29 == (_QWORD)v23;
              v23 = v29;
            }
            while ( !v8 );
          }
          v23 = v29;
        }
        while ( v29 != &v35 );
      }
    }
    sub_10000C700((__int64)&v34, (_QWORD *)v35);
  }
  return __stack_chk_guard;
}
// 10000446B: variable 'v30' is possibly undefined
// 10008FE10: using guessed type __int128 xmmword_10008FE10;
// 1000A7590: using guessed type _UNKNOWN *off_1000A7590;
// 1000AE23D: using guessed type char under_debugger;
