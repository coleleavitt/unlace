unsigned __int64 __fastcall sub_1FD840(
        __int64 a1,
        const char *a2,
        int a3,
        char a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64, __int64, __int64, __int64, double); // rax
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rax
  struct _Unwind_Exception *v20; // rbx
  _QWORD v21[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h]
  char v23; // [rsp+18h] [rbp-40h]
  __int64 v24; // [rsp+20h] [rbp-38h]
  __int16 v25; // [rsp+28h] [rbp-30h]
  unsigned __int64 v26; // [rsp+38h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  sub_1FD6A0(a1 + 216, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( !a4 )
  {
    sub_1E95D0((QT::QObject *)v21, a1, 10, 32, -32768, a5);
    v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, double))(*(_QWORD *)a1 + 512LL);
    if ( v16 == sub_1E6BF0 )
    {
      if ( *(_BYTE *)(a1 + 968) )
      {
        if ( !*(_QWORD *)(a1 + 424) )
        {
          v20 = (struct _Unwind_Exception *)sub_1E69C0(a5, (__int64)v21, a1, (__int64)sub_1E6BF0, v15);
          sub_1E9680((__int64)v21);
          _Unwind_Resume(v20);
        }
        v17 = *(_DWORD *)(a1 + 416);
        if ( v17 == 2 )
        {
          v18 = *(_QWORD *)(a1 + 896);
        }
        else if ( v17 == 3 )
        {
          v18 = *(_QWORD *)(a1 + 904);
        }
        else
        {
          v18 = 0;
          if ( v17 == 1 )
            v18 = *(_QWORD *)(a1 + 888);
        }
      }
      else
      {
        v18 = 0;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 224LL))(v18, 0);
    }
    else
    {
      ((void (__fastcall *)(__int64))v16)(a1);
    }
    if ( !v23 )
    {
      v19 = v22;
      if ( v22 )
      {
        *(_QWORD *)(v22 + 948) = v24;
        *(_WORD *)(v19 + 956) = v25;
      }
    }
    v21[0] = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)v21);
  }
  return v26 - __readfsqword(0x28u);
}
