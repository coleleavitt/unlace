unsigned __int64 __fastcall sub_1DF21B0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const __m128i **v9; // r15
  __int64 v10; // rax
  _BYTE *v11; // rsi
  const __m128i **v12; // r13
  unsigned __int64 v13; // rdx
  __m128i *v14; // rax
  const __m128i *v15; // r14
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int16 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128i *v24; // rax
  unsigned __int64 v25; // rbx
  void *ptr; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  _BYTE vars10[104]; // [rsp+10h] [rbp+10h] BYREF

  v9 = *(const __m128i ***)(a2 + 16);
  vars8 = 0x600000000LL;
  v10 = *(unsigned int *)(a2 + 24);
  v11 = vars10;
  v12 = &v9[v10];
  ptr = vars10;
  if ( v12 != v9 )
  {
    v13 = 0;
    while ( 1 )
    {
      v15 = *v9;
      if ( !*v9 )
      {
        v15 = nullptr;
        goto LABEL_5;
      }
      v18 = v15[2].m128i_u16[2];
      if ( (_WORD)v18 == 45 )
      {
        v20 = sub_1DC71F0(a1, v15[2].m128i_u64[1], v13, v18, a7, a8, a3, a4);
        v24 = sub_1C66200(
                (__int64 *)*a1,
                v15,
                (_DWORD *)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFELL),
                a3,
                a4,
                v21,
                v22,
                v23);
        LODWORD(v13) = vars8;
        v15 = v24;
        goto LABEL_5;
      }
      if ( (unsigned __int16)v18 <= 0x2Du )
        break;
      if ( (_WORD)v18 != 91 )
      {
        if ( (_WORD)v18 == 418 )
        {
          v14 = sub_1DC8630(a1, *v9, v13, v18, a7, a8, a3, a4);
          LODWORD(v13) = vars8;
          v15 = v14;
        }
        goto LABEL_5;
      }
      v15 = (const __m128i *)sub_1DC8510(a1, (__int64)*v9, (void *)v13, v18, a7, a8, a3, a4);
      v16 = (unsigned int)vars8;
      v17 = (unsigned int)vars8 + 1LL;
      if ( v17 > HIDWORD(vars8) )
      {
LABEL_13:
        sub_2237220(&ptr, vars10, v17, 8);
        *((_QWORD *)ptr + (unsigned int)vars8) = v15;
        goto LABEL_7;
      }
LABEL_6:
      *((_QWORD *)ptr + v16) = v15;
LABEL_7:
      ++v9;
      v13 = (unsigned int)(vars8 + 1);
      LODWORD(vars8) = vars8 + 1;
      if ( v12 == v9 )
      {
        v11 = ptr;
        goto LABEL_18;
      }
    }
    if ( (_WORD)v18 == 44 )
    {
      v19 = sub_1DC8440(a1, (__int64)*v9, v13, v18, a7, a8, a3, a4);
      LODWORD(v13) = vars8;
      v15 = (const __m128i *)v19;
    }
LABEL_5:
    v16 = (unsigned int)v13;
    v17 = (unsigned int)v13 + 1LL;
    if ( v17 > HIDWORD(vars8) )
      goto LABEL_13;
    goto LABEL_6;
  }
  v13 = 0;
LABEL_18:
  v25 = sub_1AF87E0(*(_QWORD *)(*a1 + 760), v11, v13, *(_DWORD *)a2, *(_DWORD *)(a2 + 12), *(_DWORD *)(a2 + 4));
  if ( ptr != &ptr )
    free(ptr);
  return v25;
}
