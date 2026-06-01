__int64 __fastcall sub_5DEBC0(_QWORD *a1, __m128i a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned __int64 v8; // r13
  char *v9; // rsi
  _BYTE *v10; // rsi
  void *src; // [rsp+8h] [rbp-100h]
  __int64 v12; // [rsp+10h] [rbp-F8h] BYREF
  __int64 tinfo_property; // [rsp+18h] [rbp-F0h] BYREF
  void *ptr; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v15; // [rsp+28h] [rbp-E0h]
  __int128 v16; // [rsp+40h] [rbp-C8h] BYREF
  void *v17; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+58h] [rbp-B0h]
  void *v19; // [rsp+68h] [rbp-A0h]
  __int128 v20; // [rsp+70h] [rbp-98h]
  __int128 v21; // [rsp+80h] [rbp-88h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-68h]
  int v23; // [rsp+A8h] [rbp-60h]
  __int64 v24; // [rsp+B0h] [rbp-58h]
  char v25; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v26; // [rsp+C8h] [rbp-40h]

  v3 = a1[49];
  v26 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1[48] + 16 * v3 - 16);
  if ( v3 )
    a1[49] = v3 - 1;
  v5 = a1[14];
  v12 = 0;
  if ( (unsigned __int8)sub_5DD5D0((__int64)a1, (const char *)&v12, v5, 0, 0, a2, a3) )
  {
    if ( (get_tinfo_property(v12, 2) & 0xF) == 0xA )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property(v12, 9);
      if ( (get_tinfo_property(tinfo_property, 2) & 0x2F) == 0xD )
      {
        v8 = a1[6];
        v17 = nullptr;
        v19 = nullptr;
        v22 = 1;
        v23 = -1;
        v24 = 0;
        v25 = 0;
        v16 = 0;
        v18 = 0;
        v20 = 0;
        v21 = 0;
        if ( v8 > 1 )
        {
          src = (void *)a1[5];
          v17 = (void *)qvector_reserve(&v17, 0, v8, 1);
          *(_QWORD *)&v18 = v8;
          memmove(v17, src, v8 - 1);
          *((char *)v17 + v8 - 1) = 0;
        }
        if ( (unsigned int)find_tinfo_udt_member((int)&v16) == -1 || (v21 & 0xF) == 0xE )
        {
          ptr = nullptr;
          v15 = 0;
          if ( (tinfo_property & 0x100) != 0 )
            get_tinfo_pdata(&ptr, tinfo_property, 0);
          set_error_string();
          v9 = (char *)haystack;
          if ( (_QWORD)v15 )
            v9 = (char *)ptr;
          v10 = sub_5C5F70(a1[30], v9, 1);
          set_error_string();
          v6 = set_qerrno(1609, v10);
          if ( ptr )
          {
            *(_QWORD *)&v15 = 0;
            qfree(ptr);
          }
        }
        else
        {
          sub_5D10F0(a1, v4 + ((unsigned __int64)v16 >> 3));
          v6 = 0;
        }
        clear_tinfo_t(&v21);
        if ( v19 )
        {
          *(_QWORD *)&v20 = 0;
          qfree(v19);
        }
        if ( v17 )
        {
          *(_QWORD *)&v18 = 0;
          qfree(v17);
        }
      }
      else
      {
        v6 = set_qerrno(1608, 2);
      }
      clear_tinfo_t(&tinfo_property);
    }
    else
    {
      v6 = set_qerrno(1608, 2);
    }
  }
  else
  {
    v6 = -1;
  }
  clear_tinfo_t(&v12);
  return v6;
}

