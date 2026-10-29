__int64 __fastcall sub_336B70(__int64 a1, char a2)
{
  __int64 custom_data_format; // rax
  __int64 v4; // rbx
  const char *v5; // rsi
  const char *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  char v11; // [rsp+Fh] [rbp-99h] BYREF
  const char *v12; // [rsp+10h] [rbp-98h] BYREF
  __int128 v13; // [rsp+18h] [rbp-90h]
  int v14; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v15[4]; // [rsp+34h] [rbp-74h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  custom_data_format = get_custom_data_format(a1);
  if ( !custom_data_format )
    return 0;
  v4 = custom_data_format;
  v5 = "data_format_t:%d";
  v13 = 0;
  v12 = nullptr;
  sub_169A50((__int64 *)&v12, (__int64)"data_format_t:%d", a1);
  v6 = &s1;
  if ( !(_QWORD)v13 )
  {
    if ( a2 )
      goto LABEL_4;
LABEL_8:
    sub_5344B0(v6);
LABEL_9:
    v9 = 1;
    goto LABEL_10;
  }
  v6 = v12;
  if ( !a2 )
    goto LABEL_8;
LABEL_4:
  if ( *(_QWORD *)(v4 + 32) )
  {
    v14 = 64;
    memset(&v15[1], 0, 44);
    *(_QWORD *)((char *)&v15[1] + 12) = 2;
    DWORD1(v15[3]) = -1;
    v15[0] = 0;
    *(__m128 *)((char *)v15 + 4) = _mm_loadh_ps((const double *)(v4 + 32));
    v7 = qalloc_or_throw(16);
    *(_DWORD *)(v7 + 12) = a1;
    *(_DWORD *)(v7 + 8) = 1;
    *(_QWORD *)v7 = custom_data_format_ah_t___vtable;
    *(_QWORD *)((char *)&v15[1] + 4) = v7;
    *(_QWORD *)((char *)&v15[2] + 4) = *(_QWORD *)(v4 + 40);
    sub_538360(&v14);
    v11 = 1;
    v8 = sub_534430(v6);
    if ( v8 )
    {
      v5 = &byte_6;
      sub_537630(v8, 6, &v11);
    }
    goto LABEL_9;
  }
  v9 = 0;
LABEL_10:
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12, v5);
  }
  return v9;
}
