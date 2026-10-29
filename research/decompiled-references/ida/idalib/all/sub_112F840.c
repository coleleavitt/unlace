__int64 __fastcall sub_112F840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  size_t v8; // rdx
  __int64 v9; // rax
  size_t v10; // r13
  bool v11; // zf
  size_t v12; // rax
  int v13; // eax
  __int64 result; // rax
  int v15; // r13d
  __int64 v16; // rax
  int v17; // r13d
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-68h] BYREF
  size_t v20; // [rsp+8h] [rbp-60h]
  _QWORD v21[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v22; // [rsp+20h] [rbp-48h]
  size_t v23; // [rsp+28h] [rbp-40h]
  __int16 v24; // [rsp+30h] [rbp-38h]

  if ( *(_DWORD *)(a1 + 60) == 15 && *(_DWORD *)(a1 + 64) == 27 )
    goto LABEL_9;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(v7 + 896);
  v9 = *(_QWORD *)(v7 + 888);
  v20 = v8;
  v19 = v9;
  v10 = j__strlen("lib");
  v11 = (unsigned __int8)sub_2246340(&v19, "lib", v10) == 0;
  v12 = v20;
  if ( v11 )
    goto LABEL_5;
  if ( v10 <= v20 )
  {
    v12 = v20 - v10;
    v19 += v10;
    v20 -= v10;
LABEL_5:
    if ( v12 )
    {
      v15 = *(_DWORD *)(a1 + 60);
      sub_10DC5D0(a3, (__int64)"-lflang_rt.quadmath");
      if ( v15 == 20 )
      {
        v24 = 1283;
        v21[0] = "-l";
        v22 = v19;
        v23 = v20;
        v16 = sub_10DA6C0(a2, (__int64)v21);
        sub_10DC5D0(a3, v16);
      }
      else
      {
        sub_11BBC70(a1, a2, a3, 1);
        v21[0] = "-l";
        v24 = 1283;
        v22 = v19;
        v23 = v20;
        v18 = sub_10DA6C0(a2, (__int64)v21);
        sub_10DC5D0(a3, v18);
        sub_11BBC70(a1, a2, a3, 0);
      }
    }
    goto LABEL_6;
  }
  v19 += v20;
  v20 = 0;
LABEL_6:
  sub_112F750((_DWORD *)a1, a2, a3);
  v13 = *(_DWORD *)(a1 + 60);
  if ( (unsigned int)(v13 - 2) <= 1 || (unsigned int)(v13 - 11) <= 1 )
    sub_10DC5D0(a3, (__int64)"-lexecinfo");
LABEL_9:
  result = sub_21B79D0(a2, 1563, 1562, 1265, 0, a6);
  if ( (_BYTE)result )
  {
    v17 = sub_10DD170(*(__int64 **)(a1 + 8), a2);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 600LL))(a1, a2);
    if ( v17 == 1 && (_DWORD)result == 1 )
      return sub_10DC5D0(a3, (__int64)"-latomic");
  }
  return result;
}
