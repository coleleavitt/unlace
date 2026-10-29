unsigned __int64 __fastcall sub_7AF120(char *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rbp
  _QWORD *v6; // r12
  unsigned __int16 *v7; // rsi
  __int64 v8; // rdx
  char v9; // r12
  __int64 v10; // rdi
  unsigned __int16 *v11; // rsi
  __int64 v12; // rdx
  char v13; // r12
  char v14; // bp
  __int64 v15; // rax
  __m128i v16; // xmm0
  char v18; // al
  __int64 v19; // rax
  bool v20; // zf
  __m128i v21; // xmm0
  char v22; // al
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v24; // [rsp+8h] [rbp-30h]
  unsigned __int64 v25; // [rsp+18h] [rbp-20h]

  v25 = __readfsqword(0x28u);
  if ( !*((_QWORD *)a1 + 1) )
    return v25 - __readfsqword(0x28u);
  v3 = (__int64)a1;
  if ( !(_BYTE)a2
    && *((_WORD *)a1 + 2940) == *((_WORD *)a1 + 2920)
    && *((_QWORD *)a1 + 736) == *((_QWORD *)a1 + 731)
    && *((_QWORD *)a1 + 737) == *((_QWORD *)a1 + 732)
    && *((_QWORD *)a1 + 738) == *((_QWORD *)a1 + 733)
    && *((_QWORD *)a1 + 739) == *((_QWORD *)a1 + 734) )
  {
    return v25 - __readfsqword(0x28u);
  }
  v5 = a1 + 5880;
  if ( (unsigned __int8)is_cvt64(a1, a2, a3) )
  {
    v19 = *((_QWORD *)a1 + 739);
    v5 = a1 + 5840;
    v20 = a1[6020] == 0;
    v6 = a1 + 5864;
    *((__m128i *)a1 + 365) = _mm_loadu_si128((const __m128i *)(a1 + 5880));
    v21 = _mm_loadu_si128((const __m128i *)(a1 + 5896));
    *((_QWORD *)a1 + 734) = v19;
    *((__m128i *)a1 + 366) = v21;
    if ( v20 )
      goto LABEL_6;
  }
  else
  {
    v6 = a1 + 5904;
    if ( !a1[6020] )
      goto LABEL_6;
  }
  if ( (unsigned __int8)must_journal(a1, a2, v4) )
  {
    v24 = 0;
    ptr = nullptr;
    v18 = sub_73D2C0((__int64)a1, word_23BA529, 8, v6, (__int64)&ptr);
    v7 = (unsigned __int16 *)ptr;
    v9 = v18;
    add_undo_record(1, ptr, v24);
    a1 = (char *)ptr;
    if ( ptr )
    {
      *(_QWORD *)&v24 = 0;
      qfree(ptr);
    }
    goto LABEL_7;
  }
LABEL_6:
  v7 = word_23BA529;
  v9 = sub_73D2C0((__int64)a1, word_23BA529, 8, v6, 0);
LABEL_7:
  if ( !v9 )
    goto LABEL_32;
  if ( *(_BYTE *)(v3 + 6020) && (unsigned __int8)must_journal(a1, v7, v8) )
  {
    v24 = 0;
    ptr = nullptr;
    v22 = sub_73D2C0(v3, word_23BA519, 8, v5 + 4, (__int64)&ptr);
    v11 = (unsigned __int16 *)ptr;
    v13 = v22;
    add_undo_record(1, ptr, v24);
    v10 = (__int64)ptr;
    if ( ptr )
    {
      *(_QWORD *)&v24 = 0;
      qfree(ptr);
    }
  }
  else
  {
    v10 = v3;
    v11 = word_23BA519;
    v13 = sub_73D2C0(v3, word_23BA519, 8, v5 + 4, 0);
  }
  if ( !v13 )
    goto LABEL_32;
  if ( *(_BYTE *)(v3 + 6020) && (unsigned __int8)must_journal(v10, v11, v12) )
  {
    v24 = 0;
    ptr = nullptr;
    v14 = sub_73D2C0(v3, word_23BA509, 40, v5, (__int64)&ptr);
    add_undo_record(1, ptr, v24);
    if ( ptr )
    {
      *(_QWORD *)&v24 = 0;
      qfree(ptr);
    }
  }
  else
  {
    v14 = sub_73D2C0(v3, word_23BA509, 40, v5, 0);
  }
  if ( !v14 )
LABEL_32:
    sub_743130();
  v15 = *(_QWORD *)(v3 + 5912);
  *(__m128i *)(v3 + 5840) = _mm_loadu_si128((const __m128i *)(v3 + 5880));
  v16 = _mm_loadu_si128((const __m128i *)(v3 + 5896));
  *(_QWORD *)(v3 + 5872) = v15;
  *(__m128i *)(v3 + 5856) = v16;
  return v25 - __readfsqword(0x28u);
}
