char __fastcall sub_227D450(std::_V2 *this, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  __int64 v7; // rdx
  int v8; // esi
  __int64 v10; // rax
  unsigned int v11; // [rsp+Ch] [rbp-5Ch]
  int v12; // [rsp+1Ch] [rbp-4Ch] BYREF
  _QWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v14; // [rsp+40h] [rbp-28h]

  if ( a3 == 1 && *a2 == 45 )
  {
    v11 = a5;
    v10 = std::_V2::system_category(this);
    *(_DWORD *)a4 = 0;
    *(_QWORD *)(a4 + 8) = v10;
    sub_2291510(v11);
    v8 = 1;
  }
  else
  {
    v13[0] = a2;
    v13[1] = a3;
    v14 = 261;
    v6 = sub_228D080(v13, &v12, 0, 2, a5, 438);
    *(_DWORD *)a4 = v6;
    *(_QWORD *)(a4 + 8) = v7;
    if ( v6 )
      v8 = -1;
    else
      v8 = v12;
  }
  return sub_227D340((__int64)this, v8, 1, 0, 0);
}
