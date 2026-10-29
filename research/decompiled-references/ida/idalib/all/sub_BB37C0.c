_BYTE *__fastcall sub_BB37C0(__int64 *a1, __int64 a2)
{
  char v4; // al
  __int64 v5; // rdi
  _BYTE *result; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r12
  size_t v10; // rdx
  void *v11; // rdi
  size_t v12; // r13
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = *(_BYTE *)(a2 + 60);
  v5 = *a1;
  if ( (v4 & 4) == 0 || a2 == -80 )
  {
    if ( (v4 & 1) != 0 && (v4 & 2) == 0 )
    {
      sub_995540(v5, "typename");
      result = (_BYTE *)sub_BBE5D0(a2);
      if ( !(_BYTE)result )
        goto LABEL_5;
LABEL_18:
      result = (_BYTE *)sub_995540(*a1, " ...");
      goto LABEL_8;
    }
    sub_995540(v5, "class");
  }
  else
  {
    sub_A55390(*(__int64 **)(a2 + 88), v5, a1 + 1);
  }
  result = (_BYTE *)sub_BBE5D0(a2);
  if ( (_BYTE)result )
    goto LABEL_18;
LABEL_5:
  if ( !*(_QWORD *)(a2 + 40) )
    goto LABEL_21;
  v7 = *a1;
  result = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(*a1 + 24) )
  {
    result = (_BYTE *)sub_227BA10(v7, 32);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = result + 1;
    *result = 32;
  }
LABEL_8:
  v8 = *(_QWORD *)(a2 + 40);
  if ( v8 )
  {
    v9 = *a1;
    if ( (*((_BYTE *)a1 + 13) & 0x10) != 0 && (v8 & 7) == 0 && (v8 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      result = (_BYTE *)sub_FDE1C0();
      v11 = *(void **)(v9 + 32);
      v12 = v10;
      if ( v10 > *(_QWORD *)(v9 + 24) - (_QWORD)v11 )
      {
        result = (_BYTE *)sub_227BF10(v9, result, v10);
      }
      else if ( v10 )
      {
        result = memcpy(v11, result, v10);
        *(_QWORD *)(v9 + 32) += v12;
      }
    }
    else
    {
      result = (_BYTE *)sub_B86360(*a1, v8);
    }
  }
LABEL_21:
  if ( (*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return result;
  sub_995540(*a1, " = ");
  if ( !(_BYTE)byte_2CCC480 && __cxa_guard_acquire(&byte_2CCC480) )
  {
    qword_2CCC4A0 &= 0xFFFFFFFE00000000LL;
    qword_2CCC4A8 = 0;
    qword_2CCC4B8 = 0;
    __cxa_guard_release(&byte_2CCC480);
  }
  v13 = (__int64 *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v13 )
  {
    v14 = (*(__int64 *)(a2 + 72) >> 1) & 3;
    if ( v14 == 1 )
    {
      v15 = v13[9];
      v13 = nullptr;
      if ( !v15 )
        return (_BYTE *)sub_F1E030(v13, a1 + 1, *a1, 0);
      v13 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
      if ( ((v15 >> 1) & 3) != 2 || !v13 )
        return (_BYTE *)sub_F1E030(v13, a1 + 1, *a1, 0);
    }
    else if ( v14 != 2 )
    {
      return (_BYTE *)sub_F1E030(v13, a1 + 1, *a1, 0);
    }
    v13 = (__int64 *)v13[1];
  }
  else
  {
    v13 = &qword_2CCC4A0;
  }
  return (_BYTE *)sub_F1E030(v13, a1 + 1, *a1, 0);
}
