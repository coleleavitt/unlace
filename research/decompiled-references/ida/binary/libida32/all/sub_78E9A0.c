unsigned __int64 __fastcall sub_78E9A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int16 *v4; // rsi
  __int64 v5; // rdx
  char v6; // bp
  __int64 v7; // rdi
  unsigned __int16 *v8; // rsi
  __int64 v9; // rdx
  char v10; // bp
  char v11; // bp
  __m128i v12; // xmm0
  char v14; // al
  char v15; // al
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v17; // [rsp+8h] [rbp-30h]
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  if ( a1[1] )
  {
    v3 = (__int64)a1;
    if ( (_BYTE)a2 || *((_WORD *)a1 + 2932) != *((_WORD *)a1 + 2920) || a1[734] != a1[731] || a1[735] != a1[732] )
    {
      if ( *((_BYTE *)a1 + 5988) && (unsigned __int8)must_journal(a1, a2, a3) )
      {
        v17 = 0;
        ptr = nullptr;
        v15 = sub_71CD80((__int64)a1, word_23963C9, 4, a1 + 735, (__int64)&ptr);
        v4 = (unsigned __int16 *)ptr;
        v6 = v15;
        add_undo_record(1, ptr, v17);
        a1 = ptr;
        if ( ptr )
        {
          *(_QWORD *)&v17 = 0;
          qfree(ptr);
        }
      }
      else
      {
        v4 = word_23963C9;
        v6 = sub_71CD80((__int64)a1, word_23963C9, 4, a1 + 735, 0);
      }
      if ( !v6 )
        goto LABEL_27;
      if ( *(_BYTE *)(v3 + 5988) && (unsigned __int8)must_journal(a1, v4, v5) )
      {
        v17 = 0;
        ptr = nullptr;
        v14 = sub_71CD80(v3, word_23963B9, 4, (_QWORD *)(v3 + 5884), (__int64)&ptr);
        v8 = (unsigned __int16 *)ptr;
        v10 = v14;
        add_undo_record(1, ptr, v17);
        v7 = (__int64)ptr;
        if ( ptr )
        {
          *(_QWORD *)&v17 = 0;
          qfree(ptr);
        }
      }
      else
      {
        v7 = v3;
        v8 = word_23963B9;
        v10 = sub_71CD80(v3, word_23963B9, 4, (_QWORD *)(v3 + 5884), 0);
      }
      if ( !v10 )
        goto LABEL_27;
      if ( *(_BYTE *)(v3 + 5988) && (unsigned __int8)must_journal(v7, v8, v9) )
      {
        v17 = 0;
        ptr = nullptr;
        v11 = sub_71CD80(v3, word_23963A9, 24, (_QWORD *)(v3 + 5864), (__int64)&ptr);
        add_undo_record(1, ptr, v17);
        if ( ptr )
        {
          *(_QWORD *)&v17 = 0;
          qfree(ptr);
        }
      }
      else
      {
        v11 = sub_71CD80(v3, word_23963A9, 24, (_QWORD *)(v3 + 5864), 0);
      }
      if ( !v11 )
LABEL_27:
        sub_722BF0();
      v12 = _mm_loadu_si128((const __m128i *)(v3 + 5864));
      *(_QWORD *)(v3 + 5856) = *(_QWORD *)(v3 + 5880);
      *(__m128i *)(v3 + 5840) = v12;
    }
  }
  return v18 - __readfsqword(0x28u);
}

