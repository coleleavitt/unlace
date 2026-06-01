void __fastcall sub_7B9B30(__int64 a1, __int64 a2, unsigned __int8 *a3, __m128i a4)
{
  char **exception; // rbp
  __int64 v5; // rdx
  int v6; // ebp
  __int64 v8; // r12
  int v9; // ebx
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // r13d
  unsigned int v15; // r15d
  unsigned int v16; // eax
  __int64 v17; // r9
  _DWORD *v18; // rcx
  unsigned int v19; // edx
  unsigned __int8 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rdi
  __int64 v26; // r10
  __int64 v27; // r11
  __int64 v28; // rax
  __int64 v29; // r11
  __int64 v30; // rax
  int *v31; // rax
  int v32; // esi
  _QWORD *v33; // rax
  unsigned int v34; // [rsp+0h] [rbp-98h]
  unsigned int v35; // [rsp+4h] [rbp-94h]
  unsigned int v37; // [rsp+10h] [rbp-88h]
  unsigned int v38; // [rsp+14h] [rbp-84h]
  unsigned int v39; // [rsp+18h] [rbp-80h]
  unsigned int v40; // [rsp+18h] [rbp-80h]
  unsigned int v41; // [rsp+1Ch] [rbp-7Ch]
  _DWORD *v42; // [rsp+20h] [rbp-78h]
  _DWORD *v43; // [rsp+28h] [rbp-70h]
  int v44[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v45[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( *((_DWORD *)a3 + 4) == -2 )
  {
    v6 = *((_DWORD *)a3 + 8);
    if ( v6 )
    {
      v34 = 0;
      while ( 1 )
      {
        v8 = (*(unsigned int (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a3 + 88LL))(a3, v34);
        v9 = sub_121A4C0(a2, v8);
        if ( v9 != (_DWORD)v8 )
        {
          v10 = 0;
          v11 = 0;
          v35 = *((_DWORD *)a3 + 15);
          do
          {
            v12 = (*(__int64 (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a3 + 88LL))(a3, v10);
            if ( v9 == (unsigned int)sub_121A4C0(a2, v12) )
              v11 += (*(__int64 (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a3 + 160LL))(a3, v10);
            ++v10;
          }
          while ( v6 != v10 );
          if ( v35 < v11 )
            break;
        }
        if ( v6 == ++v34 )
          return;
      }
      v37 = v11 - v35;
      v13 = sub_186B270(0x18u);
      *(_DWORD *)(v13 + 8) = v11 - v35;
      v14 = 0;
      *(_QWORD *)v44 = v13 + 8;
      *(_DWORD *)(v13 + 12) = v9 ^ 1;
      *(_QWORD *)v13 = 0x100000002LL;
      v38 = v11;
      do
      {
        while ( 1 )
        {
          v15 = (*(__int64 (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a3 + 88LL))(a3, v14);
          v16 = (*(__int64 (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a3 + 160LL))(a3, v14);
          v18 = *(_DWORD **)v44;
          v19 = v16;
          if ( (v9 ^ 1) != v15 )
            break;
          ++v14;
          **(_DWORD **)v44 += v16;
          if ( v6 == v14 )
            goto LABEL_20;
        }
        if ( v9 == v15 )
        {
          if ( v37 == v16 )
          {
            v30 = 0x7FFFFFFF8LL;
            if ( *(_QWORD *)v44 )
              v30 = 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v44 - 4LL) - 1);
            v31 = (int *)(*(_QWORD *)v44 + v30);
            v38 -= v19;
            v32 = *v31;
            LODWORD(v31) = v31[1];
            --*(_DWORD *)(*(_QWORD *)v44 - 4LL);
            *v18 = v32;
            v18[1] = (_DWORD)v31;
          }
          else if ( v37 >= v16 )
          {
            v38 -= v16;
            **(_DWORD **)v44 = v37 - v16;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)v44 + 4LL) ^= 1u;
            v38 += v35 - v11;
            *v18 = v35 - v11 + v16;
          }
        }
        else
        {
          if ( *(_QWORD *)v44 )
          {
            v22 = *(unsigned int *)(*(_QWORD *)v44 - 4LL);
            if ( (_DWORD)v22 == *(_DWORD *)(*(_QWORD *)v44 - 8LL) )
            {
              v39 = (unsigned int)(3 * v22 + 1) >> 1;
              v24 = 8 * v39 + 8;
              if ( 8 * (int)v22 + 8 >= v24 || (unsigned int)v22 >= (unsigned int)(3 * v22 + 1) >> 1 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_113C8C(v45, "Overflow encountered when expanding vector", v5);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v45);
                sub_233E40((__int64)v45);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v41 = v19;
              v25 = *(_QWORD *)v44;
              v26 = sub_186B270(v24);
              v27 = *(unsigned int *)(*(_QWORD *)v44 - 4LL);
              *(_DWORD *)(v26 + 4) = v27;
              v28 = 0;
              v29 = 8 * v27;
              if ( v29 )
              {
                do
                {
                  *(_QWORD *)(v26 + v28 + 8) = *(_QWORD *)(v25 + v28);
                  v28 += 8;
                }
                while ( v29 != v28 );
              }
              v43 = (_DWORD *)(v26 + 8);
              v42 = (_DWORD *)v26;
              sub_186B220((void *)(v25 - 8));
              v18 = v43;
              v19 = v41;
              v23 = &v43[2 * v42[1]];
              *(_QWORD *)v44 = v43;
              *v42 = v39;
            }
            else
            {
              v23 = (_QWORD *)(*(_QWORD *)v44 + 8 * v22);
            }
          }
          else
          {
            v40 = v16;
            v33 = (_QWORD *)sub_186B270(0x18u);
            *v33 = 2;
            v19 = v40;
            v18 = v33 + 1;
            *(_QWORD *)v44 = v33 + 1;
            v23 = v33 + 1;
          }
          a4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), _mm_cvtsi32_si128(v15));
          *v23 = a4.m128i_i64[0];
          ++*(v18 - 1);
        }
        ++v14;
      }
      while ( v6 != v14 );
LABEL_20:
      v20 = a3[48];
      ++*(_DWORD *)(a1 + 200);
      sub_7B8DC0(a1, 0xFFFFFFFE, (int **)v44, v38, v20, v17, a4);
      v21 = *(_QWORD *)v44;
      a3[12] = 1;
      if ( v21 )
        sub_186B220((void *)(v21 - 8));
    }
  }
}

