unsigned __int64 __fastcall sub_94EA0(_QWORD *a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // r13
  int v9; // edx
  unsigned __int64 result; // rax
  int v11; // edx
  _QWORD *v12; // rbx
  _QWORD *v13; // rsi
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  void *exception; // rbx
  unsigned __int16 v20; // [rsp+Ah] [rbp-6Eh] BYREF
  _BYTE v21[4]; // [rsp+Ch] [rbp-6Ch] BYREF
  __int64 v22; // [rsp+10h] [rbp-68h] BYREF
  __int64 v23; // [rsp+18h] [rbp-60h] BYREF
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v26[9]; // [rsp+30h] [rbp-48h] BYREF

  v6 = a1[11];
  v7 = *a3;
  v26[1] = __readfsqword(0x28u);
  v8 = a4;
  v22 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int16 *, __int64 *))(v6 + 200))(v7, &v20, &v22) )
    return 0x8000000000000000LL;
  if ( v20 == 32 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *))(v6 + 240))(*a3, v26, &v22);
    result = 0x8000000000000000LL;
    if ( !v11 )
    {
      v12 = (_QWORD *)a1[54];
      if ( v12 )
      {
        v13 = a1 + 53;
        do
        {
          if ( v12[4] >= v26[0] )
          {
            v13 = v12;
            v12 = (_QWORD *)v12[2];
          }
          else
          {
            v12 = (_QWORD *)v12[3];
          }
        }
        while ( v12 );
        result = 0x8000000000000000LL;
        if ( a1 + 53 != v13 && v26[0] >= v13[4] )
          return v13[5];
      }
    }
  }
  else
  {
    if ( v20 > 0x20u )
    {
      if ( v20 == 7968 )
      {
        v16 = a1[14];
        if ( (int)v16 <= 0 )
          goto LABEL_35;
        v17 = a1[13];
        v18 = v17 + 8LL * (unsigned int)(v16 - 1) + 8;
        while ( *(_DWORD *)(*(_QWORD *)v17 + 192LL) != 1 )
        {
          v17 += 8;
          if ( v18 == v17 )
            goto LABEL_35;
        }
        if ( !*(_QWORD *)v17 )
        {
LABEL_35:
          exception = __cxa_allocate_exception(0x18u);
          sub_94DC0((__int64)exception, (__int64)"Missing .gnu_debugaltlink-provided file");
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'dwarf_file_t::failure_t,
            (void (*)(void *))sub_28140);
        }
        if ( !(unsigned int)sub_87DE0(v6, &v25, a1, a2, *a3) )
          return (v8 << 63) | v25;
        return 0x8000000000000000LL;
      }
      goto LABEL_9;
    }
    if ( v20 != 16 )
    {
      if ( (unsigned __int16)(v20 - 17) <= 4u )
      {
        if ( !(*(unsigned int (__fastcall **)(__int64, __int64 *, _BYTE *, __int64 *))(v6 + 224))(*a3, &v23, v21, &v22) )
        {
          v24 = 0;
          v25 = 0;
          v9 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *))(v6 + 80))(a2, &v24, &v25, &v22);
          result = 0x8000000000000000LL;
          if ( !v9 )
            return (v8 << 63) | (v24 + v23);
          return result;
        }
        return 0x8000000000000000LL;
      }
LABEL_9:
      if ( (debug & 0x400000) != 0 )
        sub_88B80((__int64)"Unknown reference form=%d\n", v20);
      return 0x8000000000000000LL;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(v6 + 232))(*a3, &v25, &v22);
    result = 0x8000000000000000LL;
    if ( !v14 )
    {
      v15 = a1[17];
      if ( (_BYTE)v8 )
        return (v25 - *(_QWORD *)(v15 + 152)) | 0x8000000000000000LL;
      else
        return v25 - *(_QWORD *)(v15 + 160);
    }
  }
  return result;
}
