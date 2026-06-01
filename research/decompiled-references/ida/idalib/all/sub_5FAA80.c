__int64 __fastcall sub_5FAA80(_QWORD *a1, __m128i a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned __int64 v8; // r13
  const char *v9; // rsi
  char *v10; // rsi
  _BYTE *v11; // rax
  void *src; // [rsp+8h] [rbp-110h]
  unsigned __int64 v13; // [rsp+10h] [rbp-108h] BYREF
  __int64 tinfo_property; // [rsp+18h] [rbp-100h] BYREF
  void *ptr; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v16; // [rsp+28h] [rbp-F0h]
  __int128 v17; // [rsp+40h] [rbp-D8h] BYREF
  void *v18; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v19; // [rsp+58h] [rbp-C0h]
  void *v20; // [rsp+68h] [rbp-B0h]
  __int128 v21; // [rsp+70h] [rbp-A8h]
  _OWORD v22[3]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-68h]
  int v24; // [rsp+B8h] [rbp-60h]
  __int64 v25; // [rsp+C0h] [rbp-58h]
  char v26; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v27; // [rsp+D8h] [rbp-40h]

  v3 = a1[50];
  v27 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1[49] + 16 * v3 - 16);
  if ( v3 )
    a1[50] = v3 - 1;
  v5 = a1[15];
  v13 = 0;
  if ( (unsigned __int8)sub_5F9490((__int64)a1, &v13, v5, 0, 0, a2, a3) )
  {
    if ( (get_tinfo_property(v13, 2) & 0xF) == 0xA )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property(v13, 9);
      if ( (get_tinfo_property(tinfo_property, 2) & 0x2F) == 0xD )
      {
        v8 = a1[6];
        v18 = nullptr;
        v20 = nullptr;
        v23 = 1;
        v24 = -1;
        v25 = 0;
        v26 = 0;
        v17 = 0;
        v19 = 0;
        v21 = 0;
        v22[0] = 0;
        if ( v8 > 1 )
        {
          src = (void *)a1[5];
          v18 = (void *)qvector_reserve(&v18, 0, v8, 1);
          *(_QWORD *)&v19 = v8;
          memmove(v18, src, v8 - 1);
          *((char *)v18 + v8 - 1) = 0;
        }
        if ( (unsigned int)find_tinfo_udt_member((int)&v17) == -1 || (v22[0] & 0xF) == 0xE )
        {
          ptr = nullptr;
          v16 = 0;
          if ( (tinfo_property & 0x100) != 0 )
            get_tinfo_pdata(&ptr, tinfo_property, 0);
          v9 = haystack;
          if ( a1[6] )
            v9 = (const char *)a1[5];
          set_error_string(0, v9);
          v10 = (char *)haystack;
          if ( (_QWORD)v16 )
            v10 = (char *)ptr;
          v11 = sub_5E1C70(a1[31], v10, 1);
          set_error_string(1, v11);
          v6 = set_qerrno(1609);
          if ( ptr )
          {
            *(_QWORD *)&v16 = 0;
            qfree(ptr);
          }
        }
        else
        {
          sub_5ECF10(a1, v4 + ((unsigned __int64)v17 >> 3));
          v6 = 0;
        }
        clear_tinfo_t(v22);
        if ( v20 )
        {
          *(_QWORD *)&v21 = 0;
          qfree(v20);
        }
        if ( v18 )
        {
          *(_QWORD *)&v19 = 0;
          qfree(v18);
        }
      }
      else
      {
        v6 = set_qerrno(1608);
      }
      clear_tinfo_t(&tinfo_property);
    }
    else
    {
      v6 = set_qerrno(1608);
    }
  }
  else
  {
    v6 = -1;
  }
  clear_tinfo_t(&v13);
  return v6;
}
