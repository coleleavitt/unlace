void *__fastcall sub_5700D0(void *dest, unsigned int a2, const void *a3, unsigned int a4, __int64 *a5)
{
  unsigned int v7; // ebx
  __int64 v8; // rdi
  char v10; // bp
  __int64 tinfo_property; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v13[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v7 = a2;
  v8 = *a5;
  v14 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v8, 18);
  v10 = get_tinfo_property(tinfo_property, 2);
  clear_tinfo_t(&tinfo_property);
  if ( (v10 & 0xF) == 9
    && a2 != a4
    && (unsigned int)cpu2ieee(v13, a3, a4) == 1
    && (unsigned int)ieee2cpu(dest, v13, a2) == 1 )
  {
    return (void *)(v14 - __readfsqword(0x28u));
  }
  if ( (int)a2 > (int)a4 )
    v7 = a4;
  return memcpy(dest, a3, (int)v7);
}

