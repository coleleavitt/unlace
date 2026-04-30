__int64 __fastcall sub_1F72A0(__int64 a1, __int64 a2, double a3)
{
  _QWORD *v4; // r12
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, __int64, __int64, __int64, double); // rax
  int v7; // eax
  __int64 v8; // rdi
  int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  *(_BYTE *)(a2 + 12) = 0;
  v4 = QT::QCoreApplication::self;
  v10 = *(_DWORD *)(a2 + 64);
  nullsub_257(QT::QCoreApplication::self);
  v5 = (unsigned int)sub_47B6A0(v4, a2);
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, double))(*(_QWORD *)a1 + 1000LL);
  if ( v6 == sub_1E6FA0 )
  {
    if ( *(_BYTE *)(a1 + 968) )
    {
      if ( !*(_QWORD *)(a1 + 424) )
      {
        sub_1E69C0(a3, (__int64)v4, a2, v5, (__int64)sub_1E6FA0);
        return sub_1F73F0();
      }
      v7 = *(_DWORD *)(a1 + 416);
      if ( v7 == 2 )
      {
        v8 = *(_QWORD *)(a1 + 896);
      }
      else if ( v7 == 3 )
      {
        v8 = *(_QWORD *)(a1 + 904);
      }
      else
      {
        v8 = 0;
        if ( v7 == 1 )
          v8 = *(_QWORD *)(a1 + 888);
      }
    }
    else
    {
      v8 = 0;
    }
    (*(void (__fastcall **)(__int64, int *, __int64, __int64))(*(_QWORD *)v8 + 456LL))(v8, &v10, v5, a2);
  }
  else
  {
    ((void (__fastcall *)(__int64, int *, __int64, __int64))v6)(a1, &v10, v5, a2);
  }
  if ( !v10 )
    *(_BYTE *)(a2 + 12) = 1;
  nullsub_253(v4);
  return v11 - __readfsqword(0x28u);
}
