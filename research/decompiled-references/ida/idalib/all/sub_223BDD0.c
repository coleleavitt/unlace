void __fastcall sub_223BDD0(__int64 *a1, _QWORD *a2, __int64 a3, unsigned __int8 a4)
{
  void (__fastcall *v4)(__int64, __int64); // rax
  unsigned __int64 v6; // r9
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r10

  v4 = (void (__fastcall *)(__int64, __int64))a1[6];
  if ( v4 )
  {
    v4(a3, a1[7]);
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 8);
    if ( v6 )
    {
      v8 = *a1;
      v9 = 0xAAAAAAAAAAAAAAABLL * ((a1[1] - *a1) >> 3);
      if ( (_DWORD)v9 )
      {
        v10 = *a1;
        while ( 1 )
        {
          v11 = v10;
          if ( v6 >= *(_QWORD *)(*(_QWORD *)v10 + 8LL) && v6 <= *(_QWORD *)(*(_QWORD *)v10 + 16LL) )
            break;
          v10 += 24;
          if ( v8 + 24LL * (unsigned int)(v9 - 1) + 24 == v10 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        v11 = v8 + 0x17FFFFFFE8LL;
      }
      sub_223BB70((__int64)a1, *(_QWORD *)(v11 + 16), (__int64)a2);
    }
    sub_223A0E0(a3, nullptr, a2, a4, 1, 1);
  }
}
