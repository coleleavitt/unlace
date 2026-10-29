__int64 __fastcall sub_8FE420(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v12[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = *a1;
  v12[1] = __readfsqword(0x28u);
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, __int64))(v5 + 32))(a1, &v10, a2, 9);
  if ( !v7 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, __int64))(*a1 + 32))(a1, &v11, a3, 10);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, 0);
    }
    else
    {
      while ( 1 )
      {
        v9 = *a4;
        v12[0] = a4[1];
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v10 + 16LL))(v10, v12, v9);
        if ( v7 )
        {
LABEL_8:
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, 0);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL))(v11, 0);
          return v7;
        }
        if ( !v12[0] )
          break;
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, v12, *a4);
        if ( v7 )
          goto LABEL_8;
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, 1);
      return (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 48LL))(v11, 1);
    }
  }
  return v7;
}
