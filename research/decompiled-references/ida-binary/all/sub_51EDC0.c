__int64 __fastcall sub_51EDC0(__int64 a1, const char *a2, __int64 a3)
{
  unsigned int v3; // r12d
  int v6; // r15d
  const char *v7; // r14
  int v9; // r13d
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  volatile signed __int32 *v14; // rdi
  __int64 v15; // rax
  QT::QChar *v16; // rdi
  unsigned __int16 v17; // r15
  int v18; // eax
  int v19; // eax
  __m128i v20; // xmm0
  volatile signed __int32 *v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // [rsp+8h] [rbp-60h]
  void *ptr[2]; // [rsp+10h] [rbp-58h] BYREF
  const char *v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v3 = *(unsigned __int8 *)(a1 + 36);
  v27 = __readfsqword(0x28u);
  if ( !(_BYTE)v3 )
    return 0;
  v6 = *(_DWORD *)(a3 + 64);
  v7 = a2;
  v9 = QT::QKeyEvent::modifiers((QT::QKeyEvent *)a3);
  LOBYTE(v10) = v9 == 0;
  v11 = v9 & 0x2000000;
  LODWORD(a2) = (v9 & 0x2000000u) >> 25;
  v12 = (unsigned int)a2;
  if ( (v9 & 0x4000000) != 0 && (LODWORD(a2) = v6 - 16777220, (unsigned int)(v6 - 16777220) <= 1) )
  {
    if ( *(_BYTE *)(a1 + 40) )
    {
      if ( v11 )
        sub_51EBE0((__int64 *)a1, v7, 5u);
      else
        sub_51EBE0((__int64 *)a1, v7, 1u);
      goto LABEL_23;
    }
    if ( v11 )
      goto LABEL_10;
  }
  else if ( (_BYTE)v12 || !v9 )
  {
    v13 = *(_DWORD *)(a1 + 1064);
    if ( v13 )
    {
      if ( v13 > 0 && v6 == 16777219 )
      {
        v18 = v13 - 1;
        *(_DWORD *)(a1 + 1064) = v18;
        *(_BYTE *)(a1 + v18 + 40) = 0;
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a1 + 40, v12, v10);
        goto LABEL_23;
      }
    }
    else if ( (unsigned int)(v6 - 48) <= 9 )
    {
      v22 = v6 + 10 * *(_DWORD *)(a1 + 1068);
      v23 = (unsigned int)(v22 - 48);
      *(_DWORD *)(a1 + 1068) = v23;
      if ( v22 - 48 > 0 )
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v22 - 49, v23, v10);
      goto LABEL_23;
    }
LABEL_10:
    v14 = *(volatile signed __int32 **)(a3 + 40);
    v15 = *(_QWORD *)(a3 + 56);
    if ( v14 )
    {
      _InterlockedAdd(v14, 1u);
      if ( !_InterlockedSub(v14, 1u) )
      {
        v24 = v15;
        free((void *)v14);
        v15 = v24;
      }
    }
    v16 = nullptr;
    LOBYTE(v17) = 0;
    if ( !v15 )
      goto LABEL_14;
    v20 = _mm_loadu_si128((const __m128i *)(a3 + 40));
    a2 = *(const char **)(a3 + 56);
    v26 = a2;
    *(__m128i *)ptr = v20;
    if ( v20.m128i_i64[0] )
    {
      _InterlockedAdd((volatile signed __int32 *)v20.m128i_i64[0], 1u);
      v21 = (volatile signed __int32 *)ptr[0];
      if ( *(int *)ptr[0] <= 1 )
        goto LABEL_30;
      a2 = v26;
    }
    QT::QString::reallocData(ptr, a2, 1);
    v21 = (volatile signed __int32 *)ptr[0];
LABEL_30:
    v17 = *(_WORD *)ptr[1];
    if ( v21 && !_InterlockedSub(v21, 1u) )
      free(ptr[0]);
    v16 = (QT::QChar *)v17;
LABEL_14:
    if ( !(unsigned __int8)QT::QChar::isPrint(v16, (char32_t)a2) )
    {
      if ( !v9 )
      {
        *(_QWORD *)(a1 + 1064) = 0;
        *(_BYTE *)(a1 + 40) = 0;
      }
      return 0;
    }
    v19 = *(_DWORD *)(a1 + 1064);
    if ( v19 <= 1022 )
    {
      *(_BYTE *)(a1 + v19 + 40) = v17;
      *(_BYTE *)(a1 + v19 + 1 + 40) = 0;
      sub_51EBE0((__int64 *)a1, v7, 2u);
    }
LABEL_23:
    *(_BYTE *)(a3 + 12) = 1;
    return v3;
  }
  return 0;
}
