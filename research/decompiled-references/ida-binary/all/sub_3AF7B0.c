unsigned __int64 __fastcall sub_3AF7B0(QT::QWidget *a1, char *s, __int64 *a3, __int64 a4)
{
  __int64 v6; // rsi
  int *v8; // rax
  __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v6 = *a3;
  v13 = __readfsqword(0x28u);
  v8 = (int *)sub_1E88B0(a4, v6);
  sub_202FB0(a1, s, v8);
  *(_QWORD *)a1 = &type_listing_t___vtable;
  *((_QWORD *)a1 + 2) = type_listing_t___vtable_at__16;
  *((_QWORD *)a1 + 5) = type_listing_t___vtable_at__40;
  *((_QWORD *)a1 + 13) = type_listing_t___vtable_at__104;
  *((_QWORD *)a1 + 125) = *a3;
  v9 = a3[1];
  *((_QWORD *)a1 + 126) = v9;
  if ( v9 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
    else
      ++*(_DWORD *)(v9 + 8);
  }
  sub_1FC230((__m128i *)a1, a4);
  v11 = 0;
  v12 = 0;
  sub_3AC8A0(a1, (__int64)&v11);
  if ( v11 )
    qfree(v11, (const char *)&v11);
  return v13 - __readfsqword(0x28u);
}
