__int64 __fastcall sub_4FC590(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rdi
  _DWORD *v8; // rdi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(); // r8
  __int64 (__fastcall *v11)(); // rcx
  __int64 v12; // rax
  void *v13; // rbx
  __int64 v14; // r13
  __int64 (__fastcall *v15)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  size_t v22; // rdx
  int v23; // eax
  __int64 (__fastcall *v25)(); // rcx
  __int64 v26; // rax
  unsigned int v27; // [rsp+Ch] [rbp-3Ch]
  __int64 v28; // [rsp+10h] [rbp-38h] BYREF
  int v29; // [rsp+18h] [rbp-30h]

  v7 = *(_QWORD *)(a1 + 24);
  v29 = 0;
  v28 = 0;
  if ( !(unsigned __int8)sub_4C64F0(v7, a2, &v28) )
  {
    v16 = 0;
    goto LABEL_14;
  }
  v8 = *(_DWORD **)(a1 + 40);
  v9 = *(_QWORD *)v8;
  v10 = *(__int64 (__fastcall **)())(*(_QWORD *)v8 + 72LL);
  if ( v10 == sub_4FEA70 )
  {
    if ( v8[2] != a4 && a4 != -1 )
    {
      v11 = *(__int64 (__fastcall **)())(v9 + 48);
      if ( v11 != sub_4FE550 )
      {
        v12 = ((__int64 (__fastcall *)(_DWORD *, __int64 *, _QWORD))v11)(v8, &v28, a4);
LABEL_7:
        v13 = (void *)v12;
        v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v12 + 128LL))(v12, a3, 0);
        v15 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v13 + 16LL);
        if ( v15 == sub_4C9C30 )
        {
          (**(void (__fastcall ***)(void *))v13)(v13);
          sub_186B220(v13);
        }
        else
        {
          v15((void (__fastcall ***)(_QWORD))v13);
        }
        goto LABEL_9;
      }
LABEL_6:
      v12 = (*(__int64 (__fastcall **)(_DWORD *, __int64 *))(v9 + 40))(v8, &v28);
      goto LABEL_7;
    }
    v25 = *(__int64 (__fastcall **)())(v9 + 64);
    if ( v25 == sub_4FE820 )
      goto LABEL_6;
    v26 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64 *))v25)(v8, a3, &v28);
  }
  else
  {
    v26 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64 *, _QWORD))v10)(v8, a3, &v28, a4);
  }
  v14 = v26;
LABEL_9:
  v16 = sub_186B270(0x28u);
  *(_QWORD *)v16 = qword_1C665B0;
  v17 = (_QWORD *)*a2;
  *(_QWORD *)(v16 + 8) = a1;
  *(_QWORD *)(v16 + 16) = 0;
  if ( v17 )
  {
    v18 = *((_DWORD *)v17 - 1);
    v19 = *((unsigned int *)v17 - 2);
    v27 = v19;
    v20 = (_QWORD *)sub_186B270(8 * v19 + 8);
    v21 = (_QWORD *)*a2;
    *(_QWORD *)(v16 + 16) = v20 + 1;
    *v20 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v27), _mm_cvtsi32_si128(v18)).m128i_u64[0];
    if ( v21 )
    {
      v22 = 8LL * *((unsigned int *)v21 - 1);
      if ( v22 <= 8 )
      {
        if ( v22 == 8 )
          v20[1] = *v21;
      }
      else
      {
        memcpy(v20 + 1, v21, v22);
      }
    }
  }
  v23 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v16 + 32) = v14;
  *(_DWORD *)(v16 + 24) = v23;
  *(_QWORD *)v16 = &off_1C669F0;
LABEL_14:
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  return v16;
}

