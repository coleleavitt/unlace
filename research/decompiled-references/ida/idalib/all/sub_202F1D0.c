void __fastcall sub_202F1D0(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v2)(_QWORD *, _QWORD *, __int64); // rax
  void *v3; // rbx
  void (__fastcall *v4)(void *); // rax

  *a1 = &off_2BE5CC8;
  v1 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[12];
  if ( v1 )
    v1(a1 + 10, a1 + 10, 3);
  v2 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[8];
  if ( v2 )
    v2(a1 + 6, a1 + 6, 3);
  v3 = (void *)a1[1];
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(void *))(*(_QWORD *)v3 + 8LL);
    if ( v4 == sub_202F1B0 )
    {
      sub_202EF80((__int64)v3);
      operator delete(v3, 0x168u);
    }
    else
    {
      v4(v3);
    }
  }
}
