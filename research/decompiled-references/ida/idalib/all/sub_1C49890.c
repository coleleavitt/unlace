unsigned __int64 __fastcall sub_1C49890(__int64 a1, int *a2, __int64 *a3, double a4)
{
  unsigned __int64 v5; // r14
  __int64 v6; // r9
  int v8; // r15d
  const __m128i **v9; // r14
  const __m128i **v10; // r13
  unsigned __int64 v11; // rax
  void *v12; // [rsp+0h] [rbp-68h]
  __int64 v13; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v15; // [rsp+18h] [rbp-50h]
  _BYTE v16[72]; // [rsp+20h] [rbp-48h] BYREF

  v5 = (unsigned __int64)a3;
  v15 = 0x100000000LL;
  ptr = v16;
  sub_1C6B260(a1, a3, a2, &ptr);
  if ( (_DWORD)v15 )
  {
    v13 = (unsigned int)v15;
    v12 = ptr;
    v8 = *a2;
    v9 = (const __m128i **)((char *)ptr + 8 * (unsigned int)v15);
    v10 = (const __m128i **)ptr;
    while ( 1 )
    {
      while ( (*v10)[2].m128i_i16[2] != 50 )
      {
        if ( v9 == ++v10 )
          goto LABEL_10;
      }
      if ( !(unsigned __int8)sub_1C495B0(a1, a3, *v10, a4) )
        break;
      ++v10;
      sub_15F24C0(a1);
      if ( v9 == v10 )
      {
LABEL_10:
        v11 = sub_EEEE70(*(_QWORD **)(a1 + 248), v8, v12, v13, (__int64)a3, v6);
        goto LABEL_11;
      }
    }
    v11 = (unsigned __int64)a3;
LABEL_11:
    v5 = v11;
  }
  if ( ptr != v16 )
    free(ptr);
  return v5;
}
