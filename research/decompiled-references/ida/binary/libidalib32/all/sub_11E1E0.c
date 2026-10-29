__int64 __fastcall sub_11E1E0(
        _QWORD *a1,
        int a2,
        __int64 *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  void (__fastcall **v12)(__int64 *, __int64, __int64 **); // rax
  __int64 v13; // r14
  int v14; // r13d
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 *v20; // [rsp+0h] [rbp-48h] BYREF
  __int128 v21; // [rsp+8h] [rbp-40h]
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( (unsigned int)(a2 - 21) > 2 )
  {
    switch ( a2 )
    {
      case -1:
        a1[1073] = a3;
        v18 = a1[1072];
        if ( v18 != -1 )
        {
          v21 = 0;
          v20 = (__int64 *)qvector_reserve();
          *v20 = v18;
          v19 = *a3;
          *(_QWORD *)&v21 = v21 + 1;
          (*(void (__fastcall **)(__int64 *, __int64, __int64 **))(v19 + 8))(a3, 1, &v20);
          if ( v20 )
            goto LABEL_13;
        }
        break;
      case 20:
        v17 = sub_11D610((__int64)a1, 0, nullptr, nullptr, a4, a5, a6, a7, a8, a9, a10, a11);
        if ( v17 == -1 )
        {
          sub_92120((__int64)"ICON ERROR\nFailed to create database snapshot!");
        }
        else if ( v17 == 1 )
        {
          sub_11D360(a1);
          goto LABEL_10;
        }
        break;
      case 24:
        (*(void (__fastcall **)(__int64 *, __int64))(*a3 + 64))(a3, 1);
        break;
      default:
        return 1;
    }
  }
  else
  {
    v12 = (void (__fastcall **)(__int64 *, __int64, __int64 **))*a3;
    v20 = nullptr;
    v21 = 0;
    (*v12)(a3, 1, &v20);
    if ( (_QWORD)v21 && (v13 = *v20, (unsigned __int64)*v20 < a1[1069]) )
    {
      v14 = *v20;
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree();
      }
      switch ( a2 )
      {
        case 22:
          v16 = a1[1068] + 16LL * (int)v13;
          if ( (unsigned int)sub_11DF60((__int64)a1, *(_QWORD *)v16 + 138LL, (const char *)(*(_QWORD *)v16 + 10LL), 128) == 1 )
            goto LABEL_10;
          break;
        case 23:
          sub_11DEB0(a1, v13);
          goto LABEL_10;
        default:
          sub_8F660((__int64)"Restore snapshot is not supported in this version of IDA\n");
          (*(void (__fastcall **)(__int64 *, __int64))(*a3 + 64))(a3, 1);
          break;
      }
      if ( v14 == -1 )
LABEL_10:
        (*(void (__fastcall **)(__int64 *, __int64))(*a3 + 56))(a3, 1);
    }
    else if ( v20 )
    {
LABEL_13:
      *(_QWORD *)&v21 = 0;
      qfree();
    }
  }
  return 1;
}

