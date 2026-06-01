__int64 __fastcall sub_699790(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  const char *v6; // rdx
  __int64 idati; // rax
  const char *v9; // rsi
  __int64 v10; // [rsp+0h] [rbp-70h] BYREF
  void *ptr; // [rsp+8h] [rbp-68h] BYREF
  __int128 v12; // [rsp+10h] [rbp-60h]
  _QWORD v13[2]; // [rsp+28h] [rbp-48h] BYREF
  __int16 v14; // [rsp+38h] [rbp-38h]
  unsigned __int64 v15; // [rsp+40h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v5 = a2;
  v12 = 0;
  ptr = nullptr;
  if ( (unsigned __int8)sub_6994A0(a1, (__int64)&ptr, a2, a4, a5) )
  {
    v6 = haystack;
    v10 = 0;
    if ( (_QWORD)v12 )
    {
      v6 = (const char *)ptr;
      if ( ptr )
        goto LABEL_4;
    }
    else if ( haystack )
    {
LABEL_4:
      idati = a1[1];
      v13[1] = v6;
      v14 = 256;
      if ( !idati )
        idati = get_idati(a1, &ptr);
      v13[0] = idati;
      if ( (unsigned __int8)create_tinfo(&v10, 61, 61, v13) && (v10 & 0x100) != 0 && get_tinfo_pdata(&ptr, v10, 2) )
      {
        v9 = haystack;
        if ( (_QWORD)v12 )
          v9 = (const char *)ptr;
        v5 = sub_698F20(a1, v9, 1, 0);
      }
    }
    clear_tinfo_t(&v10);
  }
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
  }
  return v5;
}

